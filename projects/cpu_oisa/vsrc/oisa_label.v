`include "ysyx_040510_para.v"
module oisa_label(
	input			clk,
	input			rst,

	input			lb_rd_value_i,
	input			lb_wen_i,
	input [4:0]		lb_rs1_i,
	input [4:0]		lb_rs2_i,
	input [4:0]		lb_rd_i,

	input	[3:0]	lb_isa_type,

	output			lb_rs1_value_o,
	output			lb_rs2_value_o,
	output			lb_rd_value_o,

	output			lb_violation_o
);

reg	[31:0]		lb;

assign	lb_rs1_value_o = lb[lb_rs1_i];
assign	lb_rs2_value_o = lb[lb_rs2_i];
assign	lb_rd_value_o  = lb[lb_rd_i];

always @(posedge clk)begin
	if(!rst)			lb			<= 0;
	else begin
		if(lb_wen_i)	lb[lb_rd_i]	<= lb_rd_value_i;
	end
end

assign lb_violation_o =	((lb_isa_type == `OISA_BRANCH) & (lb[lb_rs1_i] | lb[lb_rs2_i])) |
						((lb_isa_type == `OISA_JALR  ) & (lb[lb_rs1_i]			   )) ;

endmodule
