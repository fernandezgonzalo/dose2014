/*
 * Class DATE_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_100 [] = {418,99,0xFFFF};
static EIF_TYPE_INDEX gen_type1_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_100 [] = {429,314,0xFFFF};
static EIF_TYPE_INDEX gen_type5_100 [] = {429,314,0xFFFF};
static EIF_TYPE_INDEX gen_type6_100 [] = {429,314,0xFFFF};
static EIF_TYPE_INDEX gen_type7_100 [] = {429,314,0xFFFF};
static EIF_TYPE_INDEX gen_type8_100 [] = {528,348,0xFFFF};


static struct desc_info desc_100[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_100},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
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
	{20, (BODY_INDEX)-1, 32, NULL},
	{21, (BODY_INDEX)-1, 314, NULL},
	{22, (BODY_INDEX)-1, 314, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 31, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 99, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 99, NULL},
	{1532, (BODY_INDEX)-1, 348, NULL},
	{1533, (BODY_INDEX)-1, 348, NULL},
	{1534, (BODY_INDEX)-1, 37, NULL},
	{1535, (BODY_INDEX)-1, 314, NULL},
	{1574, (BODY_INDEX)-1, 348, NULL},
	{1561, (BODY_INDEX)-1, 348, NULL},
	{1562, (BODY_INDEX)-1, 348, NULL},
	{1563, (BODY_INDEX)-1, 348, NULL},
	{1564, (BODY_INDEX)-1, 348, NULL},
	{1565, (BODY_INDEX)-1, 348, NULL},
	{1566, (BODY_INDEX)-1, 314, NULL},
	{1567, (BODY_INDEX)-1, 429, gen_type4_100},
	{1568, (BODY_INDEX)-1, 429, gen_type5_100},
	{1569, (BODY_INDEX)-1, 429, gen_type6_100},
	{1570, (BODY_INDEX)-1, 429, gen_type7_100},
	{1571, (BODY_INDEX)-1, 301, NULL},
	{1572, (BODY_INDEX)-1, 301, NULL},
	{1573, (BODY_INDEX)-1, 528, gen_type8_100},
};

extern void Init100(void);
void Init100(void)
{
	IDSC(desc_100, 0, 99);
	IDSC(desc_100 + 1, 2, 99);
	IDSC(desc_100 + 32, 411, 99);
	IDSC(desc_100 + 36, 354, 99);
}


#ifdef __cplusplus
}
#endif
