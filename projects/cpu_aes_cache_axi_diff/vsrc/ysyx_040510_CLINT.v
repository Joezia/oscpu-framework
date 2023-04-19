module ysyx_040510_CLINT(
	input				clk,
	input				rst,

	input				clint_wen_i,
	input				clint_ren_i,
	input    	[63:0]	clint_addr_i,
	input		[63:0]	clint_data_i,

	output	reg	[63:0]	clint_data_read_o,
	output				mtime_ge_mtimecmp_o
);

reg [63:0] mtime;
reg [63:0] mtimecmp;

always@(posedge clk)begin
	if(!rst)begin
		mtime <= 0;
		mtimecmp <= 64'd1000000;
		clint_data_read_o <= 0;
	end
	else begin
		if(clint_wen_i && (clint_addr_i[15:0]==16'h4000))	mtimecmp<= clint_data_i;

		if(clint_wen_i && (clint_addr_i[15:0]==16'hbff8))	mtime	<= clint_data_i;
		else												mtime	<= mtime + 64'h1;	

		if(clint_ren_i && (clint_addr_i[15:0]==16'h4000))	clint_data_read_o <= mtimecmp;

		if(clint_ren_i && (clint_addr_i[15:0]==16'hbff8))	clint_data_read_o <= mtime;
	end
end

assign mtime_ge_mtimecmp_o = !(mtime < mtimecmp);
endmodule
