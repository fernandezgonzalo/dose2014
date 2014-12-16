/*
 * Code for class TIME_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti101.h"
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

/* {TIME_VALUE}.hour */
EIF_INTEGER_32 F121_1584 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[Dtype(Current)-120]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 16711680L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 16L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.minute */
EIF_INTEGER_32 F121_1585 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[Dtype(Current)-120]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.second */
EIF_INTEGER_32 F121_1586 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[Dtype(Current)-120]);
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.fine_second */
EIF_REAL_64 F121_1589 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1475[dtype-120])(Current);
	Result = (EIF_REAL_64) (ti4_1);
	tr8_1 = *(EIF_REAL_64 *)(Current + O1482[dtype-120]);
	Result = (EIF_REAL_64) (EIF_REAL_64) (Result + tr8_1);
	RTLE;
	return Result;
}

/* {TIME_VALUE}.set_hour */
void F121_1593 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[dtype-120]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 16711680L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O1483[dtype-120]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[dtype-120]);
	ti4_2 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O1483[dtype-120]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {TIME_VALUE}.set_minute */
void F121_1594 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[dtype-120]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 65280L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O1483[dtype-120]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[dtype-120]);
	ti4_2 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O1483[dtype-120]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {TIME_VALUE}.set_second */
void F121_1595 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[dtype-120]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 255L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O1483[dtype-120]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O1483[dtype-120]);
	ti4_1 = eif_bit_or(ti4_1,arg1);
	*(EIF_INTEGER_32 *)(Current + O1483[dtype-120]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {TIME_VALUE}.set_fine_second */
void F121_1596 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg1;
	F121_1595(Current, loc1);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current + O1482[Dtype(Current)-120]) = (EIF_REAL_64) (EIF_REAL_64) (arg1 - tr8_1);
	RTLE;
}

void EIF_Minit101 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
