/*
 * Class BOX [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_901 [] = {414,900,356,0xFFFF};
static EIF_TYPE_INDEX gen_type1_901 [] = {900,356,0xFFFF};
static EIF_TYPE_INDEX gen_type2_901 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_901 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_901 [] = {900,356,0xFFFF};
static EIF_TYPE_INDEX gen_type5_901 [] = {900,356,0xFFFF};
static EIF_TYPE_INDEX gen_type6_901 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_901 [] = {900,356,0xFFFF};
static EIF_TYPE_INDEX gen_type8_901 [] = {900,356,0xFFFF};
static EIF_TYPE_INDEX gen_type9_901 [] = {889,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_901 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_901[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_901},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 900, gen_type1_901},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_901},
	{14, (BODY_INDEX)-1, 0, gen_type3_901},
	{15, (BODY_INDEX)-1, 900, gen_type4_901},
	{16, (BODY_INDEX)-1, 900, gen_type5_901},
	{17, (BODY_INDEX)-1, 0, gen_type6_901},
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
	{28, (BODY_INDEX)-1, 900, gen_type7_901},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 900, gen_type8_901},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{2414, (BODY_INDEX)-1, 297, NULL},
	{2415, 0, 297, NULL},
	{2411, (BODY_INDEX)-1, 297, NULL},
	{2412, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2413, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 889, gen_type9_901},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_901},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
};

extern void Init901(void);
void Init901(void)
{
	IDSC(desc_901, 0, 900);
	IDSC(desc_901 + 1, 2, 900);
	IDSC(desc_901 + 32, 322, 900);
	IDSC(desc_901 + 41, 395, 900);
}


#ifdef __cplusplus
}
#endif
