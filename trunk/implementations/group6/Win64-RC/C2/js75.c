/*
 * Code for class JSON_READER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js75.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_READER}.make */
void F87_1231 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F87_1232(Current, arg1);
}

/* {JSON_READER}.set_representation */
void F87_1232 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F741_5922(RTCV(arg1));
	F741_5923(RTCV(arg1));
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current + O1184[Dtype(Current)-86]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {JSON_READER}.next */
void F87_1234 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O1184[dtype-86]))++;
}

/* {JSON_READER}.previous */
void F87_1235 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O1184[dtype-86]))--;
}

/* {JSON_READER}.skip_white_spaces */
void F87_1236 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F87_1241(Current);
	for (;;) {
		tb1 = '\01';
		if (!((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) ' ') && (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\012')) && (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\015')) && (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\000')) && (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\011')))) {
			tb1 = (EIF_BOOLEAN) !F87_1238(Current);
		}
		if (tb1) break;
		F87_1234(Current);
		loc1 = F87_1241(Current);
	}
	RTLE;
}

/* {JSON_READER}.json_substring */
EIF_REFERENCE F87_1237 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F741_5984(RTCV(tr1), arg1, arg2);
	RTLE;
	return Result;
}

/* {JSON_READER}.has_next */
EIF_BOOLEAN F87_1238 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1184[Dtype(Current)-86]);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ti4_2);
	RTLE;
	return Result;
}

/* {JSON_READER}.representation */
EIF_REFERENCE F87_1240 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {JSON_READER}.actual */
EIF_CHARACTER_8 F87_1241 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O1184[dtype-86]) > ti4_1)) {
		RTLE;
		return (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = F741_5903(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O1184[dtype-86]));
	}
	RTLE;
	return Result;
}

void EIF_Minit75 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
