/*
 * Class WSF_FS_SESSION_MANAGER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_80 [] = {418,79,0xFFFF};
static EIF_TYPE_INDEX gen_type1_80 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_80 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_80 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_80 [] = {287,0xFFFF};


static struct desc_info desc_80[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_80},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 79, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_80},
	{14, (BODY_INDEX)-1, 0, gen_type2_80},
	{15, (BODY_INDEX)-1, 79, NULL},
	{16, (BODY_INDEX)-1, 79, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_80},
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
	{28, (BODY_INDEX)-1, 79, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 79, NULL},
	{1304, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1305, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1306, 0, 320, NULL},
	{1311, (BODY_INDEX)-1, 287, gen_type4_80},
	{1312, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1313, (BODY_INDEX)-1, 301, NULL},
	{1314, (BODY_INDEX)-1, 320, NULL},
	{1307, (BODY_INDEX)-1, 301, NULL},
	{1308, (BODY_INDEX)-1, 287, NULL},
	{1309, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1310, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init80(void);
void Init80(void)
{
	IDSC(desc_80, 0, 79);
	IDSC(desc_80 + 1, 2, 79);
	IDSC(desc_80 + 32, 39, 79);
	IDSC(desc_80 + 39, 129, 79);
}


#ifdef __cplusplus
}
#endif
