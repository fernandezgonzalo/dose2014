/*
 * Class WGI_NINO_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_69 [] = {418,68,0xFFFF};
static EIF_TYPE_INDEX gen_type1_69 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_69 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_69 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_69 [] = {452,0xFFF9,1,293,67,0xFFFF};
static EIF_TYPE_INDEX gen_type5_69 [] = {452,0xFFF9,1,293,67,0xFFFF};


static struct desc_info desc_69[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_69},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 68, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_69},
	{14, (BODY_INDEX)-1, 0, gen_type2_69},
	{15, (BODY_INDEX)-1, 68, NULL},
	{16, (BODY_INDEX)-1, 68, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_69},
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
	{28, (BODY_INDEX)-1, 68, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 68, NULL},
	{1128, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1129, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1132, 0, 51, NULL},
	{1133, 8, 5, NULL},
	{1134, (BODY_INDEX)-1, 4, NULL},
	{1135, 16, 310, NULL},
	{1136, 40, 301, NULL},
	{1120, 44, 348, NULL},
	{1121, 24, 452, gen_type4_69},
	{1122, 32, 452, gen_type5_69},
	{1123, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1124, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1125, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1126, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1127, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1130, (BODY_INDEX)-1, 314, NULL},
	{1131, (BODY_INDEX)-1, 314, NULL},
};

extern void Init69(void);
void Init69(void)
{
	IDSC(desc_69, 0, 68);
	IDSC(desc_69 + 1, 2, 68);
	IDSC(desc_69 + 32, 388, 68);
	IDSC(desc_69 + 47, 247, 68);
}


#ifdef __cplusplus
}
#endif
