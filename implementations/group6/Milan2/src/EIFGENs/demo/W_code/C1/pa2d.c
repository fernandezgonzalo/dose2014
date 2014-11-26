/*
 * Class PACKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_2 [] = {418,1,0xFFFF};
static EIF_TYPE_INDEX gen_type1_2 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_2 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_2 [] = {0,0xFFFF};


static struct desc_info desc_2[] = {
	{(BODY_INDEX) 32, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_2},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{40, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 1, NULL},
	{41, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_2},
	{14, (BODY_INDEX)-1, 0, gen_type2_2},
	{15, (BODY_INDEX)-1, 1, NULL},
	{16, (BODY_INDEX)-1, 1, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_2},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 32, NULL},
	{21, (BODY_INDEX)-1, 314, NULL},
	{22, (BODY_INDEX)-1, 314, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 31, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 1, NULL},
	{33, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{34, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{35, (BODY_INDEX)-1, 348, NULL},
	{36, (BODY_INDEX)-1, 298, NULL},
	{37, (BODY_INDEX)-1, 298, NULL},
	{38, (BODY_INDEX)-1, 301, NULL},
	{39, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{42, 0, 253, NULL},
};

extern void Init2(void);
void Init2(void)
{
	IDSC(desc_2, 0, 1);
	IDSC(desc_2 + 1, 2, 1);
	IDSC(desc_2 + 32, 441, 1);
}


#ifdef __cplusplus
}
#endif
