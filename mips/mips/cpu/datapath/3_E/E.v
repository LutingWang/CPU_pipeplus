`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:53:42 12/03/2018 
// Design Name: 
// Module Name:    E 
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
module E(
	 input bdE,
    input [31:0] IRE,
    input [31:0] PC4E,
    input [31:0] RSE,
    input [31:0] RTE,
    input [31:0] EXTE,
    input Clk,
    input Reset,
	 output MuDiBusy,
	 output MuDiStart,
    output reg [31:0] IRM,
    output reg [31:0] PC4M,
    output reg [31:0] AOM,
    output reg [31:0] RTM,
    input [2:0] Forward_RS_E_Sel,
    input [2:0] Forward_RT_E_Sel,
    input [31:0] AO,
    input [31:0] PC4fromM,
    input [31:0] MUX_RF_WD_OUT,
	 input exp_in,
	 input [6:2] ExcCodeE,
	 output reg [6:2] ExcCodeM,
	 output reg bdM
    );
	 
	`include "header.v"
	`include "expint.v"

	wire [31:0] ALUASrcOut, ALUBSrcOut, C, MF_RS_E_OUT, MF_RT_E_OUT, MuDiOut;
	wire [3:0] ALUOp;
	wire [2:0] MuDiOp;
	wire ALUASrc, ALUBSrc, N, Z, V, Carry, MuDiWrite, MuDiStart, AOSrc;
	
	wire [6:2] ExcCode;
	
	initial begin
		IRM = 32'b0;
		PC4M = 32'b0;
		AOM = 32'b0;
		RTM = 32'b0;
		ExcCodeM = `ExcCode_default;
		bdM = 0;
	end
	always @(posedge Clk) begin
		if (Reset || exp_in) begin
			IRM = 32'b0;
			PC4M = 32'b0;
			AOM = 32'b0;
			RTM = 32'b0;
			ExcCodeM = `ExcCode_default;
			bdM = 0;
		end else begin
			IRM = IRE;
			PC4M = PC4E;
			AOM = (AOSrc == `ao_alu) ? C : MuDiOut;
			RTM = MF_RT_E_OUT;
			ExcCodeM = ExcCode;
			bdM = bdE;
		end
	end
	
	expE EXPE (
    .ExcCodeE(ExcCodeE), 
    .V(V), 
    .IRE(IRE), 
    .ExcCodeM(ExcCode)
    );
	
	ctrl controllerE (
    .instr(IRE),
    .ALUASrc(ALUASrc),
	 .ALUBSrc(ALUBSrc),
    .ALUOp(ALUOp),
	 .MuDiOp(MuDiOp),
	 .MuDiWrite(MuDiWrite),
	 .MuDiStart(MuDiStart),
	 .AOSrc(AOSrc)
    );
	
	mudi MuDi (
    .A(ALUASrcOut), 
    .B(ALUBSrcOut), 
    .MuDiOp(MuDiOp), 
    .start(MuDiStart), 
    .We(MuDiWrite), 
    .Din(MF_RS_E_OUT), 
    .Clk(Clk), 
    .Reset(Reset), 
    .buzy(MuDiBusy), 
    .Dout(MuDiOut), 
    .exp_in(exp_in)
    );
	
	alu ALUE (
    .A(ALUASrcOut), 
    .B(ALUBSrcOut), 
    .ALUOp(ALUOp), 
    .C(C), 
    .N(N), 
    .Z(Z), 
    .V(V), 
    .Carry(Carry)
    );

	MUX_ALU_A mux_alu_a_E (
    .Rd1(MF_RS_E_OUT), 
    .Shamt({27'b0, IRE[`Shamt]}), 
    .ALUSrc(ALUASrc), 
    .ALUSrcOut(ALUASrcOut)
    );
	
	MUX_ALU_B mux_alu_b_E (
    .Rd2(MF_RT_E_OUT), 
    .Ext(EXTE), 
    .ALUSrc(ALUBSrc), 
    .ALUSrcOut(ALUBSrcOut)
    );
	 
	mf MF_RS_E (
    .AO(AO), 
    .PC4M(PC4fromM), 
    .Wd(MUX_RF_WD_OUT), 
    .Rd(RSE), 
    .Forward_Sel(Forward_RS_E_Sel), 
    .MF_OUT(MF_RS_E_OUT)
    );
	
	mf MF_RT_E (
    .AO(AO), 
    .PC4M(PC4fromM), 
    .Wd(MUX_RF_WD_OUT), 
    .Rd(RTE), 
    .Forward_Sel(Forward_RT_E_Sel), 
    .MF_OUT(MF_RT_E_OUT)
    );

endmodule
