/*
 * Code for class BILINEAR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi448.h"

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
EIF_BOOLEAN F255_2507 (EIF_REFERENCE Current)
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
void F255_2510 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2248[dtype-517])(Current)) {
		tb1 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2224[dtype-278])(Current);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[dtype-395])(Current);
	}
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2250[dtype-254])(Current, tr1);
	RTLE;
}

void EIF_Minit448 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
