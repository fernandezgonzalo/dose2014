/*
 * Code for class WSF_RESPONSE_HEADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws285.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_RESPONSE_HEADER}.make_with_response */
void F542_4578 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_RESPONSE_HEADER}.response */
EIF_REFERENCE F542_4579 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_RESPONSE_HEADER}.new_cursor */
EIF_REFERENCE F542_4580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_REFERENCE *)(RTCV(Result) + _REFACS_1_);
	Result = F681_5154(RTCV(Result));
	RTLE;
	return Result;
}

/* {WSF_RESPONSE_HEADER}.add_header */
void F542_4581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F94_1329(RTCV(tr1), arg1);
	RTLE;
}

/* {WSF_RESPONSE_HEADER}.put_header */
void F542_4582 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F94_1328(RTCV(tr1), arg1);
	RTLE;
}

void EIF_Minit285 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
