`include "ysyx_040510_para.v"
module ysyx_040510_SEXT(
	input [31:0]inst,
	input [2:0]optype,
	input [63:0]value,
	input [3:0]mem_ctrl,
	input [3:0]value_width_ctrl,
	input [63:0]read_mem_addr,
	input [63:0]read_mem_value,
	output [63:0]sext_read_mem_value,
	output [63:0]sext_value,
	output [63:0]imm
);

ysyx_040510_MuxKeyWithDefault #(5,3,64) sext_imm (imm,optype,64'hffff0000ffff0000,{
		`I_TYPE,{{52{inst[31]}},inst[31:20]},
		`U_TYPE,{{32{inst[31]}},inst[31:12],12'h000},
		`J_TYPE,{{44{inst[31]}},inst[19:12],inst[20],inst[30:25],inst[24:21],1'b0},
		`B_TYPE,{{52{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0},
		`S_TYPE,{{53{inst[31]}},inst[30:25],inst[11:7]}
	});

//Read value from memory
ysyx_040510_MuxKeyWithDefault #(7,4,64) sext_mem_read_value (sext_read_mem_value,mem_ctrl,read_mem_value,{
		`MEM_H,
		read_mem_addr[2:0] == 3'b000 ? {{48{read_mem_value[15]}},read_mem_value[15:0]}: 
		read_mem_addr[2:0] == 3'b010 ? {{48{read_mem_value[31]}},read_mem_value[31:16]}: 
		read_mem_addr[2:0] == 3'b100 ? {{48{read_mem_value[47]}},read_mem_value[47:32]}: 
		read_mem_addr[2:0] == 3'b110 ? {{48{read_mem_value[63]}},read_mem_value[63:48]}: 
		{{48{read_mem_value[15]}},read_mem_value[15:0]},
		`MEM_W,
		read_mem_addr[2] ? {{32{read_mem_value[63]}},read_mem_value[63:32]} : {{32{read_mem_value[31]}},read_mem_value[31:0]},
		`MEM_D,
		read_mem_value,
		`MEM_B,
		read_mem_addr[2:0] == 3'b000 ? {{56{read_mem_value[7]}},read_mem_value[7:0]} :
		read_mem_addr[2:0] == 3'b001 ? {{56{read_mem_value[15]}},read_mem_value[15:8]} :
		read_mem_addr[2:0] == 3'b010 ? {{56{read_mem_value[23]}},read_mem_value[23:16]} :
		read_mem_addr[2:0] == 3'b011 ? {{56{read_mem_value[31]}},read_mem_value[31:24]} :
		read_mem_addr[2:0] == 3'b100 ? {{56{read_mem_value[39]}},read_mem_value[39:32]} :
		read_mem_addr[2:0] == 3'b101 ? {{56{read_mem_value[47]}},read_mem_value[47:40]} :
		read_mem_addr[2:0] == 3'b110 ? {{56{read_mem_value[55]}},read_mem_value[55:48]} :
		read_mem_addr[2:0] == 3'b111 ? {{56{read_mem_value[63]}},read_mem_value[63:56]} :
		{{56{read_mem_value[7]}},read_mem_value[7:0]},
		`MEM_B_U,
		read_mem_addr[2:0] == 3'b000 ? {56'b0,read_mem_value[7:0]} :
		read_mem_addr[2:0] == 3'b001 ? {56'b0,read_mem_value[15:8]} :
		read_mem_addr[2:0] == 3'b010 ? {56'b0,read_mem_value[23:16]} :
		read_mem_addr[2:0] == 3'b011 ? {56'b0,read_mem_value[31:24]} :
		read_mem_addr[2:0] == 3'b100 ? {56'b0,read_mem_value[39:32]} :
		read_mem_addr[2:0] == 3'b101 ? {56'b0,read_mem_value[47:40]} :
		read_mem_addr[2:0] == 3'b110 ? {56'b0,read_mem_value[55:48]} :
		read_mem_addr[2:0] == 3'b111 ? {56'b0,read_mem_value[63:56]} :
		{56'b0,read_mem_value[7:0]},
		`MEM_W_U,
		read_mem_addr[2] ? {32'b0,read_mem_value[63:32]} : {32'b0,read_mem_value[31:0]},
		`MEM_H_U,
		read_mem_addr[2:0] == 3'b000 ? {48'b0,read_mem_value[15:0]}: 
		read_mem_addr[2:0] == 3'b010 ? {48'b0,read_mem_value[31:16]}: 
		read_mem_addr[2:0] == 3'b100 ? {48'b0,read_mem_value[47:32]}: 
		read_mem_addr[2:0] == 3'b110 ? {48'b0,read_mem_value[63:48]}: 
		{48'b0,read_mem_value[15:0]}
	});

ysyx_040510_MuxKeyWithDefault #(2,4,64) sext_value0 (sext_value,value_width_ctrl,value,{
		`VALUE_N,value,
		`VALUE_W,{{32{value[31]}},value[31:0]}
	});

endmodule

