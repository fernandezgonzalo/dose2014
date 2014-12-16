/*
 * Code for class WSF_WGI_DELAYED_HEADER_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws196.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.make */
void F218_2465 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	
	RTGC;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	F141_1742(Current, arg1);
	RTLE;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.update_wsf_response */
void F218_2466 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.wsf_response */
EIF_REFERENCE F218_2467 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.commit */
void F218_2468 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F141_1747(Current)) {
		F218_2469(Current);
	}
	F141_1745(Current);
	RTLE;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.process_header */
void F218_2469 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F138_1708(RTCV(tr1), NULL);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F94_1324(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F94_1314(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	RTLE;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.put_string */
void F218_2473 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F218_2469(Current);
	F141_1756(Current, arg1);
	RTLE;
}

/* {WSF_WGI_DELAYED_HEADER_RESPONSE}.flush */
void F218_2475 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F218_2469(Current);
	F141_1758(Current);
	RTLE;
}

void EIF_Minit196 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
