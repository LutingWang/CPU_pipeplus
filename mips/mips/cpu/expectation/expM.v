`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:35 12/10/2018 
// Design Name: 
// Module Name:    expM 
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
module expM(
    input [6:2] ExcCodeM,
    input [31:0] AOM,
    input [31:0] IRM,
	 input ade_be,
    output [6:2] ExcCode
    );

	`include "header.v"
	`include "expint.v"
	
	wire [3:0] ic;
	assign addr_overflow = ($unsigned(AOM) < 32'h0000_3000 || 
										($unsigned(AOM) >= 32'h00007f00 && $unsigned(AOM) <= 32'h00007f0b) ||
										($unsigned(AOM) >= 32'h00007f10 && $unsigned(AOM) <= 32'h00007f1b)) ? 0 : 1;
	assign ExcCode = ((addr_overflow || ade_be) && ic == `hzd_load) ? `ExcCode_adel :
								((addr_overflow || ade_be || AOM == `timer1_count_addr || AOM == `timer2_count_addr) && ic == `hzd_store) ? 
								`ExcCode_ades : ExcCodeM;
	
	ctrl atM (
    .instr(IRM), 
    .ic(ic)
    );

endmodule
