/*
 * Class BAG [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_480 [] = {414,479,341,0xFFFF};
static EIF_TYPE_INDEX gen_type1_480 [] = {479,341,0xFFFF};
static EIF_TYPE_INDEX gen_type2_480 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_480 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_480 [] = {479,341,0xFFFF};
static EIF_TYPE_INDEX gen_type5_480 [] = {479,341,0xFFFF};
static EIF_TYPE_INDEX gen_type6_480 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_480 [] = {479,341,0xFFFF};
static EIF_TYPE_INDEX gen_type8_480 [] = {479,341,0xFFFF};
static EIF_TYPE_INDEX gen_type9_480 [] = {474,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_480 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_480[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_480},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 479, gen_type1_480},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_480},
	{14, (BODY_INDEX)-1, 0, gen_type3_480},
	{15, (BODY_INDEX)-1, 479, gen_type4_480},
	{16, (BODY_INDEX)-1, 479, gen_type5_480},
	{17, (BODY_INDEX)-1, 0, gen_type6_480},
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
	{28, (BODY_INDEX)-1, 479, gen_type7_480},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 479, gen_type8_480},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{2364, (BODY_INDEX)-1, 297, NULL},
	{2365, 0, 297, NULL},
	{2361, (BODY_INDEX)-1, 297, NULL},
	{2362, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2363, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 474, gen_type9_480},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_480},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{2794, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2795, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2796, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 341, NULL},
};

extern void Init480(void);
void Init480(void)
{
	IDSC(desc_480, 0, 479);
	IDSC(desc_480 + 1, 2, 479);
	IDSC(desc_480 + 32, 322, 479);
	IDSC(desc_480 + 41, 316, 479);
	IDSC(desc_480 + 50, 323, 479);
}


#ifdef __cplusplus
}
#endif
