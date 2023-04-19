module ysyx_040510_Hazard_detection(
	input clk,
	input rst,
	input [4:0]rs1_id,
	input [4:0]rs2_id,
	input [4:0]rd_ex,
	input read_mem_en_ex,
	input [31:0] inst_id,
	input [31:0] inst_ex,

	output reg pipeline_stall,
	output reg pc_wen
);

always@(*)begin    //for store inst
	if(!rst)begin
		pipeline_stall = 0;
		pc_wen		   = 1;
	end
	else begin
		if((inst_id != inst_ex) && (read_mem_en_ex==1) && ((rs1_id==rd_ex)||(rs2_id==rd_ex)))begin 
			pipeline_stall = 1;
			pc_wen = 0;
		end
		else begin
			pipeline_stall = 0;
			pc_wen = 1;
		end
	end
end

endmodule
