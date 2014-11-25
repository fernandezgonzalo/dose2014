/*
 * Class STRING_8_SEARCHER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_128 [] = {418,127,0xFFFF};
static EIF_TYPE_INDEX gen_type1_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_128 [] = {487,351,0xFFFF};
static EIF_TYPE_INDEX gen_type5_128 [] = {470,351,0xFFFF};
static EIF_TYPE_INDEX gen_type6_128 [] = {416,470,351,0xFFFF};


static struct desc_info desc_128[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_128},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 127, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_128},
	{14, (BODY_INDEX)-1, 0, gen_type2_128},
	{15, (BODY_INDEX)-1, 127, NULL},
	{16, (BODY_INDEX)-1, 127, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_128},
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
	{28, (BODY_INDEX)-1, 127, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 127, NULL},
	{1742, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1743, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1752, (BODY_INDEX)-1, 310, NULL},
	{1753, (BODY_INDEX)-1, 351, NULL},
	{1744, (BODY_INDEX)-1, 351, NULL},
	{1754, (BODY_INDEX)-1, 351, NULL},
	{1745, (BODY_INDEX)-1, 487, gen_type4_128},
	{1755, (BODY_INDEX)-1, 351, NULL},
	{1746, 0, 470, gen_type5_128},
	{1747, 8, 416, gen_type6_128},
	{1739, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1740, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init128(void);
void Init128(void)
{
	IDSC(desc_128, 0, 127);
	IDSC(desc_128 + 1, 2, 127);
	IDSC(desc_128 + 32, 205, 127);
}


#ifdef __cplusplus
}
#endif
