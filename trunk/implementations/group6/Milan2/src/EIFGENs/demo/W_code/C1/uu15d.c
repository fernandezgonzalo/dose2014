/*
 * Class UUID_GENERATOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_15 [] = {414,14,0xFFFF};
static EIF_TYPE_INDEX gen_type1_15 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_15 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_15 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_15 [] = {920,341,0xFFFF};


static struct desc_info desc_15[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_15},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 14, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_15},
	{14, (BODY_INDEX)-1, 0, gen_type2_15},
	{15, (BODY_INDEX)-1, 14, NULL},
	{16, (BODY_INDEX)-1, 14, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_15},
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
	{28, (BODY_INDEX)-1, 14, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 14, NULL},
	{183, (BODY_INDEX)-1, 288, NULL},
	{184, (BODY_INDEX)-1, 359, NULL},
	{185, (BODY_INDEX)-1, 195, NULL},
	{186, (BODY_INDEX)-1, 920, gen_type4_15},
	{187, (BODY_INDEX)-1, 341, NULL},
};

extern void Init15(void);
void Init15(void)
{
	IDSC(desc_15, 0, 14);
	IDSC(desc_15 + 1, 2, 14);
	IDSC(desc_15 + 32, 297, 14);
}


#ifdef __cplusplus
}
#endif