/*
 * Code for class WGI_NINO_RESPONSE_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg118.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_NINO_RESPONSE_STREAM}.put_header_text */
void F140_1741 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F161_2027(RTCV(loc1), arg1);
	tr1 = RTMS_EX_H("Connection: close",17,955446373);
	F161_2027(RTCV(loc1), tr1);
	F56_845(RTCV(loc1));
	F56_845(RTCV(loc1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

void EIF_Minit118 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
