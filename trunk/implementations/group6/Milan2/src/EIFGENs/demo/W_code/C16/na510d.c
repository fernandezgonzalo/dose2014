/*
 * Class NATIVE_ARRAY [NATURAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_510 [] = {414,509,353,0xFFFF};
static EIF_TYPE_INDEX gen_type1_510 [] = {509,353,0xFFFF};
static EIF_TYPE_INDEX gen_type2_510 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_510 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_510 [] = {509,353,0xFFFF};
static EIF_TYPE_INDEX gen_type5_510 [] = {509,353,0xFFFF};
static EIF_TYPE_INDEX gen_type6_510 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_510 [] = {509,353,0xFFFF};
static EIF_TYPE_INDEX gen_type8_510 [] = {509,353,0xFFFF};
static EIF_TYPE_INDEX gen_type9_510 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_510[] = {
	{(BODY_INDEX) 619, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_510},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 509, gen_type1_510},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_510},
	{14, (BODY_INDEX)-1, 0, gen_type3_510},
	{15, (BODY_INDEX)-1, 509, gen_type4_510},
	{16, (BODY_INDEX)-1, 509, gen_type5_510},
	{17, (BODY_INDEX)-1, 0, gen_type6_510},
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
	{28, (BODY_INDEX)-1, 509, gen_type7_510},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 509, gen_type8_510},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type9_510},
};

extern void Init510(void);
void Init510(void)
{
	IDSC(desc_510, 0, 509);
	IDSC(desc_510 + 1, 2, 509);
	IDSC(desc_510 + 32, 46, 509);
}


#ifdef __cplusplus
}
#endif
