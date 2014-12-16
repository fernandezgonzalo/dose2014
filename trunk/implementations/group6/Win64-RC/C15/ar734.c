/*
 * Code for class ARRAYED_LIST [POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar734.h"
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

/* {ARRAYED_LIST}.make */
void F673_5008 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y2824,Y2824_gen_type,Dftype(Current),471)),0,arg1,sizeof(EIF_POINTER), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ARRAYED_LIST}.area */
EIF_REFERENCE F673_5011 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {ARRAYED_LIST}.item */
EIF_POINTER F673_5012 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	/* INLINED CODE (SPECIAL.item) */
	tp2 = *((EIF_POINTER *)tr1 + ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.i_th */
EIF_POINTER F673_5013 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tp2 = *((EIF_POINTER *)tr1 + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.at */
EIF_POINTER F673_5014 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tp2 = *((EIF_POINTER *)tr1 + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.first */
EIF_POINTER F673_5015 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tp2 = *((EIF_POINTER *)tr1 + (((EIF_INTEGER_32) 0L)));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.index */
EIF_INTEGER_32 F673_5017 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
}


/* {ARRAYED_LIST}.cursor */
EIF_REFERENCE F673_5018 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(421, 421, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F422_2679(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {ARRAYED_LIST}.has */
EIF_BOOLEAN F673_5019 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc3 = F673_5029(Current);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) && EIF_TRUE)) {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || Result)) break;
			/* INLINED CODE (SPECIAL.item) */
			tp2 = *((EIF_POINTER *)loc1 + (loc2));
			/* END INLINED CODE */
			tp1 = tp2;
			Result = (EIF_BOOLEAN) (arg1 == tp1);
			loc2++;
		}
	} else {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || Result)) break;
			/* INLINED CODE (SPECIAL.item) */
			tp2 = *((EIF_POINTER *)loc1 + (loc2));
			/* END INLINED CODE */
			tp1 = tp2;
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == tp1);
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.upper */
EIF_INTEGER_32 F673_5028 (EIF_REFERENCE Current)
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
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.count */
EIF_INTEGER_32 F673_5029 (EIF_REFERENCE Current)
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
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.capacity */
EIF_INTEGER_32 F673_5030 (EIF_REFERENCE Current)
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
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.is_equal */
EIF_BOOLEAN F673_5031 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		ti4_1 = F673_5029(RTCV(arg1));
		if ((EIF_BOOLEAN)(F673_5029(Current) == ti4_1)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_1_0_);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
		}
		if (tb1) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN) !Result) {
						tb1 = (EIF_BOOLEAN) (loc1 > F673_5028(Current));
					}
					if (tb1) break;
					tp1 = F673_5013(Current, loc1);
					tp2 = F673_5013(RTCV(arg1), loc1);
					Result = (EIF_BOOLEAN) (tp1 == tp2);
					loc1++;
				}
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
				ti4_1 = F673_5029(Current);
				Result = F806_6365(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.valid_index */
EIF_BOOLEAN F673_5034 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1)) {
		Result = (EIF_BOOLEAN) (arg1 <= F673_5029(Current));
	}
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.move */
void F673_5037 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) += arg1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > (EIF_INTEGER_32) (F673_5029(Current) + ((EIF_INTEGER_32) 1L)))) {
		ti4_1 = F673_5029(Current);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	} else {
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < ((EIF_INTEGER_32) 0L))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTLE;
}

/* {ARRAYED_LIST}.start */
void F673_5038 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {ARRAYED_LIST}.finish */
void F673_5039 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F673_5029(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {ARRAYED_LIST}.forth */
void F673_5040 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))++;
}

/* {ARRAYED_LIST}.back */
void F673_5041 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))--;
}

/* {ARRAYED_LIST}.go_i_th */
void F673_5042 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {ARRAYED_LIST}.go_to */
void F673_5043 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(421),loc1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
	}
	RTLE;
}

/* {ARRAYED_LIST}.search */
void F673_5044 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc3 = F673_5029(Current);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	loc2 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) && EIF_TRUE)) {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			/* INLINED CODE (SPECIAL.item) */
			tp2 = *((EIF_POINTER *)loc1 + (loc2));
			/* END INLINED CODE */
			tp1 = tp2;
			loc4 = (EIF_BOOLEAN) (arg1 == tp1);
			loc2++;
		}
	} else {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			/* INLINED CODE (SPECIAL.item) */
			tp2 = *((EIF_POINTER *)loc1 + (loc2));
			/* END INLINED CODE */
			tp1 = tp2;
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == tp1);
			loc2++;
		}
	}
	if (loc4) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc2;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {ARRAYED_LIST}.put_i_th */
void F673_5046 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_POINTER *)tr1 + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = arg1;
	/* END INLINED CODE */
	;
	RTLE;
}

/* {ARRAYED_LIST}.force */
void F673_5047 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc2);
	
	RTGC;
	loc1 = F673_5029(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	loc2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (loc2);
	if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
		ti4_1 = F312_2524(Current);
		loc2 = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (loc2, (EIF_INTEGER_32) (loc1 + ti4_1));
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	}
	F806_6369(RTCV(loc2), arg1);
	RTLE;
}

/* {ARRAYED_LIST}.extend */
void F673_5048 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc2);
	
	RTGC;
	loc1 = F673_5029(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	loc2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (loc2);
	if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
		ti4_1 = F312_2524(Current);
		loc2 = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (loc2, (EIF_INTEGER_32) (loc1 + ti4_1));
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	}
	F806_6369(RTCV(loc2), arg1);
	RTLE;
}

/* {ARRAYED_LIST}.replace */
void F673_5051 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	F673_5046(Current, arg1, ti4_1);
}

/* {ARRAYED_LIST}.grow */
void F673_5055 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
	if ((EIF_BOOLEAN) (arg1 > ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (tr1, arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ARRAYED_LIST}.copy */
void F673_5058 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		F479_3218(Current, tr1);
	}
	RTLE;
}

/* {ARRAYED_LIST}.remove */
void F673_5060 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < F673_5029(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_3 = F673_5029(Current);
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
		memmove((EIF_POINTER *)tr1 + ((EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))),(EIF_POINTER *)tr1 + ti4_1, (rt_uint_ptr)sizeof(EIF_POINTER) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 - ti4_4));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) (ti4_3 - ti4_4));
		/* END INLINED CODE */
		;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	F806_6381(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {ARRAYED_LIST}.wipe_out */
void F673_5064 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F806_6387(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {ARRAYED_LIST}.correct_mismatch */
void F673_5066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,tr3);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tr1 = RTOSCF(4303,F521_4303,(Current));
	tr2 = RTMS_EX_H("area_v2",7,1288217906);
	tb5 = F579_4640(RTCV(tr1), tr2);
	if ((EIF_BOOLEAN) !tb5) {
		tr1 = RTOSCF(4303,F521_4303,(Current));
		tr2 = RTMS_EX_H("area",4,1634887009);
		tr1 = F579_4638(RTCV(tr1), tr2);
		loc2 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {805,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y2832,Y2832_gen_type,dftype,471);
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc2 = RTRV(eif_non_attached_type(typres0),loc2);
		}
		tb4 = EIF_TEST(loc2);
	}
	if (tb4) {
		tr2 = RTOSCF(4303,F521_4303,(Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr2 = F579_4638(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 833, tr1, loc3, tb4);
		tb3 = tb4;
	}
	if (tb3) {
		tr2 = RTOSCF(4303,F521_4303,(Current));
		tr3 = RTMS_EX_H("object_comparison",17,2049833582);
		tr2 = F579_4638(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_BOOLEAN *), 693, tr1, loc4, tb3);
		tb2 = tb3;
	}
	if (tb2) {
		tr2 = RTOSCF(4303,F521_4303,(Current));
		tr3 = RTMS_EX_H("index",5,1852879736);
		tr2 = F579_4638(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 833, tr1, loc5, tb2);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y2824,Y2824_gen_type,dftype,471)),0,loc3,sizeof(EIF_POINTER), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			tr1 = *(EIF_REFERENCE *)(Current);
			/* INLINED CODE (SPECIAL.item) */
			tp2 = *((EIF_POINTER *)loc2 + (loc1));
			/* END INLINED CODE */
			tp1 = tp2;
			F806_6369(RTCV(tr1), tp1);
			loc1++;
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) loc4;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc5;
	} else {
		F521_4302(Current);
	}
	RTLE;
}

void EIF_Minit734 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
