/*
 * Class WSF_TO_WGI_SERVICE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_53 [] = {414,52,0xFFFF};
static EIF_TYPE_INDEX gen_type1_53 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_53 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_53 [] = {0,0xFFFF};


static struct desc_info desc_53[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_53},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 52, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_53},
	{14, (BODY_INDEX)-1, 0, gen_type2_53},
	{15, (BODY_INDEX)-1, 52, NULL},
	{16, (BODY_INDEX)-1, 52, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_53},
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
	{28, (BODY_INDEX)-1, 52, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 52, NULL},
	{910, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{911, 0, 107, NULL},
	{912, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init53(void);
void Init53(void)
{
	IDSC(desc_53, 0, 52);
	IDSC(desc_53 + 1, 2, 52);
	IDSC(desc_53 + 32, 386, 52);
	IDSC(desc_53 + 34, 387, 52);
}


#ifdef __cplusplus
}
#endif
