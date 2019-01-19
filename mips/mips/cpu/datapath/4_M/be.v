`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:09:31 12/16/2018 
// Design Name: 
// Module Name:    be 
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
module be(
    input [31:0] Addr,
    input [1:0] BEOp,
    output reg [3:0] Be,
    output reg ade
    );
	 
	`include "header.v"
	 
	assign timer = (($unsigned(Addr) >= 32'h00007f00 && $unsigned(Addr) <= 32'h00007f0b) ||
									($unsigned(Addr) >= 32'h00007f10 && $unsigned(Addr) <= 32'h00007f1b)) ? 1 : 0;
	
	always @(*) begin
		case (BEOp)
			`be_byte: begin
				Be = (Addr[1:0] == 2'b00) ? 4'b0001 :
						(Addr[1:0] == 2'b01) ? 4'b0010 :
						(Addr[1:0] == 2'b10) ? 4'b0100 :
						(Addr[1:0] == 2'b11) ? 4'b1000 :
						4'bxxxx;
				ade = timer;
			end
			`be_half: begin
				Be = (Addr[1] == 1'b0) ? 4'b0011 : 
						(Addr[1] == 1'b1) ? 4'b1100 :
						4'bxxxx;
				ade = Addr[0] || timer;
			end
			`be_word: begin
				Be = 4'b1111;
				ade = (Addr[1:0] == 2'b00) ? 0 : 1;
			end
		endcase
	end


endmodule
