`include "ysyx_040510_para.v"
//combinatorial logic
module ysyx_040510_NPC(
	input [63:0]reg1,
	input [63:0]reg2,
	input [63:0]mtvec_value,
	input [63:0]mepc_value,
	input [63:0]pc_id,
	input [63:0]pc_if,
	input [63:0]imm,
	input npc_op,
	input npc_regimm,		//distinguish jal and jalr
	
	input [1:0]Forward_c,
	input [1:0]Forward_d,
	input [63:0]sext_value_ex,
	input [63:0]reg_write_value_mem,
	input [63:0]reg_write_value_wb,
	input [2:0]branch_type,
	input environment_call_id,
	input m_mode_return_id,
	input m_time_interrupt_trigger,
	input pipeline_stall,

	output IF_Flush,
	output [63:0]npc
);


wire [63:0]operation_a_forward;
wire [63:0]operation_b_forward;
ysyx_040510_MuxKeyWithDefault #(4,2,64) forward_c_mux (operation_a_forward,Forward_c,reg1,{
		2'b00,reg1,
		2'b10,reg_write_value_mem,
		2'b01,reg_write_value_wb,
		2'b11,sext_value_ex
	});
ysyx_040510_MuxKeyWithDefault #(4,2,64) forward_d_mux (operation_b_forward,Forward_d,reg2,{
		2'b00,reg2,
		2'b10,reg_write_value_mem,
		2'b01,reg_write_value_wb,
		2'b11,sext_value_ex
	});


wire branch_en;
ysyx_040510_MuxKeyWithDefault #(6,3,1) branch_test (branch_en,branch_type,0,{
		`BRANCH_E,~(|(operation_a_forward^operation_b_forward)) ? 1'b1 : 1'b0,
		`BRANCH_NE,(|(operation_a_forward^operation_b_forward)) ? 1'b1 : 1'b0,
		`BRANCH_GE_S,$signed(operation_a_forward)<$signed(operation_b_forward) ? 1'b0 : 1'b1,
		`BRANCH_GE_U,(operation_a_forward)<(operation_b_forward) ? 1'b0 : 1'b1,
		`BRANCH_L_S,$signed(operation_a_forward)<$signed(operation_b_forward) ? 1'b1 : 1'b0,
		`BRANCH_L_U, operation_a_forward<operation_b_forward ? 1'b1 :1'b0
	});

assign IF_Flush = (pipeline_stall) ? 0 :((branch_en||npc_op||environment_call_id||m_mode_return_id||m_time_interrupt_trigger) ? 1 : 0);


wire [63:0]pc_branch_addr = pc_id + imm;
assign npc =	m_mode_return_id								? mepc_value :
				(environment_call_id|m_time_interrupt_trigger)	? mtvec_value : 
				branch_en										? pc_branch_addr :
				(npc_op	? (npc_regimm? (operation_a_forward+imm)&(~1) : pc_branch_addr) : pc_if + 4);

endmodule
