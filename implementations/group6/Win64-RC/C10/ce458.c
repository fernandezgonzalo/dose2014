/*
 * Code for class CELL [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce458.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CELL}.item */
EIF_REFERENCE F98_1421 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O1348[Dtype(Current) - 97]);
}


/* {CELL}.put */
void F98_1422 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O1348[Dtype(Current)-97]) = (EIF_REFERENCE) RTCCL(arg1);
	RTLE;
}

/* {CELL}.replace */
void F98_1423 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O1348[Dtype(Current)-97]) = (EIF_REFERENCE) RTCCL(arg1);
	RTLE;
}

void EIF_Minit458 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
