/*
 * Class WSF_ROUTER_SESSION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_25 [] = {418,24,0xFFFF};
static EIF_TYPE_INDEX gen_type1_25 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_25 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_25 [] = {0,0xFFFF};


static struct desc_info desc_25[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_25},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 24, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_25},
	{14, (BODY_INDEX)-1, 0, gen_type2_25},
	{15, (BODY_INDEX)-1, 24, NULL},
	{16, (BODY_INDEX)-1, 24, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_25},
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
	{28, (BODY_INDEX)-1, 24, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 24, NULL},
	{405, (BODY_INDEX)-1, 301, NULL},
	{406, 0, 199, NULL},
	{407, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init25(void);
void Init25(void)
{
	IDSC(desc_25, 0, 24);
	IDSC(desc_25 + 1, 2, 24);
	IDSC(desc_25 + 32, 174, 24);
}


#ifdef __cplusplus
}
#endif
