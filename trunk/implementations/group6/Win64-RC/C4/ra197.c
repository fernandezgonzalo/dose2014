/*
 * Code for class RANDOM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra197.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RANDOM}.make */
void F397_2590 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = RTOSCF(2592,F397_2592,(Current));
	F397_2591(Current, ti4_1);
	F396_2581(Current);
	RTLE;
}

/* {RANDOM}.set_seed */
void F397_2591 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {RANDOM}.default_seed */
static EIF_INTEGER_32 F397_2592_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (2592);
#define Result RTOSR(2592)
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123457L);
	RTOSE (2592);
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F397_2592 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2592,F397_2592_body,(Current));
}

/* {RANDOM}.modulus */
static EIF_INTEGER_32 F397_2593_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (2593);
#define Result RTOSR(2593)
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	RTOSE (2593);
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F397_2593 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2593,F397_2593_body,(Current));
}

/* {RANDOM}.multiplier */
static EIF_INTEGER_32 F397_2594_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (2594);
#define Result RTOSR(2594)
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16807L);
	RTOSE (2594);
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F397_2594 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2594,F397_2594_body,(Current));
}

/* {RANDOM}.increment */
static EIF_INTEGER_32 F397_2595_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (2595);
#define Result RTOSR(2595)
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTOSE (2595);
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F397_2595 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2595,F397_2595_body,(Current));
}

/* {RANDOM}.i_th */
EIF_INTEGER_32 F397_2599 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_))) {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_);
	} else {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	}
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == arg1)) break;
		Result = F397_2604(Current, Result);
		loc1++;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) Result;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTLE;
	return Result;
}

/* {RANDOM}.randomize */
EIF_INTEGER_32 F397_2604 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = RTOSCF(2609,F397_2609,(Current));
	tr8_2 = (EIF_REAL_64) (arg1);
	tr8_3 = RTOSCF(2610,F397_2610,(Current));
	tr8_4 = RTOSCF(2608,F397_2608,(Current));
	loc1 = F397_2605(Current, (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3), tr8_4);
	ti4_1 = (EIF_INTEGER_32) loc1;
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {RANDOM}.double_mod */
EIF_REAL_64 F397_2605 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	RTGC;
	Result = (EIF_REAL_64) floor((double) (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2)));
	Result = (EIF_REAL_64) (EIF_REAL_64) (arg1 - (EIF_REAL_64) (Result * arg2));
	return Result;
}

/* {RANDOM}.dmod */
static EIF_REAL_64 F397_2608_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOSP (2608);
#define Result RTOSR(2608)
	ti4_1 = RTOSCF(2593,F397_2593,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOSE (2608);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F397_2608 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2608,F397_2608_body,(Current));
}

/* {RANDOM}.dmul */
static EIF_REAL_64 F397_2609_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOSP (2609);
#define Result RTOSR(2609)
	ti4_1 = RTOSCF(2594,F397_2594,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOSE (2609);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F397_2609 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2609,F397_2609_body,(Current));
}

/* {RANDOM}.dinc */
static EIF_REAL_64 F397_2610_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOSP (2610);
#define Result RTOSR(2610)
	ti4_1 = RTOSCF(2595,F397_2595,(Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOSE (2610);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F397_2610 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2610,F397_2610_body,(Current));
}

void EIF_Minit197 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
