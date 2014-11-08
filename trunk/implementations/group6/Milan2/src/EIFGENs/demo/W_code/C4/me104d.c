/*
 * Class MEMORY_STRUCTURE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_104 [] = {414,103,0xFFFF};
static EIF_TYPE_INDEX gen_type1_104 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_104 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_104 [] = {0,0xFFFF};


static struct desc_info desc_104[] = {
	{(BODY_INDEX) 1549, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_104},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 103, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_104},
	{14, (BODY_INDEX)-1, 0, gen_type2_104},
	{15, (BODY_INDEX)-1, 103, NULL},
	{16, (BODY_INDEX)-1, 103, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_104},
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
	{28, (BODY_INDEX)-1, 103, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 103, NULL},
	{1544, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1545, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1546, 8, 297, NULL},
	{1547, (BODY_INDEX)-1, 300, NULL},
	{1548, (BODY_INDEX)-1, 297, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 341, NULL},
	{1550, 16, 300, NULL},
	{1551, 0, 257, NULL},
};

extern void Init104(void);
void Init104(void)
{
	IDSC(desc_104, 0, 103);
	IDSC(desc_104 + 1, 2, 103);
	IDSC(desc_104 + 32, 406, 103);
}


#ifdef __cplusplus
}
#endif
