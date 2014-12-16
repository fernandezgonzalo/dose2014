/*
 * Code for class WGI_NINO_ERROR_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg43.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_NINO_ERROR_STREAM}.make */
void F55_835 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {WGI_NINO_ERROR_STREAM}.make_stderr */
void F55_836 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTOSCF(554,F45_554,(RTCV(RTOSCF(24,F1_24,(Current)))));
	F55_835(Current, arg1, tr1);
	RTLE;
}

/* {WGI_NINO_ERROR_STREAM}.identifier */
EIF_REFERENCE F55_838 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_NINO_ERROR_STREAM}.output */
EIF_REFERENCE F55_839 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_NINO_ERROR_STREAM}.put_error */
void F55_840 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr2) + O4737[Dtype(tr2)-736]);
	F737_5723(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 4L)));
	loc1 = (EIF_REFERENCE) tr1;
	F741_5952(RTCV(loc1), (EIF_CHARACTER_8) '[');
	F741_5938(RTCV(loc1), *(EIF_REFERENCE *)(Current));
	F741_5952(RTCV(loc1), (EIF_CHARACTER_8) ']');
	F741_5952(RTCV(loc1), (EIF_CHARACTER_8) ' ');
	F741_5938(RTCV(loc1), arg1);
	F741_5952(RTCV(loc1), (EIF_CHARACTER_8) '\012');
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3307[Dtype(tr1)-517])(RTCV(tr1), loc1);
	RTLE;
}

void EIF_Minit43 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
