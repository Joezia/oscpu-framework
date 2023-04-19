module PIPE_IF_ID(
	input clk,
	input [63:0]pc_if,
	input [31:0]inst_if,

	input pipeline_stall,
	input IF_Flush,
	input axi_stall_i,

	output reg	[63:0]pc_id,
	output reg	[31:0]inst_id
);

always @(posedge clk)begin	
  if(!axi_stall_i)begin
	if(IF_Flush)begin
		pc_id <= 64'b0;
		inst_id <= 32'b00000000000000000000000000000000;
	end
	else begin
		if(!(pipeline_stall))begin
			pc_id	<= pc_if;
			inst_id	<= inst_if;
		end
	end
  end
end

endmodule 
