/*
 * Code for class BILINEAR [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi582.h"

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
EIF_BOOLEAN F258_2507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2248[dtype-517])(Current)) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2245[dtype-395])(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F258_2510 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2248[dtype-517])(Current)) {
		tb1 = (EIF_BOOLEAN) !F284_2518(Current);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[dtype-395])(Current);
	}
	F247_2493(Current, arg1);
	RTLE;
}

void EIF_Minit582 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
