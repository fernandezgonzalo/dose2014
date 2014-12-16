/*
 * Code for class BILINEAR [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi821.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F264_2507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F646_4920(Current)) {
		Result = F646_4919(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F264_2510 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F646_4920(Current)) {
		tb1 = (EIF_BOOLEAN) !F290_2518(Current);
	}
	if (tb1) {
		F675_5040(Current);
	}
	F253_2493(Current, arg1);
	RTLE;
}

void EIF_Minit821 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
