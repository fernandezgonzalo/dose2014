/*
 * Class WSF_DEFAULT_RESPONSE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_254 [] = {414,253,0xFFFF};
static EIF_TYPE_INDEX gen_type1_254 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_254 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_254 [] = {0,0xFFFF};


static struct desc_info desc_254[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_254},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 253, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_254},
	{14, (BODY_INDEX)-1, 0, gen_type2_254},
	{15, (BODY_INDEX)-1, 253, NULL},
	{16, (BODY_INDEX)-1, 253, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_254},
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
	{28, (BODY_INDEX)-1, 253, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 253, NULL},
	{3877, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3878, 0, 318, NULL},
	{3880, (BODY_INDEX)-1, 248, NULL},
	{3881, (BODY_INDEX)-1, 251, NULL},
	{3879, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init254(void);
void Init254(void)
{
	IDSC(desc_254, 0, 253);
	IDSC(desc_254 + 1, 2, 253);
	IDSC(desc_254 + 32, 313, 253);
	IDSC(desc_254 + 36, 250, 253);
}


#ifdef __cplusplus
}
#endif
