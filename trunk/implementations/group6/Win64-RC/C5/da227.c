/*
 * Code for class DATE_TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da227.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_DURATION}.make_definite */
void F443_2931 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(443));
	F444_2956(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(441));
	F442_2899(RTCV(tr1), arg2, arg3, arg4);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME_DURATION}.make_fine */
void F443_2932 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REAL_64 arg6)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(443));
	F444_2955(RTCV(tr1), arg1, arg2, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(441));
	F442_2900(RTCV(tr1), arg4, arg5, arg6);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME_DURATION}.make_by_date_time */
void F443_2933 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {DATE_TIME_DURATION}.date */
EIF_REFERENCE F443_2935 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DATE_TIME_DURATION}.time */
EIF_REFERENCE F443_2936 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_DURATION}.origin_date_time */
EIF_REFERENCE F443_2937 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_DURATION}.seconds_count */
EIF_INTEGER_64 F443_2939 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = F444_2962(RTCV(tr1));
	Result = (EIF_INTEGER_64) ti4_1;
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 86400L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F442_2904(RTCV(tr1));
	ti8_2 = (EIF_INTEGER_64) ti4_1;
	Result = (EIF_INTEGER_64) (EIF_INTEGER_64) ((EIF_INTEGER_64) (Result * ti8_1) + ti8_2);
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_less */
EIF_BOOLEAN F443_2941 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tb1 = '\0';
	if (F443_2943(Current)) {
		tb2 = F443_2943(RTCV(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		Result = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F442_2927(RTCV(tr1));
		ti4_2 = F123_1621(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		ti4_3 = F442_2927(RTCV(tr1));
		if (!((EIF_BOOLEAN) ((EIF_INTEGER_32) (F123_1621(Current) + ti4_1) < (EIF_INTEGER_32) (ti4_2 + ti4_3)))) {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = F442_2927(RTCV(tr1));
			ti4_2 = F123_1621(RTCV(arg1));
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
			ti4_3 = F442_2927(RTCV(tr1));
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (F123_1621(Current) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F442_2928(RTCV(tr1));
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
				tr2 = F442_2928(RTCV(tr2));
				tb2 = F442_2911(RTCV(tr1), tr2);
				tb1 = tb2;
			}
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_equal */
EIF_BOOLEAN F443_2942 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = F123_1619(RTCV(arg1));
	if ((EIF_BOOLEAN)(F123_1619(Current) == ti4_1)) {
		ti4_1 = F123_1620(RTCV(arg1));
		tb2 = (EIF_BOOLEAN)(F123_1620(Current) == ti4_1);
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F442_2927(RTCV(tr1));
		ti4_2 = F123_1621(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		ti4_3 = F442_2927(RTCV(tr1));
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (F123_1621(Current) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F442_2928(RTCV(tr1));
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr2 = F442_2928(RTCV(tr2));
		tb1 = F442_2912(RTCV(tr1), tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.definite */
EIF_BOOLEAN F443_2943 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F444_2965(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.canonical */
EIF_BOOLEAN F443_2944 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	loc1 = F938_8197(RTCV(arg1), Current);
	tb1 = F445_2985(RTCV(loc1), arg1);
	if (tb1) {
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tb3 = F444_2966(RTCV(tr1), tr2);
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = F442_2904(RTCV(tr1));
			tb2 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = F442_2913(RTCV(tr1));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (F123_1622(Current) < ((EIF_INTEGER_32) 24L));
		}
		Result = (EIF_BOOLEAN) Result;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tb3 = F444_2966(RTCV(tr1), tr2);
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = F442_2904(RTCV(tr1));
			tb2 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = F442_2913(RTCV(tr1));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (F123_1622(Current) > (EIF_INTEGER_32) -((EIF_INTEGER_32) 24L));
		}
		Result = (EIF_BOOLEAN) Result;
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.set_origin_date_time */
void F443_2947 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		F444_2969(RTCV(tr1), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F444_2969(RTCV(tr1), NULL);
	}
	RTLE;
}

/* {DATE_TIME_DURATION}.opposite */
EIF_REFERENCE F443_2951 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLR(5,loc1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = F444_2978(RTCV(tr2));
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = F442_2925(RTCV(tr3));
	F443_2933(RTCV(tr1), tr2, tr3);
	Result = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
		F443_2947(RTCV(Result), tr1);
	} else {
		F443_2947(RTCV(Result), NULL);
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.to_canonical */
EIF_REFERENCE F443_2953 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(7,tr3);
	RTLR(8,Result);
	
	RTGC;
	if (F443_2944(Current, arg1)) {
		RTLE;
		return (EIF_REFERENCE) (EIF_REFERENCE) eif_builtin_ANY_deep_twin (Current);
	} else {
		loc1 = F938_8197(RTCV(arg1), Current);
		tr1 = RTLNS(441, 441, _OBJSIZ_0_0_0_2_0_0_0_1_);
		ti4_1 = F123_1622(RTCV(loc1));
		ti4_2 = F123_1622(RTCV(arg1));
		ti4_3 = F123_1623(RTCV(loc1));
		ti4_4 = F123_1623(RTCV(arg1));
		tr8_1 = F123_1625(RTCV(loc1));
		tr8_2 = F123_1625(RTCV(arg1));
		F442_2900(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), (EIF_REAL_64) (tr8_1 - tr8_2));
		loc3 = (EIF_REFERENCE) tr1;
		tb1 = '\0';
		tb2 = F445_2985(RTCV(loc1), arg1);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
			tb2 = F935_8120(RTCV(tr1), tr2);
			tb1 = tb2;
		}
		if (tb1) {
			F442_2923(RTCV(loc3), ((EIF_INTEGER_32) 24L));
			F938_8201(RTCV(loc1), ((EIF_INTEGER_32) -1L));
		} else {
			tb1 = '\0';
			tb2 = F938_8191(RTCV(loc1), arg1);
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
				tb2 = F445_2984(RTCV(tr1), tr2);
				tb1 = tb2;
			}
			if (tb1) {
				F442_2923(RTCV(loc3), ((EIF_INTEGER_32) -24L));
				F938_8201(RTCV(loc1), ((EIF_INTEGER_32) 1L));
			}
		}
		tr1 = RTLNS(443, 443, _OBJSIZ_1_0_0_3_0_0_0_0_);
		ti4_1 = F938_8188(RTCV(loc1));
		ti4_2 = F938_8188(RTCV(arg1));
		F444_2956(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 - ti4_2));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(Dftype(Current));
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr2 = F444_2979(RTCV(loc2), tr2);
		tr3 = F442_2926(RTCV(loc3));
		F443_2933(RTCV(tr1), tr2, tr3);
		Result = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

void EIF_Minit227 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
