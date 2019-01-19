`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:04 12/03/2018 
// Design Name: 
// Module Name:    M 
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
module M(
    input [31:0] IRM,
    input [31:0] PC4M,
    input [31:0] AOM,
    input [31:0] RTM,
    input Clk,
    input Reset,
    output reg [31:0] IRW,
    output reg [31:0] PC4W,
    output reg [31:0] AOW,
    output reg [31:0] DRW,
    input [2:0] Forward_RT_M_Sel,
    input [31:0] MUX_RF_WD_OUT,
	 output [31:0] D2write,
	 input [31:0] Dread_exp,
	 input exp_in,
	 input [6:2] ExcCodeM,
	 output [6:2] ExcCode,
	 input [31:0] PrRD,
	 output [31:2] PrAddr,
	 output [31:0] PrWD,
	 output PrWe
    );
	 
	`include "header.v"
	`include "expint.v"
	
	wire [31:0] MF_RT_M_OUT, Dout;
	wire [3:0] Be;
	wire [1:0] BEOp;
	wire MemWrite;
	
	wire iscp0, ade_be;
	assign D2write = MF_RT_M_OUT;
	assign PrAddr = AOM[31:2];
	assign PrWD = MF_RT_M_OUT;
	assign PrWe = MemWrite;
	
	always @(posedge Clk) begin
		if (~Reset && MemWrite && ~exp_in && $unsigned(AOM) <= 32'h0000_2fff) begin
			$display("%d@%h: *%h <= %h", $time, PC4M-4, {AOM[31:2], 2'b00}, DMM.D2write); 
		end
	end
	
	initial begin
		IRW = 32'b0;
		PC4W = 32'b0;
		AOW = 32'b0;
		DRW = 32'b0;
	end
	always @(posedge Clk) begin
		if (Reset || exp_in) begin
			IRW = 32'b0;
			PC4W = 32'b0;
			AOW = 32'b0;
			DRW = 32'b0;
		end else begin
			IRW = IRM;
			PC4W = PC4M;
			AOW = AOM;
			DRW = (iscp0) ? Dread_exp : 
						($unsigned(AOM) < 32'h0000_3000) ? Dout :
						PrRD;
		end
	end

	expM EXPM (
    .ExcCodeM(ExcCodeM), 
    .AOM(AOM), 
    .IRM(IRM), 
	 .ade_be(ade_be),
    .ExcCode(ExcCode)
    );
	
	ctrl controllerM (
    .instr(IRM),
    .MemWrite(MemWrite), 
	 .BEOp(BEOp), 
	 .iscp0(iscp0)
    );
	
	be BE (
    .Addr(AOM), 
    .BEOp(BEOp), 
    .Be(Be), 
    .ade(ade_be)
    );
	
	dm DMM (
    .Addr(AOM[13:2]), 
    .Din(MF_RT_M_OUT), 
	 .Be(Be), 
    .We(MemWrite && ~exp_in), 
    .Clk(Clk), 
    .Reset(Reset), 
    .Dout(Dout)
    );
	 
	mf MF_RT_M (
    .Wd(MUX_RF_WD_OUT), 
    .Rd(RTM), 
    .Forward_Sel(Forward_RT_M_Sel), 
    .MF_OUT(MF_RT_M_OUT)
    );

endmodule
