/*
 * Class RT_EXTENSION_GENERAL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_123 [] = {414,122,0xFFFF};
static EIF_TYPE_INDEX gen_type1_123 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_123 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_123 [] = {0,0xFFFF};


static struct desc_info desc_123[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_123},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 122, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_123},
	{14, (BODY_INDEX)-1, 0, gen_type2_123},
	{15, (BODY_INDEX)-1, 122, NULL},
	{16, (BODY_INDEX)-1, 122, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_123},
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
	{28, (BODY_INDEX)-1, 122, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 122, NULL},
	{1657, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1658, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1659, (BODY_INDEX)-1, 341, NULL},
	{1660, (BODY_INDEX)-1, 341, NULL},
	{1661, (BODY_INDEX)-1, 341, NULL},
	{1662, (BODY_INDEX)-1, 341, NULL},
	{1663, (BODY_INDEX)-1, 341, NULL},
	{1664, (BODY_INDEX)-1, 341, NULL},
	{1665, (BODY_INDEX)-1, 310, NULL},
	{1666, (BODY_INDEX)-1, 297, NULL},
	{1667, (BODY_INDEX)-1, 297, NULL},
	{1668, (BODY_INDEX)-1, 297, NULL},
	{1669, (BODY_INDEX)-1, 0, NULL},
	{1670, (BODY_INDEX)-1, 0, NULL},
};

extern void Init123(void);
void Init123(void)
{
	IDSC(desc_123, 0, 122);
	IDSC(desc_123 + 1, 2, 122);
	IDSC(desc_123 + 32, 208, 122);
	IDSC(desc_123 + 34, 85, 122);
}


#ifdef __cplusplus
}
#endif
