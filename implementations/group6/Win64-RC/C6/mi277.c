/*
 * Code for class MISMATCH_CORRECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi277.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_CORRECTOR}.correct_mismatch */
void F521_4302 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = RTMS_EX_H("Mismatch: ",10,1538098208);
	F737_5725(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(164, 164, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = F1_5(Current);
	tr1 = F750_6320(RTCV(tr1));
	F741_5938(RTCV(loc1), tr1);
	F165_2111(RTCV(loc2), loc1);
	RTLE;
}

/* {MISMATCH_CORRECTOR}.mismatch_information */
static EIF_REFERENCE F521_4303_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (4303);
#define Result RTOSR(4303)
	RTOC_NEW(Result);
	tr1 = RTLNS(583, 583, _OBJSIZ_9_3_0_7_0_0_0_0_);
	F584_4749(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (4303);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F521_4303 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4303,F521_4303_body,(Current));
}

void EIF_Minit277 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
