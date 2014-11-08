/*
 * Class CELL [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_921 [] = {414,920,341,0xFFFF};
static EIF_TYPE_INDEX gen_type1_921 [] = {920,341,0xFFFF};
static EIF_TYPE_INDEX gen_type2_921 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_921 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_921 [] = {920,341,0xFFFF};
static EIF_TYPE_INDEX gen_type5_921 [] = {920,341,0xFFFF};
static EIF_TYPE_INDEX gen_type6_921 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_921 [] = {920,341,0xFFFF};
static EIF_TYPE_INDEX gen_type8_921 [] = {920,341,0xFFFF};
static EIF_TYPE_INDEX gen_type9_921 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_921 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_921[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_921},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 920, gen_type1_921},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_921},
	{14, (BODY_INDEX)-1, 0, gen_type3_921},
	{15, (BODY_INDEX)-1, 920, gen_type4_921},
	{16, (BODY_INDEX)-1, 920, gen_type5_921},
	{17, (BODY_INDEX)-1, 0, gen_type6_921},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 31, NULL},
	{21, (BODY_INDEX)-1, 310, NULL},
	{22, (BODY_INDEX)-1, 310, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 32, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 920, gen_type7_921},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 920, gen_type8_921},
	{1363, 0, (EIF_TYPE_INDEX)-1, gen_type9_921},
	{1364, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1365, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_921},
};

extern void Init921(void);
void Init921(void)
{
	IDSC(desc_921, 0, 920);
	IDSC(desc_921 + 1, 2, 920);
	IDSC(desc_921 + 32, 82, 920);
}


#ifdef __cplusplus
}
#endif
