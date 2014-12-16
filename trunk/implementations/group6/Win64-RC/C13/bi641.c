/*
 * Code for class BILINEAR [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi641.h"

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
EIF_BOOLEAN F259_2507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F641_4920(Current)) {
		Result = F641_4919(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F259_2510 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F641_4920(Current)) {
		tb1 = (EIF_BOOLEAN) !F285_2518(Current);
	}
	if (tb1) {
		F670_5040(Current);
	}
	F249_2493(Current, arg1);
	RTLE;
}

void EIF_Minit641 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
