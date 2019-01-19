/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/mips/mips/mips/cpu/expectation/expF.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {20479U, 0U};
static unsigned int ng3[] = {12288U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {31U, 0U};



static void Cont_27_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t47[8];
    char t51[8];
    char t59[8];
    char t87[8];
    char t103[8];
    char t107[8];
    char t115[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 600U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB5;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    memcpy(t59, t31, 8);

LAB14:    memset(t87, 0, 8);
    t88 = (t59 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t59);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t88) != 0)
        goto LAB29;

LAB30:    t95 = (t87 + 4);
    t96 = *((unsigned int *)t87);
    t97 = (!(t96));
    t98 = *((unsigned int *)t95);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB31;

LAB32:    memcpy(t115, t87, 8);

LAB33:    memset(t4, 0, 8);
    t143 = (t115 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t115);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t143) != 0)
        goto LAB48;

LAB49:    t150 = (t4 + 4);
    t151 = *((unsigned int *)t4);
    t152 = *((unsigned int *)t150);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB50;

LAB51:    t155 = *((unsigned int *)t4);
    t156 = (~(t155));
    t157 = *((unsigned int *)t150);
    t158 = (t156 || t157);
    if (t158 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t150) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t4) > 0)
        goto LAB56;

LAB57:    memcpy(t3, t159, 8);

LAB58:    t160 = (t0 + 1592);
    t161 = (t160 + 32U);
    t162 = *((char **)t161);
    t163 = (t162 + 40U);
    t164 = *((char **)t163);
    memset(t164, 0, 8);
    t165 = 31U;
    t166 = t165;
    t167 = (t3 + 4);
    t168 = *((unsigned int *)t3);
    t165 = (t165 & t168);
    t169 = *((unsigned int *)t167);
    t166 = (t166 & t169);
    t170 = (t164 + 4);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t171 | t165);
    t172 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t172 | t166);
    xsi_driver_vfirst_trans(t160, 0, 4);
    t173 = (t0 + 1548);
    *((int *)t173) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t45 = (t0 + 600U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng2)));
    memset(t47, 0, 8);
    t48 = (t46 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB16;

LAB15:    t49 = (t45 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t46) > *((unsigned int *)t45))
        goto LAB17;

LAB18:    memset(t51, 0, 8);
    t52 = (t47 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t47);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t52) != 0)
        goto LAB22;

LAB23:    t60 = *((unsigned int *)t31);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t31 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB14;

LAB16:    t50 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t47) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t51) = 1;
    goto LAB23;

LAB22:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB23;

LAB24:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t31 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t31);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB26;

LAB27:    *((unsigned int *)t87) = 1;
    goto LAB30;

LAB29:    t94 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB30;

LAB31:    t101 = (t0 + 600U);
    t102 = *((char **)t101);
    t101 = ((char*)((ng3)));
    memset(t103, 0, 8);
    t104 = (t102 + 4);
    if (*((unsigned int *)t104) != 0)
        goto LAB35;

LAB34:    t105 = (t101 + 4);
    if (*((unsigned int *)t105) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t102) < *((unsigned int *)t101))
        goto LAB36;

LAB37:    memset(t107, 0, 8);
    t108 = (t103 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t103);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t108) != 0)
        goto LAB41;

LAB42:    t116 = *((unsigned int *)t87);
    t117 = *((unsigned int *)t107);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = (t87 + 4);
    t120 = (t107 + 4);
    t121 = (t115 + 4);
    t122 = *((unsigned int *)t119);
    t123 = *((unsigned int *)t120);
    t124 = (t122 | t123);
    *((unsigned int *)t121) = t124;
    t125 = *((unsigned int *)t121);
    t126 = (t125 != 0);
    if (t126 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t106 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t103) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t107) = 1;
    goto LAB42;

LAB41:    t114 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB42;

LAB43:    t127 = *((unsigned int *)t115);
    t128 = *((unsigned int *)t121);
    *((unsigned int *)t115) = (t127 | t128);
    t129 = (t87 + 4);
    t130 = (t107 + 4);
    t131 = *((unsigned int *)t129);
    t132 = (~(t131));
    t133 = *((unsigned int *)t87);
    t134 = (t133 & t132);
    t135 = *((unsigned int *)t130);
    t136 = (~(t135));
    t137 = *((unsigned int *)t107);
    t138 = (t137 & t136);
    t139 = (~(t134));
    t140 = (~(t138));
    t141 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t141 & t139);
    t142 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t142 & t140);
    goto LAB45;

LAB46:    *((unsigned int *)t4) = 1;
    goto LAB49;

LAB48:    t149 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB49;

LAB50:    t154 = ((char*)((ng4)));
    goto LAB51;

LAB52:    t159 = ((char*)((ng5)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t3, 5, t154, 5, t159, 5);
    goto LAB58;

LAB56:    memcpy(t3, t154, 8);
    goto LAB58;

}


extern void work_m_00000000000057317684_1777874141_init()
{
	static char *pe[] = {(void *)Cont_27_0};
	xsi_register_didat("work_m_00000000000057317684_1777874141", "isim/cpu_tb_isim_beh.exe.sim/work/m_00000000000057317684_1777874141.didat");
	xsi_register_executes(pe);
}
