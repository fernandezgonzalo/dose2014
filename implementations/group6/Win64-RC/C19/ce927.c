/*
 * Code for class CELL [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce927.h"

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
EIF_INTEGER_32 F102_1421 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1348[Dtype(Current) - 97]);
}


/* {CELL}.put */
void F102_1422 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O1348[Dtype(Current)-97]) = (EIF_INTEGER_32) arg1;
}

/* {CELL}.replace */
void F102_1423 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O1348[Dtype(Current)-97]) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit927 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
