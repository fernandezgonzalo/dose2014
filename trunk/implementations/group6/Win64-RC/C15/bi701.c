/*
 * Code for class BILINEAR [REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi701.h"

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
EIF_BOOLEAN F261_2507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F643_4920(Current)) {
		Result = F643_4919(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F261_2510 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F643_4920(Current)) {
		tb1 = (EIF_BOOLEAN) !F287_2518(Current);
	}
	if (tb1) {
		F672_5040(Current);
	}
	F250_2493(Current, arg1);
	RTLE;
}

void EIF_Minit701 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
