/*
 * Class COLLECTION [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_433 [] = {414,432,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type1_433 [] = {432,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_433 [] = {432,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type5_433 [] = {432,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_433 [] = {432,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type8_433 [] = {432,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type9_433 [] = {427,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_433 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_433[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_433},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 432, gen_type1_433},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_433},
	{14, (BODY_INDEX)-1, 0, gen_type3_433},
	{15, (BODY_INDEX)-1, 432, gen_type4_433},
	{16, (BODY_INDEX)-1, 432, gen_type5_433},
	{17, (BODY_INDEX)-1, 0, gen_type6_433},
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
	{28, (BODY_INDEX)-1, 432, gen_type7_433},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 432, gen_type8_433},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{2359, (BODY_INDEX)-1, 297, NULL},
	{2360, 0, 297, NULL},
	{2356, (BODY_INDEX)-1, 297, NULL},
	{2357, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2358, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 427, gen_type9_433},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_433},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{2791, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2792, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2793, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init433(void);
void Init433(void)
{
	IDSC(desc_433, 0, 432);
	IDSC(desc_433 + 1, 2, 432);
	IDSC(desc_433 + 32, 322, 432);
	IDSC(desc_433 + 41, 316, 432);
}


#ifdef __cplusplus
}
#endif
