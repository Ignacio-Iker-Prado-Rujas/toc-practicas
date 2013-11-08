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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/hlocal/toc/Practica3/Pr3/multiplicador.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );


static void work_a_1418136488_3212880686_p_0(char *t0)
{
    int t1;
    int t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;
    unsigned char t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (2 * 5);
    t2 = (t1 - 2);
    t3 = (t0 + 32284);
    *((int *)t3) = 0;
    t4 = (t0 + 32288);
    *((int *)t4) = t2;
    t5 = 0;
    t6 = t2;

LAB2:    if (t5 <= t6)
        goto LAB3;

LAB5:    t3 = (t0 + 22112);
    *((int *)t3) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(53, ng0);
    t7 = (t0 + 32284);
    t8 = (2 * 5);
    t9 = (t8 - 1);
    t10 = *((int *)t7);
    t11 = (t10 - t9);
    t12 = (t11 * -1);
    t13 = (1 * t12);
    t14 = (0U + t13);
    t15 = (t0 + 22208);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_delta(t15, t14, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t3 = (t0 + 32284);
    t1 = (2 * 5);
    t2 = (t1 - 1);
    t8 = *((int *)t3);
    t9 = (t8 - t2);
    t12 = (t9 * -1);
    t13 = (1 * t12);
    t14 = (0U + t13);
    t4 = (t0 + 22272);
    t7 = (t4 + 56U);
    t15 = *((char **)t7);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, t14, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t3 = (t0 + 32284);
    t1 = *((int *)t3);
    t20 = (t1 < 5);
    if (t20 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t3 = (t0 + 32284);
    t5 = *((int *)t3);
    t4 = (t0 + 32288);
    t6 = *((int *)t4);
    if (t5 == t6)
        goto LAB5;

LAB9:    t1 = (t5 + 1);
    t5 = t1;
    t7 = (t0 + 32284);
    *((int *)t7) = t5;
    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 13704U);
    t7 = *((char **)t4);
    t4 = (t0 + 32284);
    t2 = *((int *)t4);
    t8 = (t2 - 4);
    t12 = (t8 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t4));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t15 = (t7 + t14);
    t21 = *((unsigned char *)t15);
    t16 = (t0 + 13864U);
    t17 = *((char **)t16);
    t9 = (0 - 4);
    t22 = (t9 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t16 = (t17 + t24);
    t25 = *((unsigned char *)t16);
    t26 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t21, t25);
    t18 = (t0 + 32284);
    t10 = (2 * 5);
    t11 = (t10 - 1);
    t27 = *((int *)t18);
    t28 = (t27 - t11);
    t29 = (t28 * -1);
    t30 = (1 * t29);
    t31 = (0U + t30);
    t19 = (t0 + 22208);
    t32 = (t19 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t26;
    xsi_driver_first_trans_delta(t19, t31, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t3 = (t0 + 32284);
    t1 = *((int *)t3);
    t2 = (t1 - 0);
    t12 = (t2 * 1);
    t13 = (10U * t12);
    t14 = (0U + t13);
    t8 = (2 * 5);
    t9 = (t8 - 1);
    t10 = (0 - t9);
    t22 = (t10 * -1);
    t23 = (1 * t22);
    t24 = (t14 + t23);
    t4 = (t0 + 22272);
    t7 = (t4 + 56U);
    t15 = *((char **)t7);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, t24, 1, 0LL);
    goto LAB7;

}

static void work_a_1418136488_3212880686_p_1(char *t0)
{
    int t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    unsigned char t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    unsigned char t40;
    unsigned char t41;
    char *t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    int t49;
    int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;

LAB0:    xsi_set_current_line(64, ng0);
    t1 = (5 - 2);
    t2 = (t0 + 32292);
    *((int *)t2) = 0;
    t3 = (t0 + 32296);
    *((int *)t3) = t1;
    t4 = 0;
    t5 = t1;

LAB2:    if (t4 <= t5)
        goto LAB3;

LAB5:    t2 = (t0 + 22128);
    *((int *)t2) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(65, ng0);
    t6 = (2 * 5);
    t7 = (t6 - 2);
    t8 = (t0 + 32300);
    *((int *)t8) = 0;
    t9 = (t0 + 32304);
    *((int *)t9) = t7;
    t10 = 0;
    t11 = t7;

LAB6:    if (t10 <= t11)
        goto LAB7;

LAB9:
LAB4:    t2 = (t0 + 32292);
    t4 = *((int *)t2);
    t3 = (t0 + 32296);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB5;

LAB17:    t1 = (t4 + 1);
    t4 = t1;
    t8 = (t0 + 32292);
    *((int *)t8) = t4;
    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);
    t12 = (t0 + 32292);
    t13 = *((int *)t12);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    t16 = (10U * t15);
    t17 = (0U + t16);
    t18 = (t0 + 32300);
    t19 = (2 * 5);
    t20 = (t19 - 1);
    t21 = *((int *)t18);
    t22 = (t21 - t20);
    t23 = (t22 * -1);
    t24 = (1 * t23);
    t25 = (t17 + t24);
    t26 = (t0 + 22336);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_first_trans_delta(t26, t25, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 32300);
    t3 = (t0 + 32292);
    t1 = *((int *)t3);
    t6 = (t1 + 1);
    t7 = *((int *)t2);
    t32 = (t7 >= t6);
    if (t32 == 1)
        goto LAB13;

LAB14:    t31 = (unsigned char)0;

LAB15:    if (t31 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    t2 = (t0 + 32300);
    t10 = *((int *)t2);
    t3 = (t0 + 32304);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB9;

LAB16:    t1 = (t10 + 1);
    t10 = t1;
    t8 = (t0 + 32300);
    *((int *)t8) = t10;
    goto LAB6;

LAB10:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 13864U);
    t18 = *((char **)t12);
    t12 = (t0 + 32292);
    t20 = *((int *)t12);
    t21 = (t20 + 1);
    t22 = (t21 - 4);
    t15 = (t22 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t21);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t26 = (t18 + t17);
    t34 = *((unsigned char *)t26);
    t27 = (t0 + 13704U);
    t28 = *((char **)t27);
    t27 = (t0 + 32300);
    t29 = (t0 + 32292);
    t35 = *((int *)t27);
    t36 = *((int *)t29);
    t37 = (t35 - t36);
    t38 = (t37 - 1);
    t39 = (t38 - 4);
    t23 = (t39 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t38);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t30 = (t28 + t25);
    t40 = *((unsigned char *)t30);
    t41 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t34, t40);
    t42 = (t0 + 32292);
    t43 = *((int *)t42);
    t44 = (t43 - 0);
    t45 = (t44 * 1);
    t46 = (10U * t45);
    t47 = (0U + t46);
    t48 = (t0 + 32300);
    t49 = (2 * 5);
    t50 = (t49 - 1);
    t51 = *((int *)t48);
    t52 = (t51 - t50);
    t53 = (t52 * -1);
    t54 = (1 * t53);
    t55 = (t47 + t54);
    t56 = (t0 + 22336);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = t41;
    xsi_driver_first_trans_delta(t56, t55, 1, 0LL);
    goto LAB11;

LAB13:    t8 = (t0 + 32300);
    t9 = (t0 + 32292);
    t13 = *((int *)t9);
    t14 = (t13 + 5);
    t19 = *((int *)t8);
    t33 = (t19 <= t14);
    t31 = t33;
    goto LAB15;

}


extern void work_a_1418136488_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1418136488_3212880686_p_0,(void *)work_a_1418136488_3212880686_p_1};
	xsi_register_didat("work_a_1418136488_3212880686", "isim/test1_isim_beh.exe.sim/work/a_1418136488_3212880686.didat");
	xsi_register_executes(pe);
}
