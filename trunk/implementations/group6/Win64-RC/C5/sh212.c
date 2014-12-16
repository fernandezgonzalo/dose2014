/*
 * Code for class SHARED_EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sh212.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SHARED_EXECUTION_ENVIRONMENT}.execution_environment */
static EIF_REFERENCE F427_2695_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (2695);
#define Result RTOSR(2695)
	RTOC_NEW(Result);
	tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2695);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F427_2695 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2695,F427_2695_body,(Current));
}

void EIF_Minit212 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
