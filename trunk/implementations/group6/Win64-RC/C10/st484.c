/*
 * Code for class STRING_TABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st484.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TABLE}.make_caseless */
void F585_4761 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O4050[dtype-584]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3945[dtype-578])(Current, arg1);
	RTLE;
}

/* {STRING_TABLE}.hash_code_of */
EIF_INTEGER_32 F585_4763 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O4050[Dtype(Current)-584])) {
		ti4_1 = F733_5564(RTCV(arg1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F733_5563(RTCV(arg1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}/* NOTREACHED */
	
}

/* {STRING_TABLE}.same_keys */
EIF_BOOLEAN F585_4765 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O4050[Dtype(Current)-584])) {
		tb1 = F733_5596(RTCV(arg1), arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		tb1 = F733_5599(RTCV(arg1), arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}/* NOTREACHED */
	
}

/* {STRING_TABLE}.is_equal */
EIF_BOOLEAN F585_4766 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg1) + O4050[Dtype(arg1)-584]);
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O4050[Dtype(Current)-584]) == tb1)) {
		RTLE;
		return (EIF_BOOLEAN) F579_4654(Current, arg1);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {STRING_TABLE}.empty_duplicate */
EIF_REFERENCE F585_4767 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O4050[dtype-584])) {
		tr1 = RTLNSMART(dftype);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4048[Dtype(tr1)-584])(RTCV(tr1), arg1);
		Result = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNSMART(dftype);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3945[Dtype(tr1)-578])(RTCV(tr1), arg1);
		Result = (EIF_REFERENCE) tr1;
	}
	if (*(EIF_BOOLEAN *)(Current + O2226[dtype-218])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2228[Dtype(Result)-218])(RTCV(Result));
	}
	RTLE;
	return Result;
}

void EIF_Minit484 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
