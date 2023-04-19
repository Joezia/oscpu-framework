`include "ysyx_040510_para.v"
module ysyx_040510_MEM(
	input clk,
	input rst,
	input read_mem_en,
	input [63:0]addr,		//sext_value_mem 
	input [63:0]reg2,
	input write_mem_en,
	input [3:0]mem_ctrl,
	input Forward_store,
	input [63:0]reg_write_value_wb,

	output reg [63:0]mem_write_mask,
	output [63:0]read_mem_value,
	output [63:0]reg2_to_mem_forward,
	
	output			clint_wen_o,
	output			clint_ren_o,
	output [63:0]	clint_addr_o,
	output [63:0]	clint_data_o,
	input  [63:0]	clint_data_read_i,
	output			if_clint,

	output			mem_valid_o,
	output			mem_req_o,
	output [63:0]	mem_addr_o,
	input  [63:0]	mem_data_read_i,
	output [63:0]	mem_data_write_o,
	output reg [7:0] mem_write_mask_axi
);

//*************************************** Read
//*************************************** Write
wire [63:0]value_writen_to_mem = Forward_store ? reg_write_value_wb : reg2;
always@(posedge clk)begin
	if(!rst)begin
		mem_write_mask_axi	= 0;
		mem_write_mask		= 0;
	end
end
always @(*)begin
	case(mem_ctrl)
		`MEM_D:	begin
			mem_write_mask		=	64'hffffffff_ffffffff;
			mem_write_mask_axi	=	8'b1111_1111;
			reg2_to_mem_forward =	value_writen_to_mem;
		end
		`MEM_W:begin
			mem_write_mask		=	addr[2] ? 64'hffffffff_00000000 : 64'h00000000_ffffffff;
			mem_write_mask_axi	=	addr[2] ? 8'b1111_0000 : 8'b0000_1111;
			reg2_to_mem_forward =	addr[2] ? value_writen_to_mem << 32 : value_writen_to_mem; 
		end
		`MEM_H: begin
			mem_write_mask		=	addr[2:0] == 3'b000 ? 64'h00000000_0000ffff :
									addr[2:0] == 3'b010 ? 64'h00000000_ffff0000 :
									addr[2:0] == 3'b100 ? 64'h0000ffff_00000000 :
									addr[2:0] == 3'b110 ? 64'hffff0000_00000000 : 64'h00000000_0000ffff;
			mem_write_mask_axi	=	addr[2:0] == 3'b000 ? 8'b0000_0011 :
									addr[2:0] == 3'b010 ? 8'b0000_1100 :
									addr[2:0] == 3'b100 ? 8'b0011_0000 :
									addr[2:0] == 3'b110 ? 8'b1100_0000 : 8'b0000_0000;
			reg2_to_mem_forward =	addr[2:0] == 3'b000 ? value_writen_to_mem :
									addr[2:0] == 3'b010 ? value_writen_to_mem << 16 :
									addr[2:0] == 3'b100 ? value_writen_to_mem << 32 :
									addr[2:0] == 3'b110 ? value_writen_to_mem << 48 : value_writen_to_mem;
		end
		`MEM_B:	begin
			mem_write_mask		=	addr[2:0] == 3'b000 ? 64'h00000000_000000ff :
									addr[2:0] == 3'b001 ? 64'h00000000_0000ff00 :
									addr[2:0] == 3'b010 ? 64'h00000000_00ff0000 :
									addr[2:0] == 3'b011 ? 64'h00000000_ff000000 :
									addr[2:0] == 3'b100 ? 64'h000000ff_00000000 :
									addr[2:0] == 3'b101 ? 64'h0000ff00_00000000 :
									addr[2:0] == 3'b110 ? 64'h00ff0000_00000000 :
									addr[2:0] == 3'b111 ? 64'hff000000_00000000 : 64'h00000000_000000ff;
			mem_write_mask_axi	=	addr[2:0] == 3'b000 ? 8'b0000_0001:
									addr[2:0] == 3'b001 ? 8'b0000_0010:
									addr[2:0] == 3'b010 ? 8'b0000_0100:
									addr[2:0] == 3'b011 ? 8'b0000_1000 :
									addr[2:0] == 3'b100 ? 8'b0001_0000 :
									addr[2:0] == 3'b101 ? 8'b0010_0000:
									addr[2:0] == 3'b110 ? 8'b0100_0000 :
									addr[2:0] == 3'b111 ? 8'b1000_0000 : 8'b0000_0000;
			reg2_to_mem_forward =	addr[2:0] == 3'b000 ? value_writen_to_mem :
									addr[2:0] == 3'b001 ? value_writen_to_mem << 8 :
									addr[2:0] == 3'b010 ? value_writen_to_mem << 16 :
									addr[2:0] == 3'b011 ? value_writen_to_mem << 24 :
									addr[2:0] == 3'b100 ? value_writen_to_mem << 32 :
									addr[2:0] == 3'b101 ? value_writen_to_mem << 40 :
									addr[2:0] == 3'b110 ? value_writen_to_mem << 48 :
									addr[2:0] == 3'b111 ? value_writen_to_mem << 56 : value_writen_to_mem;
		end
		default: begin
			mem_write_mask		= 64'b0;
			mem_write_mask_axi	= 8'b0;
			reg2_to_mem_forward = value_writen_to_mem;
		end
	endcase
end

//*************************************** AXI
wire if_clint_addr = (addr[31:16] == 16'h0200);
assign if_clint	= if_clint_addr && (read_mem_en | write_mem_en);

assign mem_valid_o		= !if_clint_addr && (read_mem_en | write_mem_en);
assign mem_req_o		= write_mem_en ? `REQ_WRITE : `REQ_READ;
assign mem_addr_o		= (addr >> 3) << 3;
assign mem_data_write_o = reg2_to_mem_forward;

assign clint_wen_o	= if_clint_addr && write_mem_en;
assign clint_ren_o	= if_clint_addr && read_mem_en;
assign clint_addr_o = addr;
assign clint_data_o = value_writen_to_mem;

assign read_mem_value	= if_clint ? clint_data_read_i : mem_data_read_i;

endmodule
