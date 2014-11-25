/*
 * Class EXCEPTION_MANAGER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_82 [] = {418,81,0xFFFF};
static EIF_TYPE_INDEX gen_type1_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_82 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_82 [] = {418,143,0xFFFF};


static struct desc_info desc_82[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_82},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 81, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_82},
	{14, (BODY_INDEX)-1, 0, gen_type2_82},
	{15, (BODY_INDEX)-1, 81, NULL},
	{16, (BODY_INDEX)-1, 81, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_82},
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
	{28, (BODY_INDEX)-1, 81, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 81, NULL},
	{1328, (BODY_INDEX)-1, 143, NULL},
	{1329, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1319, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1320, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1321, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1322, (BODY_INDEX)-1, 301, NULL},
	{1323, (BODY_INDEX)-1, 301, NULL},
	{1324, (BODY_INDEX)-1, 301, NULL},
	{1325, (BODY_INDEX)-1, 301, NULL},
	{1326, (BODY_INDEX)-1, 418, gen_type4_82},
	{1327, (BODY_INDEX)-1, 143, NULL},
};

extern void Init82(void);
void Init82(void)
{
	IDSC(desc_82, 0, 81);
	IDSC(desc_82 + 1, 2, 81);
	IDSC(desc_82 + 32, 123, 81);
}


#ifdef __cplusplus
}
#endif
