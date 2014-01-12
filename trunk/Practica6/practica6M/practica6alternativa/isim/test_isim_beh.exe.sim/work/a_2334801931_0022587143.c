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
static const char *ng0 = "C:/Users/enrique ballesteros/Desktop/Tercero/TOC/toc-practicas/Practica6/Nueva carpeta/practica6.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );
int ieee_p_3499444699_sub_252593879_3536714472(char *, int );


static void work_a_2334801931_0022587143_p_0(char *t0)
{
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 7888);
    t3 = (t0 + 3976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 5U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 7893);
    *((int *)t1) = 0;
    t2 = (t0 + 7897);
    *((int *)t2) = 19;
    t8 = 0;
    t9 = 19;

LAB2:    if (t8 <= t9)
        goto LAB3;

LAB5:    t1 = (t0 + 3880);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 7624U);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 7893);
    t10 = ieee_p_3499444699_sub_252593879_3536714472(IEEE_P_3499444699, *((int *)t5));
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 19, 1, t10);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t7 = (t6 + t14);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 4;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 4);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t3, t7, t15);
    if (t20 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 7893);
    t8 = *((int *)t1);
    t2 = (t0 + 7897);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB5;

LAB12:    t10 = (t8 + 1);
    t8 = t10;
    t3 = (t0 + 7893);
    *((int *)t3) = t8;
    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);
    t17 = (t0 + 4040);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 7893);
    t2 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t15, *((int *)t1), 5);
    t3 = (t15 + 12U);
    t12 = *((unsigned int *)t3);
    t12 = (t12 * 1U);
    t20 = (5U != t12);
    if (t20 == 1)
        goto LAB9;

LAB10:    t4 = (t0 + 3976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t16 = *((char **)t7);
    memcpy(t16, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);
    goto LAB5;

LAB9:    xsi_size_not_matching(5U, t12, 0);
    goto LAB10;

LAB11:    goto LAB7;

}

static void work_a_2334801931_0022587143_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 7901);
    t5 = (t0 + 4104);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB3:    t1 = (t0 + 3896);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t1 = (t0 + 4104);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}


extern void work_a_2334801931_0022587143_init()
{
	static char *pe[] = {(void *)work_a_2334801931_0022587143_p_0,(void *)work_a_2334801931_0022587143_p_1};
	xsi_register_didat("work_a_2334801931_0022587143", "isim/test_isim_beh.exe.sim/work/a_2334801931_0022587143.didat");
	xsi_register_executes(pe);
}
