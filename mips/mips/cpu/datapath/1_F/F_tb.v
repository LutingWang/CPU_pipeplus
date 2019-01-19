`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:42:13 12/10/2018
// Design Name:   F
// Module Name:   C:/Users/ThinkPad/Documents/ISE/mips/mips/mips/cpu/datapath/1_F/F_tb.v
// Project Name:  mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: F
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module F_tb;

	// Inputs
	reg [31:0] NPC;
	reg [1:0] NPC_Sel;
	reg Branch;
	reg [31:0] MF_RS_D_OUT;
	reg Clk;
	reg Reset;
	reg StallF;
	reg StallD;
	reg [31:0] EPC;
	reg exp_in;
	reg exp_out;

	// Outputs
	wire [31:0] IRD;
	wire [31:0] PC4D;
	wire [6:2] ExcCodeF;

	// Instantiate the Unit Under Test (UUT)
	F uut (
		.NPC(NPC), 
		.NPC_Sel(NPC_Sel), 
		.Branch(Branch), 
		.MF_RS_D_OUT(MF_RS_D_OUT), 
		.Clk(Clk), 
		.Reset(Reset), 
		.StallF(StallF), 
		.StallD(StallD), 
		.IRD(IRD), 
		.PC4D(PC4D), 
		.ExcCodeF(ExcCodeF), 
		.EPC(EPC), 
		.exp_in(exp_in), 
		.exp_out(exp_out)
	);

	initial begin
		// Initialize Inputs
		NPC = 0;
		NPC_Sel = 0;
		Branch = 0;
		MF_RS_D_OUT = 0;
		Clk = 0;
		Reset = 0;
		StallF = 0;
		StallD = 0;
		EPC = 0;
		exp_in = 0;
		exp_out = 0;

		#5;
		NPC = 32'h0000_5000;
		NPC_Sel = 1;
		#20;
		NPC = 32'h0000_3000;
		NPC_Sel = 1;
		#20;
		NPC = 32'h0000_3001;
		#20;
		NPC = 32'h0000_4000;
		#20;
		NPC = 32'h0000_1000;
		#20;
		NPC = 32'h0000_3000;
		#20;
		EPC = 32'h0000_3020;
		exp_in = 1;
		#20;
		exp_in = 0;
		NPC_Sel = 0;
		#40;
		exp_out = 1;
		
	end
	
	always #10 Clk = ~Clk;
      
endmodule

