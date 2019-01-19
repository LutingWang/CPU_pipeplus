`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:35:27 12/11/2018
// Design Name:   cp0
// Module Name:   C:/Users/ThinkPad/Documents/ISE/mips/mips/mips/cpu/expectation/cp0_tb.v
// Project Name:  mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cp0
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cp0_tb;

	// Inputs
	reg [4:0] A1;
	reg [4:0] A2;
	reg [31:0] Din;
	reg [31:0] PC4M;
	reg [31:0] IRW;
	reg [6:2] ExcCodeM;
	reg [15:10] HWInt;
	reg We;
	reg EXLSet;
	reg EXLClr;
	reg Clk;
	reg Reset;

	// Outputs
	wire IntReq;
	wire [31:0] ePC;
	wire [31:0] Dout;

	// Instantiate the Unit Under Test (UUT)
	cp0 uut (
		.A1(A1), 
		.A2(A2), 
		.Din(Din), 
		.PC4M(PC4M), 
		.IRW(IRW), 
		.ExcCodeM(ExcCodeM), 
		.HWInt(HWInt), 
		.We(We), 
		.EXLSet(EXLSet), 
		.EXLClr(EXLClr), 
		.Clk(Clk), 
		.Reset(Reset), 
		.IntReq(IntReq), 
		.ePC(ePC), 
		.Dout(Dout)
	);

	initial begin
		// Initialize Inputs
		A1 = 0;
		A2 = 0;
		Din = 0;
		PC4M = 0;
		IRW = 0;
		ExcCodeM = 0;
		HWInt = 0;
		We = 0;
		EXLSet = 0;
		EXLClr = 0;
		Clk = 0;
		Reset = 0;

		#5;
		PC4M = 32'h00003020;
		ExcCodeM = 5'b00100;
		HWInt = 6'b011111;
		We = 0;
		EXLSet = 1;
		#20;
		EXLSet = 0;
		#20;
		#20;
		EXLClr = 1;

	end
	always #10 Clk = ~Clk;
      
endmodule

