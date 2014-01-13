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
static const char *ng0 = "C:/hlocal/toc-practicas/Practica6/practica6/practica6.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0809920161_3212880686_p_0(char *t0)
{
    char t20[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5456);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(124, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 1512U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3112U);
    t4 = *((char **)t2);
    t2 = (t0 + 8912U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t4, t2, 1);
    t8 = (t20 + 12U);
    t21 = *((unsigned int *)t8);
    t22 = (1U * t21);
    t1 = (5U != t22);
    if (t1 == 1)
        goto LAB14;

LAB15:    t11 = (t0 + 5584);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 5U);
    xsi_driver_first_trans_fast(t11);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(126, ng0);
    t4 = xsi_get_transient_memory(5U);
    memset(t4, 0, 5U);
    t14 = t4;
    memset(t14, (unsigned char)2, 5U);
    t15 = (t0 + 5584);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB12;

LAB14:    xsi_size_not_matching(5U, t22, 0);
    goto LAB15;

}

static void work_a_0809920161_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(133, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 5648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 5472);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0809920161_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(151, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 5712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB3:    t1 = (t0 + 5488);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t1 = (t0 + 5712);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void work_a_0809920161_3212880686_p_3(char *t0)
{
    char t13[16];
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
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 5776);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(159, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 5840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t9 = (t8 - 1);
    t1 = (t0 + 9018);
    *((int *)t1) = 0;
    t3 = (t0 + 9022);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB2:    if (t10 <= t11)
        goto LAB3;

LAB5:    t1 = (t0 + 5504);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(161, ng0);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t4 = (t0 + 8800U);
    t6 = (t0 + 2472U);
    t7 = *((char **)t6);
    t6 = (t0 + 8864U);
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t4, t7, t6);
    if (t12 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 9018);
    t10 = *((int *)t1);
    t2 = (t0 + 9022);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB5;

LAB11:    t8 = (t10 + 1);
    t10 = t8;
    t3 = (t0 + 9018);
    *((int *)t3) = t10;
    goto LAB2;

LAB6:    xsi_set_current_line(162, ng0);
    t14 = (t0 + 9018);
    t15 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t13, *((int *)t14), 8);
    t16 = (t13 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = (8U != t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    t19 = (t0 + 5840);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 5776);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB7;

LAB9:    xsi_size_not_matching(8U, t17, 0);
    goto LAB10;

}


extern void work_a_0809920161_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0809920161_3212880686_p_0,(void *)work_a_0809920161_3212880686_p_1,(void *)work_a_0809920161_3212880686_p_2,(void *)work_a_0809920161_3212880686_p_3};
	xsi_register_didat("work_a_0809920161_3212880686", "isim/tb_practica6_2_isim_beh.exe.sim/work/a_0809920161_3212880686.didat");
	xsi_register_executes(pe);
}
