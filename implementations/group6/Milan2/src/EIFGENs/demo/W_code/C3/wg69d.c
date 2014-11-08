/*
 * Class WGI_NINO_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_69 [] = {414,68,0xFFFF};
static EIF_TYPE_INDEX gen_type1_69 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_69 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_69 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_69 [] = {449,0xFFF9,1,289,67,0xFFFF};
static EIF_TYPE_INDEX gen_type5_69 [] = {449,0xFFF9,1,289,67,0xFFFF};


static struct desc_info desc_69[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_69},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
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
	{20, (BODY_INDEX)-1, 31, NULL},
	{21, (BODY_INDEX)-1, 310, NULL},
	{22, (BODY_INDEX)-1, 310, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 32, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 68, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 68, NULL},
	{1137, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1138, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1141, 0, 51, NULL},
	{1142, 8, 4, NULL},
	{1143, (BODY_INDEX)-1, 5, NULL},
	{1144, 16, 306, NULL},
	{1145, 40, 297, NULL},
	{1146, 44, 341, NULL},
	{1147, 24, 449, gen_type4_69},
	{1148, 32, 449, gen_type5_69},
	{1149, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1150, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1151, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1135, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1136, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1139, (BODY_INDEX)-1, 310, NULL},
	{1140, (BODY_INDEX)-1, 310, NULL},
};

extern void Init69(void);
void Init69(void)
{
	IDSC(desc_69, 0, 68);
	IDSC(desc_69 + 1, 2, 68);
	IDSC(desc_69 + 32, 384, 68);
	IDSC(desc_69 + 47, 243, 68);
}


#ifdef __cplusplus
}
#endif
