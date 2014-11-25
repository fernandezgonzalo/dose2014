/*
 * Class WSF_ROUTING_HANDLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_201 [] = {418,200,0xFFFF};
static EIF_TYPE_INDEX gen_type1_201 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_201 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_201 [] = {0,0xFFFF};


static struct desc_info desc_201[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_201},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 200, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_201},
	{14, (BODY_INDEX)-1, 0, gen_type2_201},
	{15, (BODY_INDEX)-1, 200, NULL},
	{16, (BODY_INDEX)-1, 200, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_201},
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
	{28, (BODY_INDEX)-1, 200, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 200, NULL},
	{3085, (BODY_INDEX)-1, 301, NULL},
	{3086, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3087, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3088, 0, 280, NULL},
	{3089, (BODY_INDEX)-1, 351, NULL},
	{3090, (BODY_INDEX)-1, 310, NULL},
	{3091, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3092, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init201(void);
void Init201(void)
{
	IDSC(desc_201, 0, 200);
	IDSC(desc_201 + 1, 2, 200);
	IDSC(desc_201 + 32, 239, 200);
	IDSC(desc_201 + 34, 308, 200);
}


#ifdef __cplusplus
}
#endif
