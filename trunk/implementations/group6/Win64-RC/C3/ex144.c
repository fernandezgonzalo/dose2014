/*
 * Code for class EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex144.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION}.raise */
void F166_2118 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(2091,F164_2091,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1289[Dtype(tr1)-94])(RTCV(tr1), Current);
	RTLE;
}

/* {EXCEPTION}.trace */
EIF_REFERENCE F166_2124 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_26 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 27);
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = F28_388(RTCV(loc1), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EXCEPTION}.code */
EIF_INTEGER_32 F166_2125 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EXCEPTION}.original */
EIF_REFERENCE F166_2126 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == Current) || (EIF_BOOLEAN)(loc1 == NULL))) {
		RTLE;
		return (EIF_REFERENCE) Current;
	} else {
		loc2 = Current;
		loc2 = RTRV(eif_non_attached_type(193),loc2);
		loc3 = Current;
		loc3 = RTRV(eif_non_attached_type(181),loc3);
		if ((EIF_BOOLEAN) ((EIF_TEST(loc2)) || (EIF_TEST(loc3)))) {
			tr1 = F166_2126(RTCV(loc1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			RTLE;
			return (EIF_REFERENCE) Current;
		}
	}/* NOTREACHED */
	
}

/* {EXCEPTION}.recipient_name */
EIF_REFERENCE F166_2128 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EXCEPTION}.type_name */
EIF_REFERENCE F166_2129 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EXCEPTION}.set_description */
void F166_2133 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	struct eif_ex_26 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 27);
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(431));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
		F432_2732(RTCV(tr1), ti4_1);
		loc3 = (EIF_REFERENCE) tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {101,833,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 101, _OBJSIZ_0_0_0_1_0_0_0_0_);
		}
		F102_1422(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
		F28_381(RTCV(loc1), arg1, tr1, ((EIF_INTEGER_32) 0L), loc2);
		ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc2)-97])(RTCV(loc2)));
		F432_2758(RTCV(loc3), ti4_1);
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc3;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EXCEPTION}.is_ignored */
EIF_BOOLEAN F166_2136 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOSCF(2091,F164_2091,(Current));
	tr2 = F1_5(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1295[Dtype(tr1)-94])(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {EXCEPTION}.out */
EIF_REFERENCE F166_2138 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = F1_5(Current);
	Result = F750_6320(RTCV(tr1));
	loc1 = F166_2124(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F741_5952(RTCV(Result), (EIF_CHARACTER_8) '\012');
		tr1 = F733_5610(RTCV(loc1));
		F741_5941(RTCV(Result), tr1);
	}
	RTLE;
	return Result;
}

/* {EXCEPTION}.throwing_exception */
EIF_REFERENCE F166_2139 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EXCEPTION}.set_throwing_exception */
void F166_2140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_recipient_name */
void F166_2141 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.c_description */
EIF_REFERENCE F166_2144 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EXCEPTION}.set_type_name */
void F166_2145 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_exception_trace */
void F166_2147 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.internal_trace */
EIF_REFERENCE F166_2148 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


void EIF_Minit144 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
