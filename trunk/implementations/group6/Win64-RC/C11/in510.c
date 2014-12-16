/*
 * Code for class INTERVAL [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in510.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTERVAL}.start_bound */
EIF_REFERENCE F440_2857 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {INTERVAL}.end_bound */
EIF_REFERENCE F440_2858 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {INTERVAL}.is_equal */
EIF_BOOLEAN F440_2860 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(tr1)-0])(RTCV(tr1), tr2);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(tr1)-0])(RTCV(tr1), tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTERVAL}.is_less */
EIF_BOOLEAN F440_2862 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2527[Dtype(tr1)-439])(RTCV(tr1), tr2);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2527[Dtype(tr1)-439])(RTCV(tr1), tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTERVAL}.out */
EIF_REFERENCE F440_2885 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = RTMS_EX_H("[",1,91);
	Result = (EIF_REFERENCE) Result;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr1)-0])(RTCV(tr1));
	F741_5938(RTCV(Result), tr1);
	tr1 = RTMS_EX_H(" - ",3,2108704);
	F741_5938(RTCV(Result), tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr1)-0])(RTCV(tr1));
	F741_5938(RTCV(Result), tr1);
	F741_5953(RTCV(Result), (EIF_CHARACTER_8) ']');
	RTLE;
	return Result;
}

void EIF_Minit510 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
