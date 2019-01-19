`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:01:12 12/19/2018
// Design Name:   timer
// Module Name:   C:/Users/ThinkPad/Documents/ISE/mips-bd/mips/mips/timer/timer_tb.v
// Project Name:  mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: timer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module timer_tb;

	// Inputs
	reg [1:0] Addr;
	reg [31:0] Wd;
	reg We;
	reg Clk;
	reg Reset;

	// Outputs
	wire [31:0] Rd;
	wire IRQ;

	// Instantiate the Unit Under Test (UUT)
	timer uut (
		.Addr(Addr), 
		.Wd(Wd), 
		.We(We), 
		.Clk(Clk), 
		.Reset(Reset), 
		.Rd(Rd), 
		.IRQ(IRQ)
	);

	initial begin
		// Initialize Inputs
		Addr = 0;
		Wd = 0;
		We = 0;
		Clk = 0;
		Reset = 0;

		#5; 
		Addr = 1;
		Wd = 1;
		We = 1;
		#20;
		Addr = 0;
		Wd = 11;
		We = 1;
		#20; 
		We = 0;
		#20;#120;
		Addr = 0;
		Wd = 10;
		We = 1;
		#20;
		We = 0;
	end
	
	always #10 Clk = ~Clk;
      
endmodule

