module ysyx_040510_multiplier (
    input				clk, 
    input				rst,
	input				device_stall,
    input				mul_ready,
	input				mul_s_or_u,
    input    [63:0]		a,
    input    [63:0]		b,

    output   [63:0]		mul_value,
    output				mul_valid
);

//****************************state machine
reg     mul_calculating ;
always @(posedge clk) begin
	if(!rst)begin
		mul_calculating <= 0;
	end
	else begin
		if(!device_stall)begin
			if(mul_ready==0 | mul_valid)	mul_calculating <= 0;
			else							mul_calculating <= 1'b1;
		end
	end
end
//***************************calculating
wire [127:0]	mul_result_partial = multipler[0] ? multiplcand : 128'b0;
reg  [127:0]	mul_result;
reg	 [6:0]		mul_result_cnt;
always @(posedge clk) begin
	if(!rst)begin
		mul_result <= 0;
		mul_result <= 0;
	end
	else begin
		if(!device_stall)begin
			if(mul_calculating && (mul_result_cnt == 7'd63))begin
				mul_result			<= mul_s_or_u ? (mul_result - mul_result_partial) : mul_result + mul_result_partial;
				mul_result_cnt		<= mul_result_cnt + 7'd1;
			end
			else if(mul_calculating)begin
				mul_result			<= mul_result + mul_result_partial;
				mul_result_cnt		<= mul_result_cnt + 7'h1;
			end
			else if(mul_ready)begin
				mul_result			<= 0;
				mul_result_cnt		<= 0;
			end
		end
	end
end

reg  [127:0]	multiplcand;
reg  [63:0]		multipler;
always @(posedge clk)begin
	if(!rst)begin
        multiplcand <= 0;
		multipler	<= 0;
	end
	else begin
		if(!device_stall) begin
			if(mul_calculating)begin
				multiplcand <= multiplcand << 1;
				multipler	<= multipler   >> 1;
			end
			else if(mul_ready)begin
				multiplcand <= {64'b0,a}; 
				multipler	<= b;
			end
		end
	end
end

assign mul_valid = mul_calculating & ~(|multipler);
assign mul_value = mul_result[63:0];

endmodule
