/*
 * Code for class CHARACTER_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch296.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHARACTER_32_REF}.hash_code */
EIF_INTEGER_32 F686_5364 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4424[Dtype(Current)-685])(Current);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.natural_32_code */
EIF_NATURAL_32 F686_5365 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_32) tw1;
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.is_less */
EIF_BOOLEAN F686_5369 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4424[Dtype(Current)-685])(Current);
	tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4424[Dtype(arg1)-685])(RTCV(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.is_equal */
EIF_BOOLEAN F686_5370 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	tw2 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.plus */
EIF_CHARACTER_32 F686_5371 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) tw1;
	Result = (EIF_CHARACTER_32) (EIF_NATURAL_32) (tu4_1 + arg1);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.set_item */
void F686_5376 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	
	
	*(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_CHARACTER_32) arg1;
}

/* {CHARACTER_32_REF}.out */
EIF_REFERENCE F686_5377 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 6L));
	Result = (EIF_REFERENCE) tr1;
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) 'U');
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) '+');
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4424[Dtype(Current)-685])(Current);
	tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = tu4_1;
	
	tr1 = F844_7101(RTCV(tr1));
	F741_5941(RTCV(Result), tr1);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.to_character_8 */
EIF_CHARACTER_8 F686_5380 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_CHARACTER_8) tw1;
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.is_character_8 */
EIF_BOOLEAN F686_5386 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4424[Dtype(Current)-685])(Current);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 <= tu4_2);
	RTLE;
	return Result;
}

void EIF_Minit296 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
