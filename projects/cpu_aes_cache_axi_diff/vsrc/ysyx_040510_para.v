//TYPE
`define R_TYPE 3'b000
`define I_TYPE 3'b001
`define S_TYPE 3'b010
`define B_TYPE 3'b011
`define U_TYPE 3'b100
`define J_TYPE 3'b101
`define N_TYPE 3'b110

// ALU OP
`define	ADD	5'b00000
`define SUB 5'b00001
`define	SHIFT_R_S_I 5'b00010
`define SHIFT_R_S_R 5'b00011
`define AND 5'b00100
`define SHIFT_L_R 5'b00101
`define XOR 5'b00110
`define OR 5'b00111
`define SHIFT_L_I 5'b01000
`define SHIFT_R_I 5'b01001
`define MUL 5'b01010
`define DIV_U 5'b01011
`define DIV_S 5'b01100
`define REM_U 5'b01101
`define REM_S 5'b01110
`define CMP_L_S 5'b01111
`define SHIFT_R_R	5'b10000
`define CMP_L_U		5'b10001
`define	CSRR		5'b10010
`define AES			5'b10011

//CSR ALU OP
`define CSR_OR		3'b001
`define CSR_NOTHING	3'b010
`define CSR_AND_NOT 3'b011

//BRANCH TYPE
`define BRANCH_E 3'b001
`define BRANCH_NE 3'b010
`define BRANCH_GE_S 3'b011
`define BRANCH_L_S 3'b100
`define BRANCH_L_U 3'B101
`define BRANCH_GE_U 3'b110

//MEM CTRL
`define MEM_N 4'b0000
`define MEM_B 4'b0001
`define MEM_H 4'b0010
`define MEM_W 4'b0100
`define MEM_D 4'b1000
`define MEM_B_U 4'b0101
`define MEM_CMPU 4'b0011   //unsigned compare
`define MEM_CMPS 4'b0110	//signed compare
`define MEM_H_U 4'b0111
`define MEM_W_U 4'b1001

//Value width control
`define VALUE_N 4'b0000
`define VALUE_W 4'b0100
`define VALUE_CMPU 4'b0011	//usigned compare
`define VALUE_CMPS 4'b0110	//signed compare

//General
`define NR_INST 7'd1 //number of insts
`define NR_OPCODE 7'd1	//

//CSR
`define	MSTATUS		12'h300
`define MTVEC		12'h305
`define MEPC		12'h341
`define MCAUSE		12'h342
`define MIE			12'h304
`define MIP			12'h344
`define MSCRATCH	12'h340

`define ZERO_WORD  64'h00000000_00000000
`define PC_START   64'h00000000_80000000  
`define REG_BUS    63 : 0     
`define INST_ADD   8'h11

`define AXI_ADDR_WIDTH		32 
`define AXI_DATA_WIDTH      64
`define AXI_ID_WIDTH        4
`define AXI_USER_WIDTH      1

`define SIZE_B              2'b00
`define SIZE_H              2'b01
`define SIZE_W              2'b10
`define SIZE_D              2'b11

`define REQ_READ            1'b0
`define REQ_WRITE           1'b1

`define RISCV_PRIV_MODE_U   0
`define RISCV_PRIV_MODE_S   1
`define RISCV_PRIV_MODE_M   3


