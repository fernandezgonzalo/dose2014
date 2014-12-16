/*
 * Code for class WSF_DEFAULT_ROUTER_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws248.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_DEFAULT_ROUTER_RESPONSE}.make_with_router */
void F492_3293 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	
	RTGC;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	F491_3288(Current, arg1);
	F492_3298(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.router */
EIF_REFERENCE F492_3294 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_DEFAULT_ROUTER_RESPONSE}.set_documentation_included */
void F492_3297 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.set_suggestion_only_method */
void F492_3298 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.send_to */
void F492_3299 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,arg1);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current);
	tr1 = RTOSCF(1953,F158_1953,(Current));
	tb1 = F749_6174(RTCV(loc2), tr1);
	if (tb1) {
		loc1 = F491_3291(Current, loc2);
	} else {
		tr1 = F492_3301(Current, loc2);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc1 = (EIF_REFERENCE) loc3;
		} else {
			tb1 = '\0';
			tr1 = F749_6238(RTCV(loc2));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				tr1 = RTMS_EX_H("*",1,42);
				tb2 = F737_5748(RTCV(loc4), tr1);
				tb1 = tb2;
			}
			if (tb1) {
				loc1 = F492_3300(Current, loc2);
			} else {
				loc1 = F492_3302(Current, loc2);
			}
		}
	}
	F94_1345(RTCV(arg1), loc1);
	RTLE;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.precondition_failed_message */
EIF_REFERENCE F492_3300 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	
	RTGC;
	tr1 = RTLNS(488, 488, _OBJSIZ_3_0_0_0_0_0_0_0_);
	F489_3249(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.method_not_allowed_message */
EIF_REFERENCE F492_3301 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,tr5);
	
	RTGC;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = F539_4427(RTCV(tr1), arg1);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = F540_4454(RTCV(loc2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = RTLNS(487, 487, _OBJSIZ_6_0_0_0_0_0_0_0_);
		F488_3233(RTCV(tr1), arg1);
		Result = (EIF_REFERENCE) tr1;
		F488_3242(RTCV(Result), loc2);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
			tr1 = RTLNS(58, 58, _OBJSIZ_4_0_0_0_0_0_0_0_);
			F59_858(RTCV(tr1));
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,684,0,487,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[3] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0, 3, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
			RTAR(tr2,Current);
			((EIF_TYPED_VALUE *)tr2+2)->it_r = Result;
			RTAR(tr2,Result);
			
			{
				static EIF_TYPE_INDEX typarr0[] = {728,0,0xFFF9,1,684,745,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[1] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr5 = RTLNRF(typres0, (EIF_POINTER) __A248_46_2, (EIF_POINTER) _A248_46_2, (EIF_POINTER)(0),tr2, 1, 1);
			}
			F679_5088(RTCV(tr1), tr5);
			F59_863(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
		}
	}
	RTLE;
	return Result;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.not_found_message */
EIF_REFERENCE F492_3302 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,tr5);
	
	RTGC;
	Result = F491_3292(Current, arg1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		tr1 = RTLNS(58, 58, _OBJSIZ_4_0_0_0_0_0_0_0_);
		F59_858(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			loc2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_9_);
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,486,736,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0, 4, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		((EIF_TYPED_VALUE *)tr2+2)->it_r = Result;
		RTAR(tr2,Result);
		((EIF_TYPED_VALUE *)tr2+3)->it_r = loc2;
		RTAR(tr2,loc2);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {728,0,0xFFF9,1,684,745,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr5 = RTLNRF(typres0, (EIF_POINTER) __A248_45_2, (EIF_POINTER) _A248_45_2, (EIF_POINTER)(0),tr2, 1, 1);
		}
		F679_5088(RTCV(tr1), tr5);
		F59_863(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	}
	RTLE;
	return Result;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.inline-agent#1 of not_found_message */
void F492_8276 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc4);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,arg3);
	RTLR(8,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	loc4 = tr1;
	loc4 = RTRV(eif_non_attached_type(811),loc4);
	if (EIF_TEST(loc4)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr1 = F812_6406(RTCV(loc4), tr1);
		loc1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_2_0_);
	}
	if ((EIF_BOOLEAN) !loc1) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5253[Dtype(tr2)-812])(RTCV(tr2));
		tr2 = F733_5612(RTCV(tr2));
		F735_5652(RTCV(tr1), tr2);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = RTMS_EX_H(" [ ",3,2120480);
			tr1 = F733_5613(RTCV(tr1));
			F740_5847(RTCV(loc2), tr1);
			loc6 = F540_4467(RTCV(loc5));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc6)-537])(RTCV(loc6));
				if (tb1) break;
				tb2 = '\01';
				if (!(EIF_BOOLEAN)(arg3 == NULL)) {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc6)-537])(RTCV(loc6));
					tb3 = F737_5746(RTCV(arg3), tr1);
					tb2 = tb3;
				}
				if (tb2) {
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc6)-537])(RTCV(loc6));
				tr1 = F733_5612(RTCV(tr1));
				F740_5847(RTCV(loc2), tr1);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
				F740_5861(RTCV(loc2), tw1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc6)-537])(RTCV(loc6));
			}
			tr1 = RTMS_EX_H("]",1,93);
			tr1 = F733_5613(RTCV(tr1));
			F740_5847(RTCV(loc2), tr1);
		} else {
			tr1 = RTMS_EX_H(" [*]",4,542845533);
			tr1 = F733_5613(RTCV(tr1));
			F740_5847(RTCV(loc2), tr1);
		}
		if (loc3) {
			F487_3230(RTCV(arg2), loc2, NULL);
		}
	}
	RTLE;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.inline-agent#1 of method_not_allowed_message */
void F492_8277 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,arg2);
	
	RTGC;
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc3 = tr1;
	if (!((EIF_BOOLEAN) !EIF_TEST(loc3))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_9_);
		tb2 = F540_4455(RTCV(loc3), tr1);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		loc4 = tr1;
		loc4 = RTRV(eif_non_attached_type(811),loc4);
		if (EIF_TEST(loc4)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
			tr1 = F812_6406(RTCV(loc4), tr1);
			loc1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_2_0_);
		}
		if ((EIF_BOOLEAN) !loc1) {
			tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5253[Dtype(tr2)-812])(RTCV(tr2));
			tr2 = F733_5612(RTCV(tr2));
			F735_5652(RTCV(tr1), tr2);
			loc2 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				tr1 = RTMS_EX_H(" [ ",3,2120480);
				tr1 = F733_5613(RTCV(tr1));
				F740_5847(RTCV(loc2), tr1);
				loc6 = F540_4467(RTCV(loc5));
				for (;;) {
					tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc6)-537])(RTCV(loc6));
					if (tb1) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc6)-537])(RTCV(loc6));
					tr1 = F733_5612(RTCV(tr1));
					F740_5847(RTCV(loc2), tr1);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
					F740_5861(RTCV(loc2), tw1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc6)-537])(RTCV(loc6));
				}
				tr1 = RTMS_EX_H("]",1,93);
				tr1 = F733_5613(RTCV(tr1));
				F740_5847(RTCV(loc2), tr1);
			} else {
				tr1 = RTMS_EX_H(" [*]",4,542845533);
				tr1 = F733_5613(RTCV(tr1));
				F740_5847(RTCV(loc2), tr1);
			}
			F488_3244(RTCV(arg2), loc2, NULL);
		}
	}
	RTLE;
}

void EIF_Minit248 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
