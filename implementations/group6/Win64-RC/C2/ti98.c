/*
 * Code for class TIME_UTILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti98.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIME_UTILITY}.mod */
EIF_INTEGER_32 F118_1565 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % arg2);
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + arg2);
	}
	return Result;
}

/* {TIME_UTILITY}.div */
EIF_INTEGER_32 F118_1566 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / arg2);
	tr8_1 = (EIF_REAL_64) (Result);
	if ((EIF_BOOLEAN) (tr8_1 > (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2)))) {
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	}
	return Result;
}

/* {TIME_UTILITY}.date_time_tools */
static EIF_REFERENCE F118_1567_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1567);
#define Result RTOSR(1567)
	RTOC_NEW(Result);
	tr1 = RTLNS(51, 51, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1567);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F118_1567 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1567,F118_1567_body,(Current));
}

/* {TIME_UTILITY}.default_format_string */
EIF_REFERENCE F118_1568 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOSCF(738,F52_738,(RTCV(RTOSCF(1567,F118_1567,(Current)))));
	RTLE;
	return Result;
}

void EIF_Minit98 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
