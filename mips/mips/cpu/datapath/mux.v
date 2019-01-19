`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:00 11/25/2018 
// Design Name: 
// Module Name:    RegDst 
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
module MUX_RF_A3(
    input [4:0] A3,
    input [4:0] A2,
    input [1:0] RegDst,
    output reg [4:0] RegDstOut
    );

	`include "header.v"

	always @(*) begin
		case(RegDst)
			`RegDst_A3: begin
				RegDstOut = A3;
			end
			`RegDst_A2: begin
				RegDstOut = A2;
			end
			`RegDst_ra: begin
				RegDstOut = 31;
			end
		endcase
	end

endmodule

module MUX_ALU_A(
    input [31:0] Rd1,
	 input [31:0] Shamt,
	 input ALUSrc,
	 output [31:0] ALUSrcOut
	 );
	 
	`include "header.v"
	
	assign ALUSrcOut = (ALUSrc == `alu_a_shamt) ? Shamt : Rd1;
	 
endmodule

module MUX_ALU_B(
    input [31:0] Rd2,
	 input [31:0] Ext,
	 input ALUSrc,
	 output [31:0] ALUSrcOut
	 );
	 
	`include "header.v"
	
	assign ALUSrcOut = (ALUSrc == `alu_b_imm) ? Ext : Rd2;
	 
endmodule

module MUX_RF_WD(
    input [31:0] C,
	 input [31:0] Dout,
	 input [31:0] PC,
	 input [1:0] DataSrc,
	 output reg [31:0] DataSrcOut
	 );
	 
	`include "header.v"
	 
	always @(*) begin
		case (DataSrc)
			`DataSrc_alu: begin
				DataSrcOut = C;
			end
			`DataSrc_dm: begin
				DataSrcOut = Dout;
			end
			`DataSrc_pc4: begin
				DataSrcOut = PC;
			end
		endcase
	end
endmodule

module MUX_PC(
	 input [31:0] add4,
	 input [31:0] NPC,
	 input [31:0] mf,
	 input [1:0] NPC_Sel,
	 input Branch,
	 output reg [31:0] MUX_PC_OUT
	 );
	 
	`include "header.v"
	
	always @(*) begin
		case (NPC_Sel)
			`npc_add4: begin
				MUX_PC_OUT = add4;
			end
			`npc_jump: begin
				MUX_PC_OUT = NPC;
			end
			`npc_branch: begin
				MUX_PC_OUT = (Branch == 1) ? NPC : add4;
			end
			`npc_jr: begin
				MUX_PC_OUT = mf;
			end
		endcase
	end

endmodule

