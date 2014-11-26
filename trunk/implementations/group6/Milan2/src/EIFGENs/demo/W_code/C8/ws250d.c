/*
 * Class WSF_DEFAULT_RESPONSE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_250 [] = {418,249,0xFFFF};
static EIF_TYPE_INDEX gen_type1_250 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_250 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_250 [] = {0,0xFFFF};


static struct desc_info desc_250[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_250},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 249, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_250},
	{14, (BODY_INDEX)-1, 0, gen_type2_250},
	{15, (BODY_INDEX)-1, 249, NULL},
	{16, (BODY_INDEX)-1, 249, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_250},
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
	{28, (BODY_INDEX)-1, 249, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 249, NULL},
	{3900, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3901, 0, 322, NULL},
	{3903, (BODY_INDEX)-1, 244, NULL},
	{3904, (BODY_INDEX)-1, 245, NULL},
	{3902, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init250(void);
void Init250(void)
{
	IDSC(desc_250, 0, 249);
	IDSC(desc_250 + 1, 2, 249);
	IDSC(desc_250 + 32, 317, 249);
	IDSC(desc_250 + 36, 256, 249);
}


#ifdef __cplusplus
}
#endif
