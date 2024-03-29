/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2013-2015 Freescale Semiconductor, Inc.
 */

#ifndef __ARCH_FSL_LSCH2_IMMAP_H__
#define __ARCH_FSL_LSCH2_IMMAP_H__

#define SVR_MAJ(svr)		(((svr) >>  4) & 0xf)
#define SOC_MAJOR_VER_1_0	0x1

#define gur_in32(a)       in_be32(a)
#define gur_out32(a, v)   out_be32(a, v)

#define LSCH2_IMMR				0x01000000

#define LSCH2_DDR_ADDR			(LSCH2_IMMR + 0x00080000)
#define LSCH2_CCI400_ADDR		(LSCH2_IMMR + 0x00180000)
#define LSCH2_GIC400_ADDR		(LSCH2_IMMR + 0x00400000)
#define LSCH2_IFC_ADDR			(LSCH2_IMMR + 0x00530000)
#define LSCH2_QSPI0_BASE_ADDR		(LSCH2_IMMR + 0x00550000)
#define LSCH2_ESDHC_ADDR		(LSCH2_IMMR + 0x00560000)
#define LSCH2_CSU_ADDR			(LSCH2_IMMR + 0x00510000)
#define LSCH2_SCFG_ADDR			(LSCH2_IMMR + 0x00570000)
#define LSCH2_BMAN_ADDR			(LSCH2_IMMR + 0x00890000)
#define LSCH2_QMAN_ADDR			(LSCH2_IMMR + 0x00880000)
#define LSCH2_FM1_ADDR			(LSCH2_IMMR + 0x00a00000)
#define LSCH2_FM1_DTSEC1_ADDR		(LSCH2_IMMR + 0x00ae0000)
#define LSCH2_SEC_MON_ADDR		(LSCH2_IMMR + 0x00e90000)
#define LSCH2_SFP_ADDR			(LSCH2_IMMR + 0x00e80200)
#define LSCH2_GUTS_ADDR			(LSCH2_IMMR + 0x00ee0000)
#define LSCH2_RST_ADDR			(LSCH2_IMMR + 0x00ee00b0)
#define LSCH2_FMAN_ADDR			(LSCH2_IMMR + 0x00a00000)
#define LSCH2_SERDES_ADDR		(LSCH2_IMMR + 0x00ea0000)
#define LSCH2_DCFG_ADDR			(LSCH2_IMMR + 0x00ee0000)
#define LSCH2_CLK_ADDR			(LSCH2_IMMR + 0x00ee1000)
#define LSCH2_DSPI1_BASE_ADDR		(LSCH2_IMMR + 0x01100000)
#define LSCH2_I2C1_BASE_ADDR		(LSCH2_IMMR + 0x01180000)
#define LSCH2_I2C2_BASE_ADDR		(LSCH2_IMMR + 0x01190000)
#define LSCH2_I2C3_BASE_ADDR		(LSCH2_IMMR + 0x011a0000)
#define LSCH2_I2C4_BASE_ADDR		(LSCH2_IMMR + 0x011b0000)
#define LSCH2_NS16550_COM1		(LSCH2_IMMR + 0x011c0500)
#define LSCH2_NS16550_COM2		(LSCH2_IMMR + 0x011c0600)
#define LSCH2_NS16550_COM3		(LSCH2_IMMR + 0x011d0500)
#define LSCH2_NS16550_COM4		(LSCH2_IMMR + 0x011d0600)
#define LSCH2_GPIO1_BASE_ADDR		(LSCH2_IMMR + 0x01300000)
#define LSCH2_GPIO2_BASE_ADDR		(LSCH2_IMMR + 0x01310000)
#define LSCH2_GPIO3_BASE_ADDR		(LSCH2_IMMR + 0x01320000)
#define LSCH2_GPIO4_BASE_ADDR		(LSCH2_IMMR + 0x01330000)
#define LSCH2_QE_BASE_ADDR		(LSCH2_IMMR + 0x01400000)
#define LSCH2_LPUART_BASE		(LSCH2_IMMR + 0x01950000)
#define LSCH2_WDOG1_BASE_ADDR		(LSCH2_IMMR + 0x01ad0000)
#define LSCH2_SYS_COUNTER_ADDR		(LSCH2_IMMR + 0x01b00000)
#define LSCH2_EDMA_BASE_ADDR		(LSCH2_IMMR + 0x01c00000)
#define LSCH2_XHCI_USB1_ADDR		(LSCH2_IMMR + 0x01f00000)
#define LSCH2_XHCI_USB2_ADDR		(LSCH2_IMMR + 0x02000000)
#define LSCH2_XHCI_USB3_ADDR		(LSCH2_IMMR + 0x02100000)
#define LSCH2_HCI_BASE_ADDR		(LSCH2_IMMR + 0x02200000)
#define LSCH2_PCIE1_ADDR		(LSCH2_IMMR + 0x02400000)
#define LSCH2_PCIE2_ADDR		(LSCH2_IMMR + 0x02500000)
#define LSCH2_PCIE3_ADDR		(LSCH2_IMMR + 0x02600000)
#define LSCH2_SEC_ADDR			(LSCH2_IMMR + 0x00700000)
#define LSCH2_QDMA_BASE_ADDR		(LSCH2_IMMR + 0x07380000)
#define LSCH2_EHCI_USB1_ADDR		(LSCH2_IMMR + 0x07600000)

struct ccsr_gur {
	u32     porsr1;         /* POR status 1 */
#define FSL_CHASSIS2_CCSR_PORSR1_RCW_MASK	0xFF800000
	u32     porsr2;         /* POR status 2 */
	u8      res_008[0x20-0x8];
	u32     gpporcr1;       /* General-purpose POR configuration */
	u32	gpporcr2;
#define FSL_CHASSIS2_DCFG_FUSESR_VID_SHIFT	25
#define FSL_CHASSIS2_DCFG_FUSESR_VID_MASK	0x1F
#define FSL_CHASSIS2_DCFG_FUSESR_ALTVID_SHIFT	20
#define FSL_CHASSIS2_DCFG_FUSESR_ALTVID_MASK	0x1F
	u32     dcfg_fusesr;    /* Fuse status register */
	u8      res_02c[0x70-0x2c];
	u32     devdisr;        /* Device disable control */
#define FSL_CHASSIS2_DEVDISR2_DTSEC1_1	0x80000000
#define FSL_CHASSIS2_DEVDISR2_DTSEC1_2	0x40000000
#define FSL_CHASSIS2_DEVDISR2_DTSEC1_3	0x20000000
#define FSL_CHASSIS2_DEVDISR2_DTSEC1_4	0x10000000
#define FSL_CHASSIS2_DEVDISR2_DTSEC1_5	0x08000000
#define FSL_CHASSIS2_DEVDISR2_DTSEC1_6	0x04000000
#define FSL_CHASSIS2_DEVDISR2_DTSEC1_9	0x00800000
#define FSL_CHASSIS2_DEVDISR2_DTSEC1_10	0x00400000
#define FSL_CHASSIS2_DEVDISR2_10GEC1_1	0x00800000
#define FSL_CHASSIS2_DEVDISR2_10GEC1_2	0x00400000
#define FSL_CHASSIS2_DEVDISR2_10GEC1_3	0x80000000
#define FSL_CHASSIS2_DEVDISR2_10GEC1_4	0x40000000
	u32     devdisr2;       /* Device disable control 2 */
	u32     devdisr3;       /* Device disable control 3 */
	u32     devdisr4;       /* Device disable control 4 */
	u32     devdisr5;       /* Device disable control 5 */
	u32     devdisr6;       /* Device disable control 6 */
	u32     devdisr7;       /* Device disable control 7 */
	u8      res_08c[0x94-0x8c];
	u32     coredisru;      /* uppper portion for support of 64 cores */
	u32     coredisrl;      /* lower portion for support of 64 cores */
	u8      res_09c[0xa0-0x9c];
	u32     pvr;            /* Processor version */
	u32     svr;            /* System version */
	u32     mvr;            /* Manufacturing version */
	u8	res_0ac[0xb0-0xac];
	u32	rstcr;		/* Reset control */
	u32	rstrqpblsr;	/* Reset request preboot loader status */
	u8	res_0b8[0xc0-0xb8];
	u32	rstrqmr1;	/* Reset request mask */
	u8	res_0c4[0xc8-0xc4];
	u32	rstrqsr1;	/* Reset request status */
	u8	res_0cc[0xd4-0xcc];
	u32	rstrqwdtmrl;	/* Reset request WDT mask */
	u8	res_0d8[0xdc-0xd8];
	u32	rstrqwdtsrl;	/* Reset request WDT status */
	u8	res_0e0[0xe4-0xe0];
	u32	brrl;		/* Boot release */
	u8      res_0e8[0x100-0xe8];
	u32     rcwsr[16];      /* Reset control word status */
#define FSL_CHASSIS2_RCWSR0_SYS_PLL_RAT_SHIFT	25
#define FSL_CHASSIS2_RCWSR0_SYS_PLL_RAT_MASK	0x1f
#define FSL_CHASSIS2_RCWSR0_MEM_PLL_RAT_SHIFT	16
#define FSL_CHASSIS2_RCWSR0_MEM_PLL_RAT_MASK	0x3f
#define FSL_CHASSIS2_RCWSR4_SRDS1_PRTCL_MASK	0xffff0000
#define FSL_CHASSIS2_RCWSR4_SRDS1_PRTCL_SHIFT	16
#define FSL_CHASSIS2_RCWSR4_SRDS2_PRTCL_MASK	0x0000ffff
#define FSL_CHASSIS2_RCWSR4_SRDS2_PRTCL_SHIFT	0
#define RCW_SB_EN_REG_INDEX	7
#define RCW_SB_EN_MASK		0x00200000

	u8      res_140[0x200-0x140];
	u32     scratchrw[4];  /* Scratch Read/Write */
	u8      res_210[0x300-0x210];
	u32     scratchw1r[4];  /* Scratch Read (Write once) */
	u8      res_310[0x400-0x310];
	u32	crstsr[12];
	u8	res_430[0x500-0x430];

	/* PCI Express n Logical I/O Device Number register */
	u32 dcfg_ccsr_pex1liodnr;
	u32 dcfg_ccsr_pex2liodnr;
	u32 dcfg_ccsr_pex3liodnr;
	u32 dcfg_ccsr_pex4liodnr;
	/* RIO n Logical I/O Device Number register */
	u32 dcfg_ccsr_rio1liodnr;
	u32 dcfg_ccsr_rio2liodnr;
	u32 dcfg_ccsr_rio3liodnr;
	u32 dcfg_ccsr_rio4liodnr;
	/* USB Logical I/O Device Number register */
	u32 dcfg_ccsr_usb1liodnr;
	u32 dcfg_ccsr_usb2liodnr;
	u32 dcfg_ccsr_usb3liodnr;
	u32 dcfg_ccsr_usb4liodnr;
	/* SD/MMC Logical I/O Device Number register */
	u32 dcfg_ccsr_sdmmc1liodnr;
	u32 dcfg_ccsr_sdmmc2liodnr;
	u32 dcfg_ccsr_sdmmc3liodnr;
	u32 dcfg_ccsr_sdmmc4liodnr;
	/* RIO Message Unit Logical I/O Device Number register */
	u32 dcfg_ccsr_riomaintliodnr;

	u8      res_544[0x550-0x544];
	u32	sataliodnr[4];
	u8	res_560[0x570-0x560];

	u32 dcfg_ccsr_misc1liodnr;
	u32 dcfg_ccsr_misc2liodnr;
	u32 dcfg_ccsr_misc3liodnr;
	u32 dcfg_ccsr_misc4liodnr;
	u32 dcfg_ccsr_dma1liodnr;
	u32 dcfg_ccsr_dma2liodnr;
	u32 dcfg_ccsr_dma3liodnr;
	u32 dcfg_ccsr_dma4liodnr;
	u32 dcfg_ccsr_spare1liodnr;
	u32 dcfg_ccsr_spare2liodnr;
	u32 dcfg_ccsr_spare3liodnr;
	u32 dcfg_ccsr_spare4liodnr;
	u8	res_5a0[0x600-0x5a0];
	u32 dcfg_ccsr_pblsr;

	u32	pamubypenr;
	u32	dmacr1;

	u8	res_60c[0x610-0x60c];
	u32 dcfg_ccsr_gensr1;
	u32 dcfg_ccsr_gensr2;
	u32 dcfg_ccsr_gensr3;
	u32 dcfg_ccsr_gensr4;
	u32 dcfg_ccsr_gencr1;
	u32 dcfg_ccsr_gencr2;
	u32 dcfg_ccsr_gencr3;
	u32 dcfg_ccsr_gencr4;
	u32 dcfg_ccsr_gencr5;
	u32 dcfg_ccsr_gencr6;
	u32 dcfg_ccsr_gencr7;
	u8	res_63c[0x658-0x63c];
	u32 dcfg_ccsr_cgensr1;
	u32 dcfg_ccsr_cgensr0;
	u8	res_660[0x678-0x660];
	u32 dcfg_ccsr_cgencr1;

	u32 dcfg_ccsr_cgencr0;
	u8	res_680[0x700-0x680];
	u32 dcfg_ccsr_sriopstecr;
	u32 dcfg_ccsr_dcsrcr;

	u8      res_708[0x740-0x708];   /* add more registers when needed */
	u32     tp_ityp[64];    /* Topology Initiator Type Register */
	struct {
		u32     upper;
		u32     lower;
	} tp_cluster[16];
	u8      res_8c0[0xa00-0x8c0];   /* add more registers when needed */
	u32 dcfg_ccsr_qmbm_warmrst;
	u8      res_a04[0xa20-0xa04];   /* add more registers when needed */
	u32 dcfg_ccsr_reserved0;
	u32 dcfg_ccsr_reserved1;
};

/* LS102XA Device Configuration and Pin Control */
struct ls102xa_ccsr_gur {
	u32     porsr1;         /* POR status 1 */
	u32     porsr2;         /* POR status 2 */
	u8      res_008[0x20-0x8];
	u32     gpporcr1;       /* General-purpose POR configuration */
	u32	gpporcr2;
	u32     dcfg_fusesr;    /* Fuse status register */
	u8      res_02c[0x70-0x2c];
	u32     devdisr;        /* Device disable control */
	u32     devdisr2;       /* Device disable control 2 */
	u32     devdisr3;       /* Device disable control 3 */
	u32     devdisr4;       /* Device disable control 4 */
	u32     devdisr5;       /* Device disable control 5 */
	u8      res_084[0x94-0x84];
	u32     coredisru;      /* uppper portion for support of 64 cores */
	u32     coredisrl;      /* lower portion for support of 64 cores */
	u8      res_09c[0xa4-0x9c];
	u32     svr;            /* System version */
	u8	res_0a8[0xb0-0xa8];
	u32	rstcr;		/* Reset control */
	u32	rstrqpblsr;	/* Reset request preboot loader status */
	u8	res_0b8[0xc0-0xb8];
	u32	rstrqmr1;	/* Reset request mask */
	u8	res_0c4[0xc8-0xc4];
	u32	rstrqsr1;	/* Reset request status */
	u8	res_0cc[0xd4-0xcc];
	u32	rstrqwdtmrl;	/* Reset request WDT mask */
	u8	res_0d8[0xdc-0xd8];
	u32	rstrqwdtsrl;	/* Reset request WDT status */
	u8	res_0e0[0xe4-0xe0];
	u32	brrl;		/* Boot release */
	u8      res_0e8[0x100-0xe8];
	u32     rcwsr[16];      /* Reset control word status */
#define RCW_SB_EN_REG_INDEX	7
#define RCW_SB_EN_MASK		0x00200000
	u8      res_140[0x200-0x140];
	u32     scratchrw[4];  /* Scratch Read/Write */
	u8      res_210[0x300-0x210];
	u32     scratchw1r[4];  /* Scratch Read (Write once) */
	u8      res_310[0x400-0x310];
	u32	crstsr;
	u8      res_404[0x550-0x404];
	u32	sataliodnr;
	u8	res_554[0x604-0x554];
	u32	pamubypenr;
	u32	dmacr1;
	u8      res_60c[0x740-0x60c];   /* add more registers when needed */
	u32     tp_ityp[64];    /* Topology Initiator Type Register */
	struct {
		u32     upper;
		u32     lower;
	} tp_cluster[1];        /* Core Cluster n Topology Register */
	u8	res_848[0xe60-0x848];
	u32	ddrclkdr;
	u8	res_e60[0xe68-0xe64];
	u32	ifcclkdr;
	u8	res_e68[0xe80-0xe6c];
	u32	sdhcpcr;
};

#define SCFG_USBDRVVBUS_SELCR_USB1	0x00000000
#define SCFG_USBDRVVBUS_SELCR_USB2	0x00000001
#define SCFG_USBDRVVBUS_SELCR_USB3	0x00000002
#define SCFG_USBPWRFAULT_INACTIVE	0x00000000
#define SCFG_USBPWRFAULT_SHARED		0x00000001
#define SCFG_USBPWRFAULT_DEDICATED	0x00000002
#define SCFG_USBPWRFAULT_USB3_SHIFT	4
#define SCFG_USBPWRFAULT_USB2_SHIFT	2
#define SCFG_USBPWRFAULT_USB1_SHIFT	0

#define SCFG_USB3PRM1CR_USB1		0x070
#define SCFG_USB3PRM2CR_USB1		0x074
#define SCFG_USB3PRM1CR_USB2		0x07C
#define SCFG_USB3PRM2CR_USB2		0x080
#define SCFG_USB3PRM1CR_USB3		0x088
#define SCFG_USB3PRM2CR_USB3		0x08c
#define SCFG_USB_TXVREFTUNE			0x9
#define SCFG_USB_SQRXTUNE_MASK		0x7
#define SCFG_USB_PCSTXSWINGFULL		0x47
#define SCFG_USB_PHY1			0x084F0000
#define SCFG_USB_PHY2			0x08500000
#define SCFG_USB_PHY3			0x08510000
#define SCFG_USB_PHY_RX_OVRD_IN_HI		0x200c

#define SCFG_ETSECDMAMCR_LE_BD_FR	0x00000c00
#define SCFG_SNPCNFGCR_SEC_RD_WR	0xc0000000
#define SCFG_ETSECCMCR_GE2_CLK125	0x04000000
#define SCFG_ETSECCMCR_GE0_CLK125	0x00000000
#define SCFG_SNPCNFGCR_DBG_RD_WR	0x000c0000
#define SCFG_SNPCNFGCR_EDMA_SNP		0x00020000
#define SCFG_ENDIANCR_LE		0x80000000

#define SCFG_SNPCNFGCR_SECRDSNP		0x80000000
#define SCFG_SNPCNFGCR_SECWRSNP		0x40000000
#define SCFG_SNPCNFGCR_SATARDSNP	0x00800000
#define SCFG_SNPCNFGCR_SATAWRSNP	0x00400000
#define SCFG_SNPCNFGCR_USB1RDSNP	0x00200000
#define SCFG_SNPCNFGCR_USB1WRSNP	0x00100000
#define SCFG_SNPCNFGCR_EDMASNP		0x00020000
#define SCFG_SNPCNFGCR_USB2RDSNP	0x00008000
#define SCFG_SNPCNFGCR_USB2WRSNP	0x00010000
#define SCFG_SNPCNFGCR_USB3RDSNP	0x00002000
#define SCFG_SNPCNFGCR_USB3WRSNP	0x00004000

/* RGMIIPCR bit definitions*/
#define SCFG_RGMIIPCR_EN_AUTO		BIT(3)
#define SCFG_RGMIIPCR_SETSP_1000M	BIT(2)
#define SCFG_RGMIIPCR_SETSP_100M	0
#define SCFG_RGMIIPCR_SETSP_10M		BIT(1)
#define SCFG_RGMIIPCR_SETFD		BIT(0)

/* PFEASBCR bit definitions */
#define SCFG_PFEASBCR_ARCACHE0		BIT(31)
#define SCFG_PFEASBCR_AWCACHE0		BIT(30)
#define SCFG_PFEASBCR_ARCACHE1		BIT(29)
#define SCFG_PFEASBCR_AWCACHE1		BIT(28)
#define SCFG_PFEASBCR_ARSNP		BIT(27)
#define SCFG_PFEASBCR_AWSNP		BIT(26)

/* WR_QoS1 PFE bit definitions */
#define SCFG_WR_QOS1_PFE1_QOS		GENMASK(27, 24)
#define SCFG_WR_QOS1_PFE2_QOS		GENMASK(23, 20)

/* RD_QoS1 PFE bit definitions */
#define SCFG_RD_QOS1_PFE1_QOS		GENMASK(27, 24)
#define SCFG_RD_QOS1_PFE2_QOS		GENMASK(23, 20)

/* Supplemental Configuration Unit */
struct ccsr_scfg {
	u8 res_000[0x100-0x000];
	u32 usb2_icid;
	u32 usb3_icid;
	u8 res_108[0x114-0x108];
	u32 dma_icid;
	u32 sata_icid;
	u32 usb1_icid;
	u32 qe_icid;
	u32 sdhc_icid;
	u32 edma_icid;
	u32 etr_icid;
	u32 core_sft_rst[4];
	u8 res_140[0x158-0x140];
	u32 altcbar;
	u32 qspi_cfg;
	u8 res_160[0x164 - 0x160];
	u32 wr_qos1;
	u32 wr_qos2;
	u32 rd_qos1;
	u32 rd_qos2;
	u8 res_174[0x180 - 0x174];
	u32 dmamcr;
	u8 res_184[0x188-0x184];
	u32 gic_align;
	u32 debug_icid;
	u8 res_190[0x1a4-0x190];
	u32 snpcnfgcr;
	u8 res_1a8[0x1ac-0x1a8];
	u32 intpcr;
	u8 res_1b0[0x204-0x1b0];
	u32 coresrencr;
	u8 res_208[0x220-0x208];
	u32 rvbar0_0;
	u32 rvbar0_1;
	u32 rvbar1_0;
	u32 rvbar1_1;
	u32 rvbar2_0;
	u32 rvbar2_1;
	u32 rvbar3_0;
	u32 rvbar3_1;
	u32 lpmcsr;
	u8 res_244[0x400-0x244];
	u32 qspidqscr;
	u32 ecgtxcmcr;
	u32 sdhciovselcr;
	u32 rcwpmuxcr0;
	u32 usbdrvvbus_selcr;
	u32 usbpwrfault_selcr;
	u32 usb_refclk_selcr1;
	u32 usb_refclk_selcr2;
	u32 usb_refclk_selcr3;
	u8 res_424[0x434 - 0x424];
	u32 rgmiipcr;
	u32 res_438;
	u32 rgmiipsr;
	u32 pfepfcssr1;
	u32 pfeintencr1;
	u32 pfepfcssr2;
	u32 pfeintencr2;
	u32 pfeerrcr;
	u32 pfeeerrintencr;
	u32 pfeasbcr;
	u32 pfebsbcr;
	u8 res_460[0x484 - 0x460];
	u32 mdioselcr;
	u8 res_468[0x600 - 0x488];
	u32 scratchrw[4];
	u8 res_610[0x680-0x610];
	u32 corebcr;
	u8 res_684[0x1000-0x684];
	u32 pex1msiir;
	u32 pex1msir;
	u8 res_1008[0x2000-0x1008];
	u32 pex2;
	u32 pex2msir;
	u8 res_2008[0x3000-0x2008];
	u32 pex3msiir;
	u32 pex3msir;
};

/* LS102XA Supplemental Configuration Unit */
struct ls102xa_ccsr_scfg {
	u32 dpslpcr;
	u32 resv0[2];
	u32 etsecclkdpslpcr;
	u32 resv1[5];
	u32 fuseovrdcr;
	u32 pixclkcr;
	u32 resv2[5];
	u32 spimsicr;
	u32 resv3[6];
	u32 pex1pmwrcr;
	u32 pex1pmrdsr;
	u32 resv4[3];
	u32 usb3prm1cr;
	u32 usb4prm2cr;
	u32 pex1rdmsgpldlsbsr;
	u32 pex1rdmsgpldmsbsr;
	u32 pex2rdmsgpldlsbsr;
	u32 pex2rdmsgpldmsbsr;
	u32 pex1rdmmsgrqsr;
	u32 pex2rdmmsgrqsr;
	u32 spimsiclrcr;
	u32 pexmscportsr[2];
	u32 pex2pmwrcr;
	u32 resv5[24];
	u32 mac1_streamid;
	u32 mac2_streamid;
	u32 mac3_streamid;
	u32 pex1_streamid;
	u32 pex2_streamid;
	u32 dma_streamid;
	u32 sata_streamid;
	u32 usb3_streamid;
	u32 qe_streamid;
	u32 sdhc_streamid;
	u32 adma_streamid;
	u32 letechsftrstcr;
	u32 core0_sft_rst;
	u32 core1_sft_rst;
	u32 resv6[1];
	u32 usb_hi_addr;
	u32 etsecclkadjcr;
	u32 sai_clk;
	u32 resv7[1];
	u32 dcu_streamid;
	u32 usb2_streamid;
	u32 ftm_reset;
	u32 altcbar;
	u32 qspi_cfg;
	u32 pmcintecr;
	u32 pmcintlecr;
	u32 pmcintsr;
	u32 qos1;
	u32 qos2;
	u32 qos3;
	u32 cci_cfg;
	u32 endiancr;
	u32 etsecdmamcr;
	u32 usb3prm3cr;
	u32 resv9[1];
	u32 debug_streamid;
	u32 resv10[5];
	u32 snpcnfgcr;
	u32 hrstcr;
	u32 intpcr;
	u32 resv12[20];
	u32 scfgrevcr;
	u32 coresrencr;
	u32 pex2pmrdsr;
	u32 eddrtqcfg;
	u32 ddrc2cr;
	u32 ddrc3cr;
	u32 ddrc4cr;
	u32 ddrgcr;
	u32 resv13[120];
	u32 qeioclkcr;
	u32 etsecmcr;
	u32 sdhciovserlcr;
	u32 resv14[61];
	u32 sparecr[8];
	u32 resv15[248];
	u32 core0sftrstsr;
	u32 clusterpmcr;
};
#endif /* __ARCH_FSL_LSCH2_IMMAP_H__*/
