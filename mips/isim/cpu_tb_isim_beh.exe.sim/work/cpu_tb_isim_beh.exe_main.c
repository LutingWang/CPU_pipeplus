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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000691173433_2885957937_init();
    work_m_00000000002567378397_1093763706_init();
    work_m_00000000001505214389_0895691928_init();
    work_m_00000000000057317684_1777874141_init();
    work_m_00000000001262397980_3383896982_init();
    work_m_00000000001802333847_3037376393_init();
    work_m_00000000000779559210_2841360810_init();
    work_m_00000000003769851511_3904427059_init();
    work_m_00000000000145823210_2281068017_init();
    work_m_00000000003272468119_4127636709_init();
    work_m_00000000000993479594_3363942390_init();
    work_m_00000000000771716391_3146453351_init();
    work_m_00000000004066932434_4241813833_init();
    work_m_00000000001860153035_1186247429_init();
    work_m_00000000000078215344_0112637215_init();
    work_m_00000000002882610056_4042351975_init();
    work_m_00000000001471350214_0569075053_init();
    work_m_00000000000938931948_2725559894_init();
    work_m_00000000003744177470_2441410785_init();
    work_m_00000000001510766771_0143501659_init();
    work_m_00000000000935278322_1907459465_init();
    work_m_00000000002238136324_4264226133_init();
    work_m_00000000001501138747_1478884976_init();
    work_m_00000000000200147298_0010801604_init();
    work_m_00000000002117951164_2137656763_init();
    work_m_00000000002541276039_3198443470_init();
    work_m_00000000003143444660_2799342281_init();
    work_m_00000000000464582732_1818037894_init();
    work_m_00000000002055417955_2181625025_init();
    work_m_00000000002481792377_3027548060_init();
    work_m_00000000002623619602_2364370701_init();
    work_m_00000000001589860702_1200043877_init();
    work_m_00000000002379986576_1912994691_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002379986576_1912994691");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}