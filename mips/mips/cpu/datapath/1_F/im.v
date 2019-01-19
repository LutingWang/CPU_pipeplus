`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:41:45 12/03/2018 
// Design Name: 
// Module Name:    im 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module im(
    input [13:2] Addr,
    output [31:0] Instr
    );

	reg [31:0] im[4095:0];
	
	integer i;
	initial begin
		for(i=0; i<4096; i=i+1) begin
			im[i] = 32'b0;
		end
		$readmemh("code.txt", im);
		$readmemh("code_handler.txt", im, 1120, 2047);
	end
	
	assign Instr = im[Addr-12'b1100_0000_0000];

endmodule
