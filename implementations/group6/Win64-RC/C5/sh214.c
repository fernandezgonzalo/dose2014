/*
 * Code for class SHARED_WSF_PERCENT_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sh214.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SHARED_WSF_PERCENT_ENCODER}.percent_encoder */
static EIF_REFERENCE F429_2718_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (2718);
#define Result RTOSR(2718)
	RTOC_NEW(Result);
	tr1 = RTLNS(126, 126, _OBJSIZ_0_1_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2718);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F429_2718 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2718,F429_2718_body,(Current));
}

void EIF_Minit214 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
