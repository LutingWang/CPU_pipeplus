`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:44 12/16/2018 
// Design Name: 
// Module Name:    mudi 
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
module mudi(
    input [31:0] A,
    input [31:0] B,
    input [2:0] MuDiOp,
	 input start,
    input We,
    input [31:0] Din,
	 input Clk,
	 input Reset,
	 output buzy,
    output [31:0] Dout,
	 input exp_in
    );
	
	`include "header.v"
	
	reg [31:0] hi_temp, lo_temp, hi, lo;
	reg is_mt_M;
	reg is_mudi_M;
	integer counter;
	
	assign buzy = (counter == 0) ? 0 : 1;
	assign Dout = (MuDiOp == `mudi_mfhi) ? hi : 
						(MuDiOp == `mudi_mflo) ? lo :
						`debug_mudi;
	
	initial begin
		hi_temp = 32'b0;
		lo_temp = 32'b0;
		hi = 32'b0;
		lo = 32'b0;
		is_mt_M = 0;
		is_mudi_M = 0;
		counter = 0;
	end
	always @(posedge Clk) begin
		if (Reset) begin
			hi_temp = 32'b0;
			lo_temp = 32'b0;
			hi = 32'b0;
			lo = 32'b0;
			is_mt_M = 0;
			is_mudi_M = 0;
			counter = 0;
		end else if (exp_in) begin
			if (is_mt_M) begin
				hi = hi_temp;
				lo = lo_temp;
				hi_temp = 0;
				lo_temp = 0;
				is_mt_M = 0;
				is_mudi_M = 0;
				counter = 0;
			end else if (is_mudi_M) begin
				hi_temp = 0;
				lo_temp = 0;
				is_mt_M = 0;
				is_mudi_M = 0;
				counter = 0;
			end
		end else if (counter == 0 && start) begin
			case (MuDiOp)
				`mudi_div: begin
					if (B != 32'h0000_0000) begin
						lo_temp = $signed(A) / $signed(B);
						hi_temp = $signed(A) % $signed(B);
						counter = 10;
					end
				end
				`mudi_divu: begin
					if (B != 32'h0000_0000) begin
						lo_temp = $unsigned({0, A}) / $unsigned({0, B});
						hi_temp = $unsigned({0, A}) % $unsigned({0, B});
						counter = 10;
					end
				end
				`mudi_mult: begin
					{hi_temp, lo_temp} = $signed(A) * $signed(B);
					counter = 5;
				end
				`mudi_multu: begin
					{hi_temp, lo_temp} = $unsigned({0, A}) * $unsigned({0, B});
					counter = 5;
				end
			endcase
		end else if (counter == 0 && ~start && We) begin
			case (MuDiOp)
				`mudi_mthi: begin
					hi_temp = hi;
					lo_temp = lo;
					hi = Din;
				end
				`mudi_mtlo: begin
					hi_temp = hi;
					lo_temp = lo;
					lo = Din;
				end
			endcase
		end else if (counter == 1) begin
			hi = hi_temp;
			lo = lo_temp;
			hi_temp = 0;
			lo_temp = 0;
			counter = 0;
		end else if (counter > 1) counter = counter - 1; 
		is_mt_M = We;
		is_mudi_M = start;
	end

endmodule
