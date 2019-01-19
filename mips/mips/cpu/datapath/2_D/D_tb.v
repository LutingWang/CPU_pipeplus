`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:44:35 12/03/2018
// Design Name:   D
// Module Name:   C:/Users/ThinkPad/Documents/ISE/CPU_pipeline/CPU_pipeline/mips/datapath/2_D/D_tb.v
// Project Name:  CPU_pipeline
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: D
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module D_tb;

	// Inputs
	reg [31:0] IRD;
	reg [31:0] PC8D;
	reg Clk;
	reg Reset;
	reg FlushE;
	reg [2:0] Forward_RS_D_Sel;
	reg [2:0] Forward_RT_D_Sel;
	reg [31:0] PC8fromE;
	reg [31:0] AO;
	reg [31:0] PC8fromM;
	reg [31:0] MUX_RF_WD_OUT;
	reg [4:0] MUX_RF_A3_OUT;
	reg We;

	// Outputs
	wire Branch;
	wire [1:0] NPC_Sel;
	wire [31:0] NPC;
	wire [31:0] IRE;
	wire [31:0] PC8E;
	wire [31:0] RSE;
	wire [31:0] RTE;
	wire [31:0] EXTE;

	// Instantiate the Unit Under Test (UUT)
	D uut (
		.IRD(IRD), 
		.PC8D(PC8D), 
		.Clk(Clk), 
		.Reset(Reset), 
		.FlushE(FlushE), 
		.Forward_RS_D_Sel(Forward_RS_D_Sel), 
		.Forward_RT_D_Sel(Forward_RT_D_Sel), 
		.PC8fromE(PC8fromE), 
		.AO(AO), 
		.PC8fromM(PC8fromM), 
		.MUX_RF_WD_OUT(MUX_RF_WD_OUT), 
		.Branch(Branch), 
		.NPC_Sel(NPC_Sel), 
		.NPC(NPC), 
		.IRE(IRE), 
		.PC8E(PC8E), 
		.RSE(RSE), 
		.RTE(RTE), 
		.EXTE(EXTE), 
		.MUX_RF_A3_OUT(MUX_RF_A3_OUT), 
		.We(We)
	);

	initial begin
		// Initialize Inputs
		IRD = 0;
		PC8D = 0;
		Clk = 0;
		Reset = 0;
		FlushE = 0;
		Forward_RS_D_Sel = 0;
		Forward_RT_D_Sel = 0;
		PC8fromE = 0;
		AO = 0;
		PC8fromM = 0;
		MUX_RF_WD_OUT = 0;
		MUX_RF_A3_OUT = 0;
		We = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #10 Clk = ~Clk;
      
endmodule

