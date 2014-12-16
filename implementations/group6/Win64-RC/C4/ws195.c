/*
 * Code for class WSF_HEAD_RESPONSE_WRAPPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws195.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_HEAD_RESPONSE_WRAPPER}.make_from_response */
void F217_2458 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	F94_1311(Current, arg1);
	RTLE;
}

/* {WSF_HEAD_RESPONSE_WRAPPER}.wsf_response */
EIF_REFERENCE F217_2459 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_HEAD_RESPONSE_WRAPPER}.put_string */
void F217_2461 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_HEAD_RESPONSE_WRAPPER}.put_chunk */
void F217_2463 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_HEAD_RESPONSE_WRAPPER}.put_chunk_end */
void F217_2464 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit195 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
