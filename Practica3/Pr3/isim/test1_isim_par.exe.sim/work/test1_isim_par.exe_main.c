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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *SIMPRIM_P_0947159679;
char *IEEE_P_2717149903;
char *STD_TEXTIO;
char *SIMPRIM_P_4208868169;
char *IEEE_P_1367372525;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_2717149903_init();
    simprim_p_0947159679_init();
    ieee_p_1367372525_init();
    simprim_p_4208868169_init();
    simprim_a_0314276563_2431929443_2941601699_init();
    simprim_a_0314276563_2431929443_0999851646_init();
    simprim_a_0314276563_2431929443_2845738312_init();
    simprim_a_0314276563_2431929443_2929143188_init();
    simprim_a_0314276563_2431929443_2883074833_init();
    simprim_a_0314276563_2431929443_2853851430_init();
    simprim_a_0314276563_2431929443_0498568338_init();
    simprim_a_0314276563_2431929443_0477488805_init();
    simprim_a_0314276563_2431929443_3550759346_init();
    simprim_a_0314276563_2431929443_3529909125_init();
    simprim_a_0314276563_2431929443_3605749559_init();
    simprim_a_0314276563_2431929443_0423292960_init();
    simprim_a_0314276563_2431929443_3466688778_init();
    simprim_a_0314276563_2431929443_0418945559_init();
    simprim_a_0314276563_2431929443_0100510383_init();
    simprim_a_0314276563_2431929443_0287498797_init();
    simprim_a_0314276563_2431929443_0822520692_init();
    simprim_a_0314276563_2431929443_2811090160_init();
    simprim_a_0314276563_2431929443_2899416013_init();
    simprim_a_0314276563_2431929443_2903767546_init();
    simprim_a_0314276563_2431929443_0979037257_init();
    simprim_a_3156740924_4150518722_0287498797_init();
    simprim_a_3156740924_4150518722_0822520692_init();
    simprim_a_3156740924_4150518722_2811090160_init();
    simprim_a_3156740924_4150518722_2899416013_init();
    simprim_a_3156740924_4150518722_2903767546_init();
    simprim_a_3156740924_4150518722_0979037257_init();
    simprim_a_2587667359_1957906245_0477488805_init();
    simprim_a_3445495524_1957906245_3550759346_init();
    simprim_a_1530617660_1957906245_3550759346_init();
    simprim_a_1924145859_1957906245_3529909125_init();
    simprim_a_3663926830_1957906245_0498568338_init();
    simprim_a_0571942366_1957906245_0498568338_init();
    simprim_a_0883749843_1957906245_0477488805_init();
    simprim_a_1114409679_1957906245_3529909125_init();
    simprim_a_2587667359_1957906245_3605749559_init();
    simprim_a_4264406619_1957906245_3605749559_init();
    simprim_a_0883749843_1957906245_0423292960_init();
    simprim_a_2951689095_1957906245_3466688778_init();
    simprim_a_2587667359_1957906245_0418945559_init();
    simprim_a_3327491007_1957906245_0418945559_init();
    simprim_a_3910184593_1957906245_0100510383_init();
    simprim_a_0571942366_1957906245_0100510383_init();
    simprim_a_4264406619_1957906245_3479376701_init();
    simprim_a_1509725169_3980060181_0433961640_init();
    simprim_a_4181367278_3380326129_0433961640_init();
    simprim_a_2155285624_1178295121_0433961640_init();
    work_a_2764649485_0632001823_init();
    work_a_2221974671_2372691052_init();


    xsi_register_tops("work_a_2221974671_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    SIMPRIM_P_0947159679 = xsi_get_engine_memory("simprim_p_0947159679");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    SIMPRIM_P_4208868169 = xsi_get_engine_memory("simprim_p_4208868169");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");

    return xsi_run_simulation(argc, argv);

}
