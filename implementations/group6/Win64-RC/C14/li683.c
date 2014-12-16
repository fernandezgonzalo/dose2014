/*
 * Code for class LINEAR [REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li683.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINEAR}.has */
EIF_BOOLEAN F250_2491 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[dtype-395])(Current);
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2233[dtype-242])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-242])(Current, (EIF_REFERENCE) &arg1);
	}
	Result = F250_2497(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {LINEAR}.search */
void F250_2493 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2226[Dtype(Current)-218])) {
		for (;;) {
			tb1 = '\01';
			if (!F250_2497(Current)) {
				tb1 = (arg1 == F672_5012(Current));
			}
			if (tb1) break;
			F672_5040(Current);
		}
	} else {
		for (;;) {
			tb2 = '\01';
			if (!F250_2497(Current)) {
				tb2 = (EIF_BOOLEAN)(arg1 == F672_5012(Current));
			}
			if (tb2) break;
			F672_5040(Current);
		}
	}
	RTLE;
}

/* {LINEAR}.item_for_iteration */
EIF_REAL_32 F250_2496 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_32) F672_5012(Current);
}

/* {LINEAR}.exhausted */
EIF_BOOLEAN F250_2497 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2233[Dtype(Current)-242])(Current);
}

/* {LINEAR}.off */
EIF_BOOLEAN F250_2499 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F287_2518(Current)) {
		Result = F643_4919(Current);
	}
	RTLE;
	return Result;
}

void EIF_Minit683 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
