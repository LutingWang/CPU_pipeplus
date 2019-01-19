`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:37:46 12/03/2018 
// Design Name: 
// Module Name:    pc 
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
module pc(
    input [31:0] NPC,
    input Clk,
    input Reset,
    input En,
    output reg [31:0] PC
    );

	initial begin
		PC = 32'h0000_3000;
	end
	
	always @(posedge Clk) begin
		if (Reset) begin
			PC = 32'h0000_3000;
		end else begin
			if (En) begin
				PC = NPC;
			end
		end
	end

endmodule
