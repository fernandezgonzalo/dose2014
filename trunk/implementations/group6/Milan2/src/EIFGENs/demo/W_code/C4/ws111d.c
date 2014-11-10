/*
 * Class WSF_MIME_HANDLER_HELPER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_111 [] = {418,110,0xFFFF};
static EIF_TYPE_INDEX gen_type1_111 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_111 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_111 [] = {0,0xFFFF};


static struct desc_info desc_111[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_111},
	{2, (BODY_INDEX)-1, 295, NULL},
	{3, (BODY_INDEX)-1, 295, NULL},
	{4, (BODY_INDEX)-1, 295, NULL},
	{5, (BODY_INDEX)-1, 295, NULL},
	{6, (BODY_INDEX)-1, 295, NULL},
	{7, (BODY_INDEX)-1, 295, NULL},
	{8, (BODY_INDEX)-1, 295, NULL},
	{9, (BODY_INDEX)-1, 295, NULL},
	{10, (BODY_INDEX)-1, 110, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_111},
	{14, (BODY_INDEX)-1, 0, gen_type2_111},
	{15, (BODY_INDEX)-1, 110, NULL},
	{16, (BODY_INDEX)-1, 110, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_111},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 32, NULL},
	{21, (BODY_INDEX)-1, 314, NULL},
	{22, (BODY_INDEX)-1, 314, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 33, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 110, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 110, NULL},
	{1627, (BODY_INDEX)-1, 314, NULL},
	{1628, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1629, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1630, (BODY_INDEX)-1, 335, NULL},
	{1631, (BODY_INDEX)-1, 238, NULL},
};

extern void Init111(void);
void Init111(void)
{
	IDSC(desc_111, 0, 110);
	IDSC(desc_111 + 1, 2, 110);
	IDSC(desc_111 + 32, 345, 110);
}


#ifdef __cplusplus
}
#endif
