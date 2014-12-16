/*
 * Code for class reference UTF_CONVERTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ut28.h"
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

/* {UTF_CONVERTER}.utf_8_bytes_count */
EIF_INTEGER_32 F27_369 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		loc2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc2 <= tu4_1)) {
			Result++;
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
			if ((EIF_BOOLEAN) (loc2 <= tu4_1)) {
				Result += ((EIF_INTEGER_32) 2L);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
				if ((EIF_BOOLEAN) (loc2 <= tu4_1)) {
					Result += ((EIF_INTEGER_32) 3L);
				} else {
					Result += ((EIF_INTEGER_32) 4L);
				}
			}
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_bytes_count */
EIF_INTEGER_32 F27_371 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		loc2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
		if ((EIF_BOOLEAN) (loc2 <= tu4_1)) {
			Result += ((EIF_INTEGER_32) 2L);
		} else {
			Result += ((EIF_INTEGER_32) 4L);
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_32_string_to_utf_8_string_8 */
EIF_REFERENCE F27_375 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F27_376(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_32_string_into_utf_8_string_8 */
void F27_376 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	F741_5970(RTCV(arg2), (EIF_INTEGER_32) (ti4_1 + loc2));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		loc1++;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
			tc1 = (EIF_CHARACTER_8) loc3;
			F741_5953(RTCV(arg2), tc1);
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
			if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
				tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				tc1 = (EIF_CHARACTER_8) tu4_1;
				F741_5953(RTCV(arg2), tc1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(loc3,tu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				tc1 = (EIF_CHARACTER_8) tu4_1;
				F741_5953(RTCV(arg2), tc1);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
				if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 12L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and((tu4_1),tu4_2);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc3,tu4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
				} else {
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 18L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 12L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and((tu4_1),tu4_2);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and((tu4_1),tu4_2);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc3,tu4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.escaped_utf_32_substring_into_utf_8_0_pointer */
void F27_377 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg4);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,arg6);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	loc4 = *(EIF_INTEGER_32 *)(RTCV(arg4)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg5) < (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)))) {
		loc4 = F27_369(Current, arg1, arg2, arg3);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + loc4) + ((EIF_INTEGER_32) 1L));
		F507_3599(RTCV(arg4), loc4);
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc3 = (EIF_INTEGER_32) arg5;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= arg3)) break;
		loc1++;
		loc5 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc5 == tu4_1)) {
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U);
			}
			if (tb1) {
				loc1++;
			} else {
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc2)) {
					loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
					if (F27_431(Current, loc6)) {
						loc5 = F27_432(Current, loc6);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
						if ((EIF_BOOLEAN) (loc5 <= tu4_1)) {
							loc5 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
						} else {
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 += ((EIF_INTEGER_32) 2L);
						}
					}
				}
			}
		}
		if ((EIF_BOOLEAN) !loc7) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
			if ((EIF_BOOLEAN) (loc5 <= tu4_1)) {
				tu1_1 = (EIF_NATURAL_8) loc5;
				F507_3542(RTCV(arg4), tu1_1, loc3);
				loc3++;
			} else {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc8 && ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L)) + (EIF_INTEGER_32) (arg3 - loc1)) > loc4)))) {
					loc4 = F27_369(Current, arg1, loc1, arg3);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + ((EIF_INTEGER_32) 1L));
					F507_3599(RTCV(arg4), loc4);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
				if ((EIF_BOOLEAN) (loc5 <= tu4_1)) {
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg4), tu1_1, loc3);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc5,tu4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
					loc3 += ((EIF_INTEGER_32) 2L);
				} else {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
					if ((EIF_BOOLEAN) (loc5 <= tu4_1)) {
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F507_3542(RTCV(arg4), tu1_1, loc3);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and((tu4_1),tu4_2);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F507_3542(RTCV(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and(loc5,tu4_1);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F507_3542(RTCV(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
						loc3 += ((EIF_INTEGER_32) 3L);
					} else {
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 18L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F507_3542(RTCV(arg4), tu1_1, loc3);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and((tu4_1),tu4_2);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F507_3542(RTCV(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and((tu4_1),tu4_2);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F507_3542(RTCV(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and(loc5,tu4_1);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F507_3542(RTCV(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L)));
						loc3 += ((EIF_INTEGER_32) 4L);
					}
				}
			}
		} else {
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tu1_1 = (EIF_NATURAL_8) loc5;
			F507_3542(RTCV(arg4), tu1_1, loc3);
			loc3++;
		}
	}
	if (loc8) {
		F507_3599(RTCV(arg4), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
	}
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	F507_3542(RTCV(arg4), tu1_1, loc3);
	if ((EIF_BOOLEAN)(arg6 != NULL)) {
		F102_1422(RTCV(arg6), loc3);
	}
	RTLE;
}

/* {UTF_CONVERTER}.escaped_utf_32_string_into_utf_8_string_8 */
void F27_379 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc4);
	RTLR(3,Current);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	F741_5970(RTCV(arg2), (EIF_INTEGER_32) (ti4_1 + loc2));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		loc1++;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U);
			}
			if (tb1) {
				loc1++;
			} else {
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc2)) {
					loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
					if (F27_431(Current, loc4)) {
						loc3 = F27_432(Current, loc4);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
						if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
							loc3 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
						} else {
							loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 += ((EIF_INTEGER_32) 2L);
						}
					}
				}
			}
		}
		if ((EIF_BOOLEAN) !loc5) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
			if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
				tc1 = (EIF_CHARACTER_8) loc3;
				F741_5953(RTCV(arg2), tc1);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
				if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc3,tu4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F741_5953(RTCV(arg2), tc1);
				} else {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
					if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 12L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tc1 = (EIF_CHARACTER_8) tu4_1;
						F741_5953(RTCV(arg2), tc1);
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and((tu4_1),tu4_2);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tc1 = (EIF_CHARACTER_8) tu4_1;
						F741_5953(RTCV(arg2), tc1);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and(loc3,tu4_1);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tc1 = (EIF_CHARACTER_8) tu4_1;
						F741_5953(RTCV(arg2), tc1);
					} else {
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 18L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tc1 = (EIF_CHARACTER_8) tu4_1;
						F741_5953(RTCV(arg2), tc1);
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 12L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and((tu4_1),tu4_2);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tc1 = (EIF_CHARACTER_8) tu4_1;
						F741_5953(RTCV(arg2), tc1);
						tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and((tu4_1),tu4_2);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tc1 = (EIF_CHARACTER_8) tu4_1;
						F741_5953(RTCV(arg2), tc1);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_1 = eif_bit_and(loc3,tu4_1);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tc1 = (EIF_CHARACTER_8) tu4_1;
						F741_5953(RTCV(arg2), tc1);
					}
				}
			}
		} else {
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tc1 = (EIF_CHARACTER_8) loc3;
			F741_5953(RTCV(arg2), tc1);
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_32_string_into_utf_8_0_pointer */
void F27_381 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg4);
	
	RTGC;
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	loc4 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg3) < (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)))) {
		loc4 = F27_369(Current, arg1, ((EIF_INTEGER_32) 1L), loc3);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + loc4) + ((EIF_INTEGER_32) 1L));
		F507_3599(RTCV(arg2), loc4);
		loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = (EIF_INTEGER_32) arg3;
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
		loc2++;
		loc5 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc2);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc5 <= tu4_1)) {
			tu1_1 = (EIF_NATURAL_8) loc5;
			F507_3542(RTCV(arg2), tu1_1, loc1);
			loc1++;
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc6 && ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L)) + (EIF_INTEGER_32) (loc3 - loc2)) > loc4)))) {
				loc4 = F27_369(Current, arg1, loc2, loc3);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) + ((EIF_INTEGER_32) 1L));
				F507_3599(RTCV(arg2), loc4);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
			if ((EIF_BOOLEAN) (loc5 <= tu4_1)) {
				tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				F507_3542(RTCV(arg2), tu1_1, loc1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(loc5,tu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				F507_3542(RTCV(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc1 += ((EIF_INTEGER_32) 2L);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
				if ((EIF_BOOLEAN) (loc5 <= tu4_1)) {
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg2), tu1_1, loc1);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and((tu4_1),tu4_2);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc5,tu4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
					loc1 += ((EIF_INTEGER_32) 3L);
				} else {
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 18L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg2), tu1_1, loc1);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and((tu4_1),tu4_2);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and((tu4_1),tu4_2);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc5,tu4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F507_3542(RTCV(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L)));
					loc1 += ((EIF_INTEGER_32) 4L);
				}
			}
		}
	}
	if (loc6) {
		F507_3599(RTCV(arg2), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	}
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	F507_3542(RTCV(arg2), tu1_1, loc1);
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		F102_1422(RTCV(arg4), loc1);
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_8_0_pointer_to_escaped_string_32 */
EIF_REFERENCE F27_384 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F27_385(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_0_pointer_into_escaped_string_32 */
void F27_385 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
	F27_387(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1, arg2);
	RTLE;
}

/* {UTF_CONVERTER}.utf_8_0_subpointer_into_escaped_string_32 */
void F27_387 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg5);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg5)+ _LNGOFF_1_1_0_2_);
	F740_5879(RTCV(arg5), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg3) - arg2) + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		loc2 = F507_3526(RTCV(arg1), loc1);
		tb1 = '\0';
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(loc2 == tu1_1)) {
			tb1 = arg4;
		}
		if (tb1) {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
		} else {
			tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L);
			if ((EIF_BOOLEAN) (loc2 <= tu1_1)) {
				tw1 = (EIF_CHARACTER_32) loc2;
				F740_5862(RTCV(arg5), tw1);
				loc1++;
			} else {
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L);
				tu1_1 = eif_bit_and(loc2,tu1_1);
				tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
				if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
					if ((EIF_BOOLEAN) (loc1 < arg3)) {
						loc3 = F507_3526(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
						tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
						tu1_1 = eif_bit_and(loc3,tu1_1);
						tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
						if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
							tu4_1 = (EIF_NATURAL_32) loc2;
							tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
							tu4_1 = eif_bit_and(tu4_1,tu4_2);
							tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 6L));
							tu4_2 = (EIF_NATURAL_32) loc3;
							tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							tu4_2 = eif_bit_and(tu4_2,tu4_3);
							tu4_1 = eif_bit_or((tu4_1),tu4_2);
							tw1 = (EIF_CHARACTER_32) tu4_1;
							F740_5862(RTCV(arg5), tw1);
							loc1 += ((EIF_INTEGER_32) 2L);
						} else {
							tu2_1 = (EIF_NATURAL_16) loc2;
							F27_430(Current, arg5, tu2_1);
							loc1++;
						}
					} else {
						tu2_1 = (EIF_NATURAL_16) loc2;
						F27_430(Current, arg5, tu2_1);
						loc1++;
					}
				} else {
					tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
					tu1_1 = eif_bit_and(loc2,tu1_1);
					tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L);
					if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < arg3)) {
							loc3 = F507_3526(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
							loc4 = F507_3526(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
							tb1 = '\0';
							tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
							tu1_1 = eif_bit_and(loc3,tu1_1);
							tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
							if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
								tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
								tu1_1 = eif_bit_and(loc4,tu1_1);
								tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
								tb1 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
							}
							if (tb1) {
								tu4_1 = (EIF_NATURAL_32) loc2;
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
								tu4_1 = eif_bit_and(tu4_1,tu4_2);
								tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 12L));
								tu4_2 = (EIF_NATURAL_32) loc3;
								tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(tu4_2,tu4_3);
								tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
								tu4_1 = eif_bit_or((tu4_1),tu4_2);
								tu4_2 = (EIF_NATURAL_32) loc4;
								tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(tu4_2,tu4_3);
								tu4_1 = eif_bit_or(tu4_1,tu4_2);
								loc6 = (EIF_CHARACTER_32) tu4_1;
								F740_5862(RTCV(arg5), loc6);
								loc1 += ((EIF_INTEGER_32) 3L);
							} else {
								tu2_1 = (EIF_NATURAL_16) loc2;
								F27_430(Current, arg5, tu2_1);
								loc1++;
							}
						} else {
							tu2_1 = (EIF_NATURAL_16) loc2;
							F27_430(Current, arg5, tu2_1);
							loc1++;
						}
					} else {
						tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
						tu1_1 = eif_bit_and(loc2,tu1_1);
						tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
						if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) < arg3)) {
								loc3 = F507_3526(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
								loc4 = F507_3526(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
								loc5 = F507_3526(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L)));
								tb1 = '\0';
								tb2 = '\0';
								tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
								tu1_1 = eif_bit_and(loc3,tu1_1);
								tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
								if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
									tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
									tu1_1 = eif_bit_and(loc4,tu1_1);
									tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
									tb2 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
								}
								if (tb2) {
									tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
									tu1_1 = eif_bit_and(loc5,tu1_1);
									tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
									tb1 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
								}
								if (tb1) {
									tu4_1 = (EIF_NATURAL_32) loc2;
									tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
									tu4_1 = eif_bit_and(tu4_1,tu4_2);
									tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 18L));
									tu4_2 = (EIF_NATURAL_32) loc3;
									tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
									tu4_2 = eif_bit_and(tu4_2,tu4_3);
									tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 12L));
									tu4_1 = eif_bit_or((tu4_1),tu4_2);
									tu4_2 = (EIF_NATURAL_32) loc4;
									tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
									tu4_2 = eif_bit_and(tu4_2,tu4_3);
									tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
									tu4_1 = eif_bit_or(tu4_1,tu4_2);
									tu4_2 = (EIF_NATURAL_32) loc5;
									tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
									tu4_2 = eif_bit_and(tu4_2,tu4_3);
									tu4_1 = eif_bit_or(tu4_1,tu4_2);
									tw1 = (EIF_CHARACTER_32) tu4_1;
									F740_5862(RTCV(arg5), tw1);
									loc1 += ((EIF_INTEGER_32) 4L);
								} else {
									tu2_1 = (EIF_NATURAL_16) loc2;
									F27_430(Current, arg5, tu2_1);
									loc1++;
								}
							} else {
								tu2_1 = (EIF_NATURAL_16) loc2;
								F27_430(Current, arg5, tu2_1);
								loc1++;
							}
						} else {
							tu2_1 = (EIF_NATURAL_16) loc2;
							F27_430(Current, arg5, tu2_1);
							loc1++;
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_8_string_8_to_string_32 */
EIF_REFERENCE F27_388 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F27_389(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_string_8_into_string_32 */
void F27_389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	F740_5879(RTCV(arg2), (EIF_INTEGER_32) (ti4_1 + loc2));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		loc1++;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
			tw1 = (EIF_CHARACTER_32) loc3;
			F740_5862(RTCV(arg2), tw1);
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L);
			if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
				loc1++;
				if ((EIF_BOOLEAN) (loc1 <= loc2)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
					tu4_1 = eif_bit_and(loc3,tu4_1);
					tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 6L));
					tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
					tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and(tu4_2,tu4_3);
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tw1 = (EIF_CHARACTER_32) tu4_1;
					F740_5862(RTCV(arg2), tw1);
				}
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L);
				if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
					loc1 += ((EIF_INTEGER_32) 2L);
					if ((EIF_BOOLEAN) (loc1 <= loc2)) {
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
						tu4_1 = eif_bit_and(loc3,tu4_1);
						tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 12L));
						tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
						tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_2 = eif_bit_and(tu4_2,tu4_3);
						tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
						tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_2 = eif_bit_and(tu4_2,tu4_3);
						tu4_1 = eif_bit_or(tu4_1,tu4_2);
						tw1 = (EIF_CHARACTER_32) tu4_1;
						F740_5862(RTCV(arg2), tw1);
					}
				} else {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L);
					if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
						loc1 += ((EIF_INTEGER_32) 3L);
						if ((EIF_BOOLEAN) (loc1 <= loc2)) {
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
							tu4_1 = eif_bit_and(loc3,tu4_1);
							tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 18L));
							tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L)));
							tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							tu4_2 = eif_bit_and(tu4_2,tu4_3);
							tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 12L));
							tu4_1 = eif_bit_or((tu4_1),tu4_2);
							tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
							tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							tu4_2 = eif_bit_and(tu4_2,tu4_3);
							tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
							tu4_1 = eif_bit_or(tu4_1,tu4_2);
							tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
							tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							tu4_2 = eif_bit_and(tu4_2,tu4_3);
							tu4_1 = eif_bit_or(tu4_1,tu4_2);
							tw1 = (EIF_CHARACTER_32) tu4_1;
							F740_5862(RTCV(arg2), tw1);
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_8_string_8_to_escaped_string_32 */
EIF_REFERENCE F27_390 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F27_391(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_string_8_into_escaped_string_32 */
void F27_391 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc6 = (EIF_NATURAL_8) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	F740_5879(RTCV(arg2), (EIF_INTEGER_32) (ti4_1 + loc2));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		loc1++;
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		loc3 = (EIF_NATURAL_8) tu4_1;
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc3 <= tu1_1)) {
			tw1 = (EIF_CHARACTER_32) loc3;
			F740_5862(RTCV(arg2), tw1);
		} else {
			tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L);
			tu1_1 = eif_bit_and(loc3,tu1_1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
			if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
				if ((EIF_BOOLEAN) (loc1 < loc2)) {
					tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					loc4 = (EIF_NATURAL_8) tu4_1;
					tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
					tu1_1 = eif_bit_and(loc4,tu1_1);
					tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
					if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
						tu4_1 = (EIF_NATURAL_32) loc3;
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
						tu4_1 = eif_bit_and(tu4_1,tu4_2);
						tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 6L));
						tu4_2 = (EIF_NATURAL_32) loc4;
						tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						tu4_2 = eif_bit_and(tu4_2,tu4_3);
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tw1 = (EIF_CHARACTER_32) tu4_1;
						F740_5862(RTCV(arg2), tw1);
						loc1++;
					} else {
						tu2_1 = (EIF_NATURAL_16) loc3;
						F27_430(Current, arg2, tu2_1);
					}
				} else {
					tu2_1 = (EIF_NATURAL_16) loc3;
					F27_430(Current, arg2, tu2_1);
				}
			} else {
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
				tu1_1 = eif_bit_and(loc3,tu1_1);
				tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L);
				if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc2)) {
						tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
						loc4 = (EIF_NATURAL_8) tu4_1;
						tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
						loc5 = (EIF_NATURAL_8) tu4_1;
						tb1 = '\0';
						tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
						tu1_1 = eif_bit_and(loc4,tu1_1);
						tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
						if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
							tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
							tu1_1 = eif_bit_and(loc5,tu1_1);
							tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
							tb1 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
						}
						if (tb1) {
							tu4_1 = (EIF_NATURAL_32) loc3;
							tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
							tu4_1 = eif_bit_and(tu4_1,tu4_2);
							tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 12L));
							tu4_2 = (EIF_NATURAL_32) loc4;
							tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							tu4_2 = eif_bit_and(tu4_2,tu4_3);
							tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
							tu4_1 = eif_bit_or((tu4_1),tu4_2);
							tu4_2 = (EIF_NATURAL_32) loc5;
							tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							tu4_2 = eif_bit_and(tu4_2,tu4_3);
							tu4_1 = eif_bit_or(tu4_1,tu4_2);
							loc7 = (EIF_CHARACTER_32) tu4_1;
							F740_5862(RTCV(arg2), loc7);
							loc1 += ((EIF_INTEGER_32) 2L);
						} else {
							tu2_1 = (EIF_NATURAL_16) loc3;
							F27_430(Current, arg2, tu2_1);
						}
					} else {
						tu2_1 = (EIF_NATURAL_16) loc3;
						F27_430(Current, arg2, tu2_1);
					}
				} else {
					tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
					tu1_1 = eif_bit_and(loc3,tu1_1);
					tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
					if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) < loc2)) {
							tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
							loc4 = (EIF_NATURAL_8) tu4_1;
							tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
							loc5 = (EIF_NATURAL_8) tu4_1;
							tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L)));
							loc6 = (EIF_NATURAL_8) tu4_1;
							tb1 = '\0';
							tb2 = '\0';
							tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
							tu1_1 = eif_bit_and(loc4,tu1_1);
							tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
							if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
								tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
								tu1_1 = eif_bit_and(loc5,tu1_1);
								tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
								tb2 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
							}
							if (tb2) {
								tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
								tu1_1 = eif_bit_and(loc6,tu1_1);
								tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
								tb1 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
							}
							if (tb1) {
								tu4_1 = (EIF_NATURAL_32) loc3;
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
								tu4_1 = eif_bit_and(tu4_1,tu4_2);
								tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 18L));
								tu4_2 = (EIF_NATURAL_32) loc4;
								tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(tu4_2,tu4_3);
								tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 12L));
								tu4_1 = eif_bit_or((tu4_1),tu4_2);
								tu4_2 = (EIF_NATURAL_32) loc5;
								tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(tu4_2,tu4_3);
								tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
								tu4_1 = eif_bit_or(tu4_1,tu4_2);
								tu4_2 = (EIF_NATURAL_32) loc6;
								tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(tu4_2,tu4_3);
								tu4_1 = eif_bit_or(tu4_1,tu4_2);
								tw1 = (EIF_CHARACTER_32) tu4_1;
								F740_5862(RTCV(arg2), tw1);
								loc1 += ((EIF_INTEGER_32) 3L);
							} else {
								tu2_1 = (EIF_NATURAL_16) loc3;
								F27_430(Current, arg2, tu2_1);
							}
						} else {
							tu2_1 = (EIF_NATURAL_16) loc3;
							F27_430(Current, arg2, tu2_1);
						}
					} else {
						tu2_1 = (EIF_NATURAL_16) loc3;
						F27_430(Current, arg2, tu2_1);
					}
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.escaped_utf_32_substring_into_utf_16_0_pointer */
void F27_402 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg4);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,arg6);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	loc4 = *(EIF_INTEGER_32 *)(RTCV(arg4)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg5) < (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L)))) {
		loc4 = F27_371(Current, arg1, arg2, arg3);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + loc4) + ((EIF_INTEGER_32) 2L));
		F507_3599(RTCV(arg4), loc4);
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	loc3 = (EIF_INTEGER_32) arg5;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= arg3)) break;
		loc1++;
		loc5 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc5 == tu4_1)) {
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U)) {
					loc1++;
				} else {
					tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
					if ((EIF_BOOLEAN)(tw1 == tw2)) {
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L)) < loc2)) {
							loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L)));
							if (F27_431(Current, loc6)) {
								loc5 = F27_432(Current, loc6);
								tb1 = '\01';
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L);
								if (!(EIF_BOOLEAN) (loc5 < tu4_1)) {
									tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L);
									tb1 = (EIF_BOOLEAN) (loc5 > tu4_1);
								}
								if (tb1) {
									loc5 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
								} else {
									loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									loc1 += ((EIF_INTEGER_32) 5L);
								}
							}
						}
					}
				}
			}
		}
		if ((EIF_BOOLEAN) !loc7) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
			if ((EIF_BOOLEAN) (loc5 <= tu4_1)) {
				tu2_1 = (EIF_NATURAL_16) loc5;
				F507_3543(RTCV(arg4), tu2_1, loc3);
				loc3 += ((EIF_INTEGER_32) 2L);
			} else {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc8 && ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 6L)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - loc1) * ((EIF_INTEGER_32) 2L))) > loc4)))) {
					loc4 = F27_371(Current, arg1, loc1, arg3);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + ((EIF_INTEGER_32) 2L));
					F507_3599(RTCV(arg4), loc4);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L);
				tu4_2 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 10L));
				tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) (tu4_1 + tu4_2));
				F507_3543(RTCV(arg4), tu2_1, loc3);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L);
				tu4_2 = eif_bit_and(loc5,tu4_2);
				tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) (tu4_1 + tu4_2));
				F507_3543(RTCV(arg4), tu2_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
				loc3 += ((EIF_INTEGER_32) 4L);
			}
		} else {
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tu2_1 = (EIF_NATURAL_16) loc5;
			F507_3543(RTCV(arg4), tu2_1, loc3);
			loc3 += ((EIF_INTEGER_32) 2L);
		}
	}
	if (loc8) {
		F507_3599(RTCV(arg4), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
	}
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L);
	F507_3543(RTCV(arg4), tu2_1, loc3);
	if ((EIF_BOOLEAN)(arg6 != NULL)) {
		F102_1422(RTCV(arg6), loc3);
	}
	RTLE;
}

/* {UTF_CONVERTER}.escaped_utf_32_string_into_utf_16le_string_8 */
void F27_404 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_16 loc4 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc5);
	RTLR(3,Current);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	F741_5970(RTCV(arg2), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 2L))));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		loc1++;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U)) {
					loc1++;
				} else {
					tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
					if ((EIF_BOOLEAN)(tw1 == tw2)) {
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L)) < loc2)) {
							loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L)));
							if (F27_431(Current, loc5)) {
								loc3 = F27_432(Current, loc5);
								tb1 = '\01';
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L);
								if (!(EIF_BOOLEAN) (loc3 < tu4_1)) {
									tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L);
									tb1 = (EIF_BOOLEAN) (loc3 > tu4_1);
								}
								if (tb1) {
									loc3 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
								} else {
									loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									loc1 += ((EIF_INTEGER_32) 5L);
								}
							}
						}
					}
				}
			}
		}
		if ((EIF_BOOLEAN) !loc6) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
			if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
				tu4_1 = eif_bit_and(loc3,tu4_1);
				tc1 = (EIF_CHARACTER_8) tu4_1;
				F741_5953(RTCV(arg2), tc1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L);
				tu4_1 = eif_bit_and(loc3,tu4_1);
				tu4_1 = eif_bit_shift_right((tu4_1),((EIF_INTEGER_32) 8L));
				tc1 = (EIF_CHARACTER_8) tu4_1;
				F741_5953(RTCV(arg2), tc1);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L);
				tu4_2 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 10L));
				loc4 = (EIF_NATURAL_16) ((EIF_NATURAL_32) (tu4_1 + tu4_2));
				tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 255L);
				tu2_1 = eif_bit_and(loc4,tu2_1);
				tc1 = (EIF_CHARACTER_8) tu2_1;
				F741_5953(RTCV(arg2), tc1);
				tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L);
				tu2_1 = eif_bit_and(loc4,tu2_1);
				tu2_1 = eif_bit_shift_right((tu2_1),((EIF_INTEGER_32) 8L));
				tc1 = (EIF_CHARACTER_8) tu2_1;
				F741_5953(RTCV(arg2), tc1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L);
				tu4_2 = eif_bit_and(loc3,tu4_2);
				loc4 = (EIF_NATURAL_16) ((EIF_NATURAL_32) (tu4_1 + tu4_2));
				tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 255L);
				tu2_1 = eif_bit_and(loc4,tu2_1);
				tc1 = (EIF_CHARACTER_8) tu2_1;
				F741_5953(RTCV(arg2), tc1);
				tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L);
				tu2_1 = eif_bit_and(loc4,tu2_1);
				tu2_1 = eif_bit_shift_right((tu2_1),((EIF_INTEGER_32) 8L));
				tc1 = (EIF_CHARACTER_8) tu2_1;
				F741_5953(RTCV(arg2), tc1);
			}
		} else {
			loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
			tu4_1 = eif_bit_and(loc3,tu4_1);
			tc1 = (EIF_CHARACTER_8) tu4_1;
			F741_5953(RTCV(arg2), tc1);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L);
			tu4_1 = eif_bit_and(loc3,tu4_1);
			tu4_1 = eif_bit_shift_right((tu4_1),((EIF_INTEGER_32) 8L));
			tc1 = (EIF_CHARACTER_8) tu4_1;
			F741_5953(RTCV(arg2), tc1);
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_16_0_pointer_to_string_32 */
EIF_REFERENCE F27_405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F27_406(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_0_pointer_into_string_32 */
void F27_406 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
	F27_408(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1, arg2);
	RTLE;
}

/* {UTF_CONVERTER}.utf_16_0_subpointer_into_string_32 */
void F27_408 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg5);
	RTLR(1,arg1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg5)+ _LNGOFF_1_1_0_2_);
	F740_5879(RTCV(arg5), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg3) - arg2) + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 * ((EIF_INTEGER_32) 2L));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 * ((EIF_INTEGER_32) 2L));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		tu2_1 = F507_3527(RTCV(arg1), loc1);
		loc3 = (EIF_NATURAL_32) tu2_1;
		tb1 = '\0';
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
			tb1 = arg4;
		}
		if (tb1) {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		} else {
			loc1 += ((EIF_INTEGER_32) 2L);
			tb1 = '\01';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L);
			if (!(EIF_BOOLEAN) (loc3 < tu4_1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L);
				tb1 = (EIF_BOOLEAN) (loc3 >= tu4_1);
			}
			if (tb1) {
				tw1 = (EIF_CHARACTER_32) loc3;
				F740_5862(RTCV(arg5), tw1);
			} else {
				if ((EIF_BOOLEAN) (loc1 <= loc2)) {
					tu4_1 = (EIF_NATURAL_32) loc3;
					tu4_1 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 10L));
					tu2_1 = F507_3527(RTCV(arg1), loc1);
					tu4_2 = (EIF_NATURAL_32) tu2_1;
					tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L);
					tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) - tu4_3));
					F740_5862(RTCV(arg5), tw1);
					loc1 += ((EIF_INTEGER_32) 2L);
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_16_0_pointer_to_escaped_string_32 */
EIF_REFERENCE F27_409 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F27_410(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_0_pointer_into_escaped_string_32 */
void F27_410 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
	F27_412(Current, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1, arg2);
	RTLE;
}

/* {UTF_CONVERTER}.utf_16_0_subpointer_into_escaped_string_32 */
void F27_412 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg5);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg5)+ _LNGOFF_1_1_0_2_);
	F740_5879(RTCV(arg5), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg3) - arg2) + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 * ((EIF_INTEGER_32) 2L));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 * ((EIF_INTEGER_32) 2L));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		tu2_1 = F507_3527(RTCV(arg1), loc1);
		loc3 = (EIF_NATURAL_32) tu2_1;
		tb1 = '\0';
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
			tb1 = arg4;
		}
		if (tb1) {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		} else {
			loc1 += ((EIF_INTEGER_32) 2L);
			tb1 = '\01';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L);
			if (!(EIF_BOOLEAN) (loc3 < tu4_1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L);
				tb1 = (EIF_BOOLEAN) (loc3 >= tu4_1);
			}
			if (tb1) {
				tw1 = (EIF_CHARACTER_32) loc3;
				F740_5862(RTCV(arg5), tw1);
			} else {
				tb1 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56319L);
				if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
					tb1 = (EIF_BOOLEAN) (loc1 <= loc2);
				}
				if (tb1) {
					tu2_1 = F507_3527(RTCV(arg1), loc1);
					loc4 = (EIF_NATURAL_32) tu2_1;
					tb1 = '\0';
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L);
					if ((EIF_BOOLEAN) (loc4 >= tu4_1)) {
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L);
						tb1 = (EIF_BOOLEAN) (loc4 <= tu4_1);
					}
					if (tb1) {
						tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 10L));
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L);
						tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + loc4) - tu4_2));
						F740_5862(RTCV(arg5), tw1);
						loc1 += ((EIF_INTEGER_32) 2L);
					} else {
						tu2_1 = (EIF_NATURAL_16) loc3;
						F27_430(Current, arg5, tu2_1);
					}
				} else {
					tu2_1 = (EIF_NATURAL_16) loc3;
					F27_430(Current, arg5, tu2_1);
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_16le_string_8_to_escaped_string_32 */
EIF_REFERENCE F27_417 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	ti4_1 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 1L));
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F27_418(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16le_string_8_into_escaped_string_32 */
void F27_418 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	ti4_2 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 1L));
	F740_5879(RTCV(arg2), (EIF_INTEGER_32) (ti4_1 + ti4_2));
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) >= loc2)) break;
		loc1 += ((EIF_INTEGER_32) 2L);
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
		tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), loc1);
		tu4_2 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
		loc3 = eif_bit_or(tu4_1,tu4_2);
		tb1 = '\01';
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L);
		if (!(EIF_BOOLEAN) (loc3 < tu4_1)) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L);
			tb1 = (EIF_BOOLEAN) (loc3 >= tu4_1);
		}
		if (tb1) {
			tw1 = (EIF_CHARACTER_32) loc3;
			F740_5862(RTCV(arg2), tw1);
		} else {
			tb1 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56319L);
			if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
				tb1 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) <= loc2);
			}
			if (tb1) {
				tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4579[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
				tu4_2 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				loc4 = eif_bit_or(tu4_1,tu4_2);
				tb1 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L);
				if ((EIF_BOOLEAN) (loc4 >= tu4_1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L);
					tb1 = (EIF_BOOLEAN) (loc4 <= tu4_1);
				}
				if (tb1) {
					tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 10L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L);
					tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + loc4) - tu4_2));
					F740_5862(RTCV(arg2), tw1);
					loc1 += ((EIF_INTEGER_32) 2L);
				} else {
					tu2_1 = (EIF_NATURAL_16) loc3;
					F27_430(Current, arg2, tu2_1);
				}
			} else {
				tu2_1 = (EIF_NATURAL_16) loc3;
				F27_430(Current, arg2, tu2_1);
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.escape_code_into */
void F27_430 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	F740_5861(RTCV(arg1), (EIF_CHARACTER_32) 65533U);
	tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_8) 255U);
	if ((EIF_BOOLEAN) (arg2 <= tu2_1)) {
		tu1_1 = (EIF_NATURAL_8) arg2;
		tr1 = RTLNS(851, 851, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)tr1 = tu1_1;
		
		tr1 = F850_7283(RTCV(tr1));
		F740_5846(RTCV(arg1), tr1);
	} else {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
		F740_5861(RTCV(arg1), tw1);
		tr1 = RTLNS(848, 848, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = arg2;
		
		tr1 = F847_7192(RTCV(tr1));
		F740_5846(RTCV(arg1), tr1);
	}
	RTLE;
}

/* {UTF_CONVERTER}.is_hexa_decimal */
EIF_BOOLEAN F27_431 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = RTOSCF(433,F27_433,(Current));
	F152_1861(RTCV(loc1), ((EIF_INTEGER_32) 13L));
	F152_1862(RTCV(loc1), arg1, ((EIF_INTEGER_32) 13L));
	tb1 = F152_1866(RTCV(loc1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {UTF_CONVERTER}.to_natural_32 */
EIF_NATURAL_32 F27_432 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	loc1 = RTOSCF(433,F27_433,(Current));
	F152_1862(RTCV(loc1), arg1, ((EIF_INTEGER_32) 0L));
	tu4_1 = F152_1874(RTCV(loc1));
	RTLE;
	return (EIF_NATURAL_32) tu4_1;
}

/* {UTF_CONVERTER}.ctoi_convertor */
static EIF_REFERENCE F27_433_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (433);
#define Result RTOSR(433)
	RTOC_NEW(Result);
	tr1 = RTLNS(151, 151, _OBJSIZ_2_4_0_3_0_0_4_0_);
	F152_1856(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F151_1849(RTCV(Result), (EIF_BOOLEAN) 0);
	F151_1848(RTCV(Result), (EIF_BOOLEAN) 0);
	RTOSE (433);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F27_433 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(433,F27_433_body,(Current));
}

void EIF_Minit28 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
