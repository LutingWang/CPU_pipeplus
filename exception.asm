.ktext 0x00004180
mfc0 $1, $12
mfc0 $1, $13
mfc0 $1, $14
add $1, $1, $t0
add $1, $1, $t0
mtc0 $1, $14
eret
.text
mtc0 $0, $12
mtc0 $0, $13
mtc0 $0, $14
ori $t0, $0, 4
lui $t1, 0x7fff
ori $t1, $t1, 0xffff
lui $t2, 0x8000
ori $t2, $t2, 0x0001
# timer
ori $a0, $0, 0x00000080
sw $a0, 0x00007f04
ori $a0, $0, 0x0000000b
sw $a0, 0x00007f00
sw $a0, 0x00007f08
nop
sw $a0, 0x00007f0c
nop
sw $a0, 0x00007f05
nop
lw $s0, 0x00007f00
lw $s1, 0x00007f04
lw $s2, 0x00007f08
lw $s3, 0x0000700c
lw $s4, 0x0007f10
lw $s5, 0x00007f14
lw $s6, 0x00007f18
lw $s7, 0x00007f1c
# ri
la $s1, 0x00000004
nop
lb $s1, 0x00000003
nop
beq $0, $0, mark1
	sb $s1, 0x00000007
	sh $s1, 0x00000012
mark1:
# ov
add $s0, $t1, $t1
nop
add $s1, $t2, $t2
nop
sub $s2, $t1, $t2
nop
sub $s3, $t2, $t1
nop
beq $0, $0, mark2
	add $s0, $t1, $t1
mark2:
beq $0, $0, mark3
	add $s1, $t2, $t2
mark3:
beq $0, $0, mark4
	sub $s2, $t1, $t2
mark4:
beq $0, $0, mark5
	sub $s3, $t2, $t1
mark5:
# adel_e
lw $s0, -5($t2)
nop
lw $s0, 5($t1)
nop
beq $0, $0, mark6
	lw $s0, -5($t2)
mark6:
beq $0, $0, mark7
	lw $s0, 5($t1)
mark7:
# adel_m
lw $s0, -2($t2)
nop
lw $s0, 3($t1)
nop
beq $0, $0, mark8
	lw $s0, -2($t2)
mark8:
beq $0, $0, mark9
	lw $s0, 3($t1)
mark9:
mfc0 $s0, $14
lw $t0, 0($s0)
nop
beq $0, $0, mark10
	lw $t0, 0($s0)
mark10:
# ades_e
sw $s0, -5($t2)
nop
sw $s0, 5($t1)
nop
beq $0, $0, mark11
	sw $s0, -5($t2)
mark11:
beq $0, $0, mark12
	sw $s0, 5($t1)
mark12:
# ades_m
sw $s0, -2($t2)
nop
sw $s0, 3($t1)
nop
beq $0, $0, mark13
	sw  $s0, -2($t2)
mark13:
beq $0, $0, mark14
	sw $s0, 3($t1)
mark14:
mfc0 $s0, $14
sw $t0, 0($s0)
nop
beq $0, $0, mark15
	sw $t0, 0($s0)
mark15:
# adel_f
ori $s1, $0, 0x00003011
jr $s1
	nop
ori $s1, $0, 0x00002ffc
jr $s1
	nop