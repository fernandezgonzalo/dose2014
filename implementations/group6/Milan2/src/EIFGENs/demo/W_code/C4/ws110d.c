/*
 * Class WSF_DEFAULT_SERVICE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_110 [] = {418,109,0xFFFF};
static EIF_TYPE_INDEX gen_type1_110 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_110 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_110 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_110 [] = {55,0xFFFF};


static struct desc_info desc_110[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_110},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 109, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_110},
	{14, (BODY_INDEX)-1, 0, gen_type2_110},
	{15, (BODY_INDEX)-1, 109, NULL},
	{16, (BODY_INDEX)-1, 109, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_110},
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
	{28, (BODY_INDEX)-1, 109, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 109, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1618, (BODY_INDEX)-1, 51, NULL},
	{1623, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1624, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1625, 0, 284, NULL},
	{1627, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1626, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 55, gen_type4_110},
};

extern void Init110(void);
void Init110(void)
{
	IDSC(desc_110, 0, 109);
	IDSC(desc_110 + 1, 2, 109);
	IDSC(desc_110 + 32, 303, 109);
	IDSC(desc_110 + 34, 306, 109);
	IDSC(desc_110 + 39, 169, 109);
}


#ifdef __cplusplus
}
#endif
