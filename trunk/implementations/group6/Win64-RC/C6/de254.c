/*
 * Code for class DEMO_HEADER_JSON_HELPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "de254.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DEMO_HEADER_JSON_HELPER}.set_json_header_ok */
void F498_3419 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	F94_1320(RTCV(arg1), ((EIF_INTEGER_32) 200L));
	tr1 = F94_1326(RTCV(arg1));
	F541_4532(RTCV(tr1));
	tr1 = F94_1326(RTCV(arg1));
	F541_4517(RTCV(tr1), arg2);
	RTLE;
}

/* {DEMO_HEADER_JSON_HELPER}.set_json_header */
void F498_3420 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	F94_1320(RTCV(arg1), arg2);
	tr1 = F94_1326(RTCV(arg1));
	F541_4532(RTCV(tr1));
	tr1 = F94_1326(RTCV(arg1));
	F541_4517(RTCV(tr1), arg3);
	RTLE;
}

void EIF_Minit254 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
