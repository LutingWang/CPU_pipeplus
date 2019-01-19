# CPU_pipeplus

## Overview

This is the final version of ***Project 7 CPU pipeplus*** of ***BUAA Computer Origanization*** year 2018 - 2019. The project is written in Verilog and is designed handle the MIPS-Lite3 Instruction Set. 

**WARNING: the project is used only for study! Cloning the whole project and submitting it as your project is a serious violation of the course regulations. Cheating will bring about numerous penalties. Moreover, nobody ensures the project being absolutely correct. Please test it before you put into use.** 

## Project Info

The project consists of one 5-stage pipeline CPU, using one set of instruction and data cache. Upon booting (stating simulation in ISim), the CPU model automatically searches for ./CPU_monocycle/code.txt and loads it into the instruction cache. Then the model will execute the instructions in order.

### Instruction Set

The project supports nop, sll, srl, sra, sllv, srlv, srav, jr, jalr, mfhi, mthi, mflo, mtlo, mult, multu, div, divu, add, addu, sub, subu, and, nor, or, xor, slt, sltu, bgez, bltz, beq, bne, blez, bgtz, addi, addiu, slti, sltiu, andi, ori, xori, lui, lb, lh, lw, lbu, lhu, sb, sh, sw, j, jal, mfc0, mtc0, eret.

### Hazard

The model detects instruction conflicts and hazards, and will stall only if it has to. Therefore, the efficiency is maximized under this particular condition.

### Branch Delay

Branch delay is regarded as a normal hardware behavior, meaning that the first instruction following a branch instruction or jump instruction will be unconditionally executed. Eret is not one of the jump instructions and no instruction after eret shall be executed.

### Interupts and Exceptions

The model is designed to be capable of handling interupts and exceptions. Under both occasions, the flow of instructions are redirected into kernel, starting at 0x00004180. The difference is that interupts are generated from external devices, while exceptions are errors happened executing the program. 

In this project, interupts could only come from timer (an external device, whose utilities will be illucinated later). 

Exceptions include AdEL (Fetch or load address alignment error), AdES (Store address alignment error), RI (Execution of a Reserved Instruction), Ov (Arithmetic overflow). Also, jumping into kernel will not be counted as a jump instruction.

## Testing

A short piece of MIPS code is attached to the project, in order to test the model. The files named exceptions.asm under top derictory can be opened and edited in any text pocessing applications, while MARS is specifically preffered. MARS is an open-source, lightweight application developed in Java, intending to simulate the behavior of MIPS CPU. 

To test the project, first open an asm file in MARS. After compiling the source code, a hexdecimal version of the binary code can be exported. **It is exceedingly crucial that the files are named code.txt and code_handler.txt, respectively storing .text and .ktext segment, and are placed immediately under /CPU_pipeplus.**

Thereafter, open the project in ISE and run ISim to inspect the values of all registers. You could compare the values in ISim and those in MARS, or you can also check the value information output in the console.
