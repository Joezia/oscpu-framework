module ysyx_040510_divider(
    input			clk,
    input			rst,
	input			device_stall,

    input           div_ready,
	input			div_s_or_u,
    input	[63:0]	dividend,
    input	[63:0]  divisor,

    output  [63:0]  quotient,
	output	[63:0]	remainder,
    output          div_valid
);

//******************************div state machine*********************
reg [1:0]	div_state;
reg [6:0]	div_cnt;
reg [127:0]	dividend_abs;
reg [64:0]	divisor_abs;
reg [63:0]	quotient_abs;
reg			quotient_sign;
reg			remainder_sign;
wire [64:0]	diff_temp = (dividend_abs[127:63] - divisor_abs);
wire		diff_neg  = (dividend_abs[127:63] < divisor_abs);
parameter	[1:0]	DIV_IDLE			=	2'b00,
					DIV_CALCULATING		=	2'b01,
					DIV_FINISH			=	2'b10;
always @(posedge clk)begin
  if(!device_stall)begin
	if(!rst)begin
		div_state		<= DIV_IDLE;
		div_cnt			<= 0;
		dividend_abs	<= 0;
		divisor_abs		<= 0;
		quotient_abs	<= 0;
		quotient_sign	<= 0;
		remainder_sign	<= 0;
	end
	else begin
		case(div_state)
			DIV_IDLE:	if(div_ready)begin
				div_state		<=	DIV_CALCULATING;
				div_cnt			<=	0;
				dividend_abs	<=	(div_s_or_u & dividend[63]) ? {64'b0,{~dividend + 64'b1}} : {64'b0,dividend};
				divisor_abs		<=	(div_s_or_u & divisor[63]) ? {1'b0,{~divisor + 64'b1}} : {1'b0,divisor};
				quotient_abs	<=	0;
				quotient_sign	<=	~div_s_or_u ? 0 :
									(dividend[63] & divisor[63]) ? 0 :
									(dividend[63] | divisor[63]) ? 1 :
									0;
				remainder_sign	<=	(div_s_or_u & dividend[63]) ? 1'b1 : 0;
			end
			else begin
				div_state		<= DIV_IDLE;
				div_cnt			<= 0;
				dividend_abs	<= 0;
				divisor_abs		<= 0;
				quotient_abs	<= 0;
				quotient_sign	<= 0;
				remainder_sign	<= 0;
			end
			DIV_CALCULATING:begin
				if(div_cnt == 7'd63)begin
					div_state		<= DIV_FINISH;
					dividend_abs	<= diff_neg ? dividend_abs<<1 : {diff_temp,dividend_abs[62:0]}<<1;
					quotient_abs	<= {quotient_abs[62:0],~diff_neg}; 

					div_cnt			<= div_cnt + 7'b1;
				end
				else begin
					dividend_abs	<= diff_neg ? dividend_abs<<1 : {diff_temp,dividend_abs[62:0]}<<1;
					quotient_abs	<= {quotient_abs[62:0],~diff_neg}; 
					div_cnt			<= div_cnt + 7'b1;
				end
			end
			DIV_FINISH:	div_state	<= DIV_IDLE;
			default:	div_state	<= DIV_IDLE;
		endcase
	end
  end
end

assign quotient	 = quotient_sign ? ~quotient_abs + 64'b1: quotient_abs; 
assign div_valid = div_state == DIV_FINISH;

wire [63:0]value_sign = $signed(dividend)/$signed(divisor);
wire [63:0]value_unsign = dividend/divisor;
wire correct = ((div_s_or_u) ? value_sign : value_unsign) == quotient;
endmodule

