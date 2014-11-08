/*
 * Class DATE_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_100 [] = {414,99,0xFFFF};
static EIF_TYPE_INDEX gen_type1_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_100 [] = {425,310,0xFFFF};
static EIF_TYPE_INDEX gen_type5_100 [] = {425,310,0xFFFF};
static EIF_TYPE_INDEX gen_type6_100 [] = {425,310,0xFFFF};
static EIF_TYPE_INDEX gen_type7_100 [] = {425,310,0xFFFF};
static EIF_TYPE_INDEX gen_type8_100 [] = {499,341,0xFFFF};


static struct desc_info desc_100[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_100},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 99, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_100},
	{14, (BODY_INDEX)-1, 0, gen_type2_100},
	{15, (BODY_INDEX)-1, 99, NULL},
	{16, (BODY_INDEX)-1, 99, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_100},
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
	{28, (BODY_INDEX)-1, 99, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 99, NULL},
	{1489, (BODY_INDEX)-1, 341, NULL},
	{1490, (BODY_INDEX)-1, 341, NULL},
	{1491, (BODY_INDEX)-1, 37, NULL},
	{1492, (BODY_INDEX)-1, 310, NULL},
	{1520, (BODY_INDEX)-1, 341, NULL},
	{1521, (BODY_INDEX)-1, 341, NULL},
	{1522, (BODY_INDEX)-1, 341, NULL},
	{1523, (BODY_INDEX)-1, 341, NULL},
	{1524, (BODY_INDEX)-1, 341, NULL},
	{1525, (BODY_INDEX)-1, 341, NULL},
	{1526, (BODY_INDEX)-1, 310, NULL},
	{1527, (BODY_INDEX)-1, 425, gen_type4_100},
	{1528, (BODY_INDEX)-1, 425, gen_type5_100},
	{1529, (BODY_INDEX)-1, 425, gen_type6_100},
	{1530, (BODY_INDEX)-1, 425, gen_type7_100},
	{1531, (BODY_INDEX)-1, 297, NULL},
	{1518, (BODY_INDEX)-1, 297, NULL},
	{1519, (BODY_INDEX)-1, 499, gen_type8_100},
};

extern void Init100(void);
void Init100(void)
{
	IDSC(desc_100, 0, 99);
	IDSC(desc_100 + 1, 2, 99);
	IDSC(desc_100 + 32, 411, 99);
	IDSC(desc_100 + 36, 369, 99);
}


#ifdef __cplusplus
}
#endif
