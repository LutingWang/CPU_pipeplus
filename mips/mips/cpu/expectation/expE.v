`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:19:33 12/10/2018 
// Design Name: 
// Module Name:    expE 
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
module expE(
    input [6:2] ExcCodeE,
    input V,
    input [31:0] IRE,
    output [6:2] ExcCodeM
    );
	 
	`include "header.v"
	`include "expint.v"

	wire cal_ov;
	assign cal_ov = ((IRE[`OpCode] == `R && IRE[`Shamt] == 5'b0 && IRE[`Funct] == `add) ||
							(IRE[`OpCode] == `R && IRE[`Shamt] == 5'b0 && IRE[`Funct] == `sub) || 
							(IRE[`OpCode] == `addi)) ? 1 : 0;
	
	wire [3:0] ic;
	assign ExcCodeM = (V && ic == `hzd_load) ? `ExcCode_adel :
								(V && ic == `hzd_store) ? `ExcCode_ades :
								(V && cal_ov) ? `ExcCode_ov :
								ExcCodeE;
	
	ctrl atE (
    .instr(IRE), 
    .ic(ic)
    );

endmodule
