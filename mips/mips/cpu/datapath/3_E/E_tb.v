`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:19:08 12/03/2018
// Design Name:   E
// Module Name:   C:/Users/ThinkPad/Documents/ISE/CPU_pipeline/CPU_pipeline/mips/datapath/3_E/E_tb.v
// Project Name:  CPU_pipeline
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: E
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module E_tb;

	// Inputs
	reg [31:0] IRE;
	reg [31:0] PC8E;
	reg [31:0] RSE;
	reg [31:0] RTE;
	reg [31:0] EXTE;
	reg Clk;
	reg Reset;
	reg [2:0] Forward_RS_E_Sel;
	reg [2:0] Forward_RT_E_Sel;
	reg [31:0] AO;
	reg [31:0] PC8fromM;
	reg [31:0] MUX_RF_WD_OUT;

	// Outputs
	wire [31:0] IRM;
	wire [31:0] PC8M;
	wire [31:0] AOM;
	wire [31:0] RTM;

	// Instantiate the Unit Under Test (UUT)
	E uut (
		.IRE(IRE), 
		.PC8E(PC8E), 
		.RSE(RSE), 
		.RTE(RTE), 
		.EXTE(EXTE), 
		.Clk(Clk), 
		.Reset(Reset), 
		.IRM(IRM), 
		.PC8M(PC8M), 
		.AOM(AOM), 
		.RTM(RTM), 
		.Forward_RS_E_Sel(Forward_RS_E_Sel), 
		.Forward_RT_E_Sel(Forward_RT_E_Sel), 
		.AO(AO), 
		.PC8fromM(PC8fromM), 
		.MUX_RF_WD_OUT(MUX_RF_WD_OUT)
	);

	initial begin
		// Initialize Inputs
		IRE = 0;
		PC8E = 0;
		RSE = 0;
		RTE = 0;
		EXTE = 0;
		Clk = 0;
		Reset = 0;
		Forward_RS_E_Sel = 0;
		Forward_RT_E_Sel = 0;
		AO = 0;
		PC8fromM = 0;
		MUX_RF_WD_OUT = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

