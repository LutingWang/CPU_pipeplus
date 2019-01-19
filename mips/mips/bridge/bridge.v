`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:31:56 12/11/2018 
// Design Name: 
// Module Name:    bridge 
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
module bridge(
    input [31:2] PrAddr,
    output [31:0] PrRD,
    input [31:0] PrWD,
    input PrWe,
    output [1:0] timer_addr,
    input [31:0] timer1_RD,
    input [31:0] timer2_RD,
    output [31:0] timer_WD,
    output timer1_We,
	 output timer2_We
    );
	 
	`include "header.v"

	assign timer1_hit = (PrAddr[31:4] == 28'h00007f0) ? 1 : 0;
	assign timer2_hit = (PrAddr[31:4] == 28'h00007f1) ? 1 : 0;
	assign timer1_We = (PrWe && timer1_hit) ? 1 : 0;
	assign timer2_We = (PrWe && timer2_hit) ? 1 : 0;
	
	assign timer_addr = PrAddr[4:2];
	assign PrRD = (timer1_hit) ? timer1_RD :
							(timer2_hit) ? timer2_RD :
							`debug_bridge;
	assign timer_WD = PrWD;

endmodule
