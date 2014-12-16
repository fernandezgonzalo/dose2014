/*
 * Code for class INTEGER_INTERVAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in290.h"
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

/* {INTEGER_INTERVAL}.make */
void F600_4772 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) arg2;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.lower */
EIF_INTEGER_32 F600_4775 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_);
}

/* {INTEGER_INTERVAL}.upper */
EIF_INTEGER_32 F600_4777 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_);
}

/* {INTEGER_INTERVAL}.item */
EIF_INTEGER_32 F600_4778 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) arg1;
}

/* {INTEGER_INTERVAL}.valid_index */
EIF_BOOLEAN F600_4781 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_)) {
		tb1 = (EIF_BOOLEAN) (arg1 <= F600_4777(Current));
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
			tb1 = (EIF_BOOLEAN) (arg1 >= F600_4775(Current));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.capacity */
EIF_INTEGER_32 F600_4783 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	RTLE;
	return (EIF_INTEGER_32) F600_4784(Current);
}

/* {INTEGER_INTERVAL}.count */
EIF_INTEGER_32 F600_4784 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_))) {
		Result = F600_4777(Current);
		ti4_1 = F600_4775(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.index_set */
EIF_REFERENCE F600_4785 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

/* {INTEGER_INTERVAL}.is_equal */
EIF_BOOLEAN F600_4786 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
		tb2 = '\0';
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_1_);
		if (tb3) {
			ti4_1 = F600_4775(RTCV(arg1));
			tb2 = (EIF_BOOLEAN)(F600_4775(Current) == ti4_1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_)) {
			tb2 = '\0';
			tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_2_);
			if (tb3) {
				ti4_1 = F600_4777(RTCV(arg1));
				tb2 = (EIF_BOOLEAN)(F600_4777(Current) == ti4_1);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.extend */
void F600_4790 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < F600_4775(Current))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) arg1;
	} else {
		if ((EIF_BOOLEAN) (arg1 > F600_4777(Current))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) arg1;
		}
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.resize */
void F600_4792 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F600_4775(Current);
	ti4_1 = eif_min_int32 (arg1,ti4_1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F600_4777(Current);
	ti4_1 = eif_max_int32 (arg2,ti4_1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {INTEGER_INTERVAL}.grow */
void F600_4794 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (F600_4783(Current) < arg1)) {
		ti4_1 = F600_4775(Current);
		ti4_2 = F600_4775(Current);
		F600_4792(Current, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg1) - ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.copy */
void F600_4800 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

void EIF_Minit290 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
