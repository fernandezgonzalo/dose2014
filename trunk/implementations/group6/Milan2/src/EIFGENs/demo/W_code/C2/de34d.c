/*
 * Class DEMO_DB
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_34 [] = {414,33,0xFFFF};
static EIF_TYPE_INDEX gen_type1_34 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_34 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_34 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_34 [] = {0xFFF9,3,289,297,310,310,0xFFFF};


static struct desc_info desc_34[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_34},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 33, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_34},
	{14, (BODY_INDEX)-1, 0, gen_type2_34},
	{15, (BODY_INDEX)-1, 33, NULL},
	{16, (BODY_INDEX)-1, 33, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_34},
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
	{28, (BODY_INDEX)-1, 33, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 33, NULL},
	{711, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{712, (BODY_INDEX)-1, 297, NULL},
	{713, (BODY_INDEX)-1, 297, NULL},
	{714, (BODY_INDEX)-1, 370, NULL},
	{715, (BODY_INDEX)-1, 370, NULL},
	{716, (BODY_INDEX)-1, 370, NULL},
	{717, (BODY_INDEX)-1, 371, NULL},
	{718, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{719, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{720, (BODY_INDEX)-1, 289, gen_type4_34},
	{721, 0, 390, NULL},
	{722, 8, 392, NULL},
	{723, 16, 394, NULL},
	{724, 24, 393, NULL},
};

extern void Init34(void);
void Init34(void)
{
	IDSC(desc_34, 0, 33);
	IDSC(desc_34 + 1, 2, 33);
	IDSC(desc_34 + 32, 33, 33);
}


#ifdef __cplusplus
}
#endif
