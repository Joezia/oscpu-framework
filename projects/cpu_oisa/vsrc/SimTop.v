`include "ysyx_040510_para.v"
`define AXI_TOP_INTERFACE(name) io_memAXI_0_``name

module SimTop(
    input                               clock,
    input                               reset,

	input  [63:0]                       io_logCtrl_log_begin,
	input  [63:0]                       io_logCtrl_log_end,
	input  [63:0]                       io_logCtrl_log_level,
	input                               io_perfInfo_clean,
	input                               io_perfInfo_dump,

	output                              io_uart_out_valid,
	output [7:0]                        io_uart_out_ch,
	output                              io_uart_in_valid,
	input  [7:0]                        io_uart_in_ch,

	input                               `AXI_TOP_INTERFACE(aw_ready),
	output                              `AXI_TOP_INTERFACE(aw_valid),
	output [`AXI_ADDR_WIDTH-1:0]        `AXI_TOP_INTERFACE(aw_bits_addr),
	output [2:0]                        `AXI_TOP_INTERFACE(aw_bits_prot),
	output [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(aw_bits_id),
	output [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(aw_bits_user),
	output [7:0]                        `AXI_TOP_INTERFACE(aw_bits_len),
	output [2:0]                        `AXI_TOP_INTERFACE(aw_bits_size),
	output [1:0]                        `AXI_TOP_INTERFACE(aw_bits_burst),
	output                              `AXI_TOP_INTERFACE(aw_bits_lock),
	output [3:0]                        `AXI_TOP_INTERFACE(aw_bits_cache),
	output [3:0]                        `AXI_TOP_INTERFACE(aw_bits_qos),

	input                               `AXI_TOP_INTERFACE(w_ready),
	output                              `AXI_TOP_INTERFACE(w_valid),
	output [`AXI_DATA_WIDTH-1:0]        `AXI_TOP_INTERFACE(w_bits_data)         [3:0],
	output [`AXI_DATA_WIDTH/8-1:0]      `AXI_TOP_INTERFACE(w_bits_strb),
	output                              `AXI_TOP_INTERFACE(w_bits_last),

	output                              `AXI_TOP_INTERFACE(b_ready),
	input                               `AXI_TOP_INTERFACE(b_valid),
	input  [1:0]                        `AXI_TOP_INTERFACE(b_bits_resp),
	input  [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(b_bits_id),
	input  [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(b_bits_user),

	input                               `AXI_TOP_INTERFACE(ar_ready),
	output                              `AXI_TOP_INTERFACE(ar_valid),
	output [`AXI_ADDR_WIDTH-1:0]        `AXI_TOP_INTERFACE(ar_bits_addr),
	output [2:0]                        `AXI_TOP_INTERFACE(ar_bits_prot),
	output [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(ar_bits_id),
	output [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(ar_bits_user),
	output [7:0]                        `AXI_TOP_INTERFACE(ar_bits_len),
	output [2:0]                        `AXI_TOP_INTERFACE(ar_bits_size),
	output [1:0]                        `AXI_TOP_INTERFACE(ar_bits_burst),
	output                              `AXI_TOP_INTERFACE(ar_bits_lock),
	output [3:0]                        `AXI_TOP_INTERFACE(ar_bits_cache),
	output [3:0]                        `AXI_TOP_INTERFACE(ar_bits_qos),

	output                              `AXI_TOP_INTERFACE(r_ready),
	input                               `AXI_TOP_INTERFACE(r_valid),
	input  [1:0]                        `AXI_TOP_INTERFACE(r_bits_resp),
	input  [`AXI_DATA_WIDTH-1:0]        `AXI_TOP_INTERFACE(r_bits_data)         [3:0],
	input                               `AXI_TOP_INTERFACE(r_bits_last),
	input  [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(r_bits_id),
	input  [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(r_bits_user)

	/*
	output		                        io_slave_awready,  
		input                               io_slave_awvalid,  
		input	[3:0]                       io_slave_awid   ,  
		input	[31:0]                      io_slave_awaddr , 
		input	[7:0]                       io_slave_awlen  ,
		input	[2:0]                       io_slave_awsize ,
		input	[1:0]                       io_slave_awburst,
		output                              io_slave_wready ,
		input                               io_slave_wvalid ,
		input	[63:0]                      io_slave_wdata  ,
		input	[7:0]                       io_slave_wstrb  ,
		input                               io_slave_wlast  ,
		input                               io_slave_bready ,
		output                              io_slave_bvalid ,
		output	[3:0]                       io_slave_bid    ,
		output	[1:0]                       io_slave_bresp  ,
		output                              io_slave_arready,
		input                               io_slave_arvalid,
		input	[3:0]                       io_slave_arid   ,
		input	[31:0]                      io_slave_araddr ,
		input	[7:0]                       io_slave_arlen  ,
		input	[2:0]                       io_slave_arsize ,
		input	[1:0]                       io_slave_arburst,
		input                               io_slave_rready ,
		output                              io_slave_rvalid ,
		output	[3:0]                       io_slave_rid    ,
		output	[1:0]                       io_slave_rresp  ,
		output	[63:0]                      io_slave_rdata  ,
		output                              io_slave_rlast  ,

		output	[5:0]                       io_sram0_addr   ,
		output                              io_sram0_cen    ,
		output                              io_sram0_wen    ,
		output	[127:0]                     io_sram0_wmask  ,
		output	[127:0]                     io_sram0_wdata  ,
		input	[127:0]                     io_sram0_rdata  ,
		output	[5:0]                       io_sram1_addr   ,
		output                              io_sram1_cen    ,
		output                              io_sram1_wen    ,
		output	[127:0]                     io_sram1_wmask  ,
		output	[127:0]                     io_sram1_wdata  ,
		input	[127:0]                     io_sram1_rdata  ,
		output	[5:0]                       io_sram2_addr   ,
		output                              io_sram2_cen    ,
		output                              io_sram2_wen    ,
		output	[127:0]                     io_sram2_wmask  ,
		output	[127:0]                     io_sram2_wdata  ,
		input	[127:0]                     io_sram2_rdata  ,
		output	[5:0]                       io_sram3_addr   ,
		output                              io_sram3_cen    ,
		output                              io_sram3_wen    ,
		output	[127:0]                     io_sram3_wmask  ,
		output	[127:0]                     io_sram3_wdata  ,
		input	[127:0]                     io_sram3_rdata  ,
		output	[5:0]                       io_sram4_addr   ,
		output                              io_sram4_cen    ,
		output                              io_sram4_wen    ,
		output	[127:0]                     io_sram4_wmask  ,
		output	[127:0]                     io_sram4_wdata  ,
		input	[127:0]                     io_sram4_rdata  ,
		output	[5:0]                       io_sram5_addr   ,
		output                              io_sram5_cen    ,
		output                              io_sram5_wen    ,
		output	[127:0]                     io_sram5_wmask  ,
		output	[127:0]                     io_sram5_wdata  ,
		input	[127:0]                     io_sram5_rdata  ,
		output	[5:0]                       io_sram6_addr   ,
		output                              io_sram6_cen    ,
		output                              io_sram6_wen    ,
		output	[127:0]                     io_sram6_wmask  ,
		output	[127:0]                     io_sram6_wdata  ,
		input	[127:0]                     io_sram6_rdata  ,
		output	[5:0]                       io_sram7_addr   ,
		output                              io_sram7_cen    ,
		output                              io_sram7_wen    ,
		output	[127:0]                     io_sram7_wmask  ,
		output	[127:0]                     io_sram7_wdata  ,
		input	[127:0]                     io_sram7_rdata  ,

		input								io_interrupt,

		input								io_master_awready,
		output								io_master_awvalid,
		output [3:0]						io_master_awid,  
		output [31:0]						io_master_awaddr, 
		output [7:0]						io_master_awlen,  
		output [2:0]						io_master_awsize, 
		output [1:0]						io_master_awburst,

		input								io_master_wready,
		output								io_master_wvalid,
		output [63:0]						io_master_wdata, 
		output [7:0]						io_master_wstrb, 
		output								io_master_wlast, 

		output								io_master_bready,
		input								io_master_bvalid,
		input [3:0]							io_master_bid,   
		input [1:0]							io_master_bresp, 

		input								io_master_arready, 	
		output       						io_master_arvalid, 
		output [3:0]  						io_master_arid,    
		output [31:0] 						io_master_araddr,  
		output [7:0]  						io_master_arlen,   
		output [2:0]  						io_master_arsize,  
		output [1:0]  						io_master_arburst, 

		output								io_master_rready,
		input        						io_master_rvalid,
		input [3:0]   						io_master_rid,  
		input [1:0]   						io_master_rresp,
		input [63:0]  						io_master_rdata,
		input        						io_master_rlast

		*/
	   );
	   wire aw_ready;
	   wire aw_valid;
	   wire [`AXI_ADDR_WIDTH-1:0] aw_addr;
	   wire [`AXI_ID_WIDTH-1:0] aw_id;
	   wire [7:0] aw_len;
	   wire [2:0] aw_size;
	   wire [1:0] aw_burst;

	   wire w_ready;
	   wire w_valid;
	   wire [`AXI_DATA_WIDTH-1:0] w_data;
	   wire [`AXI_DATA_WIDTH/8-1:0] w_strb;
	   wire w_last;

	   wire b_ready;
	   wire b_valid;
	   wire [1:0] b_resp;
	   wire [`AXI_ID_WIDTH-1:0] b_id;

	   wire ar_ready;
	   wire ar_valid;
	   wire [`AXI_ADDR_WIDTH-1:0] ar_addr;
	   wire [`AXI_ID_WIDTH-1:0] ar_id;
	   wire [7:0] ar_len;
	   wire [2:0] ar_size;
	   wire [1:0] ar_burst;

	   wire r_ready;
	   wire r_valid;
	   wire [1:0] r_resp;
	   wire [`AXI_DATA_WIDTH-1:0] r_data;
	   wire r_last;
	   wire [`AXI_ID_WIDTH-1:0] r_id;

	   wire rst = !reset;
	   wire clk = clock;

	   wire		if_valid;
	   wire		if_ready;
	   wire		if_req;
	   wire [63:0] if_data_read;
	   wire [63:0] if_addr;
	   wire [1:0]	if_size;
	   wire [1:0]	if_resp;

	   wire		mem_valid;
	   wire		mem_req;
	   wire [63:0]	mem_addr;
	   wire [63:0]	mem_data_read;
	   wire [63:0]	mem_data_write;
	   wire [7:0]	mem_write_mask_axi;

	   wire		icache_valid;
	   wire [63:0]	icache_addr;
	   wire [7:0]	icache_len;
	   wire		icache_req;
	   wire [63:0]	icache_data_read;
	   wire		icache_stall;

	   wire		rw_valid;
	   wire		rw_ready;
	   wire		rw_req;
	   wire [63:0]	rw_data_read;
	   wire [63:0]	rw_data_write;
	   wire [63:0]	rw_addr;
	   wire [1:0]	rw_size;
	   wire [7:0]	rw_len;
	   wire [1:0]	rw_arb_state;
	   wire		rw_trans_done;
	   wire		rw_r_hs;

	   wire		arb_if_r_hs;
	   wire		arb_if_trans_done;

	   wire		axi_trans_done_pulse;
	   wire		axi_stall;

	   wire		io_char_valid;
	   wire [7:0]	io_char;

	   wire [127:0]	iram_0_data_read_128;
	   wire			iram_0_wen;
	   wire [127:0]	iram_0_bwen;
	   wire [5:0]	iram_0_addr;
	   wire [127:0]	iram_0_data;
	   wire [127:0]	iram_1_data_read_128;
	   wire			iram_1_wen;
	   wire [127:0]	iram_1_bwen;
	   wire [5:0]	iram_1_addr;
	   wire [127:0]	iram_1_data;
	   wire [127:0]	iram_2_data_read_128;
	   wire			iram_2_wen;
	   wire [127:0]	iram_2_bwen;
	   wire [5:0]	iram_2_addr;
	   wire [127:0]	iram_2_data;
	   wire [127:0]	iram_3_data_read_128;
	   wire			iram_3_wen;
	   wire [127:0]	iram_3_bwen;
	   wire [5:0]	iram_3_addr;
	   wire [127:0]	iram_3_data;

	wire		clint_wen;
	wire		clint_ren;
	wire [63:0]	clint_addr;
	wire [63:0]	clint_data;
	wire [63:0]	clint_data_read;
	wire		mtime_ge_mtimecmp;


	assign io_uart_out_valid = io_char_valid;
    assign io_uart_out_ch = io_char;
    
    assign ar_ready                                 = `AXI_TOP_INTERFACE(ar_ready);
    assign `AXI_TOP_INTERFACE(ar_valid)             = ar_valid;
    assign `AXI_TOP_INTERFACE(ar_bits_addr)         = ar_addr;
    assign `AXI_TOP_INTERFACE(ar_bits_id)           = ar_id;
    assign `AXI_TOP_INTERFACE(ar_bits_len)          = ar_len;
    assign `AXI_TOP_INTERFACE(ar_bits_size)         = ar_size;
    assign `AXI_TOP_INTERFACE(ar_bits_burst)        = ar_burst;
    
    assign `AXI_TOP_INTERFACE(r_ready)              = r_ready;
    assign r_valid                                  = `AXI_TOP_INTERFACE(r_valid);
    assign r_resp                                   = `AXI_TOP_INTERFACE(r_bits_resp);
    assign r_data                                   = `AXI_TOP_INTERFACE(r_bits_data)[0];
    assign r_last                                   = `AXI_TOP_INTERFACE(r_bits_last);
    assign r_id                                     = `AXI_TOP_INTERFACE(r_bits_id);

	assign aw_ready                                 = `AXI_TOP_INTERFACE(aw_ready);
    assign `AXI_TOP_INTERFACE(aw_valid)             = aw_valid;
    assign `AXI_TOP_INTERFACE(aw_bits_addr)         = aw_addr;
    assign `AXI_TOP_INTERFACE(aw_bits_id)           = aw_id;
    assign `AXI_TOP_INTERFACE(aw_bits_len)          = aw_len;
    assign `AXI_TOP_INTERFACE(aw_bits_size)         = aw_size;
    assign `AXI_TOP_INTERFACE(aw_bits_burst)        = aw_burst;

	assign w_ready									= `AXI_TOP_INTERFACE(w_ready);
    assign `AXI_TOP_INTERFACE(w_valid)              = w_valid;
    assign `AXI_TOP_INTERFACE(w_bits_data)[0]	    = w_data;
    assign `AXI_TOP_INTERFACE(w_bits_strb)          = w_strb;
    assign `AXI_TOP_INTERFACE(w_bits_last)          = w_last;

	assign `AXI_TOP_INTERFACE(b_ready)              = b_ready;
    assign b_valid                                  = `AXI_TOP_INTERFACE(b_valid);
    assign b_resp                                   = `AXI_TOP_INTERFACE(b_bits_resp);
    assign b_id                                     = `AXI_TOP_INTERFACE(b_bits_id);
/*
    assign ar_ready							= io_master_arready;
    assign io_master_arvalid				= ar_valid;
    assign io_master_araddr					= ar_addr;
    assign io_master_arid					= ar_id;
    assign io_master_arlen					= ar_len;
    assign io_master_arsize					= ar_size;
    assign io_master_arburst				= ar_burst;
    
    assign io_master_rready					= r_ready;
    assign r_valid                          = io_master_rvalid;
    assign r_resp                           = io_master_rresp;
    assign r_data                           = io_master_rdata;
    assign r_last                           = io_master_rlast;
    assign r_id                             = io_master_rid;

	assign aw_ready                         = io_master_awready;
    assign io_master_awvalid				= aw_valid;
    assign io_master_awaddr                 = aw_addr;
    assign io_master_awid                   = aw_id;
    assign io_master_awlen                  = aw_len;
    assign io_master_awsize                 = aw_size;
    assign io_master_awburst                = aw_burst;

	assign w_ready							= io_master_wready;
    assign io_master_wvalid					= w_valid;
    assign io_master_wdata					= w_data;
    assign io_master_wstrb					= w_strb;
    assign io_master_wlast					= w_last;

	assign io_master_bready					= b_ready;
    assign b_valid							= io_master_bvalid;
    assign b_resp                           = io_master_bresp;
    assign b_id                             = io_master_bid;

*/
	    ysyx_040510_axi axi_rw (
        .clock                          (clock),
        .rst	                        (rst),

        .rw_valid_i                     (rw_valid),
        .rw_ready_o                     (rw_ready),
        .rw_req_i                       (rw_req),
        .data_read_o                    (rw_data_read),
        .data_write_i                   (rw_data_write),
		.mask_write_i					(mem_write_mask_axi),
        .rw_addr_i                      (rw_addr),
        .rw_size_i                      (rw_size),
		.rw_len_i						(rw_len),
        .rw_resp_o                      (if_resp),
		.rw_arb_state_i					(rw_arb_state),
		.rw_trans_done_o				(rw_trans_done),
		.rw_r_hs_o						(rw_r_hs),

        .axi_aw_ready_i                 (aw_ready),
        .axi_aw_valid_o                 (aw_valid),
        .axi_aw_addr_o                  (aw_addr),
        .axi_aw_prot_o                  (),
        .axi_aw_id_o                    (aw_id),
        .axi_aw_user_o                  (),
        .axi_aw_len_o                   (aw_len),
        .axi_aw_size_o                  (aw_size),
        .axi_aw_burst_o                 (aw_burst),
        .axi_aw_lock_o                  (),
        .axi_aw_cache_o                 (),
        .axi_aw_qos_o                   (),
        .axi_aw_region_o                (),

        .axi_w_ready_i                  (w_ready),
        .axi_w_valid_o                  (w_valid),
        .axi_w_data_o                   (w_data),
        .axi_w_strb_o                   (w_strb),
        .axi_w_last_o                   (w_last),
        .axi_w_user_o                   (),
        
        .axi_b_ready_o                  (b_ready),
        .axi_b_valid_i                  (b_valid),
        .axi_b_resp_i                   (b_resp),
        .axi_b_id_i                     (b_id),
        .axi_b_user_i                   (),

        .axi_ar_ready_i                 (ar_ready),
        .axi_ar_valid_o                 (ar_valid),
        .axi_ar_addr_o                  (ar_addr),
        .axi_ar_prot_o                  (),
        .axi_ar_id_o                    (ar_id),
        .axi_ar_user_o                  (),
        .axi_ar_len_o                   (ar_len),
        .axi_ar_size_o                  (ar_size),
        .axi_ar_burst_o                 (ar_burst),
        .axi_ar_lock_o                  (),
        .axi_ar_cache_o                 (),
        .axi_ar_qos_o                   (),
        .axi_ar_region_o                (),
        
        .axi_r_ready_o                  (r_ready),
        .axi_r_valid_i                  (r_valid),
        .axi_r_resp_i                   (r_resp),
        .axi_r_data_i                   (r_data),
        .axi_r_last_i                   (r_last),
        .axi_r_id_i                     (r_id),
        .axi_r_user_i                   ()
    );


	ysyx_040510_Arbitrating arbitrating(
		.clk					(clk),
		.rst					(rst),
	
		.if_valid_i				(icache_valid),
		.if_data_read_o			(icache_data_read),
		.if_addr_i				(icache_addr),
		.if_len_i				(icache_len),
		.if_size_i				(if_size),
		.if_req_i				(icache_req),

		.mem_valid_i			(mem_valid),
		.mem_addr_i				(mem_addr),
		.mem_data_read_o		(mem_data_read),
		.mem_data_write_i		(mem_data_write),
		.mem_req_i				(mem_req),

		.rw_valid_o				(rw_valid),
		.rw_ready_i				(rw_ready),
		.rw_req_o				(rw_req),
		.rw_data_read_i			(rw_data_read),
		.rw_data_write_o		(rw_data_write),
		.rw_addr_o				(rw_addr),
		.rw_len_o				(rw_len),
		.rw_size_o				(rw_size),
		.rw_arb_state_o			(rw_arb_state),
		.rw_trans_done_i		(rw_trans_done),
		.rw_r_hs_i				(rw_r_hs),

		.arb_if_r_hs_o			(arb_if_r_hs),
		.arb_if_trans_done_o	(arb_if_trans_done),

		.axi_trans_done_pulse	(axi_trans_done_pulse),
		.axi_stall_o			(axi_stall)
	);

		ysyx_040510_icache u_icache(
		.clk					(clk),
		.rst					(rst),

		.if_addr_i				(if_addr),
		.if_data_o				(if_data_read),

		.icache_valid_o			(icache_valid),
		.icache_addr_o			(icache_addr),
		.icache_len_o			(icache_len),
		.icache_req_o			(icache_req),
		.icache_data_read_i		(icache_data_read),

		.arb_if_trans_done_i	(arb_if_trans_done),
		.arb_if_r_hs_i			(arb_if_r_hs),
		.arb_state_i			(rw_arb_state),	
		.axi_trans_done_pulse	(axi_trans_done_pulse),

		.iram_0_data_read_128	(iram_0_data_read_128),
		.iram_0_wen				(iram_0_wen),
		.iram_0_bwen			(iram_0_bwen),
		.iram_0_addr			(iram_0_addr),
		.iram_0_data			(iram_0_data),
		.iram_1_data_read_128	(iram_1_data_read_128),
		.iram_1_wen				(iram_1_wen),
		.iram_1_bwen			(iram_1_bwen),
		.iram_1_addr			(iram_1_addr),
		.iram_1_data			(iram_1_data),
		.iram_2_data_read_128	(iram_2_data_read_128),
		.iram_2_wen				(iram_2_wen),
		.iram_2_bwen			(iram_2_bwen),
		.iram_2_addr			(iram_2_addr),
		.iram_2_data			(iram_2_data),
		.iram_3_data_read_128	(iram_3_data_read_128),
		.iram_3_wen				(iram_3_wen),
		.iram_3_bwen			(iram_3_bwen),
		.iram_3_addr			(iram_3_addr),
		.iram_3_data			(iram_3_data),

		.icache_stall_o			(icache_stall)
	);
	S011HD1P_X32Y2D128_BW icache_ram_0(
		.Q		(iram_0_data_read_128),
		.CLK	(clk),
		.CEN	(0),
		.WEN	(iram_0_wen),
		.BWEN	(iram_0_bwen),
		.A		(iram_0_addr),
		.D		(iram_0_data)
	);
	S011HD1P_X32Y2D128_BW icache_ram_1(
		.Q		(iram_1_data_read_128),
		.CLK	(clk),
		.CEN	(0),
		.WEN	(iram_1_wen),
		.BWEN	(iram_1_bwen),
		.A		(iram_1_addr),
		.D		(iram_1_data)
	);
	S011HD1P_X32Y2D128_BW icache_ram_2(
		.Q		(iram_2_data_read_128),
		.CLK	(clk),
		.CEN	(0),
		.WEN	(iram_2_wen),
		.BWEN	(iram_2_bwen),
		.A		(iram_2_addr),
		.D		(iram_2_data)
	);
	S011HD1P_X32Y2D128_BW icache_ram_3(
		.Q		(iram_3_data_read_128),
		.CLK	(clk),
		.CEN	(0),
		.WEN	(iram_3_wen),
		.BWEN	(iram_3_bwen),
		.A		(iram_3_addr),
		.D		(iram_3_data)
	);

    ysyx_040510_cpu u_cpu(
        .clock                          (clock),
        .reset                          (reset),

        .if_valid                       (if_valid),
        .if_ready                       (if_ready),
        .if_data_read                   (if_data_read),
        .if_addr                        (if_addr),
        .if_size                        (if_size),
		.if_req							(if_req),
        .if_resp                        (if_resp),

		.mem_valid						(mem_valid),
		.mem_req						(mem_req),
		.mem_addr						(mem_addr),
		.mem_data_read					(mem_data_read),
		.mem_data_write					(mem_data_write),
		.mem_write_mask_axi				(mem_write_mask_axi),

		.io_char_valid_o				(io_char_valid),
		.io_char_o						(io_char),
		.axi_stall						(axi_stall),
		.icache_stall_i					(icache_stall),

		.clint_wen_o					(clint_wen),
		.clint_ren_o					(clint_ren),
		.clint_addr_o					(clint_addr),
		.clint_data_o					(clint_data),
		.clint_data_read_i				(clint_data_read),
		.mtime_ge_mtimecmp_i			(mtime_ge_mtimecmp)
    );

		ysyx_040510_CLINT clint(
		.clk					(clk),
		.rst					(rst),
		.clint_wen_i			(clint_wen),
		.clint_ren_i			(clint_ren),
		.clint_addr_i			(clint_addr),
		.clint_data_i			(clint_data),
		.clint_data_read_o		(clint_data_read),
		.mtime_ge_mtimecmp_o	(mtime_ge_mtimecmp)
	);

endmodule
