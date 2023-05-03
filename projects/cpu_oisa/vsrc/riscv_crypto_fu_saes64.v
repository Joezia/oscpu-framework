
// 
// Copyright (C) 2020 
//    SCARV Project  <info@scarv.org>
//    Ben Marshall   <ben.marshall@bristol.ac.uk>
// 
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
// 
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
// SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
// IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

module riscv_crypto_fu_saes64 #(
	parameter SAES_DEC_EN = 1 , // Enable the saes64 decrypt instructions.
	parameter SAES64_SBOXES = 8   // saes64 sbox instances. Valid values: 8,4
)(
	input  wire         g_clk           , // Global clock
	input  wire         g_resetn        , // Synchronous active low reset.
	
	input  wire         valid           , // Are the inputs valid?
	input  wire [ 63:0] rs1             , // Source register 1
	input  wire [ 63:0] rs2             , // Source register 2
	input  wire [  3:0] enc_rcon        , // rcon immediate for ks1 instruction
	
	input  wire         op_saes64_ks1   , // RV64 AES Encrypt KeySchedule 1
	input  wire         op_saes64_ks2   , // RV64 AES Encrypt KeySchedule 2
	input  wire         op_saes64_imix  , // RV64 AES Decrypt KeySchedule Mix
	input  wire         op_saes64_encs  , // RV64 AES Encrypt SBox
	input  wire         op_saes64_encsm , // RV64 AES Encrypt SBox + MixCols
	input  wire         op_saes64_decs  , // RV64 AES Decrypt SBox
	input  wire         op_saes64_decsm , // RV64 AES Decrypt SBox + MixCols
	
	output wire [ 63:0] rd              , // output destination register value.
	output wire         ready             // Compute finished?
);

// Select I'th byte of X.
`define BY(X,I) X[7+8*I:8*I]

// Always finish in a single cycle.
wire        sbox_ready      ;
assign     ready            = valid && sbox_ready;

// AES Round Constants
wire [ 7:0] rcon [0:15];
assign rcon[ 0] = 8'h01; assign rcon[ 8] = 8'h1b;
assign rcon[ 1] = 8'h02; assign rcon[ 9] = 8'h36;
assign rcon[ 2] = 8'h04; assign rcon[10] = 8'h00;
assign rcon[ 3] = 8'h08; assign rcon[11] = 8'h00;
assign rcon[ 4] = 8'h10; assign rcon[12] = 8'h00;
assign rcon[ 5] = 8'h20; assign rcon[13] = 8'h00;
assign rcon[ 6] = 8'h40; assign rcon[14] = 8'h00;
assign rcon[ 7] = 8'h80; assign rcon[15] = 8'h00;


//
// Shift Rows
// ------------------------------------------------------------

wire [31:0] row_0   = {`BY(rs1,0),`BY(rs1,4),`BY(rs2,0),`BY(rs2,4)};
wire [31:0] row_1   = {`BY(rs1,1),`BY(rs1,5),`BY(rs2,1),`BY(rs2,5)};
wire [31:0] row_2   = {`BY(rs1,2),`BY(rs1,6),`BY(rs2,2),`BY(rs2,6)};
wire [31:0] row_3   = {`BY(rs1,3),`BY(rs1,7),`BY(rs2,3),`BY(rs2,7)};

// Forward shift rows
wire [31:0] fsh_0   =  row_0;                      
wire [31:0] fsh_1   = {row_1[23: 0], row_1[31:24]};
wire [31:0] fsh_2   = {row_2[15: 0], row_2[31:16]};
wire [31:0] fsh_3   = {row_3[ 7: 0], row_3[31: 8]};

// Inverse shift rows
wire [31:0] ish_0   =  row_0;
wire [31:0] ish_1   = {row_1[ 7: 0], row_1[31: 8]};
wire [31:0] ish_2   = {row_2[15: 0], row_2[31:16]};
wire [31:0] ish_3   = {row_3[23: 0], row_3[31:24]};

//
// Re-construct columns from rows
wire [31:0] f_col_1 = {`BY(fsh_3,2),`BY(fsh_2,2),`BY(fsh_1,2),`BY(fsh_0,2)};
wire [31:0] f_col_0 = {`BY(fsh_3,3),`BY(fsh_2,3),`BY(fsh_1,3),`BY(fsh_0,3)};

wire [31:0] i_col_1 = {`BY(ish_3,2),`BY(ish_2,2),`BY(ish_1,2),`BY(ish_0,2)};
wire [31:0] i_col_0 = {`BY(ish_3,3),`BY(ish_2,3),`BY(ish_1,3),`BY(ish_0,3)};

//
// Hi/Lo selection

wire [63:0] shiftrows_enc = {f_col_1, f_col_0};
wire [63:0] shiftrows_dec = {i_col_1, i_col_0};

//
// SubBytes
// ------------------------------------------------------------

//
// SBox input/output
wire [ 7:0] sb_fwd_in  [7:0];
wire [ 7:0] sb_fwd_out [7:0];
wire [ 7:0] sb_inv_in  [7:0];
wire [ 7:0] sb_inv_out [7:0];

//
// KeySchedule 1 SBox input selection
wire        rcon_rot    = enc_rcon != 4'hA;
wire [ 7:0] rconst      = rcon_rot ? rcon[enc_rcon] : 8'b0;

wire [ 7:0] ks1_sb3     = rcon_rot ? rs1[39:32] : rs1[63:56];
wire [ 7:0] ks1_sb2     = rcon_rot ? rs1[63:56] : rs1[55:48];
wire [ 7:0] ks1_sb1     = rcon_rot ? rs1[55:48] : rs1[47:40];
wire [ 7:0] ks1_sb0     = rcon_rot ? rs1[47:40] : rs1[39:32];


// If just doing sub-bytes, sbox inputs direct from rs1.
assign      sb_fwd_in[0]= op_saes64_ks1 ? ks1_sb0 : `BY(shiftrows_enc, 0);
assign      sb_fwd_in[1]= op_saes64_ks1 ? ks1_sb1 : `BY(shiftrows_enc, 1);
assign      sb_fwd_in[2]= op_saes64_ks1 ? ks1_sb2 : `BY(shiftrows_enc, 2);
assign      sb_fwd_in[3]= op_saes64_ks1 ? ks1_sb3 : `BY(shiftrows_enc, 3);
assign      sb_fwd_in[4]=                           `BY(shiftrows_enc, 4);
assign      sb_fwd_in[5]=                           `BY(shiftrows_enc, 5);
assign      sb_fwd_in[6]=                           `BY(shiftrows_enc, 6);
assign      sb_fwd_in[7]=                           `BY(shiftrows_enc, 7);

assign      sb_inv_in[0]= `BY(shiftrows_dec, 0);
assign      sb_inv_in[1]= `BY(shiftrows_dec, 1);
assign      sb_inv_in[2]= `BY(shiftrows_dec, 2);
assign      sb_inv_in[3]= `BY(shiftrows_dec, 3);
assign      sb_inv_in[4]= `BY(shiftrows_dec, 4);
assign      sb_inv_in[5]= `BY(shiftrows_dec, 5);
assign      sb_inv_in[6]= `BY(shiftrows_dec, 6);
assign      sb_inv_in[7]= `BY(shiftrows_dec, 7);

// Decrypt sbox output
wire [63:0] d_sbout     = {
    sb_inv_out[7], sb_inv_out[6], sb_inv_out[5], sb_inv_out[4],
    sb_inv_out[3], sb_inv_out[2], sb_inv_out[1], sb_inv_out[0] 
};

// Encrypt sbox output
wire [63:0] e_sbout     = {
    sb_fwd_out[7], sb_fwd_out[6], sb_fwd_out[5], sb_fwd_out[4],
    sb_fwd_out[3], sb_fwd_out[2], sb_fwd_out[1], sb_fwd_out[0] 
};

wire [31:0] ks1_sbout   = e_sbout[31:0] ^ {24'b0, rconst};
//
// MixColumns
// ------------------------------------------------------------

// Forward MixColumns inputs.
wire [31:0] mix_enc_i0  =                               e_sbout[31: 0];
wire [31:0] mix_enc_i1  =                               e_sbout[63:32];

// Inverse MixColumns inputs.
wire [31:0] mix_dec_i0  = op_saes64_imix ? rs1[31: 0] : d_sbout[31: 0];
wire [31:0] mix_dec_i1  = op_saes64_imix ? rs1[63:32] : d_sbout[63:32];

// Forward MixColumns outputs.
wire [31:0] mix_enc_o0  ;
wire [31:0] mix_enc_o1  ;

// Inverse MixColumns outputs.
wire [31:0] mix_dec_o0  ;
wire [31:0] mix_dec_o1  ;


//
// Result gathering
// ------------------------------------------------------------

wire [63:0] result_ks1  = {ks1_sbout, ks1_sbout};

wire [63:0] result_ks2  = {
    rs1[63:32] ^ rs2[63:32] ^ rs2[31:0] ,
    rs1[63:32] ^ rs2[31: 0]
};

wire        mix         = op_saes64_encsm || op_saes64_decsm        ;

wire [63:0] result_enc  = mix ? {mix_enc_o1, mix_enc_o0} : e_sbout  ;

wire [63:0] result_dec  = mix ? {mix_dec_o1, mix_dec_o0} : d_sbout  ;

wire [63:0] result_imix =       {mix_dec_o1, mix_dec_o0}            ;

wire        op_enc      = op_saes64_encs || op_saes64_encsm;
wire        op_dec      = op_saes64_decs || op_saes64_decsm;

assign rd = 
    {64{op_saes64_ks1          }} & result_ks1     |
    {64{op_saes64_ks2          }} & result_ks2     |
    {64{op_enc                 }} & result_enc     |
    {64{op_dec                 }} & result_dec     |
    {64{op_saes64_imix         }} & result_imix    ;

//
// Generate AES SBox instances
// ------------------------------------------------------------

genvar i;

generate if(SAES64_SBOXES == 8) begin : saes64_8_sboxes
    
    // All sboxes complete in a single cycle.
    assign sbox_ready = 1'b1;

    for(i = 0; i < 8; i = i + 1) begin

        riscv_crypto_aes_fwd_sbox i_fwd_sbox (
            .in(sb_fwd_in [i]),
            .fx(sb_fwd_out[i])
        );

        if(SAES_DEC_EN) begin : saes64_dec_sboxes_implemented

            riscv_crypto_aes_inv_sbox i_inv_sbox (
                .in(sb_inv_in [i]),
                .fx(sb_inv_out[i])
            );

        end else begin  : saes64_dec_sboxes_not_implemented

            assign sb_inv_out[i] = 8'b0;

        end

    end

end else if(SAES64_SBOXES == 4) begin : saes64_4_sboxes

    // Is this an instruction using >4 sboxes?
    wire sbox_instr = op_saes64_encs || op_saes64_encsm ||
                      op_saes64_decs || op_saes64_decsm ||
                      op_saes64_ks1  ;

    reg sbox_hi;

    reg [7:0]   sbox_regs [3:0];
    wire[7:0] n_sbox_inv  [3:0];
    wire[7:0] n_sbox_fwd  [3:0];

    wire      sbox_reg_ld_en = !sbox_hi && sbox_instr && valid;

    assign sbox_ready = sbox_hi && sbox_instr || !sbox_instr;

    for(i = 0; i < 4; i = i + 1) begin

        always @(posedge g_clk) begin
            if(sbox_reg_ld_en) begin
                if(op_dec) begin
                    sbox_regs[i] <= n_sbox_inv[i];
                end else begin
                    sbox_regs[i] <= n_sbox_fwd[i];
                end
            end
        end

        assign sb_inv_out[i  ] = sbox_regs [i  ];
        assign sb_inv_out[i+4] = n_sbox_inv[i  ];
        assign sb_fwd_out[i  ] = sbox_regs [i  ];
        assign sb_fwd_out[i+4] = n_sbox_fwd[i  ];
        
        riscv_crypto_aes_fwd_sbox i_fwd_sbox (
            .in(sb_fwd_in [i + (sbox_hi ? 4 : 0)]),
            .fx(n_sbox_fwd[i                    ])
        );

        if(SAES_DEC_EN) begin : saes64_dec_sboxes_implemented

            riscv_crypto_aes_inv_sbox i_inv_sbox (
                .in(sb_inv_in [i + (sbox_hi ? 4 : 0)]),
                .fx(n_sbox_inv[i                    ])
            );

        end else begin  : saes64_dec_sboxes_not_implemented

            assign n_sbox_inv[i] = 8'b0;

        end

    end

    always @(posedge g_clk) begin
        if(!g_resetn) begin
            sbox_hi <= 1'b0;
        end else if(valid && ready) begin
            sbox_hi <= 1'b0;
        end else if(valid && sbox_instr) begin
            sbox_hi <= 1'b1;
        end
    end

end endgenerate

//
// Mix Column Instances
//
//  These take an entire column word, and output the 32-bit result of the
//  (Inv)MixColumns function
//
// ------------------------------------------------------------

riscv_crypto_aes_mixcolumn_enc i_mix_e0(
    .col_in (mix_enc_i0),
    .col_out(mix_enc_o0)
);
riscv_crypto_aes_mixcolumn_enc i_mix_e1(
    .col_in (mix_enc_i1),
    .col_out(mix_enc_o1)
);

generate if(SAES_DEC_EN) begin : saes64_dec_mix_columns_implemented

riscv_crypto_aes_mixcolumn_dec i_mix_d0(
    .col_in (mix_dec_i0),
    .col_out(mix_dec_o0)
);
riscv_crypto_aes_mixcolumn_dec i_mix_d1(
    .col_in (mix_dec_i1),
    .col_out(mix_dec_o1)
);

end else begin : saes64_dec_mix_columns_implemented

assign mix_dec_o0 = 32'b0;
assign mix_dec_o1 = 32'b0;

end endgenerate

`undef BY

endmodule

///////////////////////////////////////////////////////////////////////////////////////////////
module aes_mixcolumn_byte_enc (
input   wire [31:0] col_in    ,
output  wire [ 7:0] byte_out
);
//
// Multiply by 2 in GF(2^8) modulo 8'h1b
function [7:0] xt2;
    input [7:0] a;
    xt2 = (a << 1) ^ (a[7] ? 8'h1b : 8'b0) ;
endfunction

//
// Paired down multiply by X in GF(2^8)
function [7:0] xtN;
    input[7:0] a;
    input[3:0] b;
    xtN = (b[0] ?             a   : 0) ^
          (b[1] ? xt2(        a)  : 0) ^
          (b[2] ? xt2(xt2(    a)) : 0) ^
          (b[3] ? xt2(xt2(xt2(a))): 0) ;
endfunction

wire [7:0] b3 = col_in[ 7: 0];
wire [7:0] b2 = col_in[15: 8];
wire [7:0] b1 = col_in[23:16];
wire [7:0] b0 = col_in[31:24];

assign byte_out = xtN(b0,4'd2) ^ xtN(b1,4'd3) ^ b2 ^ b3 ;

endmodule

//
// AES Inverse MixColumn byte module
//
// - Outputs a single byte of the new column
//
module aes_mixcolumn_byte_dec (
input   wire [31:0] col_in    ,
output  wire [ 7:0] byte_out
);


//
// Multiply by 2 in GF(2^8) modulo 8'h1b
function [7:0] xt2;
    input [7:0] a;
    xt2 = (a << 1) ^ (a[7] ? 8'h1b : 8'b0) ;
endfunction

//
// Paired down multiply by X in GF(2^8)
function [7:0] xtN;
    input[7:0] a;
    input[3:0] b;
    xtN = (b[0] ?             a   : 0) ^
          (b[1] ? xt2(        a)  : 0) ^
          (b[2] ? xt2(xt2(    a)) : 0) ^
          (b[3] ? xt2(xt2(xt2(a))): 0) ;
endfunction

wire [7:0] b3 = col_in[ 7: 0];
wire [7:0] b2 = col_in[15: 8];
wire [7:0] b1 = col_in[23:16];
wire [7:0] b0 = col_in[31:24];

assign byte_out = xtN(b0,4'he) ^ xtN(b1,4'hb) ^ xtN(b2,4'hd) ^ xtN(b3,4'h9);

endmodule

//
// AES Forward MixColumn Word module
//
// - Outputs the entire new column.
//
module riscv_crypto_aes_mixcolumn_enc (

input   wire [31:0] col_in    ,
output  wire [31:0] col_out

);

wire [ 7:0] b0 = col_in[ 7: 0];
wire [ 7:0] b1 = col_in[15: 8];
wire [ 7:0] b2 = col_in[23:16];
wire [ 7:0] b3 = col_in[31:24];
    
wire [31:0] mix_in_3 = {b3, b0, b1, b2};
wire [31:0] mix_in_2 = {b2, b3, b0, b1};
wire [31:0] mix_in_1 = {b1, b2, b3, b0};
wire [31:0] mix_in_0 = {b0, b1, b2, b3};

wire [ 7:0] mix_out_3;
wire [ 7:0] mix_out_2;
wire [ 7:0] mix_out_1;
wire [ 7:0] mix_out_0;

assign col_out = {mix_out_3, mix_out_2, mix_out_1, mix_out_0};

aes_mixcolumn_byte_enc i_mc_enc_0(.col_in(mix_in_0), .byte_out(mix_out_0));
aes_mixcolumn_byte_enc i_mc_enc_1(.col_in(mix_in_1), .byte_out(mix_out_1));
aes_mixcolumn_byte_enc i_mc_enc_2(.col_in(mix_in_2), .byte_out(mix_out_2));
aes_mixcolumn_byte_enc i_mc_enc_3(.col_in(mix_in_3), .byte_out(mix_out_3));

endmodule

//
// AES Inverse MixColumn Word module
//
// - Outputs the entire new column.
//
module riscv_crypto_aes_mixcolumn_dec (

input   wire [31:0] col_in    ,
output  wire [31:0] col_out

);

wire [ 7:0] b0 = col_in[ 7: 0];
wire [ 7:0] b1 = col_in[15: 8];
wire [ 7:0] b2 = col_in[23:16];
wire [ 7:0] b3 = col_in[31:24];
    
wire [31:0] mix_in_3 = {b3, b0, b1, b2};
wire [31:0] mix_in_2 = {b2, b3, b0, b1};
wire [31:0] mix_in_1 = {b1, b2, b3, b0};
wire [31:0] mix_in_0 = {b0, b1, b2, b3};

wire [ 7:0] mix_out_3;
wire [ 7:0] mix_out_2;
wire [ 7:0] mix_out_1;
wire [ 7:0] mix_out_0;

assign col_out = {mix_out_3, mix_out_2, mix_out_1, mix_out_0};

aes_mixcolumn_byte_dec i_mc_dec_0(.col_in(mix_in_0), .byte_out(mix_out_0));
aes_mixcolumn_byte_dec i_mc_dec_1(.col_in(mix_in_1), .byte_out(mix_out_1));
aes_mixcolumn_byte_dec i_mc_dec_2(.col_in(mix_in_2), .byte_out(mix_out_2));
aes_mixcolumn_byte_dec i_mc_dec_3(.col_in(mix_in_3), .byte_out(mix_out_3));

endmodule

///////////////////////////////////////////////////////////////////////////////////////////
module riscv_crypto_sbox_inv_mid(
input   [20:0] x    ,
output  [17:0] y
);

    wire    t0  = x[ 3] ^     x[12];
    wire    t1  = x[ 9] &     x[ 5];
    wire    t2  = x[17] &     x[ 6];
    wire    t3  = x[10] ^     t1   ;
    wire    t4  = x[14] &     x[ 0];
    wire    t5  = t4    ^     t1   ;
    wire    t6  = x[ 3] &     x[12];
    wire    t7  = x[16] &     x[ 7];
    wire    t8  = t0    ^     t6   ;
    wire    t9  = x[15] &     x[13];
    wire    t10 = t9    ^     t6   ;
    wire    t11 = x[ 1] &     x[11];
    wire    t12 = x[ 4] &     x[20];
    wire    t13 = t12   ^     t11  ;
    wire    t14 = x[ 2] &     x[ 8];
    wire    t15 = t14   ^     t11  ;
    wire    t16 = t3    ^     t2   ;
    wire    t17 = t5    ^     x[18];
    wire    t18 = t8    ^     t7   ;
    wire    t19 = t10   ^     t15  ;
    wire    t20 = t16   ^     t13  ;
    wire    t21 = t17   ^     t15  ;
    wire    t22 = t18   ^     t13  ;
    wire    t23 = t19   ^     x[19];
    wire    t24 = t22   ^     t23  ;
    wire    t25 = t22   &     t20  ;
    wire    t26 = t21   ^     t25  ;
    wire    t27 = t20   ^     t21  ;
    wire    t28 = t23   ^     t25  ;
    wire    t29 = t28   &     t27  ;
    wire    t30 = t26   &     t24  ;
    wire    t31 = t20   &     t23  ;
    wire    t32 = t27   &     t31  ;
    wire    t33 = t27   ^     t25  ;
    wire    t34 = t21   &     t22  ;
    wire    t35 = t24   &     t34  ;
    wire    t36 = t24   ^     t25  ;
    wire    t37 = t21   ^     t29  ;
    wire    t38 = t32   ^     t33  ;
    wire    t39 = t23   ^     t30  ;
    wire    t40 = t35   ^     t36  ;
    wire    t41 = t38   ^     t40  ;
    wire    t42 = t37   ^     t39  ;
    wire    t43 = t37   ^     t38  ;
    wire    t44 = t39   ^     t40  ;
    wire    t45 = t42   ^     t41  ;
    assign    y[ 0] = t38 &     x[ 7];
    assign    y[ 1] = t37 &     x[13];
    assign    y[ 2] = t42 &     x[11];
    assign    y[ 3] = t45 &     x[20];
    assign    y[ 4] = t41 &     x[ 8];
    assign    y[ 5] = t44 &     x[ 9];
    assign    y[ 6] = t40 &     x[17];
    assign    y[ 7] = t39 &     x[14];
    assign    y[ 8] = t43 &     x[ 3];
    assign    y[ 9] = t38 &     x[16];
    assign    y[10] = t37 &     x[15];
    assign    y[11] = t42 &     x[ 1];
    assign    y[12] = t45 &     x[ 4];
    assign    y[13] = t41 &     x[ 2];
    assign    y[14] = t44 &     x[ 5];
    assign    y[15] = t40 &     x[ 6];
    assign    y[16] = t39 &     x[ 0];
    assign    y[17] = t43 &     x[12];

endmodule

//
//    top (inner) linear layer for AES
module riscv_crypto_sbox_aes_top(
input   [ 7:0] x    ,
output  [20:0] y
);

    wire    y0  = x[ 0] ;
    wire    y1  = x[ 7] ^     x[ 4];
    wire    y2  = x[ 7] ^     x[ 2];
    wire    y3  = x[ 7] ^     x[ 1];
    wire    y4  = x[ 4] ^     x[ 2];
    wire    t0  = x[ 3] ^     x[ 1];
    wire    y5  = y1    ^     t0   ;
    wire    t1  = x[ 6] ^     x[ 5];
    wire    y6  = x[ 0] ^     y5   ;
    wire    y7  = x[ 0] ^     t1   ;
    wire    y8  = y5    ^     t1   ;
    wire    t2  = x[ 6] ^     x[ 2];
    wire    t3  = x[ 5] ^     x[ 2];
    wire    y9  = y3    ^     y4   ;
    wire    y10 = y5    ^     t2   ;
    wire    y11 = t0    ^     t2   ;
    wire    y12 = t0    ^     t3   ;
    wire    y13 = y7    ^     y12  ;
    wire    t4  = x[ 4] ^     x[ 0];
    wire    y14 = t1    ^     t4   ;
    wire    y15 = y1    ^     y14  ;
    wire    t5  = x[ 1] ^     x[ 0];
    wire    y16 = t1    ^     t5   ;
    wire    y17 = y2    ^     y16  ;
    wire    y18 = y2    ^     y8   ;
    wire    y19 = y15   ^     y13  ;
    wire    y20 = y1    ^     t3   ;
    
    assign y[0 ]  = y0 ;
    assign y[1 ]  = y1 ;
    assign y[10]  = y10;
    assign y[11]  = y11;
    assign y[12]  = y12;
    assign y[13]  = y13;
    assign y[14]  = y14;
    assign y[15]  = y15;
    assign y[16]  = y16;
    assign y[17]  = y17;
    assign y[18]  = y18;
    assign y[19]  = y19;
    assign y[2 ]  = y2 ;
    assign y[20]  = y20;
    assign y[3 ]  = y3 ;
    assign y[4 ]  = y4 ;
    assign y[5 ]  = y5 ;
    assign y[6 ]  = y6 ;
    assign y[7 ]  = y7 ;
    assign y[8 ]  = y8 ;
    assign y[9 ]  = y9 ;

endmodule


//
//    bottom (outer) linear layer for AES
module riscv_crypto_sbox_aes_out(
input   [17:0] x    ,
output  [ 7:0] y
);

    wire    t0   = x[11] ^  x[12];
    wire    t1   = x[0] ^   x[6];
    wire    t2   = x[14] ^  x[16];
    wire    t3   = x[15] ^  x[5];
    wire    t4   = x[4] ^   x[8];
    wire    t5   = x[17] ^  x[11];
    wire    t6   = x[12] ^  t5;
    wire    t7   = x[14] ^  t3;
    wire    t8   = x[1] ^   x[9];
    wire    t9   = x[2] ^   x[3];
    wire    t10  = x[3] ^   t4;
    wire    t11  = x[10] ^  t2;
    wire    t12  = x[16] ^  x[1];
    wire    t13  = x[0] ^   t0;
    wire    t14  = x[2] ^   x[11];
    wire    t15  = x[5] ^   t1;
    wire    t16  = x[6] ^   t0;
    wire    t17  = x[7] ^   t1;
    wire    t18  = x[8] ^   t8;
    wire    t19  = x[13] ^  t4;
    wire    t20  = t0 ^     t1;
    wire    t21  = t1 ^     t7;
    wire    t22  = t3 ^     t12;
    wire    t23  = t18 ^    t2;
    wire    t24  = t15 ^    t9;
    wire    t25  = t6 ^     t10;
    wire    t26  = t7 ^     t9;
    wire    t27  = t8 ^     t10;
    wire    t28  = t11 ^    t14;
    wire    t29  = t11 ^    t17;
    assign    y[0] = t6 ^~  t23;
    assign    y[1] = t13 ^~ t27;
    assign    y[2] = t25 ^  t29;
    assign    y[3] = t20 ^  t22;
    assign    y[4] = t6 ^   t21;
    assign    y[5] = t19 ^~ t28;
    assign    y[6] = t16 ^~ t26;
    assign    y[7] = t6 ^   t24;

endmodule


//
//    top (inner) linear layer for AES^-1
module riscv_crypto_sbox_aesi_top(
output  [20:0] y    ,
input   [ 7:0] x
);

    wire  y17 = x[ 7] ^     x[ 4];
    wire  y16 = x[ 6] ^~ x[ 4];
    wire  y2  = x[ 7] ^~ x[ 6];
    wire  y1  = x[ 4] ^     x[ 3];
    wire  y18 = x[ 3] ^~ x[ 0];
    wire  t0  = x[ 1] ^     x[ 0];
    wire  y6  = x[ 6] ^~ y17 ;
    wire  y14 = y16  ^     t0;
    wire  y7  = x[ 0] ^~ y1;
    wire  y8  = y2  ^     y18;
    wire  y9  = y2  ^     t0;
    wire  y3  = y1  ^     t0;
    wire  y19 = x[ 5] ^~ y1;
    wire  t1  = x[ 6] ^    x[ 1];
    wire  y13 = x[ 5] ^~ y14;
    wire  y15 = y18  ^     t1;
    wire  y4  = x[ 3] ^     y6;
    wire  t2  = x[ 5] ^~ x[ 2];
    wire  t3  = x[ 2] ^~ x[ 1];
    wire  t4  = x[ 5] ^~ x[ 3];
    wire  y5  = y16  ^     t2 ;
    wire  y12 = t1  ^     t4 ;
    wire  y20 = y1  ^     t3 ;
    wire  y11 = y8  ^     y20 ;
    wire  y10 = y8  ^     t3 ;
    wire  y0  = x[ 7] ^     t2 ;
    
    assign y[0 ] = y0 ;
    assign y[1 ] = y1 ;
    assign y[10] = y10;
    assign y[11] = y11;
    assign y[12] = y12;
    assign y[13] = y13;
    assign y[14] = y14;
    assign y[15] = y15;
    assign y[16] = y16;
    assign y[17] = y17;
    assign y[18] = y18;
    assign y[19] = y19;
    assign y[2 ] = y2 ;
    assign y[20] = y20;
    assign y[3 ] = y3 ;
    assign y[4 ] = y4 ;
    assign y[5 ] = y5 ;
    assign y[6 ] = y6 ;
    assign y[7 ] = y7 ;
    assign y[8 ] = y8 ;
    assign y[9 ] = y9 ;

endmodule


//
//    bottom (outer) linear layer for AES^-1
module riscv_crypto_sbox_aesi_out(
output  [ 7:0] y    ,
input   [17:0] x
);

    wire      t0  = x[ 2] ^     x[11];
    wire      t1  = x[ 8] ^     x[ 9];
    wire      t2  = x[ 4] ^     x[12];
    wire      t3  = x[15] ^     x[ 0];
    wire      t4  = x[16] ^     x[ 6];
    wire      t5  = x[14] ^     x[ 1];
    wire      t6  = x[17] ^     x[10];
    wire      t7  = t0    ^     t1   ;
    wire      t8  = x[ 0] ^     x[ 3];
    wire      t9  = x[ 5] ^     x[13];
    wire      t10 = x[ 7] ^     t4   ;
    wire      t11 = t0    ^     t3   ;
    wire      t12 = x[14] ^     x[16];
    wire      t13 = x[17] ^     x[ 1];
    wire      t14 = x[17] ^     x[12];
    wire      t15 = x[ 4] ^     x[ 9];
    wire      t16 = x[ 7] ^     x[11];
    wire      t17 = x[ 8] ^     t2 ;
    wire      t18 = x[13] ^     t5 ;
    wire      t19 = t2   ^     t3 ;
    wire      t20 = t4   ^     t6 ;
    wire      t22 = t2   ^     t7 ;
    wire      t23 = t7   ^     t8 ;
    wire      t24 = t5   ^     t7 ;
    wire      t25 = t6   ^     t10;
    wire      t26 = t9   ^     t11;
    wire      t27 = t10  ^     t18;
    wire      t28 = t11  ^     t25;
    wire      t29 = t15  ^     t20;
    assign    y[ 0] = t9  ^     t16;
    assign    y[ 1] = t14 ^     t23;
    assign    y[ 2] = t19 ^     t24;
    assign    y[ 3] = t23 ^     t27;
    assign    y[ 4] = t12 ^     t22;
    assign    y[ 5] = t17 ^     t28;
    assign    y[ 6] = t26 ^     t29;
    assign    y[ 7] = t13 ^     t22;

endmodule

//
// Inverse AES Sbox
module riscv_crypto_aes_inv_sbox (
    output [7:0] fx,
    input  [7:0] in
);

    wire [20:0] t1;
    wire [17:0] t2;

    riscv_crypto_sbox_aesi_top top ( .y(t1), .x(in) );
    riscv_crypto_sbox_inv_mid mid  ( .y(t2), .x(t1) );
    riscv_crypto_sbox_aesi_out out ( .y(fx), .x(t2) );

endmodule

//
// Forward AES SBox
module riscv_crypto_aes_fwd_sbox (
    output [7:0] fx,
    input  [7:0] in
);

    wire [20:0] t1;
    wire [17:0] t2;

    riscv_crypto_sbox_aes_top top ( .y(t1), .x(in) );
    riscv_crypto_sbox_inv_mid mid ( .y(t2), .x(t1) );
    riscv_crypto_sbox_aes_out out ( .y(fx), .x(t2) );

endmodule


//
// Forward / inverse aes sbox.
module riscv_crypto_aes_sbox(
    input  wire        dec,
    input  wire [7:0]  in ,
    output wire [7:0]  fx
);

wire [7:0] fx_fwd;
wire [7:0] fx_inv;

riscv_crypto_aes_fwd_sbox i_fwd (
    .in(in)     ,
    .fx(fx_fwd)
);

riscv_crypto_aes_inv_sbox i_inv (
    .in(in)     ,
    .fx(fx_inv)
);

assign fx = dec ? fx_inv : fx_fwd;

endmodule

