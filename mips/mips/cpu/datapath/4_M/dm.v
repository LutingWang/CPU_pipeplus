`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:29:12 11/25/2018 
// Design Name: 
// Module Name:    dm 
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
module dm(
    input [13:2] Addr,
    input [31:0] Din,
	 input [3:0] Be, 
    input We,
    input Clk,
    input Reset,
    output [31:0] Dout
    );
	 
	`include "header.v"

	wire [31:0] D2write;
	
	reg [31:0] dm[4095:0];
	integer i;
	initial begin
		for(i=0; i<4096; i=i+1) begin
			dm[i] = 0;
		end
	end
	
	assign Dout = dm[Addr];
	assign D2write = (Be == 4'b0001) ? {Dout[31:8], Din[7:0]} :
							(Be == 4'b0010) ? {Dout[31:16], Din[7:0], Dout[7:0]} :
							(Be == 4'b0100) ? {Dout[31:24], Din[7:0], Dout[15:0]} :
							(Be == 4'b1000) ? {Din[7:0], Dout[23:0]} :
							(Be == 4'b0011) ? {Dout[31:16], Din[15:0]} :
							(Be == 4'b1100) ? {Din[15:0], Dout[15:0]} :
							(Be == 4'b1111) ? Din :
							`debug_dm;
	
	always @(posedge Clk) begin
		if (Reset) begin
			for(i=0; i<4096; i=i+1) begin
				dm[i] = 0;
			end
		end else begin
			if (We) begin
				dm[Addr] = D2write;
			end
		end
	end

endmodule
