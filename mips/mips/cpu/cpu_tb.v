`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:13:38 12/18/2018
// Design Name:   cpu
// Module Name:   C:/Users/ThinkPad/Documents/ISE/mips/mips/mips/cpu/cpu_tb.v
// Project Name:  mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg [7:2] HWInt;
	reg [31:0] PrRD;

	// Outputs
	wire [31:2] PrAddr;
	wire [31:0] PrWD;
	wire PrWe;

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.HWInt(HWInt), 
		.PrRD(PrRD), 
		.PrAddr(PrAddr), 
		.PrWD(PrWD), 
		.PrWe(PrWe)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		HWInt = 0;
		PrRD = 0;

		#280; HWInt = 6'b000010;
		#20; HWInt = 0;
	end
	
	always #10 Clk = ~Clk;
      
endmodule

