/*
 * Code for class DATE_TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da410.h"
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

/* {DATE_TIME}.make */
void F938_8173 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1517,Y1517_gen_type,dftype,123)));
	F933_8065(RTCV(tr1), arg1, arg2, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1516,Y1516_gen_type,dftype,123)));
	F935_8110(RTCV(tr1), arg4, arg5, arg6);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_fine */
void F938_8174 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REAL_64 arg6)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1517,Y1517_gen_type,dftype,123)));
	F933_8065(RTCV(tr1), arg1, arg2, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1516,Y1516_gen_type,dftype,123)));
	F935_8111(RTCV(tr1), arg4, arg5, arg6);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_by_date */
void F938_8176 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1516,Y1516_gen_type,Dftype(Current),123)));
	F935_8110(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_now */
void F938_8177 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(19, 19, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F20_227(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1517,Y1517_gen_type,dftype,123)));
	ti4_1 = F20_231(RTCV(loc1));
	ti4_2 = F20_232(RTCV(loc1));
	ti4_3 = F20_233(RTCV(loc1));
	F933_8065(RTCV(tr1), ti4_1, ti4_2, ti4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1516,Y1516_gen_type,dftype,123)));
	ti4_1 = F20_234(RTCV(loc1));
	ti4_2 = F20_235(RTCV(loc1));
	ti4_3 = F20_236(RTCV(loc1));
	tr8_1 = (EIF_REAL_64) (ti4_3);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_0_);
	F935_8111(RTCV(tr1), ti4_1, ti4_2, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) ((EIF_REAL_64) (ti4_3) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_now_utc */
void F938_8178 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(19, 19, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F20_228(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1517,Y1517_gen_type,dftype,123)));
	ti4_1 = F20_231(RTCV(loc1));
	ti4_2 = F20_232(RTCV(loc1));
	ti4_3 = F20_233(RTCV(loc1));
	F933_8065(RTCV(tr1), ti4_1, ti4_2, ti4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1516,Y1516_gen_type,dftype,123)));
	ti4_1 = F20_234(RTCV(loc1));
	ti4_2 = F20_235(RTCV(loc1));
	ti4_3 = F20_236(RTCV(loc1));
	tr8_1 = (EIF_REAL_64) (ti4_3);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_0_);
	F935_8111(RTCV(tr1), ti4_1, ti4_2, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) ((EIF_REAL_64) (ti4_3) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_from_epoch */
void F938_8183 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
	} else {
		loc2 = (EIF_INTEGER_32) arg1;
	}
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 86400L));
	loc2 %= ((EIF_INTEGER_32) 86400L);
	tr1 = RTLNS(442, 442, _OBJSIZ_3_0_0_0_0_0_0_0_);
	F443_2931(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc2);
	loc3 = (EIF_REFERENCE) tr1;
	F938_8174(Current, ((EIF_INTEGER_32) 1970L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_REAL_64) 0.0);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = F443_2951(RTCV(loc3));
		F938_8198(Current, tr1);
	} else {
		F938_8198(Current, loc3);
	}
	RTLE;
}

/* {DATE_TIME}.date */
EIF_REFERENCE F938_8184 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME}.time */
EIF_REFERENCE F938_8185 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME}.date_duration */
EIF_REFERENCE F938_8187 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F933_8079(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME}.days */
EIF_INTEGER_32 F938_8188 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F933_8080(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME}.time_duration */
EIF_REFERENCE F938_8189 (EIF_REFERENCE Current)
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
	Result = F935_8121(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME}.is_less */
EIF_BOOLEAN F938_8191 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	tb1 = F933_8078(RTCV(tr1), tr2);
	if (!tb1) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tb2 = F445_2986(RTCV(tr1), tr2);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
			tb2 = F935_8120(RTCV(tr1), tr2);
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {DATE_TIME}.is_equal */
EIF_BOOLEAN F938_8192 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	if (F1_10(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_), tr1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		Result = F1_10(Current, *(EIF_REFERENCE *)(Current), tr1);
	}
	RTLE;
	return Result;
}

/* {DATE_TIME}.duration */
EIF_REFERENCE F938_8193 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(442, 442, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = F938_8187(Current);
	tr3 = F938_8189(Current);
	F443_2933(RTCV(tr1), tr2, tr3);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {DATE_TIME}.copy */
void F938_8196 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {DATE_TIME}.plus */
EIF_REFERENCE F938_8197 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	F938_8198(RTCV(Result), arg1);
	RTLE;
	return Result;
}

/* {DATE_TIME}.add */
void F938_8198 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	tb1 = F443_2943(RTCV(arg1));
	if (tb1) {
		ti4_1 = F123_1621(RTCV(arg1));
		F938_8201(Current, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F123_1619(RTCV(arg1));
		ti4_2 = F123_1620(RTCV(arg1));
		F933_8102(RTCV(tr1), ti4_1, ti4_2);
		ti4_1 = F123_1621(RTCV(arg1));
		F938_8201(Current, ti4_1);
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	tr2 = F938_8189(Current);
	tr1 = F442_2924(RTCV(tr1), tr2);
	ti4_1 = F442_2927(RTCV(tr1));
	F938_8201(Current, ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = RTOSCF(8119,F935_8119,(RTCV(tr1)));
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	tr3 = F938_8189(Current);
	tr2 = F442_2924(RTCV(tr2), tr3);
	tr2 = F442_2928(RTCV(tr2));
	tr1 = F935_8124(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.relative_duration */
EIF_REFERENCE F938_8199 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(442, 442, _OBJSIZ_3_0_0_0_0_0_0_0_);
	ti4_1 = F938_8188(Current);
	ti4_2 = F938_8188(RTCV(arg1));
	ti4_3 = F123_1622(Current);
	ti4_4 = F123_1622(RTCV(arg1));
	ti4_5 = F123_1623(Current);
	ti4_6 = F123_1623(RTCV(arg1));
	tr8_1 = F123_1625(Current);
	tr8_2 = F123_1625(RTCV(arg1));
	F443_2932(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), (EIF_INTEGER_32) (ti4_5 - ti4_6), (EIF_REAL_64) (tr8_1 - tr8_2));
	Result = (EIF_REFERENCE) tr1;
	Result = F443_2953(RTCV(Result), arg1);
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	F443_2947(RTCV(Result), tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME}.definite_duration */
EIF_REFERENCE F938_8200 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	Result = F938_8199(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(RTCV(Result) + _REFACS_2_);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	F444_2980(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {DATE_TIME}.day_add */
void F938_8201 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F938_8188(Current);
	F933_8070(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + arg1));
	RTLE;
}

/* {DATE_TIME}.hour_add */
void F938_8202 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F123_1622(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 24L)))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F118_1565(Current, loc1, ((EIF_INTEGER_32) 24L));
		F121_1593(RTCV(tr1), ti4_1);
		ti4_1 = F118_1566(Current, loc1, ((EIF_INTEGER_32) 24L));
		F938_8201(Current, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F121_1593(RTCV(tr1), loc1);
	}
	RTLE;
}

/* {DATE_TIME}.minute_add */
void F938_8203 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F123_1623(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F118_1565(Current, loc1, ((EIF_INTEGER_32) 60L));
		F121_1594(RTCV(tr1), ti4_1);
		ti4_1 = F118_1566(Current, loc1, ((EIF_INTEGER_32) 60L));
		F938_8202(Current, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F121_1594(RTCV(tr1), loc1);
	}
	RTLE;
}

/* {DATE_TIME}.second_add */
void F938_8204 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F123_1624(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F118_1565(Current, loc1, ((EIF_INTEGER_32) 60L));
		F121_1595(RTCV(tr1), ti4_1);
		ti4_1 = F118_1566(Current, loc1, ((EIF_INTEGER_32) 60L));
		F938_8203(Current, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F121_1595(RTCV(tr1), loc1);
	}
	RTLE;
}

/* {DATE_TIME}.out */
EIF_REFERENCE F938_8207 (EIF_REFERENCE Current)
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
	tr1 = F118_1568(Current);
	Result = F938_8208(Current, tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME}.formatted_out */
EIF_REFERENCE F938_8208 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(930, 930, _OBJSIZ_4_2_0_1_0_0_0_0_);
	F931_8033(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F931_8044(RTCV(loc1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit410 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
