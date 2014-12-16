/*
 * Code for class WSF_ROUTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws282.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER}.make */
void F539_4412 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F539_4414(Current, arg1);
}

/* {WSF_ROUTER}.initialize */
void F539_4414 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {665,745,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F666_5008(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {679,0xFFF9,1,684,810,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F680_5105(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_ROUTER}.mappings */
EIF_REFERENCE F539_4415 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_ROUTER}.map_with_request_methods */
void F539_4417 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTLNS(745, 745, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F746_6059(RTCV(tr2), arg1, arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5254[Dtype(arg1)-813])(RTCV(arg1));
	{
	/* INLINED CODE (on_mapped) */
	tr2 = tr1;
	
	
	/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WSF_ROUTER}.handle_with_request_methods */
void F539_4419 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,Current);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1592[Dtype(arg2)-413])(RTCV(arg2), arg1);
	F539_4417(Current, tr1, arg3);
	RTLE;
}

/* {WSF_ROUTER}.dispatch */
void F539_4420 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg3);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,Current);
	
	RTGC;
	loc1 = (EIF_REFERENCE) arg3;
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNS(24, 24, _OBJSIZ_1_0_0_0_0_0_0_0_);
		loc1 = (EIF_REFERENCE) tr1;
	}
	F539_4422(Current, arg1, arg2, loc1);
	RTLE;
}

/* {WSF_ROUTER}.router_dispatch */
void F539_4422 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLR(5,loc2);
	RTLR(6,tr1);
	
	RTGC;
	loc1 = F539_4447(Current, arg1);
	F539_4423(Current, arg1, arg2, arg3, loc1);
	tb1 = '\0';
	tb2 = F25_353(RTCV(arg3));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(loc1 == RTOSCF(1951,F158_1951,(Current)));
	}
	if (tb1) {
		tr1 = RTLNS(216, 216, _OBJSIZ_5_0_0_1_0_0_1_0_);
		F217_2458(RTCV(tr1), arg2);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTOSCF(1952,F158_1952,(Current));
		F749_6185(RTCV(arg1), tr1);
		tr1 = RTOSCF(1952,F158_1952,(Current));
		F539_4423(Current, arg1, loc2, arg3, tr1);
	}
	RTLE;
}

/* {WSF_ROUTER}.router_dispatch_for_request_method */
void F539_4423 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,loc3);
	RTLR(5,arg4);
	RTLR(6,loc1);
	RTLR(7,arg1);
	RTLR(8,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F567_4631(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc2)-537])(RTCV(loc2));
		if (tb1) break;
		tb2 = F25_353(RTCV(arg3));
		if (tb2) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc2)-537])(RTCV(loc2));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_);
			if (F539_4448(Current, arg4, tr1)) {
				loc1 = *(EIF_REFERENCE *)(RTCV(loc3));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R5257[Dtype(loc1)-812])(RTCV(loc1), arg1, arg2, arg3, Current);
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc2)-537])(RTCV(loc2));
	}
	RTLE;
}

/* {WSF_ROUTER}.has_item_associated_with_resource */
EIF_BOOLEAN F539_4424 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F567_4631(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc3)-537])(RTCV(loc3));
		if (tb1) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				loc5 = F540_4467(RTCV(arg2));
				tb2 = EIF_FALSE;
				for (;;) {
					if (tb2) break;
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc5)-537])(RTCV(loc5));
					if (tb3) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc5)-537])(RTCV(loc5));
					tb2 = F539_4448(Current, tr1, loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc5)-537])(RTCV(loc5));
				}
				loc2 = (EIF_BOOLEAN) tb2;
			} else {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		if (loc2) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5254[Dtype(loc1)-813])(RTCV(loc1));
			loc6 = tr1;
			loc6 = RTRV(eif_non_attached_type(412),loc6);
			if (EIF_TEST(loc6)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc6));
				Result = F539_4424(RTCV(tr1), arg1, arg2);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5253[Dtype(loc1)-812])(RTCV(loc1));
				tb2 = F737_5748(RTCV(tr1), arg1);
				if (tb2) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc3)-537])(RTCV(loc3));
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.item_associated_with_resource */
EIF_REFERENCE F539_4425 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(10);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,arg1);
	RTLR(9,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F567_4631(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc3)-537])(RTCV(loc3));
		if (tb1) break;
		if ((EIF_BOOLEAN)(Result != NULL)) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				loc5 = F540_4467(RTCV(arg2));
				tb2 = EIF_FALSE;
				for (;;) {
					if (tb2) break;
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc5)-537])(RTCV(loc5));
					if (tb3) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc5)-537])(RTCV(loc5));
					tb2 = F539_4448(Current, tr1, loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc5)-537])(RTCV(loc5));
				}
				loc2 = (EIF_BOOLEAN) tb2;
			} else {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		if (loc2) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5254[Dtype(loc1)-813])(RTCV(loc1));
			loc6 = tr1;
			loc6 = RTRV(eif_non_attached_type(412),loc6);
			if (EIF_TEST(loc6)) {
				Result = *(EIF_REFERENCE *)(RTCV(loc6));
				Result = F539_4425(RTCV(Result), arg1, arg2);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5253[Dtype(loc1)-812])(RTCV(loc1));
				tb2 = F737_5748(RTCV(tr1), arg1);
				if (tb2) {
					Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
				}
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc3)-537])(RTCV(loc3));
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.allowed_methods_for_request */
EIF_REFERENCE F539_4427 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLR(7,arg1);
	
	RTGC;
	tr1 = RTLNS(539, 539, _OBJSIZ_1_1_0_0_0_0_0_0_);
	F540_4449(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F567_4631(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc3)-537])(RTCV(loc3));
		if (tb1) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5254[Dtype(loc1)-813])(RTCV(loc1));
		loc4 = tr1;
		loc4 = RTRV(eif_non_attached_type(412),loc4);
		if (EIF_TEST(loc4)) {
			loc2 = *(EIF_REFERENCE *)(RTCV(loc4));
			loc2 = F539_4427(RTCV(loc2), arg1);
		} else {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R5256[Dtype(loc1)-812])(RTCV(loc1), arg1, Current);
			if (tb2) {
				loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
				loc2 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_1_);
			} else {
				loc2 = (EIF_REFERENCE) NULL;
			}
		}
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			Result = F540_4469(RTCV(Result), loc2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc3)-537])(RTCV(loc3));
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.execute_before */
void F539_4429 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,810,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	F680_5108(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_ROUTER}.execute_after */
void F539_4430 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_ROUTER}.pre_execution_actions */
EIF_REFERENCE F539_4431 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_ROUTER}.base_url */
EIF_REFERENCE F539_4433 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_ROUTER}.new_cursor */
EIF_REFERENCE F539_4435 (EIF_REFERENCE Current)
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

/* {WSF_ROUTER}.methods_get */
static EIF_REFERENCE F539_4438_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (4438);
#define Result RTOSR(4438)
	RTOC_NEW(Result);
	tr1 = RTLNS(539, 539, _OBJSIZ_1_1_0_0_0_0_0_0_);
	F540_4449(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F540_4470(RTCV(Result));
	F540_4468(RTCV(Result));
	RTOSE (4438);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F539_4438 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4438,F539_4438_body,(Current));
}

/* {WSF_ROUTER}.methods_post */
static EIF_REFERENCE F539_4439_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (4439);
#define Result RTOSR(4439)
	RTOC_NEW(Result);
	tr1 = RTLNS(539, 539, _OBJSIZ_1_1_0_0_0_0_0_0_);
	F540_4449(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F540_4472(RTCV(Result));
	F540_4468(RTCV(Result));
	RTOSE (4439);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F539_4439 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4439,F539_4439_body,(Current));
}

/* {WSF_ROUTER}.request_method */
EIF_REFERENCE F539_4447 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_9_);
	tr1 = RTOSCF(1952,F158_1952,(Current));
	tb1 = F737_5746(RTCV(loc1), tr1);
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) RTOSCF(1952,F158_1952,(Current));
	} else {
		tr1 = RTOSCF(1955,F158_1955,(Current));
		tb1 = F737_5746(RTCV(loc1), tr1);
		if (tb1) {
			Result = RTOSCF(1955,F158_1955,(Current));
		} else {
			tr1 = RTOSCF(1951,F158_1951,(Current));
			tb1 = F737_5746(RTCV(loc1), tr1);
			if (tb1) {
				Result = RTOSCF(1951,F158_1951,(Current));
			} else {
				tr1 = RTOSCF(1953,F158_1953,(Current));
				tb1 = F737_5746(RTCV(loc1), tr1);
				if (tb1) {
					Result = RTOSCF(1953,F158_1953,(Current));
				} else {
					tr1 = RTOSCF(1954,F158_1954,(Current));
					tb1 = F737_5746(RTCV(loc1), tr1);
					if (tb1) {
						Result = RTOSCF(1954,F158_1954,(Current));
					} else {
						tr1 = RTOSCF(1956,F158_1956,(Current));
						tb1 = F737_5746(RTCV(loc1), tr1);
						if (tb1) {
							Result = RTOSCF(1956,F158_1956,(Current));
						} else {
							tr1 = RTOSCF(1957,F158_1957,(Current));
							tb1 = F737_5746(RTCV(loc1), tr1);
							if (tb1) {
								Result = RTOSCF(1957,F158_1957,(Current));
							} else {
								tr1 = RTOSCF(1958,F158_1958,(Current));
								tb1 = F737_5746(RTCV(loc1), tr1);
								if (tb1) {
									Result = RTOSCF(1958,F158_1958,(Current));
								} else {
									tr1 = RTOSCF(1959,F158_1959,(Current));
									tb1 = F737_5746(RTCV(loc1), tr1);
									if (tb1) {
										RTLE;
										return (EIF_REFERENCE) RTOSCF(1959,F158_1959,(Current));
									} else {
										Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4639[Dtype(loc1)-735])(RTCV(loc1));
										RTLE;
										return (EIF_REFERENCE) Result;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.is_matching_request_methods */
EIF_BOOLEAN F539_4448 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,arg1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = F540_4454(RTCV(arg2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tb1 = F540_4455(RTCV(arg2), arg1);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

void EIF_Minit282 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
