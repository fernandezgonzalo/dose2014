/*
 * Code for class JSON_ARRAY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js376.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_ARRAY}.make_array */
void F859_7444 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {665,822,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {JSON_ARRAY}.i_th */
EIF_REFERENCE F859_7445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	Result = F666_5013(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {JSON_ARRAY}.representation */
EIF_REFERENCE F859_7446 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = RTMS_EX_H("[",1,91);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > F859_7449(Current))) break;
		tr1 = F859_7445(Current, loc1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5336[Dtype(tr1)-823])(RTCV(tr1));
		F741_5938(RTCV(Result), tr1);
		loc1++;
		if ((EIF_BOOLEAN) (loc1 <= F859_7449(Current))) {
			F741_5952(RTCV(Result), (EIF_CHARACTER_8) ',');
		}
	}
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) ']');
	RTLE;
	return Result;
}

/* {JSON_ARRAY}.new_cursor */
EIF_REFERENCE F859_7448 (EIF_REFERENCE Current)
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
	Result = F567_4631(RTCV(tr1));
	RTLE;
	return Result;
}

/* {JSON_ARRAY}.count */
EIF_INTEGER_32 F859_7449 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F666_5029(RTCV(tr1));
	RTLE;
	return Result;
}

/* {JSON_ARRAY}.add */
void F859_7452 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), arg1);
	RTLE;
}

/* {JSON_ARRAY}.extend */
void F859_7453 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), arg1);
	RTLE;
}

/* {JSON_ARRAY}.hash_code */
EIF_INTEGER_32 F859_7456 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F666_5038(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = F666_5012(RTCV(tr1));
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4239[Dtype(tr1)-683])(RTCV(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F613_4887(RTCV(tr1));
		if (tb1) break;
		ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F666_5012(RTCV(tr1));
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4239[Dtype(tr1)-683])(RTCV(tr1));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
		tr1 = *(EIF_REFERENCE *)(Current);
		F666_5040(RTCV(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F666_5029(RTCV(tr1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result % ti4_1);
	RTLE;
	return Result;
}

/* {JSON_ARRAY}.array_representation */
EIF_REFERENCE F859_7457 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {JSON_ARRAY}.values */
EIF_REFERENCE F859_7459 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit376 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
