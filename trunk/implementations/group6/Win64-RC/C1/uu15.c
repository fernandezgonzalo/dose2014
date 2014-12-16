/*
 * Code for class UUID_GENERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uu15.h"
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

/* {UUID_GENERATOR}.generate_uuid */
EIF_REFERENCE F15_176 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {609,851,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 609, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F610_4814(RTCV(tr1), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 16L));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 16L))) break;
		tu1_1 = F15_177(Current);
		F610_4839(RTCV(loc1), tu1_1, loc2);
		loc2++;
	}
	tu1_1 = F610_4819(RTCV(loc1), ((EIF_INTEGER_32) 7L));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 15L);
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 64L);
	tu1_1 = eif_bit_or(tu1_1,tu1_2);
	F610_4839(RTCV(loc1), tu1_1, ((EIF_INTEGER_32) 7L));
	tu1_1 = F610_4819(RTCV(loc1), ((EIF_INTEGER_32) 9L));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
	tu1_1 = eif_bit_or(tu1_1,tu1_2);
	F610_4839(RTCV(loc1), tu1_1, ((EIF_INTEGER_32) 9L));
	tr1 = RTLNS(683, 683, _OBJSIZ_0_0_3_1_0_0_1_0_);
	F684_5174(RTCV(tr1), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {UUID_GENERATOR}.rand_byte */
EIF_NATURAL_8 F15_177 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(179,F15_179,(Current));
	loc1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1348[Dtype(tr1)-97])(RTCV(tr1)));
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 2147483647L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		tr1 = RTOSCF(178,F15_178,(Current));
		ti4_1 = F15_180(Current);
		F397_2591(RTCV(tr1), ti4_1);
	} else {
		loc1++;
	}
	tr1 = RTOSCF(178,F15_178,(Current));
	ti4_1 = F397_2599(RTCV(tr1), loc1);
	Result = (EIF_NATURAL_8) ti4_1;
	tr1 = RTOSCF(179,F15_179,(Current));
	F102_1422(RTCV(tr1), loc1);
	RTLE;
	return Result;
}

/* {UUID_GENERATOR}.rand */
static EIF_REFERENCE F15_178_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTEV;
	RTGC;
	RTOSP (178);
#define Result RTOSR(178)
	RTOC_NEW(Result);
	tr1 = RTLNS(396, 396, _OBJSIZ_0_1_0_4_0_0_0_0_);
	F397_2590(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = F15_180(Current);
	F397_2591(RTCV(Result), ti4_1);
	RTOSE (178);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F15_178 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(178,F15_178_body,(Current));
}

/* {UUID_GENERATOR}.rand_count */
static EIF_REFERENCE F15_179_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (179);
#define Result RTOSR(179)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {101,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 101, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F102_1422(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (179);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F15_179 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(179,F15_179_body,(Current));
}

/* {UUID_GENERATOR}.seed */
EIF_INTEGER_32 F15_180 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_NATURAL_64 tu8_4;
	EIF_NATURAL_64 tu8_5;
	EIF_NATURAL_64 tu8_6;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc2);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(19, 19, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F20_227(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	ti4_1 = F20_231(RTCV(loc2));
	loc1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1970L));
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 12L);
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 30L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_6 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (loc1 * tu8_1) * tu8_2) * tu8_3) * tu8_4) * tu8_5) * tu8_6);
	ti4_1 = F20_232(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 30L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_6 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4) * tu8_5) * tu8_6);
	ti4_1 = F20_233(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4) * tu8_5);
	ti4_1 = F20_234(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4);
	ti4_1 = F20_235(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3);
	ti4_1 = F20_236(RTCV(loc2));
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) (tu8_1 * tu8_2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_0_);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	loc1 += tu8_1;
	tu8_1 = eif_bit_shift_right(loc1,((EIF_INTEGER_32) 32L));
	tu8_1 = eif_bit_xor(tu8_1,loc1);
	ti4_1 = (EIF_INTEGER_32) tu8_1;
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 2147483647L));
	Result = (EIF_INTEGER_32) Result;
	RTLE;
	return Result;
}

void EIF_Minit15 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
