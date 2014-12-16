/*
 * Code for class READABLE_STRING_GENERAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re308.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READABLE_STRING_GENERAL}.make_empty */
void F733_5554 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4577[Dtype(Current)-734])(Current, ((EIF_INTEGER_32) 0L));
}

/* {READABLE_STRING_GENERAL}.index_of */
EIF_INTEGER_32 F733_5557 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current);
	if ((EIF_BOOLEAN) (arg2 <= loc2)) {
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[dtype-735])(Current, loc1) == arg1);
			}
			if (tb1) break;
			loc1++;
		}
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTLE;
			return (EIF_INTEGER_32) loc1;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_GENERAL}.hash_code */
EIF_INTEGER_32 F733_5563 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current + O4669[dtype-732]);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[dtype-735])(Current, loc1);
			ti4_2 = (EIF_INTEGER_32) (tw1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
			loc1++;
		}
		*(EIF_INTEGER_32 *)(Current + O4669[dtype-732]) = (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.case_insensitive_hash_code */
EIF_INTEGER_32 F733_5564 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current + O4670[dtype-732]);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current);
		loc1 = RTOSCF(5645,F733_5645,(Current));
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > loc3)) break;
			ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[dtype-735])(Current, loc2);
			tw1 = F24_282(RTCV(loc1), tw1);
			ti4_2 = (EIF_INTEGER_32) (tw1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
			loc2++;
		}
		*(EIF_INTEGER_32 *)(Current + O4670[dtype-732]) = (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.valid_index */
EIF_BOOLEAN F733_5566 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(Current)-734])(Current));
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_double */
EIF_BOOLEAN F733_5580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOSCF(5643,F733_5643,(Current));
	F154_1920(RTCV(loc1), Current, ((EIF_INTEGER_32) 101L));
	tb1 = F154_1913(RTCV(loc1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {READABLE_STRING_GENERAL}.is_integer */
EIF_BOOLEAN F733_5585 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F733_5639(Current, ((EIF_INTEGER_32) 3L));
}

/* {READABLE_STRING_GENERAL}.is_integer_32 */
EIF_BOOLEAN F733_5586 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F733_5639(Current, ((EIF_INTEGER_32) 3L));
}

/* {READABLE_STRING_GENERAL}.is_natural_64 */
EIF_BOOLEAN F733_5592 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F733_5639(Current, ((EIF_INTEGER_32) 14L));
}

/* {READABLE_STRING_GENERAL}.is_case_insensitive_equal */
EIF_BOOLEAN F733_5596 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(Current)-734])(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F733_5597(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_caseless_characters */
EIF_BOOLEAN F733_5597 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,arg1);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		loc4 = RTOSCF(5645,F733_5645,(Current));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (EIF_INTEGER_32) arg4;
		loc2 = (EIF_INTEGER_32) arg2;
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			loc5 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[dtype-735])(Current, loc1);
			loc6 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(arg1)-735])(RTCV(arg1), loc2);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc5 != loc6)) {
				tw1 = F24_282(RTCV(loc4), loc5);
				tw2 = F24_282(RTCV(loc4), loc6);
				tb1 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb1) {
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

/* {READABLE_STRING_GENERAL}.same_string */
EIF_BOOLEAN F733_5599 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(Current)-734])(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F733_5600(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_characters */
EIF_BOOLEAN F733_5600 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (EIF_INTEGER_32) arg4;
		loc2 = (EIF_INTEGER_32) arg2;
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(arg1)-735])(RTCV(arg1), loc2);
			if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[dtype-735])(Current, loc1) != tw1)) {
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

/* {READABLE_STRING_GENERAL}.starts_with */
EIF_BOOLEAN F733_5601 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
		if ((EIF_BOOLEAN) (loc1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current))) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
				tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
				if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[dtype-735])(Current, loc1) != tu4_1)) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
				loc1--;
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_string_8 */
EIF_REFERENCE F733_5607 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F733_5610(Current);
}

/* {READABLE_STRING_GENERAL}.as_readable_string_8 */
EIF_REFERENCE F733_5609 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F733_5610(Current);
}

/* {READABLE_STRING_GENERAL}.as_string_8 */
EIF_REFERENCE F733_5610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc4 = Current;
	loc4 = RTRV(eif_non_attached_type(740),loc4);
	if (EIF_TEST(loc4)) {
		RTLE;
		return (EIF_REFERENCE) loc4;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current);
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F737_5723(RTCV(tr1), loc2);
		Result = (EIF_REFERENCE) tr1;
		F741_5986(RTCV(Result), loc2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[dtype-735])(Current, loc1);
			tb1 = F737_5758(RTCV(Result), loc3);
			if (tb1) {
				F741_5926(RTCV(Result), loc3, loc1);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				F741_5926(RTCV(Result), tu4_1, loc1);
			}
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_readable_string_32 */
EIF_REFERENCE F733_5612 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F733_5613(Current);
}

/* {READABLE_STRING_GENERAL}.as_string_32 */
EIF_REFERENCE F733_5613 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc3 = Current;
	loc3 = RTRV(eif_non_attached_type(739),loc3);
	if (EIF_TEST(loc3)) {
		RTLE;
		return (EIF_REFERENCE) loc3;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current);
		tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F735_5650(RTCV(tr1), loc2);
		Result = (EIF_REFERENCE) tr1;
		F740_5895(RTCV(Result), loc2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[dtype-735])(Current, loc1);
			F740_5835(RTCV(Result), tu4_1, loc1);
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_string_32 */
EIF_REFERENCE F733_5614 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc3 = Current;
	loc3 = RTRV(eif_non_attached_type(739),loc3);
	if (EIF_TEST(loc3)) {
		RTLE;
		return (EIF_REFERENCE) loc3;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current);
		tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F735_5650(RTCV(tr1), loc2);
		Result = (EIF_REFERENCE) tr1;
		F740_5895(RTCV(Result), loc2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[dtype-735])(Current, loc1);
			F740_5835(RTCV(Result), tu4_1, loc1);
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_integer */
EIF_INTEGER_32 F733_5619 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOSCF(5642,F733_5642,(Current));
	F153_1888(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	ti4_1 = F153_1896(RTCV(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {READABLE_STRING_GENERAL}.to_integer_32 */
EIF_INTEGER_32 F733_5620 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOSCF(5642,F733_5642,(Current));
	F153_1888(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	ti4_1 = F153_1896(RTCV(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {READABLE_STRING_GENERAL}.to_natural_64 */
EIF_NATURAL_64 F733_5626 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_64 tu8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOSCF(5642,F733_5642,(Current));
	F153_1888(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	tu8_1 = F153_1902(RTCV(loc1));
	RTLE;
	return (EIF_NATURAL_64) tu8_1;
}

/* {READABLE_STRING_GENERAL}.to_double */
EIF_REAL_64 F733_5629 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOSCF(5643,F733_5643,(Current));
	F154_1920(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	tr8_1 = F154_1917(RTCV(loc1));
	RTLE;
	return (EIF_REAL_64) tr8_1;
}

/* {READABLE_STRING_GENERAL}.to_real_64 */
EIF_REAL_64 F733_5630 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOSCF(5643,F733_5643,(Current));
	F154_1920(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	tr8_1 = F154_1917(RTCV(loc1));
	RTLE;
	return (EIF_REAL_64) tr8_1;
}

/* {READABLE_STRING_GENERAL}.split */
EIF_REFERENCE F733_5632 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Result);
	
	RTGC;
	loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[dtype-734])(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {665,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F666_5008(RTCV(tr1), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc3 > loc5)) break;
			loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_32, EIF_INTEGER_32)) R4581[dtype-732])(Current, arg1, loc3);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L));
			}
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[dtype-735])(Current, loc3, (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc1)-395])(RTCV(loc1), loc2);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		}
		if ((EIF_BOOLEAN)(loc4 == loc5)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4661[dtype-735])(Current, ((EIF_INTEGER_32) 0L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc1)-395])(RTCV(loc1), tr1);
		}
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4661[dtype-735])(Current, ((EIF_INTEGER_32) 0L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc1)-395])(RTCV(loc1), tr1);
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_valid_integer_or_natural */
EIF_BOOLEAN F733_5639 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOSCF(5642,F733_5642,(Current));
	F153_1883(RTCV(loc1), arg1);
	F153_1888(RTCV(loc1), Current, arg1);
	tb1 = F153_1892(RTCV(loc1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {READABLE_STRING_GENERAL}.c_string_provider */
static EIF_REFERENCE F733_5641_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (5641);
#define Result RTOSR(5641)
	RTOC_NEW(Result);
	tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F432_2732(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (5641);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F733_5641 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5641,F733_5641_body,(Current));
}

/* {READABLE_STRING_GENERAL}.ctoi_convertor */
static EIF_REFERENCE F733_5642_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (5642);
#define Result RTOSR(5642)
	RTOC_NEW(Result);
	tr1 = RTLNS(152, 152, _OBJSIZ_2_3_0_3_0_0_4_0_);
	F153_1882(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H(" ",1,32);
	F151_1850(RTCV(Result), tr1);
	tr1 = RTMS_EX_H(" ",1,32);
	F151_1851(RTCV(Result), tr1);
	F151_1849(RTCV(Result), (EIF_BOOLEAN) 1);
	F151_1848(RTCV(Result), (EIF_BOOLEAN) 1);
	RTOSE (5642);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F733_5642 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5642,F733_5642_body,(Current));
}

/* {READABLE_STRING_GENERAL}.ctor_convertor */
static EIF_REFERENCE F733_5643_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (5643);
#define Result RTOSR(5643)
	RTOC_NEW(Result);
	tr1 = RTLNS(153, 153, _OBJSIZ_2_6_0_4_0_0_2_3_);
	F154_1907(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H(" ",1,32);
	F151_1850(RTCV(Result), tr1);
	tr1 = RTMS_EX_H(" ",1,32);
	F151_1851(RTCV(Result), tr1);
	F151_1849(RTCV(Result), (EIF_BOOLEAN) 1);
	F151_1848(RTCV(Result), (EIF_BOOLEAN) 1);
	RTOSE (5643);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F733_5643 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5643,F733_5643_body,(Current));
}

/* {READABLE_STRING_GENERAL}.character_properties */
static EIF_REFERENCE F733_5645_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (5645);
#define Result RTOSR(5645)
	RTOC_NEW(Result);
	tr1 = RTLNS(23, 23, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (5645);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F733_5645 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5645,F733_5645_body,(Current));
}

void EIF_Minit308 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
