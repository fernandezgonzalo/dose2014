/*
 * Code for class STD_FILES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st33.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STD_FILES}.output */
static EIF_REFERENCE F45_553_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (553);
#define Result RTOSR(553)
	RTOC_NEW(Result);
	tr1 = RTLNS(862, 862, _OBJSIZ_3_7_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("stdout",6,1912016244);
	F863_7529(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (553);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F45_553 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(553,F45_553_body,(Current));
}

/* {STD_FILES}.error */
static EIF_REFERENCE F45_554_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (554);
#define Result RTOSR(554)
	RTOC_NEW(Result);
	tr1 = RTLNS(862, 862, _OBJSIZ_3_7_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("stderr",6,1911360114);
	F863_7530(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (554);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F45_554 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(554,F45_554_body,(Current));
}

/* {STD_FILES}.default_output */
EIF_REFERENCE F45_555 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STD_FILES}.standard_default */
EIF_REFERENCE F45_556 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc1 = RTOSCF(553,F45_553,(Current));
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {STD_FILES}.set_output_default */
void F45_578 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(553,F45_553,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STD_FILES}.put_string */
void F45_581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = F45_556(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3307[Dtype(tr1)-517])(RTCV(tr1), arg1);
	RTLE;
}

/* {STD_FILES}.put_new_line */
void F45_600 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F45_556(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3305[Dtype(tr1)-517])(RTCV(tr1));
	RTLE;
}

void EIF_Minit33 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
