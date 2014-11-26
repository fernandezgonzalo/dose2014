/*
 * Class WSF_CALLBACK_SERVICE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_108 [] = {418,107,0xFFFF};
static EIF_TYPE_INDEX gen_type1_108 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_108 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_108 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_108 [] = {426,0,0xFFF9,2,293,322,77,0xFFFF};


static struct desc_info desc_108[] = {
	{(BODY_INDEX) 1622, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_108},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 107, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_108},
	{14, (BODY_INDEX)-1, 0, gen_type2_108},
	{15, (BODY_INDEX)-1, 107, NULL},
	{16, (BODY_INDEX)-1, 107, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_108},
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
	{28, (BODY_INDEX)-1, 107, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 107, NULL},
	{1621, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1618, (BODY_INDEX)-1, 51, NULL},
	{1619, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1620, 0, 426, gen_type4_108},
};

extern void Init108(void);
void Init108(void)
{
	IDSC(desc_108, 0, 107);
	IDSC(desc_108 + 1, 2, 107);
	IDSC(desc_108 + 32, 303, 107);
	IDSC(desc_108 + 34, 391, 107);
}


#ifdef __cplusplus
}
#endif
