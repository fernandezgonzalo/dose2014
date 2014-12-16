/*
 * Code for class WSF_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws334.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_VALUE}.url_decoded_string */
EIF_REFERENCE F817_6444 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(2718,F429_2718,(Current));
	F126_1646(RTCV(tr1), arg1, Result);
	RTLE;
	return Result;
}

void EIF_Minit334 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
