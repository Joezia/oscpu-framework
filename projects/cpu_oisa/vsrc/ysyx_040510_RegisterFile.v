`include "ysyx_040510_para.v"
module ysyx_040510_RegisterFile (
	input clk,
	input rst,
	//Read reg
	input reg1_ren,
	input reg2_ren,
	input csr_ren,
	input [4:0]reg1addr,
	input [4:0]reg2addr,
	input [11:0]csraddr,
	//Write reg
	input [63:0] wdata,
	input [63:0] wdata_mem,
	input [4:0] waddr,
	input [4:0] waddr_mem,
	input read_mem_en,
	input read_mem_en_mem,
	input [63:0]sext_read_mem_value,
	input [63:0]sext_read_mem_value_mem,
	input wen,
	input wen_mem,
	input pc_wen,
	input [11:0]csr_wb,
	input csr_wen_wb,
	input [63:0]csr_value_writeback_wb,
	input environment_call_wb,
	input m_mode_return_wb,
	input mtime_ge_mtimecmp_i,
	input axi_stall_i,
	// NPC
	input [63:0] npc,
	input [63:0] pc_wb,
	input [63:0] pc_mem,
	input [31:0] inst_wb,

	input cmov_wen_wb,

	output [63:0] reg_write_value_wb,
	output [63:0] reg1,
	output [63:0] reg2,
//	output [63:0] reg10,
	output [63:0] csr_value,
	output reg [63:0] pc,
	output [63:0] mstatus_3,
	output [63:0] mepc_3,
	output [63:0] mtvec_3,
	output [63:0] mcause_3,
	output [63:0] mie_3,
	output [63:0] mip_3,
	output [63:0] mscratch_3,
	output		m_time_interrupt_trigger,
	output reg	m_time_interrupt_o,

	output [63:0]regs_gpr[31:0]
);
// **********************general register
	reg [63:0] rf [32];

	reg [63:0] rf_tmp [32];
// **********************csr
	reg [63:0] mstatus;
	reg [63:0] mepc;
	reg	[63:0] mtvec;
	reg [63:0] mcause;
	reg [63:0] mie;
	reg [63:0] mip;
	reg [63:0] mscratch;

	reg [63:0] mstatus_reg;
	reg [63:0] mepc_reg;
	reg [63:0] mtvec_reg;
	reg [63:0] mcause_reg;
	reg [63:0] mie_reg;
	reg [63:0] mip_reg;
	reg [63:0] mscratch_reg;

	reg [63:0] mstatus_latch;
	reg [63:0] mepc_latch;
	reg [63:0] mtvec_latch;
	reg [63:0] mcause_latch;
	reg [63:0] mie_latch;
	reg [63:0] mip_latch;
	reg [63:0] mscratch_latch;


	reg [63:0] mepc_timeint_reg;
	reg [63:0] mcause_timeint_reg;
	reg [63:0] pc_wb_reg;
	reg [31:0] inst_wb_reg;

//	assign reg10		= rf[10];
	assign regs_gpr[0]	= rf[0];
	assign regs_gpr[1]	= rf[1];
	assign regs_gpr[2]	= rf[2];
	assign regs_gpr[3]	= rf[3];
	assign regs_gpr[4]	= rf[4];
	assign regs_gpr[5]	= rf[5];
	assign regs_gpr[6]	= rf[6];
	assign regs_gpr[7]	= rf[7];
	assign regs_gpr[8]	= rf[8];
	assign regs_gpr[9]	= rf[9];
	assign regs_gpr[10]	= rf[10];
	assign regs_gpr[11]	= rf[11];
	assign regs_gpr[12]	= rf[12];
	assign regs_gpr[13]	= rf[13];
	assign regs_gpr[14]	= rf[14];
	assign regs_gpr[15]	= rf[15];
	assign regs_gpr[16]	= rf[16];
	assign regs_gpr[17]	= rf[17];
	assign regs_gpr[18]	= rf[18];
	assign regs_gpr[19]	= rf[19];
	assign regs_gpr[20]	= rf[20];
	assign regs_gpr[21]	= rf[21];
	assign regs_gpr[22]	= rf[22];
	assign regs_gpr[23]	= rf[23];
	assign regs_gpr[24]	= rf[24];
	assign regs_gpr[25]	= rf[25];
	assign regs_gpr[26]	= rf[26];
	assign regs_gpr[27]	= rf[27];
	assign regs_gpr[28]	= rf[28];
	assign regs_gpr[29]	= rf[29];
	assign regs_gpr[30]	= rf[30];
	assign regs_gpr[31]	= rf[31];
	
	assign mstatus_3	= mstatus;
	assign mepc_3		= mepc;
	assign mtvec_3		= mtvec;
	assign mcause_3		= mcause;
	assign mie_3		= mie;
	assign mip_3		= mip;
	assign mscratch_3	= mscratch;

	assign m_time_interrupt_trigger = mtime_ge_mtimecmp_i && mstatus_reg[3]==1 && mie_reg[7]==1;
	always@(posedge clk)begin
		if(!rst)begin
			m_time_interrupt_o			<= 0;
		end
		else begin
			if(m_time_interrupt_trigger)					m_time_interrupt_o	<= 1'b1; 
			if(m_mode_return_wb && !axi_stall_i)			m_time_interrupt_o	<= 1'b0;
		end
	end
//
	//Write
	always @(posedge clk) begin
		if(!rst)begin
			pc					<= 64'h0000000080000000 - 64'h4;
			
			{rf_tmp[0],rf_tmp[1],rf_tmp[2],rf_tmp[3],rf_tmp[4],rf_tmp[5],rf_tmp[6],rf_tmp[7],rf_tmp[8],rf_tmp[9],rf_tmp[10],rf_tmp[11],rf_tmp[12],rf_tmp[13],rf_tmp[14],rf_tmp[15],rf_tmp[16],rf_tmp[17],rf_tmp[18],rf_tmp[19],rf_tmp[20],rf_tmp[21],rf_tmp[22],rf_tmp[23],rf_tmp[24],rf_tmp[25],rf_tmp[26],rf_tmp[27],rf_tmp[28],rf_tmp[29],rf_tmp[30],rf_tmp[31]}   <= 2048'b0;

			mstatus_reg			<= 0;
			mepc_reg			<= 0;
			mtvec_reg			<= 0;
			mcause_reg			<= 0;
			mie_reg				<= 0;
			mip_reg				<= 0;
			mscratch_reg		<= 0;

			mstatus_latch		<= 0;
			mepc_latch			<= 0;
			mtvec_latch			<= 0;
			mcause_latch		<= 0;
			mie_latch			<= 0;
			mip_latch			<= 0;
			mscratch_latch		<= 0;

			mepc_timeint_reg	<= 0;
			mcause_timeint_reg	<= 0;
			pc_wb_reg			<= 0;
			inst_wb_reg			<= 0;
		end
		else begin
		  if(!axi_stall_i)begin
			if(pc_wen || m_time_interrupt_trigger)		pc	<= npc;
									
			if(!(m_time_interrupt_o||m_time_interrupt_trigger))	mcause_timeint_reg	<= mcause;
			if(!(m_time_interrupt_o||m_time_interrupt_trigger))	mepc_timeint_reg	<= mepc;
				pc_wb_reg			<= pc_wb;
				inst_wb_reg			<= inst_wb;

				mstatus_reg			<= mstatus;
				mepc_reg			<= mepc;
				mtvec_reg			<= mtvec;
				mcause_reg			<= mcause;
				mie_reg				<= mie;
				mip_reg				<= mip;
				mscratch_reg		<= mscratch;
		  end
			// **** NO condition, only for recording csrs' value 
				mstatus_latch		<= mstatus;
				mepc_latch			<= mepc;
				mtvec_latch			<= mtvec;
				mcause_latch		<= mcause;
				mie_latch			<= mie;
				mip_latch			<= mip;
				mscratch_latch		<= mscratch;

				rf_tmp[0]	<= rf[0];	rf_tmp[1]	<= rf[1];	rf_tmp[2]	<= rf[2];	rf_tmp[3]	<= rf[3];
	 			rf_tmp[4]	<= rf[4];	rf_tmp[5]	<= rf[5];	rf_tmp[6]	<= rf[6];	rf_tmp[7]	<= rf[7];
	 			rf_tmp[8]	<= rf[8];	rf_tmp[9]	<= rf[9];	rf_tmp[10]	<= rf[10];	rf_tmp[11]	<= rf[11];
	 			rf_tmp[12]	<= rf[12];	rf_tmp[13]	<= rf[13];	rf_tmp[14]	<= rf[14];	rf_tmp[15]	<= rf[15];
	 			rf_tmp[16]	<= rf[16];	rf_tmp[17]	<= rf[17];	rf_tmp[18]	<= rf[18];	rf_tmp[19]	<= rf[19];
	 			rf_tmp[20]	<= rf[20];	rf_tmp[21]	<= rf[21];	rf_tmp[22]	<= rf[22];	rf_tmp[23]	<= rf[23];
	 			rf_tmp[24]	<= rf[24];	rf_tmp[25]	<= rf[25];	rf_tmp[26]	<= rf[26];	rf_tmp[27]	<= rf[27];
	 			rf_tmp[28]	<= rf[28];	rf_tmp[29]	<= rf[29];	rf_tmp[30]	<= rf[30];	rf_tmp[31]	<= rf[31];
		end
	end
	
	assign reg_write_value_wb = read_mem_en ? sext_read_mem_value : wdata;

	always @(*)begin
		if(!rst) begin
			rf[0]=64'b0;rf[1]=64'b0;rf[2]=64'b0;rf[3]=64'b0;rf[4]=64'b0;rf[5]=64'b0;rf[6]=64'b0;rf[7]=64'b0;rf[8]=64'b0;rf[9]=64'b0;rf[10]=64'b0;rf[11]=64'b0;rf[12]=64'b0;rf[13]=64'b0;rf[14]=64'b0;rf[15]=64'b0;rf[16]=64'b0;rf[17]=64'b0;rf[18]=64'b0;rf[19]=64'b0;rf[20]=64'b0;rf[21]=64'b0;rf[22]=64'b0;rf[23]=64'b0;rf[24]=64'b0;rf[25]=64'b0;rf[26]=64'b0;rf[27]=64'b0;rf[28]=64'b0;rf[29]=64'b0;rf[30]=64'b0;rf[31]=64'b0;

			mstatus				= 0;
			mepc				= 0;
			mtvec				= 0;
			mcause				= 0;
			mie					= 0;
			mip					= 0;
			mscratch			= 0;

		end
		else begin
			if((wen | cmov_wen_wb) && !m_time_interrupt_trigger && !axi_stall_i)begin
				rf[0]	=	0;
				rf[1]	=	(waddr == 1 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[1];
				rf[2]	=	(waddr == 2 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[2];
				rf[3]	=	(waddr == 3 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[3];
				rf[4]	=	(waddr == 4 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[4];
				rf[5]	=	(waddr == 5 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[5];
				rf[6]	=	(waddr == 6 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[6];
				rf[7]	=	(waddr == 7 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[7];
				rf[8]	=	(waddr == 8 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[8];
				rf[9]	=	(waddr == 9 ) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[9];
				rf[10]	=	(waddr == 10) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[10];
				rf[11]	=	(waddr == 11) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[11];
				rf[12]	=	(waddr == 12) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[12];
				rf[13]	=	(waddr == 13) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[13];
				rf[14]	=	(waddr == 14) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[14];
				rf[15]	=	(waddr == 15) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[15];
				rf[16]	=	(waddr == 16) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[16];
				rf[17]	=	(waddr == 17) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[17];
				rf[18]	=	(waddr == 18) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[18];
				rf[19]	=	(waddr == 19) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[19];
				rf[20]	=	(waddr == 20) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[20];
				rf[21]	=	(waddr == 21) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[21];
				rf[22]	=	(waddr == 22) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[22];
				rf[23]	=	(waddr == 23) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[23];
				rf[24]	=	(waddr == 24) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[24];
				rf[25]	=	(waddr == 25) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[25];
				rf[26]	=	(waddr == 26) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[26];
				rf[27]	=	(waddr == 27) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[27];
				rf[28]	=	(waddr == 28) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[28];
				rf[29]	=	(waddr == 29) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[29];
				rf[30]	=	(waddr == 30) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[30];
				rf[31]	=	(waddr == 31) ? (read_mem_en ? sext_read_mem_value : wdata) : rf_tmp[31];
			end
			else begin
				//if(waddr != 0)	rf[waddr]	= rf_tmp[waddr];
				//else			rf[0]		= rf_tmp[0];
				//rf[waddr]	= rf[waddr];
				rf[0]	=	0;
				rf[1]	=	rf_tmp[1];
				rf[2]	=	rf_tmp[2];
				rf[3]	=	rf_tmp[3];
				rf[4]	=	rf_tmp[4];
				rf[5]	=	rf_tmp[5];
				rf[6]	=	rf_tmp[6];
				rf[7]	=	rf_tmp[7];
				rf[8]	=	rf_tmp[8];
				rf[9]	=	rf_tmp[9];
				rf[10]	=	rf_tmp[10];
				rf[11]	=	rf_tmp[11];
				rf[12]	=	rf_tmp[12];
				rf[13]	=	rf_tmp[13];
				rf[14]	=	rf_tmp[14];
				rf[15]	=	rf_tmp[15];
				rf[16]	=	rf_tmp[16];
				rf[17]	=	rf_tmp[17];
				rf[18]	=	rf_tmp[18];
				rf[19]	=	rf_tmp[19];
				rf[20]	=	rf_tmp[20];
				rf[21]	=	rf_tmp[21];
				rf[22]	=	rf_tmp[22];
				rf[23]	=	rf_tmp[23];
				rf[24]	=	rf_tmp[24];
				rf[25]	=	rf_tmp[25];
				rf[26]	=	rf_tmp[26];
				rf[27]	=	rf_tmp[27];
				rf[28]	=	rf_tmp[28];
				rf[29]	=	rf_tmp[29];
				rf[30]	=	rf_tmp[30];
				rf[31]	=	rf_tmp[31];
			end
		end

		if(m_time_interrupt_trigger)			mstatus = {mstatus_reg[63:13],2'b11,mstatus_reg[10:8],mstatus_reg[3],mstatus_reg[6:4],1'b0,mstatus_reg[2:0]};
		else if(csr_wen_wb && (csr_wb == `MSTATUS))	mstatus = csr_value_writeback_wb;	
		else if(environment_call_wb)			mstatus = {mstatus_reg[63:13],2'b11,mstatus_reg[10:8],mstatus_reg[3],mstatus_reg[6:4],1'b0,mstatus_reg[2:0]};
		else if(m_mode_return_wb)				mstatus = {mstatus_reg[63:13],2'b00,mstatus_reg[10:8],1'b1,mstatus_reg[6:4],mstatus_reg[7],mstatus_reg[2:0]};
		else									mstatus = mstatus_latch;

		if(csr_wen_wb && (csr_wb == `MTVEC) && !m_time_interrupt_trigger)	mtvec	= csr_value_writeback_wb;		
		else																mtvec = mtvec_latch;

		if(m_time_interrupt_trigger)					mepc	= (inst_wb==32'b0) ? pc_mem : pc_wb;		
		else if(csr_wen_wb && (csr_wb == `MEPC))		mepc	= csr_value_writeback_wb;
		else if(environment_call_wb)					mepc	= pc_wb;
		else if(m_time_interrupt_o && m_mode_return_wb)	mepc	= mepc_timeint_reg;
		else											mepc	= mepc_latch;

		if(m_time_interrupt_trigger)					mcause	= 64'h80000000_00000007;
		else if(csr_wen_wb && (csr_wb == `MCAUSE))		mcause	= csr_value_writeback_wb;
		else if(environment_call_wb)					mcause	= 64'hb;
		else if(m_time_interrupt_o && m_mode_return_wb)	mcause	= mcause_timeint_reg;
		else											mcause	= mcause_latch;

		if(csr_wen_wb && (csr_wb == `MIE) && !m_time_interrupt_trigger)		mie	= csr_value_writeback_wb;		
		else																mie	= mie_latch;
	
		if(csr_wen_wb && (csr_wb == `MIP) && !m_time_interrupt_trigger)		mip	= csr_value_writeback_wb;		
		else																mip	= mip_latch;

		if(csr_wen_wb && (csr_wb == `MSCRATCH) && !m_time_interrupt_trigger)	mscratch = csr_value_writeback_wb;		
		else																	mscratch = mscratch_latch;
	end

	//Read
	assign reg1 = reg1_ren ? (reg1addr == 0 ? 0 : rf[reg1addr]) : 64'b0;
	assign reg2 = reg2_ren ? (reg2addr == 0 ? 0 : rf[reg2addr]) : 64'b0;
	assign csr_value =	(csr_ren && (csraddr ==	`MSTATUS))	? mstatus	:
						(csr_ren && (csraddr == `MTVEC))	? mtvec		:
						(csr_ren && (csraddr == `MEPC))		? mepc		:
						(csr_ren && (csraddr == `MCAUSE))	? mcause	:
						64'b0;
endmodule
