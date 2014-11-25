/*
 * Class SYSTEM_STRING_FACTORY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_23 [] = {418,22,0xFFFF};
static EIF_TYPE_INDEX gen_type1_23 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_23 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_23 [] = {0,0xFFFF};


static struct desc_info desc_23[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_23},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 22, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_23},
	{14, (BODY_INDEX)-1, 0, gen_type2_23},
	{15, (BODY_INDEX)-1, 22, NULL},
	{16, (BODY_INDEX)-1, 22, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_23},
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
	{28, (BODY_INDEX)-1, 22, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 22, NULL},
	{316, (BODY_INDEX)-1, 29, NULL},
	{317, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{318, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{319, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{320, (BODY_INDEX)-1, 351, NULL},
};

extern void Init23(void);
void Init23(void)
{
	IDSC(desc_23, 0, 22);
	IDSC(desc_23 + 1, 2, 22);
	IDSC(desc_23 + 32, 203, 22);
}


#ifdef __cplusplus
}
#endif
