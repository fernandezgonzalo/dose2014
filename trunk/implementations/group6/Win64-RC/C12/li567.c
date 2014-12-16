/*
 * Code for class LINKED_LIST_ITERATION_CURSOR [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li567.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_LIST_ITERATION_CURSOR}.item */
EIF_BOOLEAN F556_4607 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTLE;
		return (EIF_BOOLEAN) F547_4584(Current);
	} else {
		RTCT0("active_attached", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_0_);
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST_ITERATION_CURSOR}.after */
EIF_BOOLEAN F556_4608 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTLE;
		return (EIF_BOOLEAN) F547_4596(Current);
	} else {
		Result = '\01';
		if (!(EIF_BOOLEAN) !F547_4598(Current)) {
			Result = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL);
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST_ITERATION_CURSOR}.start */
void F556_4609 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F547_4603(Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {LINKED_LIST_ITERATION_CURSOR}.forth */
void F556_4610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	F547_4604(Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc2 = tr1;
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_4_)) || (EIF_BOOLEAN) !EIF_TEST(loc2))) break;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			loc1++;
		}
	}
	RTLE;
}

/* {LINKED_LIST_ITERATION_CURSOR}.target */
EIF_REFERENCE F556_4611 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {LINKED_LIST_ITERATION_CURSOR}.active */
EIF_REFERENCE F556_4612 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit567 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
