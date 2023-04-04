#include "testmsg.h"

void testallmsg_group1()
{
	J1939_MESSAGE_T msg;
	
	getLLRE_t llre;

       config_LLRE(&llre);
       LLRE(&msg,&llre);
       send_massage(&msg);
	//速度
			getCCVS1_t ccvs1;

       config_CCVS1(&ccvs1);
       CCVS1(&msg,&ccvs1);
       send_massage(&msg);
	//引擎温度
	       getET1_t et1;

       config_ET1(&et1);
       ET1(&msg,&et1);
       send_massage(&msg);
				//灯光响应
			getLD_t ld;

       config_LD(&ld);
       LD(&msg,&ld);
       send_massage(&msg);
			 //灯光控制


        getLCMD_t lcmd;

       config_LCMD(&lcmd);
       LCMD(&msg,&lcmd);
       send_massage(&msg);
			 
       getTSC1_t tsc1;

       config_TSC1(&tsc1);
       TSC1(&msg,&tsc1);
       send_massage(&msg);
}
/*
       getTC1_t tc1;

       config_TC1(&tc1);
       TC1(&msg,&tc1);
       send_massage(&msg);
       Delay(500000);

       getXBR_t xbr;

       config_XBR(&xbr);
       XBR(&msg,&xbr);
       send_massage(&msg);
       Delay(500000);

       getGPV4_t gpv4;

       config_GPV4(&gpv4);
       GPV4(&msg,&gpv4);
       send_massage(&msg);
       Delay(500000);

       getAUXIO5_t auxio5;

       config_AUXIO5(&auxio5);
       AUXIO5(&msg,&auxio5);
       send_massage(&msg);
       Delay(500000);

       getSRASI_t srasi;

       config_SRASI(&srasi);
       SRASI(&msg,&srasi);
       send_massage(&msg);
       Delay(500000);

       getCCVS2_t ccvs2;

       config_CCVS2(&ccvs2);
       CCVS2(&msg,&ccvs2);
       send_massage(&msg);
       Delay(500000);

       getAEBS2_t aebs2;

       config_AEBS2(&aebs2);
       AEBS2(&msg,&aebs2);
       send_massage(&msg);
       Delay(500000);

       getESR_t esr;

       config_ESR(&esr);
       ESR(&msg,&esr);
       send_massage(&msg);
       Delay(500000);

       getRBR_t rbr;

       config_RBR(&rbr);
       RBR(&msg,&rbr);
       send_massage(&msg);
       Delay(500000);

       getECC_t ecc;

       config_ECC(&ecc);
       ECC(&msg,&ecc);
       send_massage(&msg);
       Delay(500000);

       getSFC_t sfc;

       config_SFC(&sfc);
       SFC(&msg,&sfc);
       send_massage(&msg);
       Delay(500000);

       getVLS1_t vls1;

       config_VLS1(&vls1);
       VLS1(&msg,&vls1);
       send_massage(&msg);
       Delay(500000);

       getHCDI1_t hcdi1;

       config_HCDI1(&hcdi1);
       HCDI1(&msg,&hcdi1);
       send_massage(&msg);
       Delay(500000);

       getAT1DPFSSC_t at1dpfssc;

       config_AT1DPFSSC(&at1dpfssc);
       AT1DPFSSC(&msg,&at1dpfssc);
       send_massage(&msg);
       Delay(500000);

       getAT2DPFSSC_t at2dpfssc;

       config_AT2DPFSSC(&at2dpfssc);
       AT2DPFSSC(&msg,&at2dpfssc);
       send_massage(&msg);
       Delay(500000);

       getLVDSOM_t lvdsom;

       config_LVDSOM(&lvdsom);
       LVDSOM(&msg,&lvdsom);
       send_massage(&msg);
       Delay(500000);

       getNCS_t ncs;

       config_NCS(&ncs);
       NCS(&msg,&ncs);
       send_massage(&msg);
       Delay(500000);

       getNC1_t nc1;

       config_NC1(&nc1);
       NC1(&msg,&nc1);
       send_massage(&msg);
       Delay(500000);

       getJLCM_t jlcm;

       config_JLCM(&jlcm);
       JLCM(&msg,&jlcm);
       send_massage(&msg);
       Delay(500000);

       getAUXIO7_t auxio7;

       config_AUXIO7(&auxio7);
       AUXIO7(&msg,&auxio7);
       send_massage(&msg);
       Delay(500000);

       getAUXIO6_t auxio6;

       config_AUXIO6(&auxio6);
       AUXIO6(&msg,&auxio6);
       send_massage(&msg);
       Delay(500000);

       getAUXIO4_t auxio4;

       config_AUXIO4(&auxio4);
       AUXIO4(&msg,&auxio4);
       send_massage(&msg);
       Delay(500000);

       getAUXIO3_t auxio3;

       config_AUXIO3(&auxio3);
       AUXIO3(&msg,&auxio3);
       send_massage(&msg);
       Delay(500000);

       getAUXIO2_t auxio2;

       config_AUXIO2(&auxio2);
       AUXIO2(&msg,&auxio2);
       send_massage(&msg);
       Delay(500000);

       getDISP1_t disp1;

       config_DISP1(&disp1);
       DISP1(&msg,&disp1);
       send_massage(&msg);
       Delay(500000);

       getFLIC_t flic;

       config_FLIC(&flic);
       FLIC(&msg,&flic);
       send_massage(&msg);
       Delay(500000);

       getTPRS_t tprs;

       config_TPRS(&tprs);
       TPRS(&msg,&tprs);
       send_massage(&msg);
       Delay(500000);

       getCTL_t ctl;

       config_CTL(&ctl);
       CTL(&msg,&ctl);
       send_massage(&msg);
       Delay(500000);

       getCL_t cl;

       config_CL(&cl);
       CL(&msg,&cl);
       send_massage(&msg);
       Delay(500000);

       getASC6_t asc6;

       config_ASC6(&asc6);
       ASC6(&msg,&asc6);
       send_massage(&msg);
       Delay(500000);

       getASC2_t asc2;

       config_ASC2(&asc2);
       ASC2(&msg,&asc2);
       send_massage(&msg);
       Delay(500000);

       getTDA_t tda;

       config_TDA(&tda);
       TDA(&msg,&tda);
       send_massage(&msg);
       Delay(500000);

       getATS_t ats;

       config_ATS(&ats);
       ATS(&msg,&ats);
       send_massage(&msg);
       Delay(500000);

       getATR_t atr;

       config_ATR(&atr);
       ATR(&msg,&atr);
       send_massage(&msg);
       Delay(500000);

       getCM1_t cm1;

       config_CM1(&cm1);
       CM1(&msg,&cm1);
       send_massage(&msg);
       Delay(500000);

       getERC1_t erc1;

       config_ERC1(&erc1);
       ERC1(&msg,&erc1);
       send_massage(&msg);
       Delay(500000);

       getEBC1_t ebc1;

       config_EBC1(&ebc1);
       EBC1(&msg,&ebc1);
       send_massage(&msg);
       Delay(500000);

       getETC1_t etc1;

       config_ETC1(&etc1);
       ETC1(&msg,&etc1);
       send_massage(&msg);
       Delay(500000);

       getEEC2_t eec2;

       config_EEC2(&eec2);
       EEC2(&msg,&eec2);
       send_massage(&msg);
       Delay(500000);

       getEEC1_t eec1;

       config_EEC1(&eec1);
       EEC1(&msg,&eec1);
       send_massage(&msg);
       Delay(500000);

       getETC2_t etc2;

       config_ETC2(&etc2);
       ETC2(&msg,&etc2);
       send_massage(&msg);
       Delay(500000);

       getEAC1_t eac1;

       config_EAC1(&eac1);
       EAC1(&msg,&eac1);
       send_massage(&msg);
       Delay(500000);

       getFLI1_t fli1;

       config_FLI1(&fli1);
       FLI1(&msg,&fli1);
       send_massage(&msg);
       Delay(500000);

       getHPG_t hpg;

       config_HPG(&hpg);
       HPG(&msg,&hpg);
       send_massage(&msg);
       Delay(500000);

       getVDC2_t vdc2;

       config_VDC2(&vdc2);
       VDC2(&msg,&vdc2);
       send_massage(&msg);
       Delay(500000);

       getEGF1_t egf1;

       config_EGF1(&egf1);
       EGF1(&msg,&egf1);
       send_massage(&msg);
       Delay(500000);

       getESC1_t esc1;

       config_ESC1(&esc1);
       ESC1(&msg,&esc1);
       send_massage(&msg);
       Delay(500000);

       getETC8_t etc8;

       config_ETC8(&etc8);
       ETC8(&msg,&etc8);
       send_massage(&msg);
       Delay(500000);

       getLOI_t loi;

       config_LOI(&loi);
       LOI(&msg,&loi);
       send_massage(&msg);
       Delay(500000);

       getAT1IG1_t at1ig1;

       config_AT1IG1(&at1ig1);
       AT1IG1(&msg,&at1ig1);
       send_massage(&msg);
       Delay(500000);

       getAT1OG1_t at1og1;

       config_AT1OG1(&at1og1);
       AT1OG1(&msg,&at1og1);
       send_massage(&msg);
       Delay(500000);

       getAT2IG1_t at2ig1;

       config_AT2IG1(&at2ig1);
       AT2IG1(&msg,&at2ig1);
       send_massage(&msg);
       Delay(500000);

       getAT2OG1_t at2og1;

       config_AT2OG1(&at2og1);
       AT2OG1(&msg,&at2og1);
       send_massage(&msg);
       Delay(500000);

       getFWSS1_t fwss1;

       config_FWSS1(&fwss1);
       FWSS1(&msg,&fwss1);
       send_massage(&msg);
       Delay(500000);

       getSSI_t ssi;

       config_SSI(&ssi);
       SSI(&msg,&ssi);
       send_massage(&msg);
       Delay(500000);

       getBI_t bi;

       config_BI(&bi);
       BI(&msg,&bi);
       send_massage(&msg);
       Delay(500000);

       getCCS_t ccs;

       config_CCS(&ccs);
       CCS(&msg,&ccs);
       send_massage(&msg);
       Delay(500000);

       getKL1_t kl1;

       config_KL1(&kl1);
       KL1(&msg,&kl1);
       send_massage(&msg);
       Delay(500000);

       getKL2_t kl2;

       config_KL2(&kl2);
       KL2(&msg,&kl2);
       send_massage(&msg);
       Delay(500000);

       getKL3_t kl3;

       config_KL3(&kl3);
       KL3(&msg,&kl3);
       send_massage(&msg);
       Delay(500000);

       getTFAC_t tfac;

       config_TFAC(&tfac);
       TFAC(&msg,&tfac);
       send_massage(&msg);
       Delay(500000);

       getSAS_t sas;

       config_SAS(&sas);
       SAS(&msg,&sas);
       send_massage(&msg);
       Delay(500000);

       getESSI_t essi;

       config_ESSI(&essi);
       ESSI(&msg,&essi);
       send_massage(&msg);
       Delay(500000);

       getA1SCRDSI1_t a1scrdsi1;

       config_A1SCRDSI1(&a1scrdsi1);
       A1SCRDSI1(&msg,&a1scrdsi1);
       send_massage(&msg);
       Delay(500000);

       getA1SCRDSR1_t a1scrdsr1;

       config_A1SCRDSR1(&a1scrdsr1);
       A1SCRDSR1(&msg,&a1scrdsr1);
       send_massage(&msg);
       Delay(500000);

       getA1SCRAI_t a1scrai;

       config_A1SCRAI(&a1scrai);
       A1SCRAI(&msg,&a1scrai);
       send_massage(&msg);
       Delay(500000);

       getA2SCRDSI1_t a2scrdsi1;

       config_A2SCRDSI1(&a2scrdsi1);
       A2SCRDSI1(&msg,&a2scrdsi1);
       send_massage(&msg);
       Delay(500000);

       getA2SCRDSR1_t a2scrdsr1;

       config_A2SCRDSR1(&a2scrdsr1);
       A2SCRDSR1(&msg,&a2scrdsr1);
       send_massage(&msg);
       Delay(500000);

       getA2SCRAI_t a2scrai;

       config_A2SCRAI(&a2scrai);
       A2SCRAI(&msg,&a2scrai);
       send_massage(&msg);
       Delay(500000);

       getSSI2_t ssi2;

       config_SSI2(&ssi2);
       SSI2(&msg,&ssi2);
       send_massage(&msg);
       Delay(500000);

       getARI_t ari;

       config_ARI(&ari);
       ARI(&msg,&ari);
       send_massage(&msg);
       Delay(500000);

       getCN_t cn;

       config_CN(&cn);
       CN(&msg,&cn);
       send_massage(&msg);
       Delay(500000);

       getMSI2_t msi2;

       config_MSI2(&msi2);
       MSI2(&msg,&msi2);
       send_massage(&msg);
       Delay(500000);

       getACCS_t accs;

       config_ACCS(&accs);
       ACCS(&msg,&accs);
       send_massage(&msg);
       Delay(500000);

       getCommand_t command;

       config_Command(&command);
       Command(&msg,&command);
       send_massage(&msg);
       Delay(500000);

       getAEBS1_t aebs1;

       config_AEBS1(&aebs1);
       AEBS1(&msg,&aebs1);
       send_massage(&msg);
       Delay(500000);

       getWS_t ws;

       config_WS(&ws);
       WS(&msg,&ws);
       send_massage(&msg);
       Delay(500000);

       getWAND_t wand;

       config_WAND(&wand);
       WAND(&msg,&wand);
       send_massage(&msg);
       Delay(500000);

       getLDISP_t ldisp;

       config_LDISP(&ldisp);
       LDISP(&msg,&ldisp);
       send_massage(&msg);
       Delay(500000);

       getA1SCRAI2_t a1scrai2;

       config_A1SCRAI2(&a1scrai2);
       A1SCRAI2(&msg,&a1scrai2);
       send_massage(&msg);
       Delay(500000);

       getA2SCRAI2_t a2scrai2;

       config_A2SCRAI2(&a2scrai2);
       A2SCRAI2(&msg,&a2scrai2);
       send_massage(&msg);
       Delay(500000);

       getHSS_t hss;

       config_HSS(&hss);
       HSS(&msg,&hss);
       send_massage(&msg);
       Delay(500000);

       getGFI4_t gfi4;

       config_GFI4(&gfi4);
       GFI4(&msg,&gfi4);
       send_massage(&msg);
       Delay(500000);

       getA2SCREGT2_t a2scregt2;

       config_A2SCREGT2(&a2scregt2);
       A2SCREGT2(&msg,&a2scregt2);
       send_massage(&msg);
       Delay(500000);

       getA1SCREGT2_t a1scregt2;

       config_A1SCREGT2(&a1scregt2);
       A1SCREGT2(&msg,&a1scregt2);
       send_massage(&msg);
       Delay(500000);

       getEEC13_t eec13;

       config_EEC13(&eec13);
       EEC13(&msg,&eec13);
       send_massage(&msg);
       Delay(500000);

       getEF_TVI2_t ef_tvi2;

       config_EF_TVI2(&ef_tvi2);
       EF_TVI2(&msg,&ef_tvi2);
       send_massage(&msg);
       Delay(500000);

       getEEGR1A_t eegr1a;

       config_EEGR1A(&eegr1a);
       EEGR1A(&msg,&eegr1a);
       send_massage(&msg);
       Delay(500000);

       getEEGR1B_t eegr1b;

       config_EEGR1B(&eegr1b);
       EEGR1B(&msg,&eegr1b);
       send_massage(&msg);
       Delay(500000);

       getEEC12_t eec12;

       config_EEC12(&eec12);
       EEC12(&msg,&eec12);
       send_massage(&msg);
       Delay(500000);

       getNSSR_t nssr;

       config_NSSR(&nssr);
       NSSR(&msg,&nssr);
       send_massage(&msg);
       Delay(500000);

       getEPSI_t epsi;

       config_EPSI(&epsi);
       EPSI(&msg,&epsi);
       send_massage(&msg);
       Delay(500000);

       getAT1P1I_t at1p1i;

       config_AT1P1I(&at1p1i);
       AT1P1I(&msg,&at1p1i);
       send_massage(&msg);
       Delay(500000);

       getAT1DPF2S5_t at1dpf2s5;

       config_AT1DPF2S5(&at1dpf2s5);
       AT1DPF2S5(&msg,&at1dpf2s5);
       send_massage(&msg);
       Delay(500000);

       getAT1DPF2S4_t at1dpf2s4;

       config_AT1DPF2S4(&at1dpf2s4);
       AT1DPF2S4(&msg,&at1dpf2s4);
       send_massage(&msg);
       Delay(500000);

       getAT1DPF2S3_t at1dpf2s3;

       config_AT1DPF2S3(&at1dpf2s3);
       AT1DPF2S3(&msg,&at1dpf2s3);
       send_massage(&msg);
       Delay(500000);

       getAT1DPF1S5_t at1dpf1s5;

       config_AT1DPF1S5(&at1dpf1s5);
       AT1DPF1S5(&msg,&at1dpf1s5);
       send_massage(&msg);
       Delay(500000);

       getAT1DPF1S4_t at1dpf1s4;

       config_AT1DPF1S4(&at1dpf1s4);
       AT1DPF1S4(&msg,&at1dpf1s4);
       send_massage(&msg);
       Delay(500000);

       getAT1DPF1S3_t at1dpf1s3;

       config_AT1DPF1S3(&at1dpf1s3);
       AT1DPF1S3(&msg,&at1dpf1s3);
       send_massage(&msg);
       Delay(500000);

       getCCVS3_t ccvs3;

       config_CCVS3(&ccvs3);
       CCVS3(&msg,&ccvs3);
       send_massage(&msg);
       Delay(500000);

       getAT2AC3_t at2ac3;

       config_AT2AC3(&at2ac3);
       AT2AC3(&msg,&at2ac3);
       send_massage(&msg);
       Delay(500000);

       getAT1AC3_t at1ac3;

       config_AT1AC3(&at1ac3);
       AT1AC3(&msg,&at1ac3);
       send_massage(&msg);
       Delay(500000);

       getEFL_P12_t efl_p12;

       config_EFL_P12(&efl_p12);
       EFL_P12(&msg,&efl_p12);
       send_massage(&msg);
       Delay(500000);

       getDPFC2_t dpfc2;

       config_DPFC2(&dpfc2);
       DPFC2(&msg,&dpfc2);
       send_massage(&msg);
       Delay(500000);

       getLFE2_t lfe2;

       config_LFE2(&lfe2);
       LFE2(&msg,&lfe2);
       send_massage(&msg);
       Delay(500000);

       getSFS_t sfs;

       config_SFS(&sfs);
       SFS(&msg,&sfs);
       send_massage(&msg);
       Delay(500000);

       getEBCC_t ebcc;

       config_EBCC(&ebcc);
       EBCC(&msg,&ebcc);
       send_massage(&msg);
       Delay(500000);

       getEFP_t efp;

       config_EFP(&efp);
       EFP(&msg,&efp);
       send_massage(&msg);
       Delay(500000);

       getHOP_t hop;

       config_HOP(&hop);
       HOP(&msg,&hop);
       send_massage(&msg);
       Delay(500000);

       getVLS2_t vls2;

       config_VLS2(&vls2);
       VLS2(&msg,&vls2);
       send_massage(&msg);
       Delay(500000);

       getEC3_t ec3;

       config_EC3(&ec3);
       EC3(&msg,&ec3);
       send_massage(&msg);
       Delay(500000);

       
}
/*
void testallmsg_group2()
{
	J1939_MESSAGE_T msg;
getIVAC_t ivac;

       config_IVAC(&ivac);
       IVAC(&msg,&ivac);
       send_massage(&msg);
       Delay(500000);

       getARMSWIMC_t armswimc;

       config_ARMSWIMC(&armswimc);
       ARMSWIMC(&msg,&armswimc);
       send_massage(&msg);
       Delay(500000);

       getVEP4_t vep4;

       config_VEP4(&vep4);
       VEP4(&msg,&vep4);
       send_massage(&msg);
       Delay(500000);

       getAFT2NAI_t aft2nai;

       config_AFT2NAI(&aft2nai);
       AFT2NAI(&msg,&aft2nai);
       send_massage(&msg);
       Delay(500000);

       getAFT1NAI_t aft1nai;

       config_AFT1NAI(&aft1nai);
       AFT1NAI(&msg,&aft1nai);
       send_massage(&msg);
       Delay(500000);

       getAT2WUDOC_t at2wudoc;

       config_AT2WUDOC(&at2wudoc);
       AT2WUDOC(&msg,&at2wudoc);
       send_massage(&msg);
       Delay(500000);

       getLLRE_t llre;

       config_LLRE(&llre);
       LLRE(&msg,&llre);
       send_massage(&msg);
       Delay(500000);

       getEFL_P11_t efl_p11;

       config_EFL_P11(&efl_p11);
       EFL_P11(&msg,&efl_p11);
       send_massage(&msg);
       Delay(500000);

       getEFS2_t efs2;

       config_EFS2(&efs2);
       EFS2(&msg,&efs2);
       send_massage(&msg);
       Delay(500000);

       getInformation_t information;

       config_Information(&information);
       Information(&msg,&information);
       send_massage(&msg);
       Delay(500000);

       getEFTVI1_t eftvi1;

       config_EFTVI1(&eftvi1);
       EFTVI1(&msg,&eftvi1);
       send_massage(&msg);
       Delay(500000);

       getETCBI_t etcbi;

       config_ETCBI(&etcbi);
       ETCBI(&msg,&etcbi);
       send_massage(&msg);
       Delay(500000);

       getCAC2_t cac2;

       config_CAC2(&cac2);
       CAC2(&msg,&cac2);
       send_massage(&msg);
       Delay(500000);

       getCAC2P_t cac2p;

       config_CAC2P(&cac2p);
       CAC2P(&msg,&cac2p);
       send_massage(&msg);
       Delay(500000);

       getCAC1_t cac1;

       config_CAC1(&cac1);
       CAC1(&msg,&cac1);
       send_massage(&msg);
       Delay(500000);

       getCAC1P_t cac1p;

       config_CAC1P(&cac1p);
       CAC1P(&msg,&cac1p);
       send_massage(&msg);
       Delay(500000);


       getDPF2S2_t dpf2s2;

       config_DPF2S2(&dpf2s2);
       DPF2S2(&msg,&dpf2s2);
       send_massage(&msg);
       Delay(500000);

       getDPF1S2_t dpf1s2;

       config_DPF1S2(&dpf1s2);
       DPF1S2(&msg,&dpf1s2);
       send_massage(&msg);
       Delay(500000);

       getEEC11_t eec11;

       config_EEC11(&eec11);
       EEC11(&msg,&eec11);
       send_massage(&msg);
       Delay(500000);

       getEMAP_t emap;

       config_EMAP(&emap);
       EMAP(&msg,&emap);
       send_massage(&msg);
       Delay(500000);

       getEMAC_t emac;

       config_EMAC(&emac);
       EMAC(&msg,&emac);
       send_massage(&msg);
       Delay(500000);

       getEEC9_t eec9;

       config_EEC9(&eec9);
       EEC9(&msg,&eec9);
       send_massage(&msg);
       Delay(500000);

       getEEC10_t eec10;

       config_EEC10(&eec10);
       EEC10(&msg,&eec10);
       send_massage(&msg);
       Delay(500000);

       getET5_t et5;

       config_ET5(&et5);
       ET5(&msg,&et5);
       send_massage(&msg);
       Delay(500000);

       getEFL_P10_t efl_p10;

       config_EFL_P10(&efl_p10);
       EFL_P10(&msg,&efl_p10);
       send_massage(&msg);
       Delay(500000);

       getLVDS_t lvds;

       config_LVDS(&lvds);
       LVDS(&msg,&lvds);
       send_massage(&msg);
       Delay(500000);

       getDLCD2_t dlcd2;

       config_DLCD2(&dlcd2);
       DLCD2(&msg,&dlcd2);
       send_massage(&msg);
       Delay(500000);

       getDLCD1_t dlcd1;

       config_DLCD1(&dlcd1);
       DLCD1(&msg,&dlcd1);
       send_massage(&msg);
       Delay(500000);

       getDLCC2_t dlcc2;

       config_DLCC2(&dlcc2);
       DLCC2(&msg,&dlcc2);
       send_massage(&msg);
       Delay(500000);

       getDLCC1_t dlcc1;

       config_DLCC1(&dlcc1);
       DLCC1(&msg,&dlcc1);
       send_massage(&msg);
       Delay(500000);

       getEOM_t eom;

       config_EOM(&eom);
       EOM(&msg,&eom);
       send_massage(&msg);
       Delay(500000);

       getAT2OGC2_t at2ogc2;

       config_AT2OGC2(&at2ogc2);
       AT2OGC2(&msg,&at2ogc2);
       send_massage(&msg);
       Delay(500000);

       getAT2OGC1_t at2ogc1;

       config_AT2OGC1(&at2ogc1);
       AT2OGC1(&msg,&at2ogc1);
       send_massage(&msg);
       Delay(500000);

       getAT2IGC2_t at2igc2;

       config_AT2IGC2(&at2igc2);
       AT2IGC2(&msg,&at2igc2);
       send_massage(&msg);
       Delay(500000);

       getAT2IGC1_t at2igc1;

       config_AT2IGC1(&at2igc1);
       AT2IGC1(&msg,&at2igc1);
       send_massage(&msg);
       Delay(500000);

       getAT1OGC2_t at1ogc2;

       config_AT1OGC2(&at1ogc2);
       AT1OGC2(&msg,&at1ogc2);
       send_massage(&msg);
       Delay(500000);

       getAT1OGC1_t at1ogc1;

       config_AT1OGC1(&at1ogc1);
       AT1OGC1(&msg,&at1ogc1);
       send_massage(&msg);
       Delay(500000);

       getAT1IGC2_t at1igc2;

       config_AT1IGC2(&at1igc2);
       AT1IGC2(&msg,&at1igc2);
       send_massage(&msg);
       Delay(500000);

       getAT1IGC1_t at1igc1;

       config_AT1IGC1(&at1igc1);
       AT1IGC1(&msg,&at1igc1);
       send_massage(&msg);
       Delay(500000);

       getMSI1_t msi1;

       config_MSI1(&msi1);
       MSI1(&msg,&msi1);
       send_massage(&msg);
       Delay(500000);

       getMSCI_t msci;

       config_MSCI(&msci);
       MSCI(&msg,&msci);
       send_massage(&msg);
       Delay(500000);

       getBCH2_t bch2;

       config_BCH2(&bch2);
       BCH2(&msg,&bch2);
       send_massage(&msg);
       Delay(500000);

       getBCH1_t bch1;

       config_BCH1(&bch1);
       BCH1(&msg,&bch1);
       send_massage(&msg);
       Delay(500000);

       getOCSI_t ocsi;

       config_OCSI(&ocsi);
       OCSI(&msg,&ocsi);
       send_massage(&msg);
       Delay(500000);

       getBDS_t bds;

       config_BDS(&bds);
       BDS(&msg,&bds);
       send_massage(&msg);
       Delay(500000);

       getCSI_t csi;

       config_CSI(&csi);
       CSI(&msg,&csi);
       send_massage(&msg);
       Delay(500000);

       getILI_t ili;

       config_ILI(&ili);
       ILI(&msg,&ili);
       send_massage(&msg);
       Delay(500000);

       getAT1WUDOC_t at1wudoc;

       config_AT1WUDOC(&at1wudoc);
       AT1WUDOC(&msg,&at1wudoc);
       send_massage(&msg);
       Delay(500000);

       getDPF2S_t dpf2s;

       config_DPF2S(&dpf2s);
       DPF2S(&msg,&dpf2s);
       send_massage(&msg);
       Delay(500000);

       getDPF1S_t dpf1s;

       config_DPF1S(&dpf1s);
       DPF1S(&msg,&dpf1s);
       send_massage(&msg);
       Delay(500000);

       getATDT2_t atdt2;

       config_ATDT2(&atdt2);
       ATDT2(&msg,&atdt2);
       send_massage(&msg);
       Delay(500000);

       getATDT1_t atdt1;

       config_ATDT1(&atdt1);
       ATDT1(&msg,&atdt1);
       send_massage(&msg);
       Delay(500000);

       getA2DOC_t a2doc;

       config_A2DOC(&a2doc);
       A2DOC(&msg,&a2doc);
       send_massage(&msg);
       Delay(500000);

       getA1DOC_t a1doc;

       config_A1DOC(&a1doc);
       A1DOC(&msg,&a1doc);
       send_massage(&msg);
       Delay(500000);

       getA2GOC_t a2goc;

       config_A2GOC(&a2goc);
       A2GOC(&msg,&a2goc);
       send_massage(&msg);
       Delay(500000);

       getA1GOC_t a1goc;

       config_A1GOC(&a1goc);
       A1GOC(&msg,&a1goc);
       send_massage(&msg);
       Delay(500000);

       getEJM10_t ejm10;

       config_EJM10(&ejm10);
       EJM10(&msg,&ejm10);
       send_massage(&msg);
       Delay(500000);

       getBJM10_t bjm10;

       config_BJM10(&bjm10);
       BJM10(&msg,&bjm10);
       send_massage(&msg);
       Delay(500000);

       getEJM9_t ejm9;

       config_EJM9(&ejm9);
       EJM9(&msg,&ejm9);
       send_massage(&msg);
       Delay(500000);

       getBJM9_t bjm9;

       config_BJM9(&bjm9);
       BJM9(&msg,&bjm9);
       send_massage(&msg);
       Delay(500000);

       getEJM8_t ejm8;

       config_EJM8(&ejm8);
       EJM8(&msg,&ejm8);
       send_massage(&msg);
       Delay(500000);

       getBJM8_t bjm8;

       config_BJM8(&bjm8);
       BJM8(&msg,&bjm8);
       send_massage(&msg);
       Delay(500000);

       getEJM7_t ejm7;

       config_EJM7(&ejm7);
       EJM7(&msg,&ejm7);
       send_massage(&msg);
       Delay(500000);

       getBJM7_t bjm7;

       config_BJM7(&bjm7);
       BJM7(&msg,&bjm7);
       send_massage(&msg);
       Delay(500000);

       getEJM6_t ejm6;

       config_EJM6(&ejm6);
       EJM6(&msg,&ejm6);
       send_massage(&msg);
       Delay(500000);

       getBJM6_t bjm6;

       config_BJM6(&bjm6);
       BJM6(&msg,&bjm6);
       send_massage(&msg);
       Delay(500000);

       getEJM5_t ejm5;

       config_EJM5(&ejm5);
       EJM5(&msg,&ejm5);
       send_massage(&msg);
       Delay(500000);

       getBJM5_t bjm5;

       config_BJM5(&bjm5);
       BJM5(&msg,&bjm5);
       send_massage(&msg);
       Delay(500000);

       getEJM4_t ejm4;

       config_EJM4(&ejm4);
       EJM4(&msg,&ejm4);
       send_massage(&msg);
       Delay(500000);

       getBJM4_t bjm4;

       config_BJM4(&bjm4);
       BJM4(&msg,&bjm4);
       send_massage(&msg);
       Delay(500000);

       getFD2_t fd2;

       config_FD2(&fd2);
       FD2(&msg,&fd2);
       send_massage(&msg);
       Delay(500000);

       getA2DEFSI_t a2defsi;

       config_A2DEFSI(&a2defsi);
       A2DEFSI(&msg,&a2defsi);
       send_massage(&msg);
       Delay(500000);

       getA2SCRRT2I_t a2scrrt2i;

       config_A2SCRRT2I(&a2scrrt2i);
       A2SCRRT2I(&msg,&a2scrrt2i);
       send_massage(&msg);
       Delay(500000);

       getA2SCRRT1I_t a2scrrt1i;

       config_A2SCRRT1I(&a2scrrt1i);
       A2SCRRT1I(&msg,&a2scrrt1i);
       send_massage(&msg);
       Delay(500000);

       getA2DEFI_t a2defi;

       config_A2DEFI(&a2defi);
       A2DEFI(&msg,&a2defi);
       send_massage(&msg);
       Delay(500000);

       getA2SCRSI_t a2scrsi;

       config_A2SCRSI(&a2scrsi);
       A2SCRSI(&msg,&a2scrsi);
       send_massage(&msg);
       Delay(500000);

       getA2SCREGT1_t a2scregt1;

       config_A2SCREGT1(&a2scregt1);
       A2SCREGT1(&msg,&a2scregt1);
       send_massage(&msg);
       Delay(500000);

       getA2SCREGP_t a2scregp;

       config_A2SCREGP(&a2scregp);
       A2SCREGP(&msg,&a2scregp);
       send_massage(&msg);
       Delay(500000);

       getA2SCRDSR2_t a2scrdsr2;

       config_A2SCRDSR2(&a2scrdsr2);
       A2SCRDSR2(&msg,&a2scrdsr2);
       send_massage(&msg);
       Delay(500000);

       getA2SCRDSI2_t a2scrdsi2;

       config_A2SCRDSI2(&a2scrdsi2);
       A2SCRDSI2(&msg,&a2scrdsi2);
       send_massage(&msg);
       Delay(500000);

       getA1DEFSI_t a1defsi;

       config_A1DEFSI(&a1defsi);
       A1DEFSI(&msg,&a1defsi);
       send_massage(&msg);
       Delay(500000);

       getA1SCRRT2I_t a1scrrt2i;

       config_A1SCRRT2I(&a1scrrt2i);
       A1SCRRT2I(&msg,&a1scrrt2i);
       send_massage(&msg);
       Delay(500000);

       getA1SCREGT1_t a1scregt1;

       config_A1SCREGT1(&a1scregt1);
       A1SCREGT1(&msg,&a1scregt1);
       send_massage(&msg);
       Delay(500000);

       getA1SCREGP_t a1scregp;

       config_A1SCREGP(&a1scregp);
       A1SCREGP(&msg,&a1scregp);
       send_massage(&msg);
       Delay(500000);

       getA1SCRDSR2_t a1scrdsr2;

       config_A1SCRDSR2(&a1scrdsr2);
       A1SCRDSR2(&msg,&a1scrdsr2);
       send_massage(&msg);
       Delay(500000);

       getA1SCRDSI2_t a1scrdsi2;

       config_A1SCRDSI2(&a1scrdsi2);
       A1SCRDSI2(&msg,&a1scrdsi2);
       send_massage(&msg);
       Delay(500000);

       getAT2FC2_t at2fc2;

       config_AT2FC2(&at2fc2);
       AT2FC2(&msg,&at2fc2);
       send_massage(&msg);
       Delay(500000);

       getAT2TWCC_t at2twcc;

       config_AT2TWCC(&at2twcc);
       AT2TWCC(&msg,&at2twcc);
       send_massage(&msg);
       Delay(500000);

       getAT1TWCC_t at1twcc;

       config_AT1TWCC(&at1twcc);
       AT1TWCC(&msg,&at1twcc);
       send_massage(&msg);
       Delay(500000);

       getO2FT2_t o2ft2;

       config_O2FT2(&o2ft2);
       O2FT2(&msg,&o2ft2);
       send_massage(&msg);
       Delay(500000);

       getO2FT1_t o2ft1;

       config_O2FT1(&o2ft1);
       O2FT1(&msg,&o2ft1);
       send_massage(&msg);
       Delay(500000);

       getACCVC_t accvc;

       config_ACCVC(&accvc);
       ACCVC(&msg,&accvc);
       send_massage(&msg);
       Delay(500000);

       getECCVC_t eccvc;

       config_ECCVC(&eccvc);
       ECCVC(&msg,&eccvc);
       send_massage(&msg);
       Delay(500000);

       getEAI_t eai;

       config_EAI(&eai);
       EAI(&msg,&eai);
       send_massage(&msg);
       Delay(500000);

       getAT1FC2_t at1fc2;

       config_AT1FC2(&at1fc2);
       AT1FC2(&msg,&at1fc2);
       send_massage(&msg);
       Delay(500000);

       getET4_t et4;

       config_ET4(&et4);
       ET4(&msg,&et4);
       send_massage(&msg);
       Delay(500000);

       getZNVW_t znvw;

       config_ZNVW(&znvw);
       ZNVW(&msg,&znvw);
       send_massage(&msg);
       Delay(500000);

       getGCVW_t gcvw;

       config_GCVW(&gcvw);
       GCVW(&msg,&gcvw);
       send_massage(&msg);
       Delay(500000);

       getAGCW_t agcw;

       config_AGCW(&agcw);
       AGCW(&msg,&agcw);
       send_massage(&msg);
       Delay(500000);

       getAGW_t agw;

       config_AGW(&agw);
       AGW(&msg,&agw);
       send_massage(&msg);
       Delay(500000);

       getAAGW_t aagw;

       config_AAGW(&aagw);
       AAGW(&msg,&aagw);
       send_massage(&msg);
       Delay(500000);

       getAT2AC2_t at2ac2;

       config_AT2AC2(&at2ac2);
       AT2AC2(&msg,&at2ac2);
       send_massage(&msg);
       Delay(500000);

       getAT1AC2_t at1ac2;

       config_AT1AC2(&at1ac2);
       AT1AC2(&msg,&at1ac2);
       send_massage(&msg);
       Delay(500000);

       getSCR1_t scr1;

       config_SCR1(&scr1);
       SCR1(&msg,&scr1);
       send_massage(&msg);
       Delay(500000);

       getEEC8_t eec8;

       config_EEC8(&eec8);
       EEC8(&msg,&eec8);
       send_massage(&msg);
       Delay(500000);
}

void testallmsg_group3()
{
	J1939_MESSAGE_T msg;

       getDRC_t drc;

       config_DRC(&drc);
       DRC(&msg,&drc);
       send_massage(&msg);
       Delay(500000);

       getBSA_t bsa;

       config_BSA(&bsa);
       BSA(&msg,&bsa);
       send_massage(&msg);
       Delay(500000);

       getESV6_t esv6;

       config_ESV6(&esv6);
       ESV6(&msg,&esv6);
       send_massage(&msg);
       Delay(500000);

       getESV5_t esv5;

       config_ESV5(&esv5);
       ESV5(&msg,&esv5);
       send_massage(&msg);
       Delay(500000);

       getESV4_t esv4;

       config_ESV4(&esv4);
       ESV4(&msg,&esv4);
       send_massage(&msg);
       Delay(500000);

       getESV3_t esv3;

       config_ESV3(&esv3);
       ESV3(&msg,&esv3);
       send_massage(&msg);
       Delay(500000);

       getESV2_t esv2;

       config_ESV2(&esv2);
       ESV2(&msg,&esv2);
       send_massage(&msg);
       Delay(500000);

       getESV1_t esv1;

       config_ESV1(&esv1);
       ESV1(&msg,&esv1);
       send_massage(&msg);
       Delay(500000);

       getAT2TI_t at2ti;

       config_AT2TI(&at2ti);
       AT2TI(&msg,&at2ti);
       send_massage(&msg);
       Delay(500000);

       getAT1TI_t at1ti;

       config_AT1TI(&at1ti);
       AT1TI(&msg,&at1ti);
       send_massage(&msg);
       Delay(500000);

       getAT2S_t at2s;

       config_AT2S(&at2s);
       AT2S(&msg,&at2s);
       send_massage(&msg);
       Delay(500000);

       getAT1S_t at1s;

       config_AT1S(&at1s);
       AT1S(&msg,&at1s);
       send_massage(&msg);
       Delay(500000);

       getDPFC1_t dpfc1;

       config_DPFC1(&dpfc1);
       DPFC1(&msg,&dpfc1);
       send_massage(&msg);
       Delay(500000);

       getAFSS_t afss;

       config_AFSS(&afss);
       AFSS(&msg,&afss);
       send_massage(&msg);
       Delay(500000);

       getEC2_t ec2;

       config_EC2(&ec2);
       EC2(&msg,&ec2);
       send_massage(&msg);
       Delay(500000);

       getEGRBV_t egrbv;

       config_EGRBV(&egrbv);
       EGRBV(&msg,&egrbv);
       send_massage(&msg);
       Delay(500000);

       getTCI_t tci;

       config_TCI(&tci);
       TCI(&msg,&tci);
       send_massage(&msg);
       Delay(500000);

       getEFL_P9_t efl_p9;

       config_EFL_P9(&efl_p9);
       EFL_P9(&msg,&efl_p9);
       send_massage(&msg);
       Delay(500000);

       getEFL_P8_t efl_p8;

       config_EFL_P8(&efl_p8);
       EFL_P8(&msg,&efl_p8);
       send_massage(&msg);
       Delay(500000);

       getEFL_P7_t efl_p7;

       config_EFL_P7(&efl_p7);
       EFL_P7(&msg,&efl_p7);
       send_massage(&msg);
       Delay(500000);

       getEFL_P6_t efl_p6;

       config_EFL_P6(&efl_p6);
       EFL_P6(&msg,&efl_p6);
       send_massage(&msg);
       Delay(500000);

       getEFL_P5_t efl_p5;

       config_EFL_P5(&efl_p5);
       EFL_P5(&msg,&efl_p5);
       send_massage(&msg);
       Delay(500000);

       getVDS2_t vds2;

       config_VDS2(&vds2);
       VDS2(&msg,&vds2);
       send_massage(&msg);
       Delay(500000);

       getJ2012_t j2012;

       config_J2012(&j2012);
       J2012(&msg,&j2012);
       send_massage(&msg);
       Delay(500000);

       getAT2GP_t at2gp;

       config_AT2GP(&at2gp);
       AT2GP(&msg,&at2gp);
       send_massage(&msg);
       Delay(500000);


       getAT1GP_t at1gp;

       config_AT1GP(&at1gp);
       AT1GP(&msg,&at1gp);
       send_massage(&msg);
       Delay(500000);

       getAETC_t aetc;

       config_AETC(&aetc);
       AETC(&msg,&aetc);
       send_massage(&msg);
       Delay(500000);

       getEOI_t eoi;

       config_EOI(&eoi);
       EOI(&msg,&eoi);
       send_massage(&msg);
       Delay(500000);

       getEEC7_t eec7;

       config_EEC7(&eec7);
       EEC7(&msg,&eec7);
       send_massage(&msg);
       Delay(500000);

       getTRF2_t trf2;

       config_TRF2(&trf2);
       TRF2(&msg,&trf2);
       send_massage(&msg);
       Delay(500000);

       getAT1HI_t at1hi;

       config_AT1HI(&at1hi);
       AT1HI(&msg,&at1hi);
       send_massage(&msg);
       Delay(500000);

       getAT2HI_t at2hi;

       config_AT2HI(&at2hi);
       AT2HI(&msg,&at2hi);
       send_massage(&msg);
       Delay(500000);

       getA1DEFI_t a1defi;

       config_A1DEFI(&a1defi);
       A1DEFI(&msg,&a1defi);
       send_massage(&msg);
       Delay(500000);

       getSEP2_t sep2;

       config_SEP2(&sep2);
       SEP2(&msg,&sep2);
       send_massage(&msg);
       Delay(500000);

       getSEP1_t sep1;

       config_SEP1(&sep1);
       SEP1(&msg,&sep1);
       send_massage(&msg);
       Delay(500000);

       getAT2AC1_t at2ac1;

       config_AT2AC1(&at2ac1);
       AT2AC1(&msg,&at2ac1);
       send_massage(&msg);
       Delay(500000);

       getAT1AC1_t at1ac1;

       config_AT1AC1(&at1ac1);
       AT1AC1(&msg,&at1ac1);
       send_massage(&msg);
       Delay(500000);

       getAT2FC1_t at2fc1;

       config_AT2FC1(&at2fc1);
       AT2FC1(&msg,&at2fc1);
       send_massage(&msg);
       Delay(500000);

       getAT1FC1_t at1fc1;

       config_AT1FC1(&at1fc1);
       AT1FC1(&msg,&at1fc1);
       send_massage(&msg);
       Delay(500000);

       getGFI_t gfi;

       config_GFI(&gfi);
       GFI(&msg,&gfi);
       send_massage(&msg);
       Delay(500000);

       getEEC6_t eec6;

       config_EEC6(&eec6);
       EEC6(&msg,&eec6);
       send_massage(&msg);
       Delay(500000);

       getPTODE_t ptode;

       config_PTODE(&ptode);
       PTODE(&msg,&ptode);
       send_massage(&msg);
       Delay(500000);

       getDC2_t dc2;

       config_DC2(&dc2);
       DC2(&msg,&dc2);
       send_massage(&msg);
       Delay(500000);

       getWCM2_t wcm2;

       config_WCM2(&wcm2);
       WCM2(&msg,&wcm2);
       send_massage(&msg);
       Delay(500000);

       getWCM1_t wcm1;

       config_WCM1(&wcm1);
       WCM1(&msg,&wcm1);
       send_massage(&msg);
       Delay(500000);

       getEFL_P4_t efl_p4;

       config_EFL_P4(&efl_p4);
       EFL_P4(&msg,&efl_p4);
       send_massage(&msg);
       Delay(500000);

       getFWSS2_t fwss2;

       config_FWSS2(&fwss2);
       FWSS2(&msg,&fwss2);
       send_massage(&msg);
       Delay(500000);

       getAT2IMG_t at2img;

       config_AT2IMG(&at2img);
       AT2IMG(&msg,&at2img);
       send_massage(&msg);
       Delay(500000);

       getAT2OG2_t at2og2;

       config_AT2OG2(&at2og2);
       AT2OG2(&msg,&at2og2);
       send_massage(&msg);
       Delay(500000);

       getAT2IG2_t at2ig2;

       config_AT2IG2(&at2ig2);
       AT2IG2(&msg,&at2ig2);
       send_massage(&msg);
       Delay(500000);

       getAT1IMG_t at1img;

       config_AT1IMG(&at1img);
       AT1IMG(&msg,&at1img);
       send_massage(&msg);
       Delay(500000);

       getAT1OG2_t at1og2;

       config_AT1OG2(&at1og2);
       AT1OG2(&msg,&at1og2);
       send_massage(&msg);
       Delay(500000);

       getAT1IG2_t at1ig2;

       config_AT1IG2(&at1ig2);
       AT1IG2(&msg,&at1ig2);
       send_massage(&msg);
       Delay(500000);

       getTPRI_t tpri;

       config_TPRI(&tpri);
       TPRI(&msg,&tpri);
       send_massage(&msg);
       Delay(500000);

       getTR6_t tr6;

       config_TR6(&tr6);
       TR6(&msg,&tr6);
       send_massage(&msg);
       Delay(500000);

       getTR5_t tr5;

       config_TR5(&tr5);
       TR5(&msg,&tr5);
       send_massage(&msg);
       Delay(500000);

       getTR3_t tr3;

       config_TR3(&tr3);
       TR3(&msg,&tr3);
       send_massage(&msg);
       Delay(500000);

       getTR1_t tr1;

       config_TR1(&tr1);
       TR1(&msg,&tr1);
       send_massage(&msg);
       Delay(500000);

       getTR2_t tr2;

       config_TR2(&tr2);
       TR2(&msg,&tr2);
       send_massage(&msg);
       Delay(500000);

       getTR7_t tr7;

       config_TR7(&tr7);
       TR7(&msg,&tr7);
       send_massage(&msg);
       Delay(500000);

       getEFL_P3_t efl_p3;

       config_EFL_P3(&efl_p3);
       EFL_P3(&msg,&efl_p3);
       send_massage(&msg);
       Delay(500000);

       getEEC14_t eec14;

       config_EEC14(&eec14);
       EEC14(&msg,&eec14);
       send_massage(&msg);
       Delay(500000);

       getEEC15_t eec15;

       config_EEC15(&eec15);
       EEC15(&msg,&eec15);
       send_massage(&msg);
       Delay(500000);

       getEBC5_t ebc5;

       config_EBC5(&ebc5);
       EBC5(&msg,&ebc5);
       send_massage(&msg);
       Delay(500000);

       getCSA_t csa;

       config_CSA(&csa);
       CSA(&msg,&csa);
       send_massage(&msg);
       Delay(500000);

       getOHCSS_t ohcss;

       config_OHCSS(&ohcss);
       OHCSS(&msg,&ohcss);
       send_massage(&msg);
       Delay(500000);

       getISCS_t iscs;

       config_ISCS(&iscs);
       ISCS(&msg,&iscs);
       send_massage(&msg);
       Delay(500000);

       getCMI_t cmi;

       config_CMI(&cmi);
       CMI(&msg,&cmi);
       send_massage(&msg);
       Delay(500000);

       getISC_t isc;

       config_ISC(&isc);
       ISC(&msg,&isc);
       send_massage(&msg);
       Delay(500000);

       getOHECS_t ohecs;

       config_OHECS(&ohecs);
       OHECS(&msg,&ohecs);
       send_massage(&msg);
       Delay(500000);

       getOEL_t oel;

       config_OEL(&oel);
       OEL(&msg,&oel);
       send_massage(&msg);
       Delay(500000);

       getOWW_t oww;

       config_OWW(&oww);
       OWW(&msg,&oww);
       send_massage(&msg);
       Delay(500000);

       getIC2_t ic2;

       config_IC2(&ic2);
       IC2(&msg,&ic2);
       send_massage(&msg);
       Delay(500000);

       getFMS_t fms;

       config_FMS(&fms);
       FMS(&msg,&fms);
       send_massage(&msg);
       Delay(500000);

       getEP_t ep;

       config_EP(&ep);
       EP(&msg,&ep);
       send_massage(&msg);
       Delay(500000);

       getTCI6_t tci6;

       config_TCI6(&tci6);
       TCI6(&msg,&tci6);
       send_massage(&msg);
       Delay(500000);

       getCM3_t cm3;

       config_CM3(&cm3);
       CM3(&msg,&cm3);
       send_massage(&msg);
       Delay(500000);

       getEEC5_t eec5;

       config_EEC5(&eec5);
       EEC5(&msg,&eec5);
       send_massage(&msg);
       Delay(500000);

       getBJM1_t bjm1;

       config_BJM1(&bjm1);
       BJM1(&msg,&bjm1);
       send_massage(&msg);
       Delay(500000);

       getEJM1_t ejm1;

       config_EJM1(&ejm1);
       EJM1(&msg,&ejm1);
       send_massage(&msg);
       Delay(500000);

       getBJM2_t bjm2;

       config_BJM2(&bjm2);
       BJM2(&msg,&bjm2);
       send_massage(&msg);
       Delay(500000);

       getEJM2_t ejm2;

       config_EJM2(&ejm2);
       EJM2(&msg,&ejm2);
       send_massage(&msg);
       Delay(500000);

       getBJM3_t bjm3;

       config_BJM3(&bjm3);
       BJM3(&msg,&bjm3);
       send_massage(&msg);
       Delay(500000);

       getEJM3_t ejm3;

       config_EJM3(&ejm3);
       EJM3(&msg,&ejm3);
       send_massage(&msg);
       Delay(500000);

       getMCI_t mci;

       config_MCI(&mci);
       MCI(&msg,&mci);
       send_massage(&msg);
       Delay(500000);

       getFWD_t fwd;

       config_FWD(&fwd);
       FWD(&msg,&fwd);
       send_massage(&msg);
       Delay(500000);

       getAMB2_t amb2;

       config_AMB2(&amb2);
       AMB2(&msg,&amb2);
       send_massage(&msg);
       Delay(500000);

       getCACI_t caci;

       config_CACI(&caci);
       CACI(&msg,&caci);
       send_massage(&msg);
       Delay(500000);

       getSPR_t spr;

       config_SPR(&spr);
       SPR(&msg,&spr);
       send_massage(&msg);
       Delay(500000);

       getEOAC_t eoac;

       config_EOAC(&eoac);
       EOAC(&msg,&eoac);
       send_massage(&msg);
       Delay(500000);

       getEPD_t epd;

       config_EPD(&epd);
       EPD(&msg,&epd);
       send_massage(&msg);
       Delay(500000);

       getMVS_t mvs;

       config_MVS(&mvs);
       MVS(&msg,&mvs);
       send_massage(&msg);
       Delay(500000);

       getHBS_t hbs;

       config_HBS(&hbs);
       HBS(&msg,&hbs);
       send_massage(&msg);
       Delay(500000);

       getET_t et;

       config_ET(&et);
       ET(&msg,&et);
       send_massage(&msg);
       Delay(500000);

       getLD_t ld;

       config_LD(&ld);
       LD(&msg,&ld);
       send_massage(&msg);
       Delay(500000);

       getLCMD_t lcmd;

       config_LCMD(&lcmd);
       LCMD(&msg,&lcmd);
       send_massage(&msg);
       Delay(500000);

       getETC7_t etc7;

       config_ETC7(&etc7);
       ETC7(&msg,&etc7);
       send_massage(&msg);
       Delay(500000);

       getTCFG2_t tcfg2;

       config_TCFG2(&tcfg2);
       TCFG2(&msg,&tcfg2);
       send_massage(&msg);
       Delay(500000);

       getML_t ml;

       config_ML(&ml);
       ML(&msg,&ml);
       send_massage(&msg);
       Delay(500000);

       getTAVG_t tavg;

       config_TAVG(&tavg);
       TAVG(&msg,&tavg);
       send_massage(&msg);
       Delay(500000);

       getDC1_t dc1;

       config_DC1(&dc1);
       DC1(&msg,&dc1);
       send_massage(&msg);
       Delay(500000);

       getVDC1_t vdc1;

       config_VDC1(&vdc1);
       VDC1(&msg,&vdc1);
       send_massage(&msg);
       Delay(500000);

       getBT1_t bt1;

       config_BT1(&bt1);
       BT1(&msg,&bt1);
       send_massage(&msg);
       Delay(500000);

       getACC2_t acc2;

       config_ACC2(&acc2);
       ACC2(&msg,&acc2);
       send_massage(&msg);
       Delay(500000);

       getVEP3_t vep3;

       config_VEP3(&vep3);
       VEP3(&msg,&vep3);
       send_massage(&msg);
       Delay(500000);

       getRTC1_t rtc1;

       config_RTC1(&rtc1);
       RTC1(&msg,&rtc1);
       send_massage(&msg);
       Delay(500000);

       getECT1_t ect1;

       config_ECT1(&ect1);
       ECT1(&msg,&ect1);
       send_massage(&msg);
       Delay(500000);

       getGFD_t gfd;

       config_GFD(&gfd);
       GFD(&msg,&gfd);
       send_massage(&msg);
       Delay(500000);

       getAT1T1I_t at1t1i;

       config_AT1T1I(&at1t1i);
       AT1T1I(&msg,&at1t1i);
       send_massage(&msg);
       Delay(500000);

       getASC5_t asc5;

       config_ASC5(&asc5);
       ASC5(&msg,&asc5);
       send_massage(&msg);
       Delay(500000);

       getASC4_t asc4;

       config_ASC4(&asc4);
       ASC4(&msg,&asc4);
       send_massage(&msg);
       Delay(500000);

       getASC1_t asc1;

       config_ASC1(&asc1);
       ASC1(&msg,&asc1);
       send_massage(&msg);
       Delay(500000);

       getFLI2_t fli2;

       config_FLI2(&fli2);
       FLI2(&msg,&fli2);
       send_massage(&msg);
       Delay(500000);

       getBM_t bm;

       config_BM(&bm);
       BM(&msg,&bm);
       send_massage(&msg);
       Delay(500000);

       getCCC_t ccc;

       config_CCC(&ccc);
       CCC(&msg,&ccc);
       send_massage(&msg);
       Delay(500000);

       getVF_t vf;

       config_VF(&vf);
       VF(&msg,&vf);
       send_massage(&msg);
       Delay(500000);

       getET3_t et3;

       config_ET3(&et3);
       ET3(&msg,&et3);
       send_massage(&msg);
       Delay(500000);

       getEFS_t efs;

       config_EFS(&efs);
       EFS(&msg,&efs);
       send_massage(&msg);
       Delay(500000);

       getTCO1_t tco1;

       config_TCO1(&tco1);
       TCO1(&msg,&tco1);
       send_massage(&msg);
       Delay(500000);

       getHTR_t htr;

       config_HTR(&htr);
       HTR(&msg,&htr);
       send_massage(&msg);
       Delay(500000);

       getHRW_t hrw;

       config_HRW(&hrw);
       HRW(&msg,&hrw);
       send_massage(&msg);
       Delay(500000);

       getACC1_t acc1;

       config_ACC1(&acc1);
       ACC1(&msg,&acc1);
       send_massage(&msg);
       Delay(500000);

       getCVW_t cvw;

       config_CVW(&cvw);
       CVW(&msg,&cvw);
       send_massage(&msg);
       Delay(500000);

       getLTP_t ltp;

       config_LTP(&ltp);
       LTP(&msg,&ltp);
       send_massage(&msg);
       Delay(500000);

       getLBC_t lbc;

       config_LBC(&lbc);
       LBC(&msg,&lbc);
       send_massage(&msg);
       Delay(500000);

       getLMP_t lmp;

       config_LMP(&lmp);
       LMP(&msg,&lmp);
       send_massage(&msg);
       Delay(500000);

       getLSP_t lsp;

       config_LSP(&lsp);
       LSP(&msg,&lsp);
       send_massage(&msg);
       Delay(500000);

       getLVD_t lvd;

       config_LVD(&lvd);
       LVD(&msg,&lvd);
       send_massage(&msg);
       Delay(500000);

       getLVDD_t lvdd;

       config_LVDD(&lvdd);
       LVDD(&msg,&lvdd);
       send_massage(&msg);
       Delay(500000);

       getAP_t ap;

       config_AP(&ap);
       AP(&msg,&ap);
       send_massage(&msg);
       Delay(500000);

       getTP1_t tp1;

       config_TP1(&tp1);
       TP1(&msg,&tp1);
       send_massage(&msg);
       Delay(500000);

       getTP2_t tp2;

       config_TP2(&tp2);
       TP2(&msg,&tp2);
       send_massage(&msg);
       Delay(500000);

       getTP3_t tp3;

       config_TP3(&tp3);
       TP3(&msg,&tp3);
       send_massage(&msg);
       Delay(500000);

       getCT1_t ct1;

       config_CT1(&ct1);
       CT1(&msg,&ct1);
       send_massage(&msg);
       Delay(500000);

       getCT2_t ct2;

       config_CT2(&ct2);
       CT2(&msg,&ct2);
       send_massage(&msg);
       Delay(500000);

       getCT3_t ct3;

       config_CT3(&ct3);
       CT3(&msg,&ct3);
       send_massage(&msg);
       Delay(500000);

       getCT4_t ct4;

       config_CT4(&ct4);
       CT4(&msg,&ct4);
       send_massage(&msg);
       Delay(500000);

       getCT5_t ct5;

       config_CT5(&ct5);
       CT5(&msg,&ct5);
       send_massage(&msg);
       Delay(500000);

       getCT6_t ct6;

       config_CT6(&ct6);
       CT6(&msg,&ct6);
       send_massage(&msg);
       Delay(500000);

       getGFI2_t gfi2;

       config_GFI2(&gfi2);
       GFI2(&msg,&gfi2);
       send_massage(&msg);
       Delay(500000);

       getIT1_t it1;

       config_IT1(&it1);
       IT1(&msg,&it1);
       send_massage(&msg);
       Delay(500000);

       getIT2_t it2;

       config_IT2(&it2);
       IT2(&msg,&it2);
       send_massage(&msg);
       Delay(500000);

       getIT3_t it3;

       config_IT3(&it3);
       IT3(&msg,&it3);
       send_massage(&msg);
       Delay(500000);

       getIT4_t it4;

       config_IT4(&it4);
       IT4(&msg,&it4);
       send_massage(&msg);
       Delay(500000);

       getIT5_t it5;

       config_IT5(&it5);
       IT5(&msg,&it5);
       send_massage(&msg);
       Delay(500000);

       getIT6_t it6;

       config_IT6(&it6);
       IT6(&msg,&it6);
       send_massage(&msg);
       Delay(500000);

       getISO1_t iso1;

       config_ISO1(&iso1);
       ISO1(&msg,&iso1);
       send_massage(&msg);
       Delay(500000);

       getISO2_t iso2;

       config_ISO2(&iso2);
       ISO2(&msg,&iso2);
       send_massage(&msg);
       Delay(500000);

       getISO3_t iso3;

       config_ISO3(&iso3);
       ISO3(&msg,&iso3);
       send_massage(&msg);
       Delay(500000);

       getGFP_t gfp;

       config_GFP(&gfp);
       GFP(&msg,&gfp);
       send_massage(&msg);
       Delay(500000);

       getAAI_t aai;

       config_AAI(&aai);
       AAI(&msg,&aai);
       send_massage(&msg);
       Delay(500000);

       getVEP2_t vep2;

       config_VEP2(&vep2);
       VEP2(&msg,&vep2);
       send_massage(&msg);
       Delay(500000);

       getSP2_t sp2;

       config_SP2(&sp2);
       SP2(&msg,&sp2);
       send_massage(&msg);
       Delay(500000);

       getFL_t fl;

       config_FL(&fl);
       FL(&msg,&fl);
       send_massage(&msg);
       Delay(500000);

       getEI_t ei;

       config_EI(&ei);
       EI(&msg,&ei);
       send_massage(&msg);
       Delay(500000);

       getEES_t ees;

       config_EES(&ees);
       EES(&msg,&ees);
       send_massage(&msg);
       Delay(500000);

       getEAC_t eac;

       config_EAC(&eac);
       EAC(&msg,&eac);
       send_massage(&msg);
       Delay(500000);

       getRBI_t rbi;

       config_RBI(&rbi);
       RBI(&msg,&rbi);
       send_massage(&msg);
       Delay(500000);

       getTCW_t tcw;

       config_TCW(&tcw);
       TCW(&msg,&tcw);
       send_massage(&msg);
       Delay(500000);

       getTCI5_t tci5;

       config_TCI5(&tci5);
       TCI5(&msg,&tci5);
       send_massage(&msg);
       Delay(500000);

       getTCI4_t tci4;

       config_TCI4(&tci4);
       TCI4(&msg,&tci4);
       send_massage(&msg);
       Delay(500000);

       getTCI3_t tci3;

       config_TCI3(&tci3);
       TCI3(&msg,&tci3);
       send_massage(&msg);
       Delay(500000);

       getTCI2_t tci2;

       config_TCI2(&tci2);
       TCI2(&msg,&tci2);
       send_massage(&msg);
       Delay(500000);

       getTCI1_t tci1;

       config_TCI1(&tci1);
       TCI1(&msg,&tci1);
       send_massage(&msg);
       Delay(500000);

       getMBT3_t mbt3;

       config_MBT3(&mbt3);
       MBT3(&msg,&mbt3);
       send_massage(&msg);
       Delay(500000);

       getMBT2_t mbt2;

       config_MBT2(&mbt2);
       MBT2(&msg,&mbt2);
       send_massage(&msg);
       Delay(500000);

       getMBT1_t mbt1;

       config_MBT1(&mbt1);
       MBT1(&msg,&mbt1);
       send_massage(&msg);
       Delay(500000);

       getEPT5_t ept5;

       config_EPT5(&ept5);
       EPT5(&msg,&ept5);
       send_massage(&msg);
       Delay(500000);

       getEPT4_t ept4;

       config_EPT4(&ept4);
       EPT4(&msg,&ept4);
       send_massage(&msg);
       Delay(500000);

       getEPT3_t ept3;

       config_EPT3(&ept3);
       EPT3(&msg,&ept3);
       send_massage(&msg);
       Delay(500000);

       getEPT2_t ept2;

       config_EPT2(&ept2);
       EPT2(&msg,&ept2);
       send_massage(&msg);
       Delay(500000);

       getEPT1_t ept1;

       config_EPT1(&ept1);
       EPT1(&msg,&ept1);
       send_massage(&msg);
       Delay(500000);

       getET2_t et2;

       config_ET2(&et2);
       ET2(&msg,&et2);
       send_massage(&msg);
       Delay(500000);

       getIMT2_t imt2;

       config_IMT2(&imt2);
       IMT2(&msg,&imt2);
       send_massage(&msg);
       Delay(500000);

       getIMT1_t imt1;

       config_IMT1(&imt1);
       IMT1(&msg,&imt1);
       send_massage(&msg);
       Delay(500000);

       getAT_t at;

       config_AT(&at);
       AT(&msg,&at);
       send_massage(&msg);
       Delay(500000);

       getACTL_t actl;

       config_ACTL(&actl);
       ACTL(&msg,&actl);
       send_massage(&msg);
       Delay(500000);

       getEO1_t eo1;

       config_EO1(&eo1);
       EO1(&msg,&eo1);
       send_massage(&msg);
       Delay(500000);

       getAF2_t af2;

       config_AF2(&af2);
       AF2(&msg,&af2);
       send_massage(&msg);
       Delay(500000);

       getETC6_t etc6;

       config_ETC6(&etc6);
       ETC6(&msg,&etc6);
       send_massage(&msg);
       Delay(500000);

       getEBC4_t ebc4;

       config_EBC4(&ebc4);
       EBC4(&msg,&ebc4);
       send_massage(&msg);
       Delay(500000);

       getEBC3_t ebc3;

       config_EBC3(&ebc3);
       EBC3(&msg,&ebc3);
       send_massage(&msg);
       Delay(500000);

       getAIR1_t air1;

       config_AIR1(&air1);
       AIR1(&msg,&air1);
       send_massage(&msg);
       Delay(500000);

       getGFC_t gfc;

       config_GFC(&gfc);
       GFC(&msg,&gfc);
       send_massage(&msg);
       Delay(500000);

       getTTI2_t tti2;

       config_TTI2(&tti2);
       TTI2(&msg,&tti2);
       send_massage(&msg);
       Delay(500000);

       getEH_t eh;

       config_EH(&eh);
       EH(&msg,&eh);
       send_massage(&msg);
       Delay(500000);

       getGFI1_t gfi1;

       config_GFI1(&gfi1);
       GFI1(&msg,&gfi1);
       send_massage(&msg);
       Delay(500000);

       getLFI_t lfi;

       config_LFI(&lfi);
       LFI(&msg,&lfi);
       send_massage(&msg);
       Delay(500000);

       getTTI1_t tti1;

       config_TTI1(&tti1);
       TTI1(&msg,&tti1);
       send_massage(&msg);
       Delay(500000);

       getTSI_t tsi;

       config_TSI(&tsi);
       TSI(&msg,&tsi);
       send_massage(&msg);
       Delay(500000);

       getTVI_t tvi;

       config_TVI(&tvi);
       TVI(&msg,&tvi);
       send_massage(&msg);
       Delay(500000);

       getLF_t lf;

       config_LF(&lf);
       LF(&msg,&lf);
       send_massage(&msg);
       Delay(500000);

       getGTFI_t gtfi;

       config_GTFI(&gtfi);
       GTFI(&msg,&gtfi);
       send_massage(&msg);
       Delay(500000);

       getLTFI_t ltfi;

       config_LTFI(&ltfi);
       LTFI(&msg,&ltfi);
       send_massage(&msg);
       Delay(500000);

       getTDI_t tdi;

       config_TDI(&tdi);
       TDI(&msg,&tdi);
       send_massage(&msg);
       Delay(500000);

       getTFI_t tfi;

       config_TFI(&tfi);
       TFI(&msg,&tfi);
       send_massage(&msg);
       Delay(500000);

       getCBI_t cbi;

       config_CBI(&cbi);
       CBI(&msg,&cbi);
       send_massage(&msg);
       Delay(500000);

       getFD1_t fd1;

       config_FD1(&fd1);
       FD1(&msg,&fd1);
       send_massage(&msg);
       Delay(500000);

       getEEC4_t eec4;

       config_EEC4(&eec4);
       EEC4(&msg,&eec4);
       send_massage(&msg);
       Delay(500000);

       getEBC2_t ebc2;

       config_EBC2(&ebc2);
       EBC2(&msg,&ebc2);
       send_massage(&msg);
       Delay(500000);

       getVDHR_t vdhr;

       config_VDHR(&vdhr);
       VDHR(&msg,&vdhr);
       send_massage(&msg);
       Delay(500000);

       getERC2_t erc2;

       config_ERC2(&erc2);
       ERC2(&msg,&erc2);
       send_massage(&msg);
       Delay(500000);

       getETC5_t etc5;

       config_ETC5(&etc5);
       ETC5(&msg,&etc5);
       send_massage(&msg);
       Delay(500000);

       getETC4_t etc4;

       config_ETC4(&etc4);
       ETC4(&msg,&etc4);
       send_massage(&msg);
       Delay(500000);

       getETC3_t etc3;

       config_ETC3(&etc3);
       ETC3(&msg,&etc3);
       send_massage(&msg);
       Delay(500000);

       getAS_t as;

       config_AS(&as);
       AS(&msg,&as);
       send_massage(&msg);
       Delay(500000);

       getAUXIO1_t auxio1;

       config_AUXIO1(&auxio1);
       AUXIO1(&msg,&auxio1);
       send_massage(&msg);
       Delay(500000);

       getSOFT_t soft;

       config_SOFT(&soft);
       SOFT(&msg,&soft);
       send_massage(&msg);
       Delay(500000);

       getEFL_P2_t efl_p2;

       config_EFL_P2(&efl_p2);
       EFL_P2(&msg,&efl_p2);
       send_massage(&msg);
       Delay(500000);

       getIO_t io;

       config_IO(&io);
       IO(&msg,&io);
       send_massage(&msg);
       Delay(500000);

       getTC_t tc;

       config_TC(&tc);
       TC(&msg,&tc);
       send_massage(&msg);
       Delay(500000);

       getAIR2_t air2;

       config_AIR2(&air2);
       AIR2(&msg,&air2);
       send_massage(&msg);
       Delay(500000);

       getEEC3_t eec3;

       config_EEC3(&eec3);
       EEC3(&msg,&eec3);
       send_massage(&msg);
       Delay(500000);

       getVD_t vd;

       config_VD(&vd);
       VD(&msg,&vd);
       send_massage(&msg);
       Delay(500000);

       getTCFG_t tcfg;

       config_TCFG(&tcfg);
       TCFG(&msg,&tcfg);
       send_massage(&msg);
       Delay(500000);

       getSHUTDN_t shutdn;

       config_SHUTDN(&shutdn);
       SHUTDN(&msg,&shutdn);
       send_massage(&msg);
       Delay(500000);

       getHOURS_t hours;

       config_HOURS(&hours);
       HOURS(&msg,&hours);
       send_massage(&msg);
       Delay(500000);

       getTD_t td;

       config_TD(&td);
       TD(&msg,&td);
       send_massage(&msg);
       Delay(500000);

       getVH_t vh;

       config_VH(&vh);
       VH(&msg,&vh);
       send_massage(&msg);
       Delay(500000);

       getVDS_t vds;

       config_VDS(&vds);
       VDS(&msg,&vds);
       send_massage(&msg);
       Delay(500000);

       getLFC_t lfc;

       config_LFC(&lfc);
       LFC(&msg,&lfc);
       send_massage(&msg);
       Delay(500000);

       getVW_t vw;

       config_VW(&vw);
       VW(&msg,&vw);
       send_massage(&msg);
       Delay(500000);

       getCCSS_t ccss;

       config_CCSS(&ccss);
       CCSS(&msg,&ccss);
       send_massage(&msg);
       Delay(500000);

       getET1_t et1;

       config_ET1(&et1);
       ET1(&msg,&et1);
       send_massage(&msg);
       Delay(500000);

       getEFL_P1_t efl_p1;

       config_EFL_P1(&efl_p1);
       EFL_P1(&msg,&efl_p1);
       send_massage(&msg);
       Delay(500000);

       getPTO_t pto;

       config_PTO(&pto);
       PTO(&msg,&pto);
       send_massage(&msg);
       Delay(500000);

       getCCVS1_t ccvs1;

       config_CCVS1(&ccvs1);
       CCVS1(&msg,&ccvs1);
       send_massage(&msg);
       Delay(500000);

       getLFE1_t lfe1;

       config_LFE1(&lfe1);
       LFE1(&msg,&lfe1);
       send_massage(&msg);
       Delay(500000);

       getVP_t vp;

       config_VP(&vp);
       VP(&msg,&vp);
       send_massage(&msg);
       Delay(500000);

       getTIRE_t tire;

       config_TIRE(&tire);
       TIRE(&msg,&tire);
       send_massage(&msg);
       Delay(500000);

       getAMB_t amb;

       config_AMB(&amb);
       AMB(&msg,&amb);
       send_massage(&msg);
       Delay(500000);

       getIC1_t ic1;

       config_IC1(&ic1);
       IC1(&msg,&ic1);
       send_massage(&msg);
       Delay(500000);

       getVEP1_t vep1;

       config_VEP1(&vep1);
       VEP1(&msg,&vep1);
       send_massage(&msg);
       Delay(500000);

       getTRF1_t trf1;

       config_TRF1(&trf1);
       TRF1(&msg,&trf1);
       send_massage(&msg);
       Delay(500000);

       getAI_t ai;

       config_AI(&ai);
       AI(&msg,&ai);
       send_massage(&msg);
       Delay(500000);

       getB_t b;

       config_B(&b);
       B(&msg,&b);
       send_massage(&msg);
       Delay(500000);

       getRF_t rf;

       config_RF(&rf);
       RF(&msg,&rf);
       send_massage(&msg);
       Delay(500000);

       getDD_t dd;

       config_DD(&dd);
       DD(&msg,&dd);
       send_massage(&msg);
       Delay(500000);

       getA1_t a1;

       config_A1(&a1);
       A1(&msg,&a1);
       send_massage(&msg);
       Delay(500000);

       getAWPP_t awpp;

       config_AWPP(&awpp);
       AWPP(&msg,&awpp);
       send_massage(&msg);
       Delay(500000);

}
*/