`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:45 11/25/2018 
// Design Name: 
// Module Name:    ctrl 
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
module ctrl(
    input [31:0] instr,
	 output [1:0] NPC_Sel,
	 output NPCOp,
	 output [2:0] CmpOp,
    output [1:0] ExtOp,
	 output ALUASrc,
	 output ALUBSrc,
    output [3:0] ALUOp,
	 output [2:0] MuDiOp,
	 output MuDiWrite,
	 output MuDiStart,
	 output AOSrc, 
	 output [1:0] BEOp, 
	 output MemWrite,
	 output [1:0] RegDst,
	 output LoadExtOp, 
	 output [1:0] DataSrc,
    output RegWrite,
	 output [3:0] ic,
	 output [5:0] A1,
	 output [5:0] A2,
	 output [5:0] A3,
	 output RI_exp,
	 output iseret,
	 output iscp0,
	 output cp0_we
    );

	`include "header.v"
	`include "expint.v"
	
	// Segment
	wire [`OpCode] OpCode; 
	wire [`rs] rs; 
	wire [`rt] rt; 
	wire [`rd] rd; 
	wire [`Shamt] Shamt; 
	wire [`Funct] Funct;
	wire [`imm] imm;
	wire [`instr_index] instr_index;
	
	assign OpCode = instr[`OpCode];
	assign rs = instr[`rs];
	assign rt = instr[`rt];
	assign rd = instr[`rd];
	assign Shamt = instr[`Shamt];
	assign Funct = instr[`Funct];
	assign imm = instr[`imm];
	assign instr_index = instr[`instr_index];
	
	// Decode
		// R
		assign nop = (instr == `nop) ? 1 : 0;
		assign sll = (OpCode == `R && rs == 5'b0 && (rt != 5'b0 || rd != 5'b0 || Shamt != 5'b0) && Funct == `sll) ? 1 : 0;
		assign srl = (OpCode == `R && rs == 5'b0 && Funct == `srl) ? 1 : 0;
		assign sra = (OpCode == `R && rs == 5'b0 && Funct == `sra) ? 1 : 0;
		assign sllv = (OpCode == `R && Shamt == 5'b0 && Funct == `sllv) ? 1 : 0;
		assign srlv = (OpCode == `R && Shamt == 5'b0 && Funct == `srlv) ? 1 : 0;
		assign srav = (OpCode == `R && Shamt == 5'b0 && Funct == `srav) ? 1 : 0;
		assign jr = (OpCode == `R && rt == 5'b0 && rd == 5'b0 && Shamt == 5'b0 && Funct == `jr) ? 1 : 0;
		assign jalr = (OpCode == `R && rt == 5'b0 && Shamt == 5'b0 && Funct == `jalr) ? 1 : 0;
							
		assign mfhi = (OpCode == `R && rs == 5'b0 &&rt == 5'b0 && Shamt == 5'b0 && Funct == `mfhi) ? 1 : 0;
		assign mthi = (OpCode == `R && rt == 5'b0 && rd == 5'b0 && Shamt == 5'b0 && Funct == `mthi) ? 1 : 0;
		assign mflo = (OpCode == `R && rs == 5'b0 &&rt == 5'b0 && Shamt == 5'b0 && Funct == `mflo) ? 1 : 0;
		assign mtlo = (OpCode == `R && rt == 5'b0 && rd == 5'b0 && Shamt == 5'b0 && Funct == `mtlo) ? 1 : 0;
		assign mult = (OpCode == `R && rd == 5'b0 && Shamt == 5'b0 && Funct == `mult) ? 1 : 0;
		assign multu = (OpCode == `R && rd == 5'b0 && Shamt == 5'b0 && Funct == `multu) ? 1 : 0;
		assign div = (OpCode == `R && rd == 5'b0 && Shamt == 5'b0 && Funct == `div) ? 1 : 0;
		assign divu = (OpCode == `R && rd == 5'b0 && Shamt == 5'b0 && Funct == `divu) ? 1 : 0;
		
		assign add = (OpCode == `R && Shamt == 5'b0 && Funct == `add) ? 1 : 0;
		assign addu = (OpCode == `R && Shamt == 5'b0 && Funct == `addu) ? 1 : 0;
		assign sub = (OpCode == `R && Shamt == 5'b0 && Funct == `sub) ? 1 : 0;
		assign subu = (OpCode == `R && Shamt == 5'b0 && Funct == `subu) ? 1 : 0;
		assign is_and = (OpCode == `R && Shamt == 5'b0 && Funct == `and_funct) ? 1 : 0;
		assign is_nor = (OpCode == `R && Shamt == 5'b0 && Funct == `nor_funct) ? 1 : 0;
		assign is_or = (OpCode == `R && Shamt == 5'b0 && Funct == `or_funct) ? 1 : 0;
		assign is_xor = (OpCode == `R && Shamt == 5'b0 && Funct == `xor_funct) ? 1 : 0;
		assign slt = (OpCode == `R && Shamt == 5'b0 && Funct == `slt) ? 1 : 0;
		assign sltu = (OpCode == `R && Shamt == 5'b0 && Funct == `sltu) ? 1 : 0;
		// I
		assign bgez = (OpCode == `bgez && rt == 5'b00001) ? 1 : 0;
		assign bltz = (OpCode == `bltz && rt == 5'b00000) ? 1 : 0;
		assign beq = (OpCode == `beq) ? 1 : 0;
		assign bne = (OpCode == `bne) ? 1 : 0;
		assign blez = (OpCode == `blez && rt == 5'b00000) ? 1 : 0;
		assign bgtz = (OpCode == `bgtz && rt == 5'b00000) ? 1 : 0;
		
		assign addi = (OpCode == `addi) ? 1 : 0;
		assign addiu = (OpCode == `addiu) ? 1 : 0;
		assign slti = (OpCode == `slti) ? 1 : 0;
		assign sltiu = (OpCode == `sltiu) ? 1 : 0;
		assign andi = (OpCode == `andi) ? 1 : 0;
		assign ori = (OpCode == `ori) ? 1 : 0;
		assign xori = (OpCode == `xori) ? 1 : 0;
		assign lui = (OpCode == `lui && rs == 5'b0) ? 1 : 0;
		assign lb = (OpCode == `lb) ? 1 : 0;
		assign lh = (OpCode == `lh) ? 1 : 0;
		assign lw = (OpCode == `lw) ? 1 : 0;
		assign lbu = (OpCode == `lbu) ? 1 : 0;
		assign lhu = (OpCode == `lhu) ? 1 : 0;
		assign sb = (OpCode == `sb) ? 1 : 0;
		assign sh = (OpCode == `sh) ? 1 : 0;
		assign sw = (OpCode == `sw) ? 1 : 0;
		// J
		assign j = (OpCode == `j) ? 1 : 0;
		assign jal = (OpCode == `jal) ? 1 : 0;
		// Exception
		assign mfc0 = (OpCode == `COP0 && rs == 5'b0 && Shamt == 5'b0 && Funct == 6'b0) ? 1 : 0;
		assign mtc0 = (OpCode == `COP0 && rs == `mtc0 && Shamt == 5'b0 && Funct == 6'b0) ? 1 : 0;
		assign eret = (instr == `eret) ? 1 : 0;
	
	// Exception
	assign iseret = eret;
	assign cp0_we = mtc0;
	assign iscp0 = (mfc0 || mtc0) ? 1 : 0;
	assign RI_exp = (ic == `hzd_default) ? 1 : 0;
	
	// AT Decoder
	assign ic = (add + addu + is_and + is_nor + is_or + sll + sllv + slt + sltu + sra + srav + srl + srlv + sub + subu + is_xor) ? `hzd_cal_r : 
	            (addi + addiu + andi + lui + ori + slti + sltiu + xori) ? `hzd_cal_i :
					(lb + lbu + lh + lhu + lw) ? `hzd_load :
					(sb + sh + sw) ? `hzd_store :
					(beq + bgez + bgtz + blez + bltz + bne) ? `hzd_b :
					(j + eret) ? `hzd_j :
					(jr) ? `hzd_jr :
					(jal) ? `hzd_jal :
					(jalr) ? `hzd_jalr :
					(mfhi + mflo) ? `hzd_mf :
					(mthi + mtlo) ? `hzd_mt : 
					(div + divu + mult + multu) ? `hzd_mudi :
					(mfc0) ? `hzd_cp0_load :
					(mtc0) ? `hzd_cp0_store :
					(nop) ? `hzd_nop :
					`hzd_default;
	
	assign A1 = (ic == `hzd_b || (ic == `hzd_cal_i && ~lui) || (ic == `hzd_cal_r && ~sll && ~sra && ~srl) || jalr || jr || ic == `hzd_load || ic == `hzd_mt || ic == `hzd_mudi || ic == `hzd_store) ? {1'b0, rs} :
					(ic == `hzd_cp0_load) ? {1, rd} :
					(mfhi) ? `hi :
					(mflo) ? `lo :
					6'b0;
	assign A2 = (beq || bne || ic == `hzd_cal_r || ic == `hzd_mudi || mtc0 || ic == `hzd_store) ? {1'b0, rt} :
					6'b0;
	assign A3 = (ic == `hzd_cal_r || jalr || ic == `hzd_mf) ? {0, rd} :
					(ic == `hzd_cal_i || ic == `hzd_load || mfc0) ? {0, rt} :
					(jal) ? 6'b011111 :
					(mthi) ? `hi :
					(mtlo) ? `lo :
					(mtc0) ? {1, rd} :
					6'b0;
	
	// Controller
	assign NPC_Sel = (ic == `hzd_nop || ic == `hzd_cal_i || ic == `hzd_cal_r || ic == `hzd_load || mfc0 || ic == `hzd_mf || ic == `hzd_mt || ic == `hzd_mudi || mtc0 || ic == `hzd_store) ? `npc_add4 :
	                 (j + jal) ? `npc_jump :
						  (ic == `hzd_b) ? `npc_branch :
						  (jr + jalr) ? `npc_jr :
						  `npc_default;
	assign NPCOp = (j + jal) ? `npc_ext_j :
	               (ic == `hzd_b) ? `npc_ext_b :
						`npc_ext_default;
	assign CmpOp = (beq) ? `cmp_eq :
						(bgez) ? `cmp_gez :
						(bgtz) ? `cmp_gtz :
						(blez) ? `cmp_lez :
						(bltz) ? `cmp_ltz :
						(bne) ? `cmp_ne :
						`cmp_default;
	assign ExtOp = (andi + xori + ori) ? `ext_unsigned :
	               (addi || addiu || slti || sltiu || ic == `hzd_load || ic == `hzd_store) ? `ext_signed :
						(lui) ? `ext_lui :
						`ext_default; 
	assign ALUASrc = (ic == `hzd_cal_i || (ic == `hzd_cal_r && ~sll && ~sra && ~srl) || ic == `hzd_load || ic == `hzd_store || ic == `hzd_mudi) ? `alu_a_rd1 :
							(sll + sra + srl) ? `alu_a_shamt :
							`alu_a_default;
	assign ALUBSrc = (ic == `hzd_cal_r || ic == `hzd_mudi) ? `alu_b_rd2 :
	                (ic == `hzd_cal_i || ic == `hzd_load || ic == `hzd_store) ? `alu_b_imm :
						 `alu_b_default;
	assign ALUOp = ((addi + addiu + add + addu) || ic == `hzd_load || ic == `hzd_store) ? `alu_add :
	               (sub + subu) ? `alu_sub :
						(andi + is_and) ? `alu_and : 
						(lui + ori + is_or) ? `alu_or :
						(is_nor) ? `alu_nor :
						(xori + is_xor) ? `alu_xor :
						(slti + slt) ? `alu_lt :
						(sltiu + sltu) ? `alu_ltu :
						(sll + sllv) ? `alu_sll :
						(sra + srav) ? `alu_sra :
						(srl + srlv) ? `alu_srl :
						`alu_default;
	assign MuDiOp = (div) ? `mudi_div :
							(divu) ? `mudi_divu :
							(mult) ? `mudi_mult :
							(multu) ? `mudi_multu :
							(mthi) ? `mudi_mthi :
							(mtlo) ? `mudi_mtlo :
							(mfhi) ? `mudi_mfhi :
							(mflo) ? `mudi_mflo :
							`mudi_default;
	assign MuDiWrite = (ic == `hzd_mt) ? 1 : 0;
	assign MuDiStart = (ic == `hzd_mudi) ? 1 : 0;
	assign AOSrc = (ic == `hzd_mf) ? `ao_mudi : `ao_alu;
	assign BEOp = (lb + lbu + sb) ? `be_byte :
						(lh + lhu + sh) ? `be_half :
						(lw + sw) ? `be_word :
						`be_default; 
	assign MemWrite = (ic == `hzd_store) ? 1 : 0;
	assign RegDst = (ic == `hzd_cal_r || jalr || ic == `hzd_mf) ? `RegDst_A3 :
	                (ic == `hzd_cal_i || ic == `hzd_load || mfc0) ? `RegDst_A2 :
						 (jal) ? `RegDst_ra :
						 `RegDst_default;
	assign LoadExtOp = (lb + lh) ? `load_ext_signed :
								(lbu + lhu) ? `load_ext_unsigned : 
								//(lw + mfc0) ? `load_ext_default : 
								`load_ext_default;
	assign DataSrc = (ic == `hzd_cal_r || ic == `hzd_cal_i || ic == `hzd_mf) ? `DataSrc_alu :
	                 (ic == `hzd_load || mfc0) ? `DataSrc_dm :
						  (jalr + jal) ? `DataSrc_pc4 :
						  `DataSrc_default;
	assign RegWrite = (ic == `hzd_cal_i || ic == `hzd_cal_r || ic == `hzd_load || jal || jalr || mfc0 || ic == `hzd_mf) ? 1 : 0;

endmodule
