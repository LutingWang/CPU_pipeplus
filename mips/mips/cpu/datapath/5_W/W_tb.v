`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:41:40 12/04/2018
// Design Name:   W
// Module Name:   C:/Users/ThinkPad/Documents/ISE/CPU_pipeline/CPU_pipeline/mips/datapath/5_W/W_tb.v
// Project Name:  CPU_pipeline
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: W
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module W_tb;

	// Inputs
	reg [31:0] IRW;
	reg [31:0] PC8W;
	reg [31:0] AOW;
	reg [31:0] DRW;

	// Outputs
	wire [4:0] MUX_RF_A3_OUT;
	wire [31:0] MUX_RF_WD_OUT;
	wire RegWrite;

	// Instantiate the Unit Under Test (UUT)
	W uut (
		.IRW(IRW), 
		.PC8W(PC8W), 
		.AOW(AOW), 
		.DRW(DRW), 
		.MUX_RF_A3_OUT(MUX_RF_A3_OUT), 
		.MUX_RF_WD_OUT(MUX_RF_WD_OUT), 
		.RegWrite(RegWrite)
	);

	initial begin
		// Initialize Inputs
		IRW = 0;
		PC8W = 0;
		AOW = 0;
		DRW = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

