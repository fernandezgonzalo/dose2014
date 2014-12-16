/*
 * Code for class ACTION_SEQUENCE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac454.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ACTION_SEQUENCE}.default_create */
void F680_5105 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F666_5008(Current, ((EIF_INTEGER_32) 0L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {ACTION_SEQUENCE}.on_item_added_at */
void F680_5106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F666_5029(Current) == ((EIF_INTEGER_32) 1L))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL);
	}
	if (tb1) {
		tr1 = F680_5125(Current);
		F680_5127(Current, tr1);
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.on_item_removed_at */
void F680_5107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F666_5029(Current) == ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) != NULL);
	}
	if (tb1) {
		tr1 = F680_5126(Current);
		F680_5127(Current, tr1);
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.call */
void F680_5108 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc5);
	RTLR(6,loc4);
	RTLR(7,loc6);
	RTLR(8,loc3);
	RTLR(9,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN) (F666_5029(Current) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F666_5029(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y2279,Y2279_gen_type,Dftype(Current),367);
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,ti4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = F666_5011(Current);
		ti4_2 = F666_5029(Current);
		/* INLINED CODE (SPECIAL.copy_data) */
		sp_copy_data(loc1,tr1,((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L),ti4_2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + ti4_2);
		/* END INLINED CODE */
		;
		loc5 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tb2 = F281_2518(RTCV(loc5));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			loc4 = F666_5011(RTCV(loc5));
			loc2 = F666_5029(RTCV(loc5));
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				if ((EIF_BOOLEAN)(loc7 == loc2)) break;
				/* INLINED CODE (SPECIAL.item) */
				tr1 = *((EIF_REFERENCE *)loc4 + (loc7));
				/* END INLINED CODE */
				tr1 = tr1;
				F679_5098(Current, tr1);
				loc7++;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2270[Dtype(loc5)-578])(RTCV(loc5));
		}
		switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_1_)) {
			case 1L:
				loc6 = F680_5128(Current);
				F664_4979(RTCV(loc6), (EIF_BOOLEAN) 0);
				loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc2)) {
						tb2 = F664_4977(RTCV(loc6));
						tb1 = tb2;
					}
					if (tb1) break;
					/* INLINED CODE (SPECIAL.item) */
					tr1 = *((EIF_REFERENCE *)loc1 + (loc7));
					/* END INLINED CODE */
					loc3 = tr1;
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_2_))(
							*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1);
						;
					}
					loc7++;
				}
				F664_4981(RTCV(loc6));
				break;
			case 2L:
				tr1 = F680_5130(Current);
				F665_4993(RTCV(tr1), arg1);
				break;
			case 3L:
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.not_empty_actions */
EIF_REFERENCE F680_5125 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {665,728,0,0xFFF9,0,684,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.empty_actions */
EIF_REFERENCE F680_5126 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {665,728,0,0xFFF9,0,684,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.call_action_list */
void F680_5127 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = F281_2518(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_1 = F666_5029(RTCV(loc1));
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
			tr1 = F666_5014(RTCV(loc1), loc2);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F666_5013(RTCV(loc1), loc2);
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_));
				;
			}
			loc2++;
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.is_aborted_stack */
EIF_REFERENCE F680_5128 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {663,693,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F662_4932(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.is_aborted_stack_internal */
EIF_REFERENCE F680_5129 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ACTION_SEQUENCE}.call_buffer */
EIF_REFERENCE F680_5130 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {664,0xFFF8,1,0xFFFF};
			EIF_TYPE_INDEX typres0;
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F665_4990(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.call_buffer_internal */
EIF_REFERENCE F680_5131 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ACTION_SEQUENCE}.kamikazes */
EIF_REFERENCE F680_5135 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {665,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y2279,Y2279_gen_type,Dftype(Current),367);
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.kamikazes_internal */
EIF_REFERENCE F680_5136 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {ACTION_SEQUENCE}.not_empty_actions_internal */
EIF_REFERENCE F680_5137 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {ACTION_SEQUENCE}.empty_actions_internal */
EIF_REFERENCE F680_5138 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


void EIF_Minit454 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
