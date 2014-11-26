/*
 * Class HTTP_ACCEPT_VARIANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_48 [] = {418,47,0xFFFF};
static EIF_TYPE_INDEX gen_type1_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_48 [] = {422,310,0xFFFF};


static struct desc_info desc_48[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_48},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 47, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_48},
	{14, (BODY_INDEX)-1, 0, gen_type2_48},
	{15, (BODY_INDEX)-1, 47, NULL},
	{16, (BODY_INDEX)-1, 47, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_48},
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
	{28, (BODY_INDEX)-1, 47, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 47, NULL},
	{909, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{910, 0, 310, NULL},
	{911, 8, 422, gen_type4_48},
	{912, 16, 310, NULL},
	{913, 24, 301, NULL},
	{914, (BODY_INDEX)-1, 301, NULL},
	{915, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{916, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{917, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init48(void);
void Init48(void)
{
	IDSC(desc_48, 0, 47);
	IDSC(desc_48 + 1, 2, 47);
	IDSC(desc_48 + 32, 409, 47);
}


#ifdef __cplusplus
}
#endif
