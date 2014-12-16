/*
 * Code for class EXCEPTION_MANAGER_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex142.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION_MANAGER_FACTORY}.exception_manager */
static EIF_REFERENCE F164_2091_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (2091);
#define Result RTOSR(2091)
	RTOC_NEW(Result);
	tr1 = RTLNS(95, 95, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2091);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F164_2091 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2091,F164_2091_body,(Current));
}

void EIF_Minit142 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
