/*
 * Code for class LINKABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li457.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKABLE}.right */
EIF_REFERENCE F103_1424 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O1352[Dtype(Current) - 102]);
}


/* {LINKABLE}.put_right */
void F103_1425 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O1352[Dtype(Current)-102]) = (EIF_REFERENCE) arg1;
}

/* {LINKABLE}.forget_right */
void F103_1426 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + O1352[Dtype(Current)-102]) = (EIF_REFERENCE) NULL;
}

void EIF_Minit457 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
