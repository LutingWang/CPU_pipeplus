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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/mips-bd/mips/mips/cpu/datapath/datapath.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1107296280U, 0U};
static unsigned int ng4[] = {16U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {46U, 0U, 0U, 0U};
static unsigned int ng7[] = {0U, 0U};
static const char *ng8 = "%d@%h: $%d <= %h";
static int ng9[] = {4, 0};



static void Cont_50_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t17[8];
    char t36[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
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
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
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
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3268U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t44, t6, 8);

LAB10:    memset(t4, 0, 8);
    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t76) != 0)
        goto LAB26;

LAB27:    t83 = (t4 + 4);
    t84 = *((unsigned int *)t4);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB28;

LAB29:    t88 = *((unsigned int *)t4);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t83) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t4) > 0)
        goto LAB34;

LAB35:    memcpy(t3, t92, 8);

LAB36:    t93 = (t0 + 6680);
    t94 = (t93 + 32U);
    t95 = *((char **)t94);
    t96 = (t95 + 40U);
    t97 = *((char **)t96);
    memset(t97, 0, 8);
    t98 = 1U;
    t99 = t98;
    t100 = (t3 + 4);
    t101 = *((unsigned int *)t3);
    t98 = (t98 & t101);
    t102 = *((unsigned int *)t100);
    t99 = (t99 & t102);
    t103 = (t97 + 4);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t104 | t98);
    t105 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t105 | t99);
    xsi_driver_vfirst_trans(t93, 0, 0);
    t106 = (t0 + 6620);
    *((int *)t106) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 2256U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t18) == 0)
        goto LAB11;

LAB13:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB14:    t26 = (t17 + 4);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    *((unsigned int *)t17) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB16;

LAB15:    t34 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    memset(t36, 0, 8);
    t37 = (t17 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t17);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t37) != 0)
        goto LAB19;

LAB20:    t45 = *((unsigned int *)t6);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t6 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB16:    t30 = *((unsigned int *)t17);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t17) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB15;

LAB17:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB20;

LAB21:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t6 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t6);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB23;

LAB24:    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB26:    t82 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB27;

LAB28:    t87 = ((char*)((ng1)));
    goto LAB29;

LAB30:    t92 = ((char*)((ng2)));
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t3, 32, t87, 32, t92, 32);
    goto LAB36;

LAB34:    memcpy(t3, t87, 8);
    goto LAB36;

}

static void Cont_63_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t34[8];
    char t45[8];
    char t61[8];
    char t69[8];
    char t101[8];
    char t113[8];
    char t124[8];
    char t140[8];
    char t148[8];
    char t180[8];
    char t192[16];
    char t193[8];
    char t205[16];
    char t206[8];
    char t214[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    int t172;
    int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
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
    int t238;
    int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    char *t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    char *t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    char *t263;
    char *t264;
    char *t265;
    char *t266;
    char *t267;
    char *t268;

LAB0:    t1 = (t0 + 6280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1520U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t69, t22, 8);

LAB14:    memset(t101, 0, 8);
    t102 = (t69 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (~(t103));
    t105 = *((unsigned int *)t69);
    t106 = (t105 & t104);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t102) != 0)
        goto LAB28;

LAB29:    t109 = (t101 + 4);
    t110 = *((unsigned int *)t101);
    t111 = *((unsigned int *)t109);
    t112 = (t110 || t111);
    if (t112 > 0)
        goto LAB30;

LAB31:    memcpy(t148, t101, 8);

LAB32:    memset(t180, 0, 8);
    t181 = (t148 + 4);
    t182 = *((unsigned int *)t181);
    t183 = (~(t182));
    t184 = *((unsigned int *)t148);
    t185 = (t184 & t183);
    t186 = (t185 & 1U);
    if (t186 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t181) != 0)
        goto LAB46;

LAB47:    t188 = (t180 + 4);
    t189 = *((unsigned int *)t180);
    t190 = *((unsigned int *)t188);
    t191 = (t189 || t190);
    if (t191 > 0)
        goto LAB48;

LAB49:    memcpy(t214, t180, 8);

LAB50:    memset(t4, 0, 8);
    t246 = (t214 + 4);
    t247 = *((unsigned int *)t246);
    t248 = (~(t247));
    t249 = *((unsigned int *)t214);
    t250 = (t249 & t248);
    t251 = (t250 & 1U);
    if (t251 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t246) != 0)
        goto LAB60;

LAB61:    t253 = (t4 + 4);
    t254 = *((unsigned int *)t4);
    t255 = *((unsigned int *)t253);
    t256 = (t254 || t255);
    if (t256 > 0)
        goto LAB62;

LAB63:    t259 = *((unsigned int *)t4);
    t260 = (~(t259));
    t261 = *((unsigned int *)t253);
    t262 = (t260 || t261);
    if (t262 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t253) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t4) > 0)
        goto LAB68;

LAB69:    memcpy(t3, t263, 8);

LAB70:    t257 = (t0 + 6716);
    t264 = (t257 + 32U);
    t265 = *((char **)t264);
    t266 = (t265 + 40U);
    t267 = *((char **)t266);
    memcpy(t267, t3, 8);
    xsi_driver_vfirst_trans(t257, 0, 31);
    t268 = (t0 + 6628);
    *((int *)t268) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 3912U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (t38 >> 26);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 26);
    *((unsigned int *)t35) = t41;
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 63U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 63U);
    t44 = ((char*)((ng4)));
    memset(t45, 0, 8);
    t46 = (t34 + 4);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB18;

LAB15:    if (t57 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t45) = 1;

LAB18:    memset(t61, 0, 8);
    t62 = (t45 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t62) != 0)
        goto LAB21;

LAB22:    t70 = *((unsigned int *)t22);
    t71 = *((unsigned int *)t61);
    t72 = (t70 & t71);
    *((unsigned int *)t69) = t72;
    t73 = (t22 + 4);
    t74 = (t61 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t61) = 1;
    goto LAB22;

LAB21:    t68 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB22;

LAB23:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    t83 = (t22 + 4);
    t84 = (t61 + 4);
    t85 = *((unsigned int *)t22);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (~(t87));
    t89 = *((unsigned int *)t61);
    t90 = (~(t89));
    t91 = *((unsigned int *)t84);
    t92 = (~(t91));
    t93 = (t86 & t88);
    t94 = (t90 & t92);
    t95 = (~(t93));
    t96 = (~(t94));
    t97 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t97 & t95);
    t98 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t98 & t96);
    t99 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t99 & t95);
    t100 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t100 & t96);
    goto LAB25;

LAB26:    *((unsigned int *)t101) = 1;
    goto LAB29;

LAB28:    t108 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB29;

LAB30:    t114 = (t0 + 3912U);
    t115 = *((char **)t114);
    memset(t113, 0, 8);
    t114 = (t113 + 4);
    t116 = (t115 + 4);
    t117 = *((unsigned int *)t115);
    t118 = (t117 >> 21);
    *((unsigned int *)t113) = t118;
    t119 = *((unsigned int *)t116);
    t120 = (t119 >> 21);
    *((unsigned int *)t114) = t120;
    t121 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t121 & 31U);
    t122 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t122 & 31U);
    t123 = ((char*)((ng5)));
    memset(t124, 0, 8);
    t125 = (t113 + 4);
    t126 = (t123 + 4);
    t127 = *((unsigned int *)t113);
    t128 = *((unsigned int *)t123);
    t129 = (t127 ^ t128);
    t130 = *((unsigned int *)t125);
    t131 = *((unsigned int *)t126);
    t132 = (t130 ^ t131);
    t133 = (t129 | t132);
    t134 = *((unsigned int *)t125);
    t135 = *((unsigned int *)t126);
    t136 = (t134 | t135);
    t137 = (~(t136));
    t138 = (t133 & t137);
    if (t138 != 0)
        goto LAB36;

LAB33:    if (t136 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t124) = 1;

LAB36:    memset(t140, 0, 8);
    t141 = (t124 + 4);
    t142 = *((unsigned int *)t141);
    t143 = (~(t142));
    t144 = *((unsigned int *)t124);
    t145 = (t144 & t143);
    t146 = (t145 & 1U);
    if (t146 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t141) != 0)
        goto LAB39;

LAB40:    t149 = *((unsigned int *)t101);
    t150 = *((unsigned int *)t140);
    t151 = (t149 & t150);
    *((unsigned int *)t148) = t151;
    t152 = (t101 + 4);
    t153 = (t140 + 4);
    t154 = (t148 + 4);
    t155 = *((unsigned int *)t152);
    t156 = *((unsigned int *)t153);
    t157 = (t155 | t156);
    *((unsigned int *)t154) = t157;
    t158 = *((unsigned int *)t154);
    t159 = (t158 != 0);
    if (t159 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB35:    t139 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t140) = 1;
    goto LAB40;

LAB39:    t147 = (t140 + 4);
    *((unsigned int *)t140) = 1;
    *((unsigned int *)t147) = 1;
    goto LAB40;

LAB41:    t160 = *((unsigned int *)t148);
    t161 = *((unsigned int *)t154);
    *((unsigned int *)t148) = (t160 | t161);
    t162 = (t101 + 4);
    t163 = (t140 + 4);
    t164 = *((unsigned int *)t101);
    t165 = (~(t164));
    t166 = *((unsigned int *)t162);
    t167 = (~(t166));
    t168 = *((unsigned int *)t140);
    t169 = (~(t168));
    t170 = *((unsigned int *)t163);
    t171 = (~(t170));
    t172 = (t165 & t167);
    t173 = (t169 & t171);
    t174 = (~(t172));
    t175 = (~(t173));
    t176 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t176 & t174);
    t177 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t177 & t175);
    t178 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t178 & t174);
    t179 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t179 & t175);
    goto LAB43;

LAB44:    *((unsigned int *)t180) = 1;
    goto LAB47;

LAB46:    t187 = (t180 + 4);
    *((unsigned int *)t180) = 1;
    *((unsigned int *)t187) = 1;
    goto LAB47;

LAB48:    t194 = (t0 + 3912U);
    t195 = *((char **)t194);
    memset(t193, 0, 8);
    t194 = (t193 + 4);
    t196 = (t195 + 4);
    t197 = *((unsigned int *)t195);
    t198 = (t197 >> 11);
    *((unsigned int *)t193) = t198;
    t199 = *((unsigned int *)t196);
    t200 = (t199 >> 11);
    *((unsigned int *)t194) = t200;
    t201 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t201 & 31U);
    t202 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t202 & 31U);
    t203 = ((char*)((ng1)));
    xsi_vlogtype_concat(t192, 37, 37, 2U, t203, 32, t193, 5);
    t204 = ((char*)((ng6)));
    xsi_vlog_unsigned_equal(t205, 37, t192, 37, t204, 37);
    memset(t206, 0, 8);
    t207 = (t205 + 4);
    t208 = *((unsigned int *)t207);
    t209 = (~(t208));
    t210 = *((unsigned int *)t205);
    t211 = (t210 & t209);
    t212 = (t211 & 1U);
    if (t212 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t207) != 0)
        goto LAB53;

LAB54:    t215 = *((unsigned int *)t180);
    t216 = *((unsigned int *)t206);
    t217 = (t215 & t216);
    *((unsigned int *)t214) = t217;
    t218 = (t180 + 4);
    t219 = (t206 + 4);
    t220 = (t214 + 4);
    t221 = *((unsigned int *)t218);
    t222 = *((unsigned int *)t219);
    t223 = (t221 | t222);
    *((unsigned int *)t220) = t223;
    t224 = *((unsigned int *)t220);
    t225 = (t224 != 0);
    if (t225 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB50;

LAB51:    *((unsigned int *)t206) = 1;
    goto LAB54;

LAB53:    t213 = (t206 + 4);
    *((unsigned int *)t206) = 1;
    *((unsigned int *)t213) = 1;
    goto LAB54;

LAB55:    t226 = *((unsigned int *)t214);
    t227 = *((unsigned int *)t220);
    *((unsigned int *)t214) = (t226 | t227);
    t228 = (t180 + 4);
    t229 = (t206 + 4);
    t230 = *((unsigned int *)t180);
    t231 = (~(t230));
    t232 = *((unsigned int *)t228);
    t233 = (~(t232));
    t234 = *((unsigned int *)t206);
    t235 = (~(t234));
    t236 = *((unsigned int *)t229);
    t237 = (~(t236));
    t238 = (t231 & t233);
    t239 = (t235 & t237);
    t240 = (~(t238));
    t241 = (~(t239));
    t242 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t242 & t240);
    t243 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t243 & t241);
    t244 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t244 & t240);
    t245 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t245 & t241);
    goto LAB57;

LAB58:    *((unsigned int *)t4) = 1;
    goto LAB61;

LAB60:    t252 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t252) = 1;
    goto LAB61;

LAB62:    t257 = (t0 + 2992U);
    t258 = *((char **)t257);
    goto LAB63;

LAB64:    t257 = (t0 + 2900U);
    t263 = *((char **)t257);
    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t3, 32, t258, 32, t263, 32);
    goto LAB70;

LAB68:    memcpy(t3, t258, 8);
    goto LAB70;

}

static void Always_66_2(char *t0)
{
    char t4[8];
    char t23[8];
    char t37[8];
    char t44[8];
    char t76[8];
    char t90[8];
    char t106[8];
    char t114[8];
    char t152[16];
    char t156[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
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
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
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
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t153;
    char *t154;
    char *t155;
    char *t157;
    char *t158;
    char *t159;

LAB0:    t1 = (t0 + 6424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 6636);
    *((int *)t2) = 1;
    t3 = (t0 + 6452);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 1428U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB15:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB16;

LAB17:    memcpy(t44, t23, 8);

LAB18:    memset(t76, 0, 8);
    t77 = (t44 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t44);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t77) != 0)
        goto LAB28;

LAB29:    t84 = (t76 + 4);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB30;

LAB31:    memcpy(t114, t76, 8);

LAB32:    t146 = (t114 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t114);
    t150 = (t149 & t148);
    t151 = (t150 != 0);
    if (t151 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    t35 = (t0 + 3176U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t35 = (t36 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t35) != 0)
        goto LAB21;

LAB22:    t45 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t37);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t23 + 4);
    t49 = (t37 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t37) = 1;
    goto LAB22;

LAB21:    t43 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB22;

LAB23:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t23 + 4);
    t59 = (t37 + 4);
    t60 = *((unsigned int *)t23);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t37);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB25;

LAB26:    *((unsigned int *)t76) = 1;
    goto LAB29;

LAB28:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB29;

LAB30:    t88 = (t0 + 4924U);
    t89 = *((char **)t88);
    t88 = ((char*)((ng7)));
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
        goto LAB34;

LAB33:    if (t102 != 0)
        goto LAB35;

LAB36:    memset(t106, 0, 8);
    t107 = (t90 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t90);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t107) != 0)
        goto LAB39;

LAB40:    t115 = *((unsigned int *)t76);
    t116 = *((unsigned int *)t106);
    t117 = (t115 & t116);
    *((unsigned int *)t114) = t117;
    t118 = (t76 + 4);
    t119 = (t106 + 4);
    t120 = (t114 + 4);
    t121 = *((unsigned int *)t118);
    t122 = *((unsigned int *)t119);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t120);
    t125 = (t124 != 0);
    if (t125 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB34:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t105 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t106) = 1;
    goto LAB40;

LAB39:    t113 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB40;

LAB41:    t126 = *((unsigned int *)t114);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t114) = (t126 | t127);
    t128 = (t76 + 4);
    t129 = (t106 + 4);
    t130 = *((unsigned int *)t76);
    t131 = (~(t130));
    t132 = *((unsigned int *)t128);
    t133 = (~(t132));
    t134 = *((unsigned int *)t106);
    t135 = (~(t134));
    t136 = *((unsigned int *)t129);
    t137 = (~(t136));
    t138 = (t131 & t133);
    t139 = (t135 & t137);
    t140 = (~(t138));
    t141 = (~(t139));
    t142 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t142 & t140);
    t143 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t143 & t141);
    t144 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t144 & t140);
    t145 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t145 & t141);
    goto LAB43;

LAB44:    xsi_set_current_line(67, ng0);

LAB47:    xsi_set_current_line(68, ng0);
    t153 = xsi_vlog_time(t152, 1000.0000000000000, 1000.0000000000000);
    t154 = (t0 + 4372U);
    t155 = *((char **)t154);
    t154 = ((char*)((ng9)));
    memset(t156, 0, 8);
    xsi_vlog_unsigned_minus(t156, 32, t155, 32, t154, 32);
    t157 = (t0 + 4924U);
    t158 = *((char **)t157);
    t157 = (t0 + 4832U);
    t159 = *((char **)t157);
    xsi_vlogfile_write(1, 0, 0, ng8, 5, t0, (char)118, t152, 64, (char)118, t156, 32, (char)118, t158, 5, (char)118, t159, 32);
    goto LAB46;

}


extern void work_m_00000000000642644118_3027548060_init()
{
	static char *pe[] = {(void *)Cont_50_0,(void *)Cont_63_1,(void *)Always_66_2};
	xsi_register_didat("work_m_00000000000642644118_3027548060", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000642644118_3027548060.didat");
	xsi_register_executes(pe);
}
