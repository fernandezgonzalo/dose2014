/*
 * Code for class LINKED_LIST_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li460.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_LIST_CURSOR}.make */
void F418_2673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2363[Dtype(Current)-417]) = (EIF_REFERENCE) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) arg2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) arg3;
	RTLE;
}

/* {LINKED_LIST_CURSOR}.active */
EIF_REFERENCE F418_2674 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2363[Dtype(Current) - 417]);
}


void EIF_Minit460 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
