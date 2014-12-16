/*
 * Code for class LINEAR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li433.h"

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
EIF_BOOLEAN F243_2491 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[dtype-395])(Current);
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2233[dtype-242])(Current)) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-242])(Current, tr1);
	}
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2244[dtype-242])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {LINEAR}.search */
void F243_2493 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2226[dtype-218])) {
		for (;;) {
			tb1 = '\01';
			if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2244[dtype-242])(Current)) {
				tb1 = RTEQ(arg1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2232[dtype-395])(Current));
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[dtype-395])(Current);
		}
	} else {
		for (;;) {
			tb2 = '\01';
			if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2244[dtype-242])(Current)) {
				tb2 = RTCEQ(arg1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2232[dtype-395])(Current));
			}
			if (tb2) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[dtype-395])(Current);
		}
	}
	RTLE;
}

/* {LINEAR}.item_for_iteration */
EIF_REFERENCE F243_2496 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	RTLE;
	return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2232[Dtype(Current)-395])(Current);
}

/* {LINEAR}.exhausted */
EIF_BOOLEAN F243_2497 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2233[Dtype(Current)-242])(Current);
}

/* {LINEAR}.off */
EIF_BOOLEAN F243_2499 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2224[dtype-278])(Current)) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2245[dtype-395])(Current);
	}
	RTLE;
	return Result;
}

void EIF_Minit433 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
