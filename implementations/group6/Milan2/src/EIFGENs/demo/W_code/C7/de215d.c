/*
 * Class DEMO_SESSION_CTRL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_215 [] = {414,214,0xFFFF};
static EIF_TYPE_INDEX gen_type1_215 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_215 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_215 [] = {0,0xFFFF};


static struct desc_info desc_215[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_215},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 214, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_215},
	{14, (BODY_INDEX)-1, 0, gen_type2_215},
	{15, (BODY_INDEX)-1, 214, NULL},
	{16, (BODY_INDEX)-1, 214, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_215},
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
	{28, (BODY_INDEX)-1, 214, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 214, NULL},
	{3110, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3111, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3112, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3113, 0, 33, NULL},
	{3114, 8, 79, NULL},
	{3115, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3116, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init215(void);
void Init215(void)
{
	IDSC(desc_215, 0, 214);
	IDSC(desc_215 + 1, 2, 214);
	IDSC(desc_215 + 32, 127, 214);
	IDSC(desc_215 + 34, 36, 214);
}


#ifdef __cplusplus
}
#endif
