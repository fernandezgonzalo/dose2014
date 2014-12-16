/*
 * Code for class NATURAL_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na358.h"
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

/* {NATURAL_64_REF}.hash_code */
EIF_INTEGER_32 F841_6965 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_1 = eif_bit_and(tu8_1,tu8_2);
	Result = (EIF_INTEGER_32) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.is_less */
EIF_BOOLEAN F841_6972 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu8_1 < tu8_2);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.is_equal */
EIF_BOOLEAN F841_6973 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu8_1 == tu8_2);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.set_item */
void F841_6974 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) = (EIF_NATURAL_64) arg1;
}

/* {NATURAL_64_REF}.plus */
EIF_REFERENCE F841_6981 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F841_6974(RTCV(Result), (EIF_NATURAL_64) (tu8_1 + tu8_2));
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.product */
EIF_REFERENCE F841_6983 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F841_6974(RTCV(Result), (EIF_NATURAL_64) (tu8_1 * tu8_2));
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.integer_quotient */
EIF_REFERENCE F841_6987 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F841_6974(RTCV(Result), (EIF_NATURAL_64) (tu8_1 / tu8_2));
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.integer_remainder */
EIF_REFERENCE F841_6988 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F841_6974(RTCV(Result), (EIF_NATURAL_64) (tu8_1 % tu8_2));
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.as_natural_32 */
EIF_NATURAL_32 F841_6995 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_NATURAL_32) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.as_integer_32 */
EIF_INTEGER_32 F841_6999 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.as_integer_64 */
EIF_INTEGER_64 F841_7000 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_64) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.to_natural_64 */
EIF_NATURAL_64 F841_7004 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
}

/* {NATURAL_64_REF}.to_integer_32 */
EIF_INTEGER_32 F841_7007 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5600[Dtype(Current)-840])(Current);
}

/* {NATURAL_64_REF}.to_hex_string */
EIF_REFERENCE F841_7011 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(462, 462, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = ((EIF_INTEGER_32) 64L);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 4L));
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	F741_5917(RTCV(Result));
	loc2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 15L);
		tu8_1 = eif_bit_and(loc2,tu8_1);
		loc3 = (EIF_INTEGER_32) tu8_1;
		tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = loc3;
		
		tc1 = F832_6730(RTCV(tr1));
		F741_5925(RTCV(Result), tc1, loc1);
		loc2 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc1--;
	}
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.to_character_8 */
EIF_CHARACTER_8 F841_7014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_CHARACTER_8) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.bit_and */
EIF_REFERENCE F841_7016 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_1 = eif_bit_and(tu8_1,tu8_2);
	F841_6974(RTCV(Result), tu8_1);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.bit_xor */
EIF_REFERENCE F841_7018 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_1 = eif_bit_xor(tu8_1,tu8_2);
	F841_6974(RTCV(Result), tu8_1);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.bit_shift_left */
EIF_REFERENCE F841_7021 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_1 = eif_bit_shift_left(tu8_1,arg1);
	F841_6974(RTCV(Result), tu8_1);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.bit_shift_right */
EIF_REFERENCE F841_7022 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_1 = eif_bit_shift_right(tu8_1,arg1);
	F841_6974(RTCV(Result), tu8_1);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.out */
EIF_REFERENCE F841_7026 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 20L));
	Result = (EIF_REFERENCE) tr1;
	F741_5949(RTCV(Result), *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit358 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
