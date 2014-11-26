/*
 * Class RT_DBG_COMMON
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_124 [] = {418,123,0xFFFF};
static EIF_TYPE_INDEX gen_type1_124 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_124 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_124 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_124 [] = {439,390,0xFFFF};


static struct desc_info desc_124[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_124},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 123, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_124},
	{14, (BODY_INDEX)-1, 0, gen_type2_124},
	{15, (BODY_INDEX)-1, 123, NULL},
	{16, (BODY_INDEX)-1, 123, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_124},
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
	{28, (BODY_INDEX)-1, 123, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 123, NULL},
	{1696, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1697, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1734, (BODY_INDEX)-1, 439, gen_type4_124},
};

extern void Init124(void);
void Init124(void)
{
	IDSC(desc_124, 0, 123);
	IDSC(desc_124 + 1, 2, 123);
	IDSC(desc_124 + 32, 216, 123);
	IDSC(desc_124 + 34, 214, 123);
}


#ifdef __cplusplus
}
#endif
