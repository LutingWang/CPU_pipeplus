`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:43:24 12/04/2018
// Design Name:   M
// Module Name:   C:/Users/ThinkPad/Documents/ISE/CPU_pipeline/CPU_pipeline/mips/datapath/4_M/M_tb.v
// Project Name:  CPU_pipeline
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: M
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module M_tb;

	// Inputs
	reg [31:0] IRM;
	reg [31:0] PC8M;
	reg [31:0] AOM;
	reg [31:0] RTM;
	reg Clk;
	reg Reset;
	reg [2:0] Forward_RT_M_Sel;
	reg [31:0] MUX_RF_WD_OUT;

	// Outputs
	wire [31:0] IRW;
	wire [31:0] PC8W;
	wire [31:0] AOW;
	wire [31:0] DRW;

	// Instantiate the Unit Under Test (UUT)
	M uut (
		.IRM(IRM), 
		.PC8M(PC8M), 
		.AOM(AOM), 
		.RTM(RTM), 
		.Clk(Clk), 
		.Reset(Reset), 
		.IRW(IRW), 
		.PC8W(PC8W), 
		.AOW(AOW), 
		.DRW(DRW), 
		.Forward_RT_M_Sel(Forward_RT_M_Sel), 
		.MUX_RF_WD_OUT(MUX_RF_WD_OUT)
	);

	initial begin
		// Initialize Inputs
		IRM = 0;
		PC8M = 0;
		AOM = 0;
		RTM = 0;
		Clk = 0;
		Reset = 0;
		Forward_RT_M_Sel = 0;
		MUX_RF_WD_OUT = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

