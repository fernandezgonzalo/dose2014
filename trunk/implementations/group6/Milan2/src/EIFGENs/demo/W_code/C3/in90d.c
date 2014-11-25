/*
 * Class INET_ADDRESS_IMPL_V6
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_90 [] = {418,89,0xFFFF};
static EIF_TYPE_INDEX gen_type1_90 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_90 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_90 [] = {0,0xFFFF};


static struct desc_info desc_90[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_90},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 89, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_90},
	{14, (BODY_INDEX)-1, 0, gen_type2_90},
	{15, (BODY_INDEX)-1, 89, NULL},
	{16, (BODY_INDEX)-1, 89, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_90},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 33, NULL},
	{21, (BODY_INDEX)-1, 314, NULL},
	{22, (BODY_INDEX)-1, 314, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 32, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 89, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 89, NULL},
	{1431, (BODY_INDEX)-1, 314, NULL},
	{1432, (BODY_INDEX)-1, 91, NULL},
	{1433, (BODY_INDEX)-1, 91, NULL},
	{1434, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init90(void);
void Init90(void)
{
	IDSC(desc_90, 0, 89);
	IDSC(desc_90 + 1, 2, 89);
	IDSC(desc_90 + 32, 452, 89);
	IDSC(desc_90 + 35, 453, 89);
}


#ifdef __cplusplus
}
#endif
