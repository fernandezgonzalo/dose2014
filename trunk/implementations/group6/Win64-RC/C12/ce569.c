/*
 * Code for class CELL [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce569.h"

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
EIF_BOOLEAN F99_1421 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1348[Dtype(Current) - 97]);
}


/* {CELL}.put */
void F99_1422 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1348[Dtype(Current)-97]) = (EIF_BOOLEAN) arg1;
}

/* {CELL}.replace */
void F99_1423 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1348[Dtype(Current)-97]) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit569 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
