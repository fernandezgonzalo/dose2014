/*
 * Code for class WGI_RESPONSE_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg117.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_RESPONSE_STREAM}.make */
void F139_1723 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {WGI_RESPONSE_STREAM}.commit */
void F139_1724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
	/* INLINED CODE (flush) */
	/* END INLINED CODE */
	}
	;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WGI_RESPONSE_STREAM}.status_committed */
EIF_BOOLEAN F139_1725 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
}


/* {WGI_RESPONSE_STREAM}.header_committed */
EIF_BOOLEAN F139_1726 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_);
}


/* {WGI_RESPONSE_STREAM}.message_committed */
EIF_BOOLEAN F139_1727 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_);
}


/* {WGI_RESPONSE_STREAM}.set_status_code */
void F139_1730 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg2;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F161_2026(RTCV(tr1), arg1, arg2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WGI_RESPONSE_STREAM}.status_code */
EIF_INTEGER_32 F139_1731 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_);
}


/* {WGI_RESPONSE_STREAM}.status_reason_phrase */
EIF_REFERENCE F139_1732 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WGI_RESPONSE_STREAM}.put_header_text */
void F139_1733 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F161_2027(RTCV(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F56_845(RTCV(tr1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WGI_RESPONSE_STREAM}.put_string */
void F139_1735 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F161_2027(RTCV(tr1), arg1);
	RTLE;
}

/* {WGI_RESPONSE_STREAM}.flush */
void F139_1737 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
	/* INLINED CODE (flush) */
	/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WGI_RESPONSE_STREAM}.put_error */
void F139_1738 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F55_840(RTCV(loc1), arg1);
	}
	RTLE;
}

/* {WGI_RESPONSE_STREAM}.output */
EIF_REFERENCE F139_1739 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_RESPONSE_STREAM}.error */
EIF_REFERENCE F139_1740 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


void EIF_Minit117 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
