/*
 * Class DEBUG_OUTPUT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_312 [] = {414,311,0xFFFF};
static EIF_TYPE_INDEX gen_type1_312 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_312 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_312 [] = {0,0xFFFF};


static struct desc_info desc_312[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_312},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 311, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_312},
	{14, (BODY_INDEX)-1, 0, gen_type2_312},
	{15, (BODY_INDEX)-1, 311, NULL},
	{16, (BODY_INDEX)-1, 311, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_312},
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
	{28, (BODY_INDEX)-1, 311, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 311, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 302, NULL},
};

extern void Init312(void);
void Init312(void)
{
	IDSC(desc_312, 0, 311);
	IDSC(desc_312 + 1, 2, 311);
	IDSC(desc_312 + 32, 80, 311);
}


#ifdef __cplusplus
}
#endif
