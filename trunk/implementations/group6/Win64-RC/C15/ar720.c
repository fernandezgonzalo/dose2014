/*
 * Code for class ARRAY [POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar720.h"
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

/* {ARRAY}.make_filled */
void F608_4814 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg3;
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	}
	F479_3213(Current, arg1, loc1);
	RTLE;
}

/* {ARRAY}.make */
void F608_4815 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg2;
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		tr1 = RTLNTY(eif_final_id(Y2231,Y2231_gen_type,Dftype(Current),218));
		tp1 = F775_6312(RTCV(tr1));
		F479_3213(Current, tp1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
	} else {
		F479_3212(Current, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {ARRAY}.make_from_special */
void F608_4817 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F479_3218(Current, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {ARRAY}.item */
EIF_POINTER F608_4819 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp2 = *((EIF_POINTER *)tr1 + ((EIF_INTEGER_32) (arg1 - ti4_1)));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {ARRAY}.at */
EIF_POINTER F608_4820 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp2 = *((EIF_POINTER *)tr1 + ((EIF_INTEGER_32) (arg1 - ti4_1)));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {ARRAY}.count */
EIF_INTEGER_32 F608_4825 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) + ((EIF_INTEGER_32) 1L));
}

/* {ARRAY}.capacity */
EIF_INTEGER_32 F608_4826 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) + ((EIF_INTEGER_32) 1L));
}

/* {ARRAY}.index_set */
EIF_REFERENCE F608_4828 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(599, 599, _OBJSIZ_0_3_0_2_0_0_0_0_);
	F600_4772(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {ARRAY}.is_equal */
EIF_BOOLEAN F608_4829 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_1_);
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1);
		}
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_1_0_);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
		}
		if (tb1) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || (EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)))) break;
					tp1 = F608_4819(Current, loc1);
					tp2 = F608_4819(RTCV(arg1), loc1);
					Result = (EIF_BOOLEAN) (tp1 == tp2);
					loc1++;
				}
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
				ti4_1 = F608_4825(Current);
				Result = F806_6365(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {ARRAY}.valid_index */
EIF_BOOLEAN F608_4834 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 <= arg1) && (EIF_BOOLEAN) (arg1 <= ti4_2));
	return Result;
}

/* {ARRAY}.put */
void F608_4839 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_POINTER *)tr1 + ((EIF_INTEGER_32) (arg2 - ti4_1))) = arg1;
	/* END INLINED CODE */
	;
	RTLE;
}

/* {ARRAY}.grow */
void F608_4857 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > F608_4826(Current))) {
		tr1 = RTLNTY(eif_final_id(Y2231,Y2231_gen_type,Dftype(Current),218));
		tp1 = F775_6312(RTCV(tr1));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_3 = F608_4826(Current);
		F608_4859(Current, tp1, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg1) - ti4_3));
	}
	RTLE;
}

/* {ARRAY}.conservative_resize_with_default */
void F608_4859 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (F608_4871(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F806_6385(RTCV(tr1), arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
		F479_3218(Current, tr1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg2;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg3;
	} else {
		loc2 = eif_min_int32 (arg2,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_));
		loc3 = eif_max_int32 (arg3,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc2) + ((EIF_INTEGER_32) 1L));
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F806_6385(RTCV(tr1), arg1, loc1);
			F479_3218(Current, tr1);
		}
		if ((EIF_BOOLEAN) (loc2 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))) {
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc2);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
			/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
			memmove((EIF_POINTER *)tr1 + (loc4),(EIF_POINTER *)tr1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_POINTER) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)));
			RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), loc4 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)));
			/* END INLINED CODE */
			;
			tr1 = *(EIF_REFERENCE *)(Current);
			F806_6371(RTCV(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc2;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) loc3;
	}
	RTLE;
}

/* {ARRAY}.copy */
void F608_4867 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {ARRAY}.extend */
void F608_4870 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	RTGC;
}

/* {ARRAY}.empty_area */
EIF_BOOLEAN F608_4871 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
		Result = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

void EIF_Minit720 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
