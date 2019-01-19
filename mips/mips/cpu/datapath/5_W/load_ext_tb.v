`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:14:23 12/17/2018
// Design Name:   loadExt
// Module Name:   C:/Users/ThinkPad/Documents/ISE/mips/mips/mips/cpu/datapath/5_W/load_ext_tb.v
// Project Name:  mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: loadExt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module load_ext_tb;

	// Inputs
	reg [31:0] Dr;
	reg [1:0] Addr;
	reg [1:0] BEOp;
	reg LoadExtOp;

	// Outputs
	wire [31:0] Ext;

	// Instantiate the Unit Under Test (UUT)
	loadExt uut (
		.Dr(Dr), 
		.Addr(Addr), 
		.BEOp(BEOp), 
		.LoadExtOp(LoadExtOp), 
		.Ext(Ext)
	);

	initial begin
		// Initialize Inputs
		Dr = 0;
		Addr = 0;
		BEOp = 0;
		LoadExtOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		Dr = 32'h00005604;
		Addr = 2'b00;
		BEOp = 2'b00;
		LoadExtOp = 1;
	end
      
endmodule

