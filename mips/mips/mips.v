`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:13 12/11/2018 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );

	wire [31:2] PrAddr;
	wire [31:0] PrRD, PrWD, timer1_RD, timer2_RD, timer_WD;
	wire PrWe, timer1_We, timer2_We, IRQ1, IRQ2;
	wire [1:0] timer_addr;
	
	cpu CPU ( 
    .Clk(clk), 
    .Reset(reset), 
    .HWInt({4'b0, IRQ2, IRQ1}), 
    .PrRD(PrRD), 
    .PrAddr(PrAddr), 
    .PrWD(PrWD), 
    .PrWe(PrWe)
    );
	 
	bridge Bridge (
    .PrAddr(PrAddr), 
    .PrRD(PrRD), 
    .PrWD(PrWD), 
    .PrWe(PrWe), 
    .timer_addr(timer_addr), 
    .timer1_RD(timer1_RD), 
    .timer2_RD(timer2_RD), 
    .timer_WD(timer_WD), 
    .timer1_We(timer1_We), 
    .timer2_We(timer2_We)
    );
	 
	timer timer1 (
    .Addr(timer_addr), 
    .Wd(timer_WD), 
    .We(timer1_We), 
    .Clk(clk), 
    .Reset(reset), 
    .Rd(timer1_RD), 
    .IRQ(IRQ1)
    );
	
	timer timer2 (
    .Addr(timer_addr), 
    .Wd(timer_WD), 
    .We(timer2_We), 
    .Clk(clk), 
    .Reset(reset), 
    .Rd(timer2_RD), 
    .IRQ(IRQ2)
    );

endmodule
