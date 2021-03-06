`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:12:26 12/10/2018 
// Design Name: 
// Module Name:    expF 
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
module expF(
    input [31:0] PC,
    output [6:2] ExcCodeF
    );
	`include "expint.v"
	 
	assign ExcCodeF = (PC[1:0] != 2'b00 || 
								$unsigned(PC) > 32'h0000_4fff ||
								$unsigned(PC) < 32'h0000_3000) ? `ExcCode_adel :
								`ExcCode_default;


endmodule
