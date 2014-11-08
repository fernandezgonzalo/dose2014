/*
 * Class SYSTEM_STRING_FACTORY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_23 [] = {414,22,0xFFFF};
static EIF_TYPE_INDEX gen_type1_23 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_23 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_23 [] = {0,0xFFFF};


static struct desc_info desc_23[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_23},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
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
	{20, (BODY_INDEX)-1, 31, NULL},
	{21, (BODY_INDEX)-1, 310, NULL},
	{22, (BODY_INDEX)-1, 310, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 32, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 22, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 22, NULL},
	{265, (BODY_INDEX)-1, 28, NULL},
	{266, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{267, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{268, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{269, (BODY_INDEX)-1, 341, NULL},
};

extern void Init23(void);
void Init23(void)
{
	IDSC(desc_23, 0, 22);
	IDSC(desc_23 + 1, 2, 22);
	IDSC(desc_23 + 32, 196, 22);
}


#ifdef __cplusplus
}
#endif
