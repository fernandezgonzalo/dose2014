/*
 * Code for class ABSOLUTE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ab230.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ABSOLUTE}.is_less */
EIF_BOOLEAN F446_2992 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2618[Dtype(Current)-932])(Current);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2618[Dtype(arg1)-932])(RTCV(arg1));
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2527[Dtype(tr1)-439])(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

void EIF_Minit230 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
