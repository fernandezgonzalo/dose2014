/*
 * Class ERROR_GROUP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_382 [] = {414,381,0xFFFF};
static EIF_TYPE_INDEX gen_type1_382 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_382 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_382 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_382 [] = {444,379,0xFFFF};


static struct desc_info desc_382[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_382},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 381, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_382},
	{14, (BODY_INDEX)-1, 0, gen_type2_382},
	{15, (BODY_INDEX)-1, 381, NULL},
	{16, (BODY_INDEX)-1, 381, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_382},
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
	{28, (BODY_INDEX)-1, 381, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 381, NULL},
	{12424, (BODY_INDEX)-1, 309, NULL},
	{12433, (BODY_INDEX)-1, 341, NULL},
	{12434, 16, 310, NULL},
	{12435, (BODY_INDEX)-1, 309, NULL},
	{12422, 0, 379, NULL},
	{12423, (BODY_INDEX)-1, 309, NULL},
	{12425, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12437, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12432, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12436, 8, 444, gen_type4_382},
	{12434, 16, 310, NULL},
};

extern void Init382(void);
void Init382(void)
{
	IDSC(desc_382, 0, 381);
	IDSC(desc_382 + 1, 2, 381);
	IDSC(desc_382 + 32, 80, 381);
	IDSC(desc_382 + 33, 340, 381);
	IDSC(desc_382 + 40, 338, 381);
}


#ifdef __cplusplus
}
#endif
