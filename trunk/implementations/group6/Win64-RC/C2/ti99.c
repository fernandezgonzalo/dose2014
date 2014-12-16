/*
 * Code for class TIME_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti99.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIME_CONSTANTS}.time_default_format_string */
EIF_REFERENCE F119_1574 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOSCF(737,F52_737,(RTCV(RTOSCF(1567,F118_1567,(Current)))));
	RTLE;
	return Result;
}

void EIF_Minit99 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
