/*
 * Code for class HTTP_DATE_TIME_UTILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht21.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_DATE_TIME_UTILITIES}.now_utc */
EIF_REFERENCE F21_253 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F938_8178(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {HTTP_DATE_TIME_UTILITIES}.epoch */
static EIF_REFERENCE F21_254_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (254);
#define Result RTOSR(254)
	RTOC_NEW(Result);
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F938_8183(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (254);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F21_254 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(254,F21_254_body,(Current));
}

/* {HTTP_DATE_TIME_UTILITIES}.unix_time_stamp */
EIF_INTEGER_64 F21_255 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = (EIF_REFERENCE) arg1;
	} else {
		loc1 = F21_253(Current);
	}
	tr1 = RTOSCF(254,F21_254,(Current));
	tr1 = F938_8200(RTCV(loc1), tr1);
	Result = F443_2939(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit21 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
