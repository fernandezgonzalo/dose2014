/*
 * Code for class SPECIAL [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sp599.h"
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

/* {SPECIAL}.make_empty */
void F802_6349 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {SPECIAL}.make_filled */
void F802_6350 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (make_empty) */
	/* END INLINED CODE */
	}
	;
	F802_6371(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {SPECIAL}.item */
EIF_BOOLEAN F802_6352 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	return *((EIF_BOOLEAN *) Current + arg1);
}

EIF_REFERENCE F802_63521 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	EIF_REFERENCE Result;
	EIF_BOOLEAN r = *((EIF_BOOLEAN *) Current + arg1);
	Result = RTLNS(693, 693, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)Result = r;
	return Result;
}

/* {SPECIAL}.at */
EIF_BOOLEAN F802_6353 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	return *((EIF_BOOLEAN *) Current + arg1);
}

EIF_REFERENCE F802_63531 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	EIF_REFERENCE Result;
	EIF_BOOLEAN r = *((EIF_BOOLEAN *) Current + arg1);
	Result = RTLNS(693, 693, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)Result = r;
	return Result;
}

/* {SPECIAL}.item_address */
EIF_POINTER F802_6355 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	return (EIF_POINTER) (Current + (rt_uint_ptr) arg1 * (rt_uint_ptr)sizeof(EIF_BOOLEAN));
}

/* {SPECIAL}.base_address */
EIF_POINTER F802_6356 (EIF_REFERENCE Current)
{
	return (EIF_POINTER) Current;
}

/* {SPECIAL}.to_array */
EIF_REFERENCE F802_6358 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {603,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y3696,Y3696_gen_type,Dftype(Current),523);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 603, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F604_4817(RTCV(tr1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {SPECIAL}.index_set */
EIF_REFERENCE F802_6359 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(599, 599, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = F802_6361(Current);
	F600_4772(RTCV(tr1), ((EIF_INTEGER_32) 0L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {SPECIAL}.upper */
EIF_INTEGER_32 F802_6361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {SPECIAL}.count */
EIF_INTEGER_32 F802_6362 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
	return Result;
}

/* {SPECIAL}.capacity */
EIF_INTEGER_32 F802_6363 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (Current);
	return Result;
}

/* {SPECIAL}.same_items */
EIF_BOOLEAN F802_6365 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = (EIF_INTEGER_32) arg2;
		loc2 = (EIF_INTEGER_32) arg3;
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + arg4);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)arg1 + (loc1));
			/* END INLINED CODE */
			tb1 = tb2;
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)Current + (loc2));
			/* END INLINED CODE */
			if ((EIF_BOOLEAN)(tb1 != tb3)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			loc1++;
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {SPECIAL}.valid_index */
EIF_BOOLEAN F802_6366 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg1)) {
		Result = (EIF_BOOLEAN) (arg1 < (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current));
	}
	RTLE;
	return Result;
}

/* {SPECIAL}.put */
void F802_6367 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	*((EIF_BOOLEAN *) Current + arg2) = arg1;
}

void F802_63672 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	*((EIF_BOOLEAN *) Current + arg2) = *(EIF_BOOLEAN *)arg1;
}

/* {SPECIAL}.force */
void F802_6368 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 arg3 = RT_SPECIAL_COUNT(Current);
	*((EIF_BOOLEAN *) Current + arg2) = arg1;
	if (arg2 == arg3) { RT_SPECIAL_COUNT(Current) = arg3 + 1; }
}

void F802_63682 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	*((EIF_BOOLEAN *) Current + arg2) = *(EIF_BOOLEAN *)arg1;
}

/* {SPECIAL}.extend */
void F802_6369 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 arg2 = RT_SPECIAL_COUNT(Current)++;
	*((EIF_BOOLEAN *) Current + arg2) = arg1;
}

void F802_63692 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	
	EIF_INTEGER_32 arg2 = RT_SPECIAL_COUNT(Current)++;
	*((EIF_BOOLEAN *) Current + arg2) = *(EIF_BOOLEAN *)arg1;
}

/* {SPECIAL}.fill_with */
void F802_6371 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 i;
	for (i = arg2; i <= arg3; i++) {
		*((EIF_BOOLEAN *) Current + i) = arg1;
	}
	RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg3 + 1);
}

void F802_63712 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	EIF_INTEGER_32 i;
	EIF_BOOLEAN arg1x = *(EIF_BOOLEAN *)arg1;
	for (i = arg2; i < arg3; i++) {
	*((EIF_BOOLEAN *) Current + i) = arg1x;
	}
	RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg3 + 1);
}

/* {SPECIAL}.copy_data */
void F802_6374 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
		memmove((EIF_BOOLEAN *)Current + (arg3),(EIF_BOOLEAN *)Current + arg2, (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)arg4);
		RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg3 + arg4);
		/* END INLINED CODE */
		;
	} else {
		loc1 = (EIF_INTEGER_32) arg2;
		loc2 = (EIF_INTEGER_32) arg3;
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + arg4);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)arg1 + (loc1));
			/* END INLINED CODE */
			tb1 = tb2;
			F802_6368(Current, tb1, loc2);
			loc1++;
			loc2++;
		}
	}
	RTLE;
}

/* {SPECIAL}.move_data */
void F802_6375 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
	} else {
		if ((EIF_BOOLEAN) (arg1 > arg2)) {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg3) < arg1)) {
				/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
				memcpy((EIF_BOOLEAN *)Current + (arg2),(EIF_BOOLEAN *)Current + arg1, (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)arg3);
				RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg2 + arg3);
				/* END INLINED CODE */
				;
			} else {
				/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
				memmove((EIF_BOOLEAN *)Current + (arg2),(EIF_BOOLEAN *)Current + arg1, (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)arg3);
				RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg2 + arg3);
				/* END INLINED CODE */
				;
			}
		} else {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + arg3) < arg2)) {
				/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
				memcpy((EIF_BOOLEAN *)Current + (arg2),(EIF_BOOLEAN *)Current + arg1, (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)arg3);
				RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg2 + arg3);
				/* END INLINED CODE */
				;
			} else {
				/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
				memmove((EIF_BOOLEAN *)Current + (arg2),(EIF_BOOLEAN *)Current + arg1, (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)arg3);
				RT_SPECIAL_COUNT(Current) = eif_max_int32(RT_SPECIAL_COUNT(Current), arg2 + arg3);
				/* END INLINED CODE */
				;
			}
		}
	}
	RTLE;
}

/* {SPECIAL}.overlapping_move */
void F802_6376 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < arg2)) {
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + arg3) - ((EIF_INTEGER_32) 1L));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - arg1);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg3) >= (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current))) {
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)Current + (arg1));
			/* END INLINED CODE */
			tb1 = tb2;
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
			F802_6371(Current, tb1, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg3) - ((EIF_INTEGER_32) 1L)));
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc2)) break;
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)Current + (loc1));
			/* END INLINED CODE */
			tb1 = tb2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_BOOLEAN *)Current + ((EIF_INTEGER_32) (loc1 + loc3))) = tb1;
			/* END INLINED CODE */
			;
			loc1--;
		}
	} else {
		loc1 = (EIF_INTEGER_32) arg1;
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + arg3);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - arg2);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc2)) break;
			/* INLINED CODE (SPECIAL.item) */
			tb4 = *((EIF_BOOLEAN *)Current + (loc1));
			/* END INLINED CODE */
			tb3 = tb4;
			F802_6368(Current, tb3, (EIF_INTEGER_32) (loc1 - loc3));
			loc1++;
		}
	}
	RTLE;
}

/* {SPECIAL}.non_overlapping_move */
void F802_6377 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg1;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + arg3);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - arg1);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		/* INLINED CODE (SPECIAL.item) */
		tb2 = *((EIF_BOOLEAN *)Current + (loc1));
		/* END INLINED CODE */
		tb1 = tb2;
		F802_6368(Current, tb1, (EIF_INTEGER_32) (loc1 + loc3));
		loc1++;
	}
	RTLE;
}

/* {SPECIAL}.keep_head */
void F802_6378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	eif_builtin_SPECIAL_set_count (Current, arg1);
}

/* {SPECIAL}.remove_tail */
void F802_6381 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
	F802_6378(Current, (EIF_INTEGER_32) (ti4_1 - arg1));
	RTLE;
}

/* {SPECIAL}.resized_area */
EIF_REFERENCE F802_6382 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSP2(eif_non_attached_type(Dftype(Current)),0,arg1,sizeof(EIF_BOOLEAN), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
	ti4_1 = eif_min_int32 (arg1,ti4_1);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_BOOLEAN *)Result + (((EIF_INTEGER_32) 0L)),(EIF_BOOLEAN *)Current + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)ti4_1);
	RT_SPECIAL_COUNT(Result) = eif_max_int32(RT_SPECIAL_COUNT(Result), ((EIF_INTEGER_32) 0L) + ti4_1);
	/* END INLINED CODE */
	;
	RTLE;
	return Result;
}

/* {SPECIAL}.resized_area_with_default */
EIF_REFERENCE F802_6383 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSP2(eif_non_attached_type(Dftype(Current)),0,arg2,sizeof(EIF_BOOLEAN), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	Result = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) (arg2 > (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current))) {
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_BOOLEAN *)Result + (((EIF_INTEGER_32) 0L)),(EIF_BOOLEAN *)Current + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)ti4_1);
		RT_SPECIAL_COUNT(Result) = eif_max_int32(RT_SPECIAL_COUNT(Result), ((EIF_INTEGER_32) 0L) + ti4_1);
		/* END INLINED CODE */
		;
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Current);
		F802_6371(RTCV(Result), arg1, ti4_1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	} else {
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_BOOLEAN *)Result + (((EIF_INTEGER_32) 0L)),(EIF_BOOLEAN *)Current + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)arg2);
		RT_SPECIAL_COUNT(Result) = eif_max_int32(RT_SPECIAL_COUNT(Result), ((EIF_INTEGER_32) 0L) + arg2);
		/* END INLINED CODE */
		;
	}
	RTLE;
	return Result;
}

/* {SPECIAL}.aliased_resized_area */
EIF_REFERENCE F802_6384 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (Current, arg1);
	RTLE;
	return Result;
}

/* {SPECIAL}.aliased_resized_area_with_default */
EIF_REFERENCE F802_6385 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (Current, arg2);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (Result);
	F802_6371(RTCV(Result), arg1, ti4_1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {SPECIAL}.wipe_out */
void F802_6387 (EIF_REFERENCE Current)
{
	GTCX
	
	
	eif_builtin_SPECIAL_set_count (Current, ((EIF_INTEGER_32) 0L));
}

/* {SPECIAL}.clear_all */
void F802_6388 (EIF_REFERENCE Current)
{
	memset (Current, 0, RT_SPECIAL_VISIBLE_SIZE(Current));
}

/* {SPECIAL}.set_count */
void F802_6397 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	eif_builtin_SPECIAL_set_count (Current, arg1);
}

void EIF_Minit599 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
