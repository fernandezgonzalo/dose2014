/*
 * Class WSF_VALUE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_333 [] = {418,332,0xFFFF};
static EIF_TYPE_INDEX gen_type1_333 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_333 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_333 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_333 [] = {308,0xFFFF};


static struct desc_info desc_333[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_333},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 332, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_333},
	{14, (BODY_INDEX)-1, 0, gen_type2_333},
	{15, (BODY_INDEX)-1, 332, NULL},
	{16, (BODY_INDEX)-1, 332, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_333},
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
	{28, (BODY_INDEX)-1, 332, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 332, NULL},
	{3150, (BODY_INDEX)-1, 104, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 308, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 310, NULL},
	{11055, (BODY_INDEX)-1, 308, gen_type4_333},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 301, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 301, NULL},
	{11049, (BODY_INDEX)-1, 335, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 313, NULL},
	{11050, (BODY_INDEX)-1, 301, NULL},
	{11051, (BODY_INDEX)-1, 301, NULL},
	{11053, (BODY_INDEX)-1, 314, NULL},
	{11054, (BODY_INDEX)-1, 313, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11052, (BODY_INDEX)-1, 313, NULL},
};

extern void Init333(void);
void Init333(void)
{
	IDSC(desc_333, 0, 332);
	IDSC(desc_333 + 1, 2, 332);
	IDSC(desc_333 + 32, 155, 332);
	IDSC(desc_333 + 33, 246, 332);
	IDSC(desc_333 + 46, 85, 332);
}


#ifdef __cplusplus
}
#endif
