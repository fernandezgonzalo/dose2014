/*
 * Code for class SEQUENCE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se447.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SEQUENCE}.force */
void F399_2623 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(Current)-395])(Current, tr1);
	RTLE;
}

void EIF_Minit447 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
