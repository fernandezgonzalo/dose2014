/*
 * Code for class PERCENT_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pe106.h"
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

/* {PERCENT_ENCODER}.percent_encoded_string */
EIF_REFERENCE F126_1638 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	F737_5723(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F126_1639(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {PERCENT_ENCODER}.append_percent_encoded_string_to */
void F126_1639 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		loc1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc2);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
		if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
			tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
		}
		if (!(tb3)) {
			tb3 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 90L);
				tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb2 = tb3;
		}
		if (!tb2) {
			tb2 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 122L);
				tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			F739_5795(RTCV(arg2), loc1);
		} else {
			switch (loc1) {
				case 45U:
				case 46U:
				case 95U:
				case 126U:
					F739_5795(RTCV(arg2), loc1);
					break;
				case 33U:
				case 36U:
				case 37U:
				case 38U:
				case 39U:
				case 40U:
				case 41U:
				case 42U:
				case 43U:
				case 44U:
				case 58U:
				case 59U:
				case 61U:
				case 64U:
					F126_1642(Current, loc1, arg2);
					break;
				default:
					F126_1642(Current, loc1, arg2);
					break;
			}
		}
		loc2++;
	}
	RTLE;
}

/* {PERCENT_ENCODER}.append_percent_encoded_character_code_to */
void F126_1642 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
		F126_1644(Current, arg1, arg2);
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
			F126_1644(Current, arg1, arg2);
		} else {
			F126_1643(Current, arg1, arg2);
		}
	}
	RTLE;
}

/* {PERCENT_ENCODER}.append_percent_encoded_ascii_character_code_to */
void F126_1643 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
		F126_1644(Current, arg1, arg2);
	} else {
		loc1 = (EIF_INTEGER_32) arg1;
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		F739_5795(RTCV(arg2), tu4_1);
		tr1 = RTOSCF(1657,F126_1657,(Current));
		ti4_1 = eif_bit_shift_right(loc1,((EIF_INTEGER_32) 4L));
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		F739_5795(RTCV(arg2), tu4_1);
		tr1 = RTOSCF(1657,F126_1657,(Current));
		ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 15L));
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		F739_5795(RTCV(arg2), tu4_1);
	}
	RTLE;
}

/* {PERCENT_ENCODER}.append_percent_encoded_unicode_character_code_to */
void F126_1644 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
		F126_1643(Current, arg1, arg2);
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
		if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
			tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
			tu4_1 = eif_bit_or((tu4_1),tu4_2);
			F126_1643(Current, tu4_1, arg2);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
			tu4_1 = eif_bit_and(arg1,tu4_1);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
			tu4_1 = eif_bit_or((tu4_1),tu4_2);
			F126_1643(Current, tu4_1, arg2);
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
			if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 12L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F126_1643(Current, tu4_1, arg2);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and((tu4_1),tu4_2);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F126_1643(Current, tu4_1, arg2);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(arg1,tu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F126_1643(Current, tu4_1, arg2);
			} else {
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 18L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F126_1643(Current, tu4_1, arg2);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 12L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and((tu4_1),tu4_2);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F126_1643(Current, tu4_1, arg2);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and((tu4_1),tu4_2);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F126_1643(Current, tu4_1, arg2);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(arg1,tu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F126_1643(Current, tu4_1, arg2);
			}
		}
	}
	RTLE;
}

/* {PERCENT_ENCODER}.percent_decoded_string */
EIF_REFERENCE F126_1645 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F126_1646(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {PERCENT_ENCODER}.append_percent_decoded_string_to */
void F126_1646 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,arg2);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,arg1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc6 = arg2;
	loc6 = RTRV(eif_non_attached_type(739),loc6);
	loc5 = (EIF_BOOLEAN) EIF_TEST(loc6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {101,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 101, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F102_1422(RTCV(tr1), loc1);
	loc4 = (EIF_REFERENCE) tr1;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		switch (loc3) {
			case 43U:
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
				F739_5795(RTCV(arg2), tu4_1);
				break;
			case 37U:
				if ((EIF_BOOLEAN)(loc1 == loc2)) {
					*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					F739_5795(RTCV(arg2), loc3);
				} else {
					if (loc5) {
						F102_1423(RTCV(loc4), loc1);
						loc3 = F126_1648(Current, arg1, loc4);
						F739_5795(RTCV(arg2), loc3);
						loc1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc4)-97])(RTCV(loc4)));
					} else {
						F102_1423(RTCV(loc4), loc1);
						loc3 = F126_1647(Current, arg1, loc4);
						F739_5795(RTCV(arg2), loc3);
						loc1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc4)-97])(RTCV(loc4)));
					}
				}
				break;
			default:
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
				if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
					F739_5795(RTCV(arg2), loc3);
				} else {
					if (loc5) {
						F739_5795(RTCV(arg2), loc3);
					} else {
						F126_1642(Current, loc3, arg2);
					}
				}
				break;
		}
		loc1++;
	}
	RTLE;
}

/* {PERCENT_ENCODER}.next_percent_decoded_character_code */
EIF_NATURAL_32 F126_1647 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	loc7 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(arg2)-97])(RTCV(arg2)));
	loc1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)));
	tb1 = '\01';
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 85L);
	if (!(EIF_BOOLEAN)(loc1 == tu4_1)) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 117L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu4_1);
	}
	if (tb1) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			loc1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc2);
			loc8 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
				loc8 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			loc8 = (EIF_BOOLEAN) loc8;
			tb1 = '\01';
			tb2 = '\01';
			if (!loc8) {
				tb3 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
				if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 102L);
					tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
				}
				tb2 = tb3;
			}
			if (!tb2) {
				tb2 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
				if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L);
					tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
				}
				tb1 = tb2;
			}
			if (tb1) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
				loc6 *= tu4_1;
				if (loc8) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
					loc6 += (EIF_NATURAL_32) (loc1 - tu4_1);
				} else {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L);
					if ((EIF_BOOLEAN) (loc1 > tu4_1)) {
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - tu4_1)) + tu4_2);
					} else {
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - tu4_1)) + tu4_2);
					}
				}
				loc2++;
			} else {
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc2--;
			}
		}
		F102_1423(RTCV(arg2), loc2);
		RTLE;
		return (EIF_NATURAL_32) loc6;
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L)));
		loc5 = F126_1659(Current, tr1);
		Result = (EIF_NATURAL_32) loc5;
		F102_1423(RTCV(arg2), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L)));
	}
	RTLE;
	return Result;
}

/* {PERCENT_ENCODER}.next_percent_decoded_unicode_character_code */
EIF_NATURAL_32 F126_1648 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc8);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,arg1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {101,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 101, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(arg2)-97])(RTCV(arg2)));
	F102_1422(RTCV(tr1), ti4_1);
	loc8 = (EIF_REFERENCE) tr1;
	loc4 = F126_1647(Current, arg1, loc8);
	loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc8)-97])(RTCV(loc8)));
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	Result = (EIF_NATURAL_32) loc4;
	F102_1423(RTCV(arg2), loc2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
		RTLE;
		return (EIF_NATURAL_32) loc4;
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L);
		if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
				loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
				if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
					F102_1423(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
					loc5 = F126_1647(Current, arg1, loc8);
					loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc8)-97])(RTCV(loc8)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
					tu4_1 = eif_bit_and(loc4,tu4_1);
					tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 6L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and(loc5,tu4_2);
					Result = eif_bit_or((tu4_1),tu4_2);
					Result = (EIF_NATURAL_32) Result;
					F102_1423(RTCV(arg2), loc2);
				}
			}
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L);
			if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
					loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
					if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
						F102_1423(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
						loc5 = F126_1647(Current, arg1, loc8);
						loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc8)-97])(RTCV(loc8)));
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
							loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
							if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
								F102_1423(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
								loc6 = F126_1647(Current, arg1, loc8);
								loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc8)-97])(RTCV(loc8)));
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
								tu4_1 = eif_bit_and(loc4,tu4_1);
								tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 12L));
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(loc5,tu4_2);
								tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
								tu4_1 = eif_bit_or((tu4_1),tu4_2);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(loc6,tu4_2);
								Result = eif_bit_or(tu4_1,tu4_2);
								Result = (EIF_NATURAL_32) Result;
								F102_1423(RTCV(arg2), loc2);
							}
						}
					}
				}
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L);
				if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
						loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
						if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
							F102_1423(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
							loc5 = F126_1647(Current, arg1, loc8);
							loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc8)-97])(RTCV(loc8)));
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
								loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
								if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
									F102_1423(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
									loc6 = F126_1647(Current, arg1, loc8);
									loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc8)-97])(RTCV(loc8)));
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
										loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
										if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
											F102_1423(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
											loc7 = F126_1647(Current, arg1, loc8);
											loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(loc8)-97])(RTCV(loc8)));
											F102_1423(RTCV(arg2), loc2);
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
											tu4_1 = eif_bit_and(loc4,tu4_1);
											tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 18L));
											tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_2 = eif_bit_and(loc5,tu4_2);
											tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 12L));
											tu4_1 = eif_bit_or((tu4_1),tu4_2);
											tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_2 = eif_bit_and(loc6,tu4_2);
											tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
											tu4_1 = eif_bit_or(tu4_1,tu4_2);
											tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_2 = eif_bit_and(loc7,tu4_2);
											Result = eif_bit_or(tu4_1,tu4_2);
											Result = (EIF_NATURAL_32) Result;
										}
									}
								}
							}
						}
					}
				} else {
					RTLE;
					return (EIF_NATURAL_32) loc4;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {PERCENT_ENCODER}.hex_digit */
static EIF_REFERENCE F126_1657_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1657);
#define Result RTOSR(1657)
	RTOC_NEW(Result);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	{
		static EIF_TYPE_INDEX typarr0[] = {806,845,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 16L),sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	F807_6350(RTCV(tr1), tu4_1, ((EIF_INTEGER_32) 16L));
	Result = (EIF_REFERENCE) tr1;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 0L))) = ((EIF_NATURAL_32) 48U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 1L))) = ((EIF_NATURAL_32) 49U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 2L))) = ((EIF_NATURAL_32) 50U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 3L))) = ((EIF_NATURAL_32) 51U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 4L))) = ((EIF_NATURAL_32) 52U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 5L))) = ((EIF_NATURAL_32) 53U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 6L))) = ((EIF_NATURAL_32) 54U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 7L))) = ((EIF_NATURAL_32) 55U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 8L))) = ((EIF_NATURAL_32) 56U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 9L))) = ((EIF_NATURAL_32) 57U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 10L))) = ((EIF_NATURAL_32) 65U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 11L))) = ((EIF_NATURAL_32) 66U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 12L))) = ((EIF_NATURAL_32) 67U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 13L))) = ((EIF_NATURAL_32) 68U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 14L))) = ((EIF_NATURAL_32) 69U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 15L))) = ((EIF_NATURAL_32) 70U);
	/* END INLINED CODE */
	;
	RTOSE (1657);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F126_1657 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1657,F126_1657_body,(Current));
}

/* {PERCENT_ENCODER}.hexadecimal_string_to_natural_32 */
EIF_NATURAL_32 F126_1659 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = RTOSCF(1660,F126_1660,(Current));
	F152_1862(RTCV(loc1), arg1, ((EIF_INTEGER_32) 0L));
	tu4_1 = F152_1874(RTCV(loc1));
	RTLE;
	return (EIF_NATURAL_32) tu4_1;
}

/* {PERCENT_ENCODER}.ctoi_convertor */
static EIF_REFERENCE F126_1660_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1660);
#define Result RTOSR(1660)
	RTOC_NEW(Result);
	tr1 = RTLNS(151, 151, _OBJSIZ_2_4_0_3_0_0_4_0_);
	F152_1856(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F151_1849(RTCV(Result), (EIF_BOOLEAN) 0);
	F151_1848(RTCV(Result), (EIF_BOOLEAN) 0);
	RTOSE (1660);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F126_1660 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1660,F126_1660_body,(Current));
}

void EIF_Minit106 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
