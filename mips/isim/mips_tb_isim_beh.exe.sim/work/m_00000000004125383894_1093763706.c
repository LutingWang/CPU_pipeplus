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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/mips-bd/mips/mips/cpu/expectation/cp0.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {44U, 0U, 0U, 0U};
static unsigned int ng4[] = {45U, 0U, 0U, 0U};
static unsigned int ng5[] = {46U, 0U, 0U, 0U};
static unsigned int ng6[] = {47U, 0U, 0U, 0U};
static unsigned int ng7[] = {388169733U, 0U};
static int ng8[] = {0, 0};
static unsigned int ng9[] = {31U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {1107296280U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {9U, 0U};
static int ng16[] = {8, 0};
static int ng17[] = {4, 0};
static int ng18[] = {2, 0};



static void Cont_46_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2392);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4552);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4476);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_53_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2852);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t6, 30, t2, 2);
    t7 = (t0 + 4588);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 4484);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_57_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[16];
    char t8[16];
    char t20[8];
    char t28[8];
    char t45[8];
    char t46[8];
    char t47[16];
    char t51[16];
    char t63[8];
    char t65[8];
    char t78[8];
    char t98[8];
    char t99[8];
    char t100[16];
    char t104[16];
    char t116[8];
    char t125[8];
    char t126[8];
    char t127[16];
    char t131[16];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
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
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t128;
    char *t129;
    char *t130;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 692U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t5, 37, 37, 2U, t2, 32, t6, 5);
    t7 = ((char*)((ng3)));
    xsi_vlog_unsigned_equal(t8, 37, t5, 37, t7, 37);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t41 = *((unsigned int *)t4);
    t42 = (~(t41));
    t43 = *((unsigned int *)t16);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t45, 8);

LAB16:    t151 = (t0 + 4624);
    t152 = (t151 + 32U);
    t153 = *((char **)t152);
    t154 = (t153 + 40U);
    t155 = *((char **)t154);
    memcpy(t155, t3, 8);
    xsi_driver_vfirst_trans(t151, 0, 31);
    t156 = (t0 + 4492);
    *((int *)t156) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t21 = (t0 + 2484);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    t24 = (t0 + 2392);
    t25 = (t24 + 36U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng1)));
    t29 = (t0 + 2300);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t28 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t28) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 63U);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 & 63U);
    t40 = ((char*)((ng1)));
    xsi_vlogtype_concat(t20, 32, 32, 5U, t40, 16, t28, 6, t27, 8, t26, 1, t23, 1);
    goto LAB9;

LAB10:    t48 = (t0 + 692U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng2)));
    xsi_vlogtype_concat(t47, 37, 37, 2U, t48, 32, t49, 5);
    t50 = ((char*)((ng4)));
    xsi_vlog_unsigned_equal(t51, 37, t47, 37, t50, 37);
    memset(t46, 0, 8);
    t52 = (t51 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t52) != 0)
        goto LAB19;

LAB20:    t59 = (t46 + 4);
    t60 = *((unsigned int *)t46);
    t61 = *((unsigned int *)t59);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB21;

LAB22:    t94 = *((unsigned int *)t46);
    t95 = (~(t94));
    t96 = *((unsigned int *)t59);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t59) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t46) > 0)
        goto LAB27;

LAB28:    memcpy(t45, t98, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t45, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t46) = 1;
    goto LAB20;

LAB19:    t58 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB20;

LAB21:    t64 = ((char*)((ng1)));
    t66 = (t0 + 2760);
    t67 = (t66 + 36U);
    t68 = *((char **)t67);
    memset(t65, 0, 8);
    t69 = (t65 + 4);
    t70 = (t68 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 0);
    *((unsigned int *)t65) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 0);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t75 & 31U);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 & 31U);
    t77 = ((char*)((ng1)));
    t79 = (t0 + 2668);
    t80 = (t79 + 36U);
    t81 = *((char **)t80);
    memset(t78, 0, 8);
    t82 = (t78 + 4);
    t83 = (t81 + 4);
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 0);
    *((unsigned int *)t78) = t85;
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 0);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t88 & 63U);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t89 & 63U);
    t90 = ((char*)((ng1)));
    t91 = (t0 + 2576);
    t92 = (t91 + 36U);
    t93 = *((char **)t92);
    xsi_vlogtype_concat(t63, 32, 32, 6U, t93, 1, t90, 15, t78, 6, t77, 3, t65, 5, t64, 2);
    goto LAB22;

LAB23:    t101 = (t0 + 692U);
    t102 = *((char **)t101);
    t101 = ((char*)((ng2)));
    xsi_vlogtype_concat(t100, 37, 37, 2U, t101, 32, t102, 5);
    t103 = ((char*)((ng5)));
    xsi_vlog_unsigned_equal(t104, 37, t100, 37, t103, 37);
    memset(t99, 0, 8);
    t105 = (t104 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t105) != 0)
        goto LAB32;

LAB33:    t112 = (t99 + 4);
    t113 = *((unsigned int *)t99);
    t114 = *((unsigned int *)t112);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB34;

LAB35:    t121 = *((unsigned int *)t99);
    t122 = (~(t121));
    t123 = *((unsigned int *)t112);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t112) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t99) > 0)
        goto LAB40;

LAB41:    memcpy(t98, t125, 8);

LAB42:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t45, 32, t63, 32, t98, 32);
    goto LAB29;

LAB27:    memcpy(t45, t63, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t99) = 1;
    goto LAB33;

LAB32:    t111 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB33;

LAB34:    t117 = ((char*)((ng1)));
    t118 = (t0 + 2852);
    t119 = (t118 + 36U);
    t120 = *((char **)t119);
    xsi_vlogtype_concat(t116, 32, 32, 2U, t120, 30, t117, 2);
    goto LAB35;

LAB36:    t128 = (t0 + 692U);
    t129 = *((char **)t128);
    t128 = ((char*)((ng2)));
    xsi_vlogtype_concat(t127, 37, 37, 2U, t128, 32, t129, 5);
    t130 = ((char*)((ng6)));
    xsi_vlog_unsigned_equal(t131, 37, t127, 37, t130, 37);
    memset(t126, 0, 8);
    t132 = (t131 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (~(t133));
    t135 = *((unsigned int *)t131);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t132) != 0)
        goto LAB45;

LAB46:    t139 = (t126 + 4);
    t140 = *((unsigned int *)t126);
    t141 = *((unsigned int *)t139);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB47;

LAB48:    t146 = *((unsigned int *)t126);
    t147 = (~(t146));
    t148 = *((unsigned int *)t139);
    t149 = (t147 || t148);
    if (t149 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t139) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t126) > 0)
        goto LAB53;

LAB54:    memcpy(t125, t150, 8);

LAB55:    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t98, 32, t116, 32, t125, 32);
    goto LAB42;

LAB40:    memcpy(t98, t116, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t126) = 1;
    goto LAB46;

LAB45:    t138 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB46;

LAB47:    t143 = (t0 + 2944);
    t144 = (t143 + 36U);
    t145 = *((char **)t144);
    goto LAB48;

LAB49:    t150 = ((char*)((ng7)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t125, 32, t145, 32, t150, 32);
    goto LAB55;

LAB53:    memcpy(t125, t145, 8);
    goto LAB55;

}

static void Cont_65_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t9[8];
    char t48[8];
    char t63[8];
    char t71[8];
    char t103[8];
    char t115[8];
    char t136[8];
    char t144[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    int t168;
    int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1152U);
    t6 = *((char **)t2);
    t2 = (t0 + 2300);
    t7 = (t2 + 36U);
    t8 = *((char **)t7);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t13 = (t6 + 4);
    t14 = (t8 + 4);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t5, 0, 8);
    t41 = (t9 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t9);
    t45 = (t44 & t43);
    t46 = (t45 & 63U);
    if (t46 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t41) != 0)
        goto LAB9;

LAB10:    memset(t48, 0, 8);
    t49 = (t5 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t5);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t49) != 0)
        goto LAB13;

LAB14:    t56 = (t48 + 4);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t56);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB15;

LAB16:    memcpy(t71, t48, 8);

LAB17:    memset(t103, 0, 8);
    t104 = (t71 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t71);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t104) != 0)
        goto LAB27;

LAB28:    t111 = (t103 + 4);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t111);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB29;

LAB30:    memcpy(t144, t103, 8);

LAB31:    memset(t4, 0, 8);
    t176 = (t144 + 4);
    t177 = *((unsigned int *)t176);
    t178 = (~(t177));
    t179 = *((unsigned int *)t144);
    t180 = (t179 & t178);
    t181 = (t180 & 1U);
    if (t181 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t176) != 0)
        goto LAB47;

LAB48:    t183 = (t4 + 4);
    t184 = *((unsigned int *)t4);
    t185 = *((unsigned int *)t183);
    t186 = (t184 || t185);
    if (t186 > 0)
        goto LAB49;

LAB50:    t188 = *((unsigned int *)t4);
    t189 = (~(t188));
    t190 = *((unsigned int *)t183);
    t191 = (t189 || t190);
    if (t191 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t183) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t4) > 0)
        goto LAB55;

LAB56:    memcpy(t3, t192, 8);

LAB57:    t193 = (t0 + 4660);
    t194 = (t193 + 32U);
    t195 = *((char **)t194);
    t196 = (t195 + 40U);
    t197 = *((char **)t196);
    memset(t197, 0, 8);
    t198 = 1U;
    t199 = t198;
    t200 = (t3 + 4);
    t201 = *((unsigned int *)t3);
    t198 = (t198 & t201);
    t202 = *((unsigned int *)t200);
    t199 = (t199 & t202);
    t203 = (t197 + 4);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t204 | t198);
    t205 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t205 | t199);
    xsi_driver_vfirst_trans(t193, 0, 0);
    t206 = (t0 + 4500);
    *((int *)t206) = 1;

LAB1:    return;
LAB4:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t21 | t22);
    t23 = (t6 + 4);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t35);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t36);
    goto LAB6;

LAB7:    *((unsigned int *)t5) = 1;
    goto LAB10;

LAB9:    t47 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t48) = 1;
    goto LAB14;

LAB13:    t55 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB14;

LAB15:    t60 = (t0 + 2484);
    t61 = (t60 + 36U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    t64 = (t62 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t62);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t64) != 0)
        goto LAB20;

LAB21:    t72 = *((unsigned int *)t48);
    t73 = *((unsigned int *)t63);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t75 = (t48 + 4);
    t76 = (t63 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t63) = 1;
    goto LAB21;

LAB20:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB21;

LAB22:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t48 + 4);
    t86 = (t63 + 4);
    t87 = *((unsigned int *)t48);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t99 & t97);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t101 & t97);
    t102 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t102 & t98);
    goto LAB24;

LAB25:    *((unsigned int *)t103) = 1;
    goto LAB28;

LAB27:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB28;

LAB29:    t116 = (t0 + 2392);
    t117 = (t116 + 36U);
    t118 = *((char **)t117);
    memset(t115, 0, 8);
    t119 = (t118 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t119) == 0)
        goto LAB32;

LAB34:    t125 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t125) = 1;

LAB35:    t126 = (t115 + 4);
    t127 = (t118 + 4);
    t128 = *((unsigned int *)t118);
    t129 = (~(t128));
    *((unsigned int *)t115) = t129;
    *((unsigned int *)t126) = 0;
    if (*((unsigned int *)t127) != 0)
        goto LAB37;

LAB36:    t134 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t134 & 1U);
    t135 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t135 & 1U);
    memset(t136, 0, 8);
    t137 = (t115 + 4);
    t138 = *((unsigned int *)t137);
    t139 = (~(t138));
    t140 = *((unsigned int *)t115);
    t141 = (t140 & t139);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t137) != 0)
        goto LAB40;

LAB41:    t145 = *((unsigned int *)t103);
    t146 = *((unsigned int *)t136);
    t147 = (t145 & t146);
    *((unsigned int *)t144) = t147;
    t148 = (t103 + 4);
    t149 = (t136 + 4);
    t150 = (t144 + 4);
    t151 = *((unsigned int *)t148);
    t152 = *((unsigned int *)t149);
    t153 = (t151 | t152);
    *((unsigned int *)t150) = t153;
    t154 = *((unsigned int *)t150);
    t155 = (t154 != 0);
    if (t155 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB31;

LAB32:    *((unsigned int *)t115) = 1;
    goto LAB35;

LAB37:    t130 = *((unsigned int *)t115);
    t131 = *((unsigned int *)t127);
    *((unsigned int *)t115) = (t130 | t131);
    t132 = *((unsigned int *)t126);
    t133 = *((unsigned int *)t127);
    *((unsigned int *)t126) = (t132 | t133);
    goto LAB36;

LAB38:    *((unsigned int *)t136) = 1;
    goto LAB41;

LAB40:    t143 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB41;

LAB42:    t156 = *((unsigned int *)t144);
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t144) = (t156 | t157);
    t158 = (t103 + 4);
    t159 = (t136 + 4);
    t160 = *((unsigned int *)t103);
    t161 = (~(t160));
    t162 = *((unsigned int *)t158);
    t163 = (~(t162));
    t164 = *((unsigned int *)t136);
    t165 = (~(t164));
    t166 = *((unsigned int *)t159);
    t167 = (~(t166));
    t168 = (t161 & t163);
    t169 = (t165 & t167);
    t170 = (~(t168));
    t171 = (~(t169));
    t172 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t172 & t170);
    t173 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t173 & t171);
    t174 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t174 & t170);
    t175 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t175 & t171);
    goto LAB44;

LAB45:    *((unsigned int *)t4) = 1;
    goto LAB48;

LAB47:    t182 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB48;

LAB49:    t187 = ((char*)((ng2)));
    goto LAB50;

LAB51:    t192 = ((char*)((ng8)));
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t3, 32, t187, 32, t192, 32);
    goto LAB57;

LAB55:    memcpy(t3, t187, 8);
    goto LAB57;

}

static void Initial_68_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(68, ng0);

LAB2:    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2300);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2392);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2484);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2576);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2668);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2760);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2852);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 30);
    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2944);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_79_5(char *t0)
{
    char t13[8];
    char t31[8];
    char t32[8];
    char t61[8];
    char t62[8];
    char t63[8];
    char t75[8];
    char t90[8];
    char t106[8];
    char t120[8];
    char t136[8];
    char t144[8];
    char t176[8];
    char t184[8];
    char t212[8];
    char t227[8];
    char t243[8];
    char t251[8];
    char t279[8];
    char t294[8];
    char t310[8];
    char t318[8];
    char t346[8];
    char t361[8];
    char t377[8];
    char t385[8];
    char t431[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    int t168;
    int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    char *t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;
    char *t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    char *t256;
    char *t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t292;
    char *t293;
    char *t295;
    char *t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    char *t309;
    char *t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    char *t317;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    char *t322;
    char *t323;
    char *t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    char *t332;
    char *t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    char *t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    char *t353;
    char *t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    char *t359;
    char *t360;
    char *t362;
    char *t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    char *t376;
    char *t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    char *t384;
    unsigned int t386;
    unsigned int t387;
    unsigned int t388;
    char *t389;
    char *t390;
    char *t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    char *t399;
    char *t400;
    unsigned int t401;
    unsigned int t402;
    unsigned int t403;
    int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    int t408;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    unsigned int t412;
    char *t413;
    unsigned int t414;
    unsigned int t415;
    unsigned int t416;
    unsigned int t417;
    unsigned int t418;
    char *t419;
    char *t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    char *t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    char *t429;
    char *t430;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4508);
    *((int *)t2) = 1;
    t3 = (t0 + 4308);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1612U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(89, ng0);

LAB10:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2392);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB14:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB16;

LAB15:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t2) != 0)
        goto LAB22;

LAB23:    t5 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (!(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB24;

LAB25:    memcpy(t32, t13, 8);

LAB26:    t53 = (t32 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t32);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB176;

LAB177:
LAB178:
LAB174:
LAB36:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(80, ng0);

LAB9:    xsi_set_current_line(81, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2300);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB16:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB15;

LAB17:    xsi_set_current_line(91, ng0);
    t29 = (t0 + 1152U);
    t30 = *((char **)t29);
    t29 = (t0 + 2668);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 6);
    goto LAB19;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB22:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB24:    t11 = (t0 + 1704U);
    t12 = *((char **)t11);
    memset(t31, 0, 8);
    t11 = (t12 + 4);
    t19 = *((unsigned int *)t11);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t21 & t20);
    t24 = (t22 & 1U);
    if (t24 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t11) != 0)
        goto LAB29;

LAB30:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t31);
    t27 = (t25 | t26);
    *((unsigned int *)t32) = t27;
    t23 = (t13 + 4);
    t29 = (t31 + 4);
    t30 = (t32 + 4);
    t28 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t29);
    t34 = (t28 | t33);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t31) = 1;
    goto LAB30;

LAB29:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB30;

LAB31:    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t32) = (t37 | t38);
    t39 = (t13 + 4);
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t13);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t31);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & t49);
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    goto LAB33;

LAB34:    xsi_set_current_line(92, ng0);

LAB37:    xsi_set_current_line(94, ng0);
    t59 = ((char*)((ng2)));
    t60 = (t0 + 2392);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t32, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB41;

LAB38:    if (t19 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t32) = 1;

LAB41:    memset(t61, 0, 8);
    t12 = (t32 + 4);
    t22 = *((unsigned int *)t12);
    t24 = (~(t22));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t12) != 0)
        goto LAB44;

LAB45:    t23 = (t61 + 4);
    t28 = *((unsigned int *)t61);
    t33 = *((unsigned int *)t23);
    t34 = (t28 || t33);
    if (t34 > 0)
        goto LAB46;

LAB47:    memcpy(t63, t61, 8);

LAB48:    memset(t75, 0, 8);
    t76 = (t63 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t63);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t76) != 0)
        goto LAB58;

LAB59:    t83 = (t75 + 4);
    t84 = *((unsigned int *)t75);
    t85 = (!(t84));
    t86 = *((unsigned int *)t83);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB60;

LAB61:    memcpy(t184, t75, 8);

LAB62:    memset(t212, 0, 8);
    t213 = (t184 + 4);
    t214 = *((unsigned int *)t213);
    t215 = (~(t214));
    t216 = *((unsigned int *)t184);
    t217 = (t216 & t215);
    t218 = (t217 & 1U);
    if (t218 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t213) != 0)
        goto LAB94;

LAB95:    t220 = (t212 + 4);
    t221 = *((unsigned int *)t212);
    t222 = (!(t221));
    t223 = *((unsigned int *)t220);
    t224 = (t222 || t223);
    if (t224 > 0)
        goto LAB96;

LAB97:    memcpy(t251, t212, 8);

LAB98:    memset(t279, 0, 8);
    t280 = (t251 + 4);
    t281 = *((unsigned int *)t280);
    t282 = (~(t281));
    t283 = *((unsigned int *)t251);
    t284 = (t283 & t282);
    t285 = (t284 & 1U);
    if (t285 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t280) != 0)
        goto LAB112;

LAB113:    t287 = (t279 + 4);
    t288 = *((unsigned int *)t279);
    t289 = (!(t288));
    t290 = *((unsigned int *)t287);
    t291 = (t289 || t290);
    if (t291 > 0)
        goto LAB114;

LAB115:    memcpy(t318, t279, 8);

LAB116:    memset(t346, 0, 8);
    t347 = (t318 + 4);
    t348 = *((unsigned int *)t347);
    t349 = (~(t348));
    t350 = *((unsigned int *)t318);
    t351 = (t350 & t349);
    t352 = (t351 & 1U);
    if (t352 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t347) != 0)
        goto LAB130;

LAB131:    t354 = (t346 + 4);
    t355 = *((unsigned int *)t346);
    t356 = (!(t355));
    t357 = *((unsigned int *)t354);
    t358 = (t356 || t357);
    if (t358 > 0)
        goto LAB132;

LAB133:    memcpy(t385, t346, 8);

LAB134:    memset(t31, 0, 8);
    t413 = (t385 + 4);
    t414 = *((unsigned int *)t413);
    t415 = (~(t414));
    t416 = *((unsigned int *)t385);
    t417 = (t416 & t415);
    t418 = (t417 & 1U);
    if (t418 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t413) != 0)
        goto LAB148;

LAB149:    t420 = (t31 + 4);
    t421 = *((unsigned int *)t31);
    t422 = *((unsigned int *)t420);
    t423 = (t421 || t422);
    if (t423 > 0)
        goto LAB150;

LAB151:    t425 = *((unsigned int *)t31);
    t426 = (~(t425));
    t427 = *((unsigned int *)t420);
    t428 = (t426 || t427);
    if (t428 > 0)
        goto LAB152;

LAB153:    if (*((unsigned int *)t420) > 0)
        goto LAB154;

LAB155:    if (*((unsigned int *)t31) > 0)
        goto LAB156;

LAB157:    memcpy(t13, t429, 8);

LAB158:    t430 = (t0 + 2576);
    xsi_vlogvar_assign_value(t430, t13, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 2760);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2576);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t5) != 0)
        goto LAB161;

LAB162:    t12 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB163;

LAB164:    t18 = *((unsigned int *)t31);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB165;

LAB166:    if (*((unsigned int *)t12) > 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t31) > 0)
        goto LAB169;

LAB170:    memcpy(t13, t61, 8);

LAB171:    t39 = ((char*)((ng18)));
    memset(t62, 0, 8);
    xsi_vlog_unsigned_rshift(t62, 32, t13, 32, t39, 32);
    t40 = (t0 + 2852);
    xsi_vlogvar_assign_value(t40, t62, 0, 0, 30);
    goto LAB36;

LAB40:    t11 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t61) = 1;
    goto LAB45;

LAB44:    t14 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB45;

LAB46:    t29 = (t0 + 600U);
    t30 = *((char **)t29);
    memset(t62, 0, 8);
    t29 = (t30 + 4);
    t35 = *((unsigned int *)t29);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t37 & t36);
    t41 = (t38 & 1U);
    if (t41 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t29) != 0)
        goto LAB51;

LAB52:    t42 = *((unsigned int *)t61);
    t43 = *((unsigned int *)t62);
    t45 = (t42 & t43);
    *((unsigned int *)t63) = t45;
    t40 = (t61 + 4);
    t53 = (t62 + 4);
    t59 = (t63 + 4);
    t46 = *((unsigned int *)t40);
    t47 = *((unsigned int *)t53);
    t49 = (t46 | t47);
    *((unsigned int *)t59) = t49;
    t50 = *((unsigned int *)t59);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB48;

LAB49:    *((unsigned int *)t62) = 1;
    goto LAB52;

LAB51:    t39 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB52;

LAB53:    t52 = *((unsigned int *)t63);
    t54 = *((unsigned int *)t59);
    *((unsigned int *)t63) = (t52 | t54);
    t60 = (t61 + 4);
    t64 = (t62 + 4);
    t55 = *((unsigned int *)t61);
    t56 = (~(t55));
    t57 = *((unsigned int *)t60);
    t58 = (~(t57));
    t65 = *((unsigned int *)t62);
    t66 = (~(t65));
    t67 = *((unsigned int *)t64);
    t68 = (~(t67));
    t44 = (t56 & t58);
    t48 = (t66 & t68);
    t69 = (~(t44));
    t70 = (~(t48));
    t71 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t71 & t69);
    t72 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t72 & t70);
    t73 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t73 & t69);
    t74 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t74 & t70);
    goto LAB55;

LAB56:    *((unsigned int *)t75) = 1;
    goto LAB59;

LAB58:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB59;

LAB60:    t88 = (t0 + 2072U);
    t89 = *((char **)t88);
    t88 = ((char*)((ng11)));
    memset(t90, 0, 8);
    t91 = (t89 + 4);
    t92 = (t88 + 4);
    t93 = *((unsigned int *)t89);
    t94 = *((unsigned int *)t88);
    t95 = (t93 ^ t94);
    t96 = *((unsigned int *)t91);
    t97 = *((unsigned int *)t92);
    t98 = (t96 ^ t97);
    t99 = (t95 | t98);
    t100 = *((unsigned int *)t91);
    t101 = *((unsigned int *)t92);
    t102 = (t100 | t101);
    t103 = (~(t102));
    t104 = (t99 & t103);
    if (t104 != 0)
        goto LAB66;

LAB63:    if (t102 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t90) = 1;

LAB66:    memset(t106, 0, 8);
    t107 = (t90 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t90);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t107) != 0)
        goto LAB69;

LAB70:    t114 = (t106 + 4);
    t115 = *((unsigned int *)t106);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB71;

LAB72:    memcpy(t144, t106, 8);

LAB73:    memset(t176, 0, 8);
    t177 = (t144 + 4);
    t178 = *((unsigned int *)t177);
    t179 = (~(t178));
    t180 = *((unsigned int *)t144);
    t181 = (t180 & t179);
    t182 = (t181 & 1U);
    if (t182 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t177) != 0)
        goto LAB87;

LAB88:    t185 = *((unsigned int *)t75);
    t186 = *((unsigned int *)t176);
    t187 = (t185 | t186);
    *((unsigned int *)t184) = t187;
    t188 = (t75 + 4);
    t189 = (t176 + 4);
    t190 = (t184 + 4);
    t191 = *((unsigned int *)t188);
    t192 = *((unsigned int *)t189);
    t193 = (t191 | t192);
    *((unsigned int *)t190) = t193;
    t194 = *((unsigned int *)t190);
    t195 = (t194 != 0);
    if (t195 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB62;

LAB65:    t105 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t106) = 1;
    goto LAB70;

LAB69:    t113 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB70;

LAB71:    t118 = (t0 + 968U);
    t119 = *((char **)t118);
    t118 = ((char*)((ng12)));
    memset(t120, 0, 8);
    t121 = (t119 + 4);
    t122 = (t118 + 4);
    t123 = *((unsigned int *)t119);
    t124 = *((unsigned int *)t118);
    t125 = (t123 ^ t124);
    t126 = *((unsigned int *)t121);
    t127 = *((unsigned int *)t122);
    t128 = (t126 ^ t127);
    t129 = (t125 | t128);
    t130 = *((unsigned int *)t121);
    t131 = *((unsigned int *)t122);
    t132 = (t130 | t131);
    t133 = (~(t132));
    t134 = (t129 & t133);
    if (t134 != 0)
        goto LAB75;

LAB74:    if (t132 != 0)
        goto LAB76;

LAB77:    memset(t136, 0, 8);
    t137 = (t120 + 4);
    t138 = *((unsigned int *)t137);
    t139 = (~(t138));
    t140 = *((unsigned int *)t120);
    t141 = (t140 & t139);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t137) != 0)
        goto LAB80;

LAB81:    t145 = *((unsigned int *)t106);
    t146 = *((unsigned int *)t136);
    t147 = (t145 & t146);
    *((unsigned int *)t144) = t147;
    t148 = (t106 + 4);
    t149 = (t136 + 4);
    t150 = (t144 + 4);
    t151 = *((unsigned int *)t148);
    t152 = *((unsigned int *)t149);
    t153 = (t151 | t152);
    *((unsigned int *)t150) = t153;
    t154 = *((unsigned int *)t150);
    t155 = (t154 != 0);
    if (t155 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB73;

LAB75:    *((unsigned int *)t120) = 1;
    goto LAB77;

LAB76:    t135 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t135) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t136) = 1;
    goto LAB81;

LAB80:    t143 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB81;

LAB82:    t156 = *((unsigned int *)t144);
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t144) = (t156 | t157);
    t158 = (t106 + 4);
    t159 = (t136 + 4);
    t160 = *((unsigned int *)t106);
    t161 = (~(t160));
    t162 = *((unsigned int *)t158);
    t163 = (~(t162));
    t164 = *((unsigned int *)t136);
    t165 = (~(t164));
    t166 = *((unsigned int *)t159);
    t167 = (~(t166));
    t168 = (t161 & t163);
    t169 = (t165 & t167);
    t170 = (~(t168));
    t171 = (~(t169));
    t172 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t172 & t170);
    t173 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t173 & t171);
    t174 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t174 & t170);
    t175 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t175 & t171);
    goto LAB84;

LAB85:    *((unsigned int *)t176) = 1;
    goto LAB88;

LAB87:    t183 = (t176 + 4);
    *((unsigned int *)t176) = 1;
    *((unsigned int *)t183) = 1;
    goto LAB88;

LAB89:    t196 = *((unsigned int *)t184);
    t197 = *((unsigned int *)t190);
    *((unsigned int *)t184) = (t196 | t197);
    t198 = (t75 + 4);
    t199 = (t176 + 4);
    t200 = *((unsigned int *)t198);
    t201 = (~(t200));
    t202 = *((unsigned int *)t75);
    t203 = (t202 & t201);
    t204 = *((unsigned int *)t199);
    t205 = (~(t204));
    t206 = *((unsigned int *)t176);
    t207 = (t206 & t205);
    t208 = (~(t203));
    t209 = (~(t207));
    t210 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t210 & t208);
    t211 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t211 & t209);
    goto LAB91;

LAB92:    *((unsigned int *)t212) = 1;
    goto LAB95;

LAB94:    t219 = (t212 + 4);
    *((unsigned int *)t212) = 1;
    *((unsigned int *)t219) = 1;
    goto LAB95;

LAB96:    t225 = (t0 + 2072U);
    t226 = *((char **)t225);
    t225 = ((char*)((ng13)));
    memset(t227, 0, 8);
    t228 = (t226 + 4);
    t229 = (t225 + 4);
    t230 = *((unsigned int *)t226);
    t231 = *((unsigned int *)t225);
    t232 = (t230 ^ t231);
    t233 = *((unsigned int *)t228);
    t234 = *((unsigned int *)t229);
    t235 = (t233 ^ t234);
    t236 = (t232 | t235);
    t237 = *((unsigned int *)t228);
    t238 = *((unsigned int *)t229);
    t239 = (t237 | t238);
    t240 = (~(t239));
    t241 = (t236 & t240);
    if (t241 != 0)
        goto LAB102;

LAB99:    if (t239 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t227) = 1;

LAB102:    memset(t243, 0, 8);
    t244 = (t227 + 4);
    t245 = *((unsigned int *)t244);
    t246 = (~(t245));
    t247 = *((unsigned int *)t227);
    t248 = (t247 & t246);
    t249 = (t248 & 1U);
    if (t249 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t244) != 0)
        goto LAB105;

LAB106:    t252 = *((unsigned int *)t212);
    t253 = *((unsigned int *)t243);
    t254 = (t252 | t253);
    *((unsigned int *)t251) = t254;
    t255 = (t212 + 4);
    t256 = (t243 + 4);
    t257 = (t251 + 4);
    t258 = *((unsigned int *)t255);
    t259 = *((unsigned int *)t256);
    t260 = (t258 | t259);
    *((unsigned int *)t257) = t260;
    t261 = *((unsigned int *)t257);
    t262 = (t261 != 0);
    if (t262 == 1)
        goto LAB107;

LAB108:
LAB109:    goto LAB98;

LAB101:    t242 = (t227 + 4);
    *((unsigned int *)t227) = 1;
    *((unsigned int *)t242) = 1;
    goto LAB102;

LAB103:    *((unsigned int *)t243) = 1;
    goto LAB106;

LAB105:    t250 = (t243 + 4);
    *((unsigned int *)t243) = 1;
    *((unsigned int *)t250) = 1;
    goto LAB106;

LAB107:    t263 = *((unsigned int *)t251);
    t264 = *((unsigned int *)t257);
    *((unsigned int *)t251) = (t263 | t264);
    t265 = (t212 + 4);
    t266 = (t243 + 4);
    t267 = *((unsigned int *)t265);
    t268 = (~(t267));
    t269 = *((unsigned int *)t212);
    t270 = (t269 & t268);
    t271 = *((unsigned int *)t266);
    t272 = (~(t271));
    t273 = *((unsigned int *)t243);
    t274 = (t273 & t272);
    t275 = (~(t270));
    t276 = (~(t274));
    t277 = *((unsigned int *)t257);
    *((unsigned int *)t257) = (t277 & t275);
    t278 = *((unsigned int *)t257);
    *((unsigned int *)t257) = (t278 & t276);
    goto LAB109;

LAB110:    *((unsigned int *)t279) = 1;
    goto LAB113;

LAB112:    t286 = (t279 + 4);
    *((unsigned int *)t279) = 1;
    *((unsigned int *)t286) = 1;
    goto LAB113;

LAB114:    t292 = (t0 + 2072U);
    t293 = *((char **)t292);
    t292 = ((char*)((ng14)));
    memset(t294, 0, 8);
    t295 = (t293 + 4);
    t296 = (t292 + 4);
    t297 = *((unsigned int *)t293);
    t298 = *((unsigned int *)t292);
    t299 = (t297 ^ t298);
    t300 = *((unsigned int *)t295);
    t301 = *((unsigned int *)t296);
    t302 = (t300 ^ t301);
    t303 = (t299 | t302);
    t304 = *((unsigned int *)t295);
    t305 = *((unsigned int *)t296);
    t306 = (t304 | t305);
    t307 = (~(t306));
    t308 = (t303 & t307);
    if (t308 != 0)
        goto LAB120;

LAB117:    if (t306 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t294) = 1;

LAB120:    memset(t310, 0, 8);
    t311 = (t294 + 4);
    t312 = *((unsigned int *)t311);
    t313 = (~(t312));
    t314 = *((unsigned int *)t294);
    t315 = (t314 & t313);
    t316 = (t315 & 1U);
    if (t316 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t311) != 0)
        goto LAB123;

LAB124:    t319 = *((unsigned int *)t279);
    t320 = *((unsigned int *)t310);
    t321 = (t319 | t320);
    *((unsigned int *)t318) = t321;
    t322 = (t279 + 4);
    t323 = (t310 + 4);
    t324 = (t318 + 4);
    t325 = *((unsigned int *)t322);
    t326 = *((unsigned int *)t323);
    t327 = (t325 | t326);
    *((unsigned int *)t324) = t327;
    t328 = *((unsigned int *)t324);
    t329 = (t328 != 0);
    if (t329 == 1)
        goto LAB125;

LAB126:
LAB127:    goto LAB116;

LAB119:    t309 = (t294 + 4);
    *((unsigned int *)t294) = 1;
    *((unsigned int *)t309) = 1;
    goto LAB120;

LAB121:    *((unsigned int *)t310) = 1;
    goto LAB124;

LAB123:    t317 = (t310 + 4);
    *((unsigned int *)t310) = 1;
    *((unsigned int *)t317) = 1;
    goto LAB124;

LAB125:    t330 = *((unsigned int *)t318);
    t331 = *((unsigned int *)t324);
    *((unsigned int *)t318) = (t330 | t331);
    t332 = (t279 + 4);
    t333 = (t310 + 4);
    t334 = *((unsigned int *)t332);
    t335 = (~(t334));
    t336 = *((unsigned int *)t279);
    t337 = (t336 & t335);
    t338 = *((unsigned int *)t333);
    t339 = (~(t338));
    t340 = *((unsigned int *)t310);
    t341 = (t340 & t339);
    t342 = (~(t337));
    t343 = (~(t341));
    t344 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t344 & t342);
    t345 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t345 & t343);
    goto LAB127;

LAB128:    *((unsigned int *)t346) = 1;
    goto LAB131;

LAB130:    t353 = (t346 + 4);
    *((unsigned int *)t346) = 1;
    *((unsigned int *)t353) = 1;
    goto LAB131;

LAB132:    t359 = (t0 + 2072U);
    t360 = *((char **)t359);
    t359 = ((char*)((ng15)));
    memset(t361, 0, 8);
    t362 = (t360 + 4);
    t363 = (t359 + 4);
    t364 = *((unsigned int *)t360);
    t365 = *((unsigned int *)t359);
    t366 = (t364 ^ t365);
    t367 = *((unsigned int *)t362);
    t368 = *((unsigned int *)t363);
    t369 = (t367 ^ t368);
    t370 = (t366 | t369);
    t371 = *((unsigned int *)t362);
    t372 = *((unsigned int *)t363);
    t373 = (t371 | t372);
    t374 = (~(t373));
    t375 = (t370 & t374);
    if (t375 != 0)
        goto LAB138;

LAB135:    if (t373 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t361) = 1;

LAB138:    memset(t377, 0, 8);
    t378 = (t361 + 4);
    t379 = *((unsigned int *)t378);
    t380 = (~(t379));
    t381 = *((unsigned int *)t361);
    t382 = (t381 & t380);
    t383 = (t382 & 1U);
    if (t383 != 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t378) != 0)
        goto LAB141;

LAB142:    t386 = *((unsigned int *)t346);
    t387 = *((unsigned int *)t377);
    t388 = (t386 | t387);
    *((unsigned int *)t385) = t388;
    t389 = (t346 + 4);
    t390 = (t377 + 4);
    t391 = (t385 + 4);
    t392 = *((unsigned int *)t389);
    t393 = *((unsigned int *)t390);
    t394 = (t392 | t393);
    *((unsigned int *)t391) = t394;
    t395 = *((unsigned int *)t391);
    t396 = (t395 != 0);
    if (t396 == 1)
        goto LAB143;

LAB144:
LAB145:    goto LAB134;

LAB137:    t376 = (t361 + 4);
    *((unsigned int *)t361) = 1;
    *((unsigned int *)t376) = 1;
    goto LAB138;

LAB139:    *((unsigned int *)t377) = 1;
    goto LAB142;

LAB141:    t384 = (t377 + 4);
    *((unsigned int *)t377) = 1;
    *((unsigned int *)t384) = 1;
    goto LAB142;

LAB143:    t397 = *((unsigned int *)t385);
    t398 = *((unsigned int *)t391);
    *((unsigned int *)t385) = (t397 | t398);
    t399 = (t346 + 4);
    t400 = (t377 + 4);
    t401 = *((unsigned int *)t399);
    t402 = (~(t401));
    t403 = *((unsigned int *)t346);
    t404 = (t403 & t402);
    t405 = *((unsigned int *)t400);
    t406 = (~(t405));
    t407 = *((unsigned int *)t377);
    t408 = (t407 & t406);
    t409 = (~(t404));
    t410 = (~(t408));
    t411 = *((unsigned int *)t391);
    *((unsigned int *)t391) = (t411 & t409);
    t412 = *((unsigned int *)t391);
    *((unsigned int *)t391) = (t412 & t410);
    goto LAB145;

LAB146:    *((unsigned int *)t31) = 1;
    goto LAB149;

LAB148:    t419 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t419) = 1;
    goto LAB149;

LAB150:    t424 = ((char*)((ng2)));
    goto LAB151;

LAB152:    t429 = ((char*)((ng8)));
    goto LAB153;

LAB154:    xsi_vlog_unsigned_bit_combine(t13, 32, t424, 32, t429, 32);
    goto LAB158;

LAB156:    memcpy(t13, t424, 8);
    goto LAB158;

LAB159:    *((unsigned int *)t31) = 1;
    goto LAB162;

LAB161:    t11 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB162;

LAB163:    t14 = (t0 + 876U);
    t23 = *((char **)t14);
    t14 = ((char*)((ng16)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t23, 32, t14, 32);
    goto LAB164;

LAB165:    t29 = (t0 + 876U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng17)));
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 32, t30, 32, t29, 32);
    goto LAB166;

LAB167:    xsi_vlog_unsigned_bit_combine(t13, 32, t32, 32, t61, 32);
    goto LAB171;

LAB169:    memcpy(t13, t32, 8);
    goto LAB171;

LAB172:    xsi_set_current_line(100, ng0);

LAB175:    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 2392);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB174;

LAB176:    xsi_set_current_line(102, ng0);

LAB179:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    xsi_vlogtype_concat(t431, 37, 37, 2U, t4, 32, t5, 5);

LAB180:    t11 = ((char*)((ng3)));
    t44 = xsi_vlog_unsigned_case_compare(t431, 37, t11, 37);
    if (t44 == 1)
        goto LAB181;

LAB182:    t2 = ((char*)((ng5)));
    t44 = xsi_vlog_unsigned_case_compare(t431, 37, t2, 37);
    if (t44 == 1)
        goto LAB183;

LAB184:
LAB185:    goto LAB178;

LAB181:    xsi_set_current_line(104, ng0);

LAB186:    xsi_set_current_line(105, ng0);
    t12 = (t0 + 784U);
    t14 = *((char **)t12);
    memset(t13, 0, 8);
    t12 = (t13 + 4);
    t23 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (t15 >> 10);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t23);
    t18 = (t17 >> 10);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 63U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 63U);
    t29 = (t0 + 2300);
    xsi_vlogvar_assign_value(t29, t13, 0, 0, 6);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t31) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    xsi_vlogtype_concat(t13, 2, 2, 1U, t31, 2);
    t5 = (t0 + 2484);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 1);
    t11 = (t0 + 2392);
    xsi_vlogvar_assign_value(t11, t13, 1, 0, 1);
    goto LAB185;

LAB183:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng18)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 32, t4, 32, t3, 32);
    t5 = (t0 + 2852);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 30);
    goto LAB185;

}


extern void work_m_00000000004125383894_1093763706_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Cont_53_1,(void *)Cont_57_2,(void *)Cont_65_3,(void *)Initial_68_4,(void *)Always_79_5};
	xsi_register_didat("work_m_00000000004125383894_1093763706", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000004125383894_1093763706.didat");
	xsi_register_executes(pe);
}
