module ysyx_040510_Forwarding(
	input		clk,
	input		rst,

	input [4:0]rs1_id,
	input [4:0]rs1_ex,
	input [4:0]rs2_id,
	input [4:0]rs2_ex,
	input [4:0]rd_ex,
	input [4:0]rd_mem,
	input [4:0]rd_wb,
	input [4:0]rs2_mem,
	input write_mem_en_mem,
	input read_mem_en_wb,

	input wen_ex,
	input wen_mem,
	input wen_wb,

	output reg[1:0]Forward_a,
	output reg[1:0]Forward_b,
	output reg[1:0]Forward_c,
	output reg[1:0]Forward_d,
	output reg Forward_store
);


always@(*)begin
	if(!rst)begin
		Forward_a		= 0;
		Forward_b		= 0;
		Forward_c		= 0;
		Forward_d		= 0;
		Forward_store	= 0;
	end
	else begin
		//Forward EX 1st operation 
		if((wen_mem == 1) && (rd_mem != 0) && (rs1_ex == rd_mem))begin 
			Forward_a = 2'b10;			//MEM hazard 
		end
		else if((wen_wb == 1) && (rd_wb != 0) && (rs1_ex == rd_wb) && 
			!((wen_mem == 1) && (rd_mem != 0)&&(rs1_ex==rd_mem)))begin
			Forward_a = 2'b01;			//WB hazard
		end
		else Forward_a = 2'b00;
	
	
		//Forward EX 2nd operation
		if((wen_mem == 1) && (rd_mem != 0) && (rs2_ex == rd_mem)) begin 
			Forward_b = 2'b10; 
		end
		else if((wen_wb == 1) && (rd_wb != 0) && (rs2_ex == rd_wb)
				&& !((wen_mem==1)&&(rd_mem!=0)&&(rs2_ex==rd_mem)))begin
			Forward_b = 2'b01;
		end
		else Forward_b = 2'b00;
	
	
		//Forward MEM store hazard,
		if((read_mem_en_wb)&&(write_mem_en_mem==1)&&(rs2_mem==rd_wb)&&(rd_wb!=0))begin
			Forward_store = 1;
		end
		else begin
			Forward_store = 0;
		end
	
	
		//Forward NPC 1st operation
		if((wen_ex==1) && (rd_ex!=0) && (rs1_id==rd_ex))begin
			Forward_c = 2'b11;
		end
		else if((wen_mem == 1) && (rd_mem != 0) && (rs1_id == rd_mem))begin 
			Forward_c = 2'b10;			//MEM hazard 
		end
		else if((wen_wb == 1) && (rd_wb != 0) && (rs1_id == rd_wb) && 
			!((wen_mem == 1) && (rd_mem != 0)&&(rs1_id==rd_mem)))begin
			Forward_c = 2'b01;			//WB hazard
		end
		else Forward_c = 2'b00;
	
	
		//Forward NPC 2st operation
		if((wen_ex==1) && (rd_ex!=0) && (rs2_id==rd_ex))begin
			Forward_d = 2'b11;
		end
		else if((wen_mem == 1) && (rd_mem != 0) && (rs2_id == rd_mem))begin 
			Forward_d = 2'b10;			//MEM hazard 
		end
		else if((wen_wb == 1) && (rd_wb != 0) && (rs2_id == rd_wb) && 
			!((wen_mem == 1) && (rd_mem != 0)&&(rs2_id==rd_mem)))begin
			Forward_d = 2'b01;			//WB hazard
		end
		else Forward_d = 2'b00;
	end
end

endmodule
