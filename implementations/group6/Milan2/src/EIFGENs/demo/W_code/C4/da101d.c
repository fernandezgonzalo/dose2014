/*
 * Class DATE_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_101 [] = {418,100,0xFFFF};
static EIF_TYPE_INDEX gen_type1_101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_101 [] = {429,314,0xFFFF};
static EIF_TYPE_INDEX gen_type5_101 [] = {429,314,0xFFFF};
static EIF_TYPE_INDEX gen_type6_101 [] = {429,314,0xFFFF};
static EIF_TYPE_INDEX gen_type7_101 [] = {429,314,0xFFFF};
static EIF_TYPE_INDEX gen_type8_101 [] = {477,351,0xFFFF};


static struct desc_info desc_101[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_101},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 100, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_101},
	{14, (BODY_INDEX)-1, 0, gen_type2_101},
	{15, (BODY_INDEX)-1, 100, NULL},
	{16, (BODY_INDEX)-1, 100, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_101},
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
	{28, (BODY_INDEX)-1, 100, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 100, NULL},
	{1536, (BODY_INDEX)-1, 351, NULL},
	{1537, (BODY_INDEX)-1, 351, NULL},
	{1538, (BODY_INDEX)-1, 38, NULL},
	{1539, (BODY_INDEX)-1, 314, NULL},
	{1565, (BODY_INDEX)-1, 351, NULL},
	{1566, (BODY_INDEX)-1, 351, NULL},
	{1567, (BODY_INDEX)-1, 351, NULL},
	{1568, (BODY_INDEX)-1, 351, NULL},
	{1569, (BODY_INDEX)-1, 351, NULL},
	{1570, (BODY_INDEX)-1, 351, NULL},
	{1571, (BODY_INDEX)-1, 314, NULL},
	{1572, (BODY_INDEX)-1, 429, gen_type4_101},
	{1573, (BODY_INDEX)-1, 429, gen_type5_101},
	{1574, (BODY_INDEX)-1, 429, gen_type6_101},
	{1575, (BODY_INDEX)-1, 429, gen_type7_101},
	{1576, (BODY_INDEX)-1, 301, NULL},
	{1577, (BODY_INDEX)-1, 301, NULL},
	{1578, (BODY_INDEX)-1, 477, gen_type8_101},
};

extern void Init101(void);
void Init101(void)
{
	IDSC(desc_101, 0, 100);
	IDSC(desc_101 + 1, 2, 100);
	IDSC(desc_101 + 32, 405, 100);
	IDSC(desc_101 + 36, 349, 100);
}


#ifdef __cplusplus
}
#endif
