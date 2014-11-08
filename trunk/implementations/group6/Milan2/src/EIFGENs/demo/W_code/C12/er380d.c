/*
 * Class ERROR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_380 [] = {414,379,0xFFFF};
static EIF_TYPE_INDEX gen_type1_380 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_380 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_380 [] = {0,0xFFFF};


static struct desc_info desc_380[] = {
	{(BODY_INDEX) 12426, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_380},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 379, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_380},
	{14, (BODY_INDEX)-1, 0, gen_type2_380},
	{15, (BODY_INDEX)-1, 379, NULL},
	{16, (BODY_INDEX)-1, 379, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_380},
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
	{28, (BODY_INDEX)-1, 379, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 379, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 341, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 306, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 304, NULL},
	{12422, 0, 379, NULL},
	{12423, (BODY_INDEX)-1, 309, NULL},
	{12425, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12424, (BODY_INDEX)-1, 309, NULL},
};

extern void Init380(void);
void Init380(void)
{
	IDSC(desc_380, 0, 379);
	IDSC(desc_380 + 1, 2, 379);
	IDSC(desc_380 + 32, 340, 379);
	IDSC(desc_380 + 39, 80, 379);
}


#ifdef __cplusplus
}
#endif
