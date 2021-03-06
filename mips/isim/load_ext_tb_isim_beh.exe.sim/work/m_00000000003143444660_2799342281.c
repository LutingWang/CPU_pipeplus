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
static const char *ng0 = "C:/Users/ThinkPad/Documents/ISE/mips/mips/mips/cpu/datapath/5_W/loadExt.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {24, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {16, 0};



static void Always_31_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t14[8];
    char t41[8];
    char t42[8];
    char t52[8];
    char t56[8];
    char t68[8];
    char t69[8];
    char t81[136];
    char t82[136];
    char t83[128];
    char t84[136];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
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
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB14:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);

LAB15:    t7 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 2, t7, 2);
    if (t9 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 2, t2, 2);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 2, t2, 2);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 2, t2, 2);
    if (t6 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB13;

LAB9:    xsi_set_current_line(41, ng0);

LAB93:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t10) = t19;
    t20 = *((unsigned int *)t7);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t3) = t22;

LAB94:    t12 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t10, 1, t12, 1);
    if (t9 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 1, t2, 1);
    if (t6 == 1)
        goto LAB97;

LAB98:
LAB99:    goto LAB13;

LAB11:    xsi_set_current_line(47, ng0);

LAB134:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB13;

LAB16:    xsi_set_current_line(35, ng0);
    t12 = (t0 + 876U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t15 = (t13 + 4);
    t16 = (t12 + 4);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB28;

LAB25:    if (t26 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t14) = 1;

LAB28:    memset(t11, 0, 8);
    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t30) != 0)
        goto LAB31;

LAB32:    t37 = (t11 + 4);
    t38 = *((unsigned int *)t11);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB33;

LAB34:    t64 = *((unsigned int *)t11);
    t65 = (~(t64));
    t66 = *((unsigned int *)t37);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t37) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t11) > 0)
        goto LAB39;

LAB40:    memcpy(t10, t68, 8);

LAB41:    t80 = (t0 + 1104);
    xsi_vlogvar_assign_value(t80, t10, 0, 0, 32);
    goto LAB24;

LAB18:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t7 = (t4 + 4);
    t12 = (t3 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t3);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB45;

LAB42:    if (t26 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t14) = 1;

LAB45:    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t15) != 0)
        goto LAB48;

LAB49:    t29 = (t11 + 4);
    t38 = *((unsigned int *)t11);
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB50;

LAB51:    t64 = *((unsigned int *)t11);
    t65 = (~(t64));
    t66 = *((unsigned int *)t29);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t29) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t11) > 0)
        goto LAB56;

LAB57:    memcpy(t10, t68, 8);

LAB58:    t71 = (t0 + 1104);
    xsi_vlogvar_assign_value(t71, t10, 0, 0, 32);
    goto LAB24;

LAB20:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t7 = (t4 + 4);
    t12 = (t3 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t3);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB62;

LAB59:    if (t26 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t14) = 1;

LAB62:    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t15) != 0)
        goto LAB65;

LAB66:    t29 = (t11 + 4);
    t38 = *((unsigned int *)t11);
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB67;

LAB68:    t64 = *((unsigned int *)t11);
    t65 = (~(t64));
    t66 = *((unsigned int *)t29);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t29) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t11) > 0)
        goto LAB73;

LAB74:    memcpy(t10, t68, 8);

LAB75:    t71 = (t0 + 1104);
    xsi_vlogvar_assign_value(t71, t10, 0, 0, 32);
    goto LAB24;

LAB22:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t7 = (t4 + 4);
    t12 = (t3 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t3);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB79;

LAB76:    if (t26 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t14) = 1;

LAB79:    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t15) != 0)
        goto LAB82;

LAB83:    t29 = (t11 + 4);
    t38 = *((unsigned int *)t11);
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB84;

LAB85:    t64 = *((unsigned int *)t11);
    t65 = (~(t64));
    t66 = *((unsigned int *)t29);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t29) > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t11) > 0)
        goto LAB90;

LAB91:    memcpy(t10, t68, 8);

LAB92:    t71 = (t0 + 1104);
    xsi_vlogvar_assign_value(t71, t10, 0, 0, 32);
    goto LAB24;

LAB27:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t11) = 1;
    goto LAB32;

LAB31:    t36 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB32;

LAB33:    t43 = (t0 + 600U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 255U);
    t53 = ((char*)((ng2)));
    t54 = (t0 + 600U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    t54 = (t56 + 4);
    t57 = (t55 + 4);
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 7);
    t60 = (t59 & 1);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 7);
    t63 = (t62 & 1);
    *((unsigned int *)t54) = t63;
    xsi_vlog_mul_concat(t52, 24, 1, t53, 1U, t56, 1);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t52, 24, t42, 8);
    goto LAB34;

LAB35:    t70 = (t0 + 600U);
    t71 = *((char **)t70);
    memset(t69, 0, 8);
    t70 = (t69 + 4);
    t72 = (t71 + 4);
    t73 = *((unsigned int *)t71);
    t74 = (t73 >> 0);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t72);
    t76 = (t75 >> 0);
    *((unsigned int *)t70) = t76;
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & 255U);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 255U);
    t79 = ((char*)((ng1)));
    xsi_vlogtype_concat(t68, 32, 32, 2U, t79, 24, t69, 8);
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t68, 32);
    goto LAB41;

LAB39:    memcpy(t10, t41, 8);
    goto LAB41;

LAB44:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t11) = 1;
    goto LAB49;

LAB48:    t16 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB49;

LAB50:    t30 = (t0 + 600U);
    t36 = *((char **)t30);
    memset(t42, 0, 8);
    t30 = (t42 + 4);
    t37 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (t46 >> 8);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t37);
    t49 = (t48 >> 8);
    *((unsigned int *)t30) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & 255U);
    t43 = ((char*)((ng2)));
    t44 = (t0 + 600U);
    t45 = *((char **)t44);
    memset(t56, 0, 8);
    t44 = (t56 + 4);
    t53 = (t45 + 4);
    t58 = *((unsigned int *)t45);
    t59 = (t58 >> 15);
    t60 = (t59 & 1);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t53);
    t62 = (t61 >> 15);
    t63 = (t62 & 1);
    *((unsigned int *)t44) = t63;
    xsi_vlog_mul_concat(t52, 24, 1, t43, 1U, t56, 1);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t52, 24, t42, 8);
    goto LAB51;

LAB52:    t54 = (t0 + 600U);
    t55 = *((char **)t54);
    memset(t69, 0, 8);
    t54 = (t69 + 4);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t55);
    t74 = (t73 >> 8);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t57);
    t76 = (t75 >> 8);
    *((unsigned int *)t54) = t76;
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & 255U);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & 255U);
    t70 = ((char*)((ng1)));
    xsi_vlogtype_concat(t68, 32, 32, 2U, t70, 24, t69, 8);
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t68, 32);
    goto LAB58;

LAB56:    memcpy(t10, t41, 8);
    goto LAB58;

LAB61:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t11) = 1;
    goto LAB66;

LAB65:    t16 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB66;

LAB67:    t30 = (t0 + 600U);
    t36 = *((char **)t30);
    memset(t42, 0, 8);
    t30 = (t42 + 4);
    t37 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (t46 >> 16);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t37);
    t49 = (t48 >> 16);
    *((unsigned int *)t30) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & 255U);
    t43 = ((char*)((ng2)));
    t44 = (t0 + 600U);
    t45 = *((char **)t44);
    memset(t56, 0, 8);
    t44 = (t56 + 4);
    t53 = (t45 + 4);
    t58 = *((unsigned int *)t45);
    t59 = (t58 >> 24);
    t60 = (t59 & 1);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t53);
    t62 = (t61 >> 24);
    t63 = (t62 & 1);
    *((unsigned int *)t44) = t63;
    xsi_vlog_mul_concat(t52, 24, 1, t43, 1U, t56, 1);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t52, 24, t42, 8);
    goto LAB68;

LAB69:    t54 = (t0 + 600U);
    t55 = *((char **)t54);
    memset(t69, 0, 8);
    t54 = (t69 + 4);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t55);
    t74 = (t73 >> 16);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t57);
    t76 = (t75 >> 16);
    *((unsigned int *)t54) = t76;
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & 255U);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & 255U);
    t70 = ((char*)((ng1)));
    xsi_vlogtype_concat(t68, 32, 32, 2U, t70, 24, t69, 8);
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t68, 32);
    goto LAB75;

LAB73:    memcpy(t10, t41, 8);
    goto LAB75;

LAB78:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t11) = 1;
    goto LAB83;

LAB82:    t16 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB83;

LAB84:    t30 = (t0 + 600U);
    t36 = *((char **)t30);
    memset(t42, 0, 8);
    t30 = (t42 + 4);
    t37 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (t46 >> 24);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t37);
    t49 = (t48 >> 24);
    *((unsigned int *)t30) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & 255U);
    t43 = ((char*)((ng2)));
    t44 = (t0 + 600U);
    t45 = *((char **)t44);
    memset(t56, 0, 8);
    t44 = (t56 + 4);
    t53 = (t45 + 4);
    t58 = *((unsigned int *)t45);
    t59 = (t58 >> 31);
    t60 = (t59 & 1);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t53);
    t62 = (t61 >> 31);
    t63 = (t62 & 1);
    *((unsigned int *)t44) = t63;
    xsi_vlog_mul_concat(t52, 24, 1, t43, 1U, t56, 1);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t52, 24, t42, 8);
    goto LAB85;

LAB86:    t54 = (t0 + 600U);
    t55 = *((char **)t54);
    memset(t69, 0, 8);
    t54 = (t69 + 4);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t55);
    t74 = (t73 >> 24);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t57);
    t76 = (t75 >> 24);
    *((unsigned int *)t54) = t76;
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & 255U);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & 255U);
    t70 = ((char*)((ng1)));
    xsi_vlogtype_concat(t68, 32, 32, 2U, t70, 24, t69, 8);
    goto LAB87;

LAB88:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t68, 32);
    goto LAB92;

LAB90:    memcpy(t10, t41, 8);
    goto LAB92;

LAB95:    xsi_set_current_line(43, ng0);
    t13 = (t0 + 876U);
    t15 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t16 = (t15 + 4);
    t29 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t24 = *((unsigned int *)t13);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t16);
    t27 = *((unsigned int *)t29);
    t28 = (t26 ^ t27);
    t31 = (t25 | t28);
    t32 = *((unsigned int *)t16);
    t33 = *((unsigned int *)t29);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t38 = (t31 & t35);
    if (t38 != 0)
        goto LAB103;

LAB100:    if (t34 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t14) = 1;

LAB103:    memset(t11, 0, 8);
    t36 = (t14 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t46 = *((unsigned int *)t14);
    t47 = (t46 & t40);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t36) != 0)
        goto LAB106;

LAB107:    t43 = (t11 + 4);
    t49 = *((unsigned int *)t11);
    t50 = *((unsigned int *)t43);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB108;

LAB109:    t64 = *((unsigned int *)t11);
    t65 = (~(t64));
    t66 = *((unsigned int *)t43);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t43) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t11) > 0)
        goto LAB114;

LAB115:    memcpy(t81, t84, 136);

LAB116:    t79 = (t0 + 1104);
    xsi_vlogvar_assign_value(t79, t81, 0, 0, 32);
    goto LAB99;

LAB97:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t7 = (t4 + 4);
    t12 = (t3 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t3);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB120;

LAB117:    if (t26 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t14) = 1;

LAB120:    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t15) != 0)
        goto LAB123;

LAB124:    t29 = (t11 + 4);
    t38 = *((unsigned int *)t11);
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB125;

LAB126:    t58 = *((unsigned int *)t11);
    t59 = (~(t58));
    t60 = *((unsigned int *)t29);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t29) > 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t11) > 0)
        goto LAB131;

LAB132:    memcpy(t81, t84, 136);

LAB133:    t57 = (t0 + 1104);
    xsi_vlogvar_assign_value(t57, t81, 0, 0, 32);
    goto LAB99;

LAB102:    t30 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t11) = 1;
    goto LAB107;

LAB106:    t37 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB107;

LAB108:    t44 = (t0 + 600U);
    t45 = *((char **)t44);
    memset(t41, 0, 8);
    t44 = (t41 + 4);
    t53 = (t45 + 4);
    t58 = *((unsigned int *)t45);
    t59 = (t58 >> 0);
    *((unsigned int *)t41) = t59;
    t60 = *((unsigned int *)t53);
    t61 = (t60 >> 0);
    *((unsigned int *)t44) = t61;
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & 65535U);
    t63 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t63 & 65535U);
    t54 = ((char*)((ng6)));
    t55 = (t0 + 600U);
    t57 = *((char **)t55);
    xsi_vlog_mul_concat(t83, 512, 32, t54, 1U, t57, 32);
    xsi_vlogtype_concat(t82, 528, 528, 2U, t83, 512, t41, 16);
    goto LAB109;

LAB110:    t55 = (t0 + 600U);
    t70 = *((char **)t55);
    memset(t42, 0, 8);
    t55 = (t42 + 4);
    t71 = (t70 + 4);
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 0);
    *((unsigned int *)t42) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 >> 0);
    *((unsigned int *)t55) = t76;
    t77 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t77 & 65535U);
    t78 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t78 & 65535U);
    t72 = ((char*)((ng1)));
    xsi_vlogtype_concat(t84, 528, 32, 2U, t72, 16, t42, 16);
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t81, 528, t82, 528, t84, 528);
    goto LAB116;

LAB114:    memcpy(t81, t82, 136);
    goto LAB116;

LAB119:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB120;

LAB121:    *((unsigned int *)t11) = 1;
    goto LAB124;

LAB123:    t16 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB124;

LAB125:    t30 = (t0 + 600U);
    t36 = *((char **)t30);
    memset(t41, 0, 8);
    t30 = (t41 + 4);
    t37 = (t36 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (t46 >> 16);
    *((unsigned int *)t41) = t47;
    t48 = *((unsigned int *)t37);
    t49 = (t48 >> 16);
    *((unsigned int *)t30) = t49;
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 65535U);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & 65535U);
    t43 = ((char*)((ng6)));
    t44 = (t0 + 600U);
    t45 = *((char **)t44);
    xsi_vlog_mul_concat(t83, 512, 32, t43, 1U, t45, 32);
    xsi_vlogtype_concat(t82, 528, 528, 2U, t83, 512, t41, 16);
    goto LAB126;

LAB127:    t44 = (t0 + 600U);
    t53 = *((char **)t44);
    memset(t42, 0, 8);
    t44 = (t42 + 4);
    t54 = (t53 + 4);
    t62 = *((unsigned int *)t53);
    t63 = (t62 >> 16);
    *((unsigned int *)t42) = t63;
    t64 = *((unsigned int *)t54);
    t65 = (t64 >> 16);
    *((unsigned int *)t44) = t65;
    t66 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t66 & 65535U);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & 65535U);
    t55 = ((char*)((ng1)));
    xsi_vlogtype_concat(t84, 528, 32, 2U, t55, 16, t42, 16);
    goto LAB128;

LAB129:    xsi_vlog_unsigned_bit_combine(t81, 528, t82, 528, t84, 528);
    goto LAB133;

LAB131:    memcpy(t81, t82, 136);
    goto LAB133;

}


extern void work_m_00000000003143444660_2799342281_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000003143444660_2799342281", "isim/load_ext_tb_isim_beh.exe.sim/work/m_00000000003143444660_2799342281.didat");
	xsi_register_executes(pe);
}
