/*
 * Class CONTAINER [CHARACTER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_625 [] = {414,624,291,0xFFFF};
static EIF_TYPE_INDEX gen_type1_625 [] = {624,291,0xFFFF};
static EIF_TYPE_INDEX gen_type2_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_625 [] = {624,291,0xFFFF};
static EIF_TYPE_INDEX gen_type5_625 [] = {624,291,0xFFFF};
static EIF_TYPE_INDEX gen_type6_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_625 [] = {624,291,0xFFFF};
static EIF_TYPE_INDEX gen_type8_625 [] = {624,291,0xFFFF};
static EIF_TYPE_INDEX gen_type9_625 [] = {622,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_625 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_625[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_625},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 624, gen_type1_625},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_625},
	{14, (BODY_INDEX)-1, 0, gen_type3_625},
	{15, (BODY_INDEX)-1, 624, gen_type4_625},
	{16, (BODY_INDEX)-1, 624, gen_type5_625},
	{17, (BODY_INDEX)-1, 0, gen_type6_625},
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
	{28, (BODY_INDEX)-1, 624, gen_type7_625},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 624, gen_type8_625},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 297, NULL},
	{2384, (BODY_INDEX)-1, 297, NULL},
	{2385, 0, 297, NULL},
	{2381, (BODY_INDEX)-1, 297, NULL},
	{2382, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2383, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 622, gen_type9_625},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_625},
};

extern void Init625(void);
void Init625(void)
{
	IDSC(desc_625, 0, 624);
	IDSC(desc_625 + 1, 2, 624);
	IDSC(desc_625 + 32, 322, 624);
}


#ifdef __cplusplus
}
#endif
