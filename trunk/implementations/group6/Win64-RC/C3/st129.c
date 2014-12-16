/*
 * Code for class STRING_TO_NUMERIC_CONVERTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st129.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TO_NUMERIC_CONVERTOR}.leading_separators */
EIF_REFERENCE F151_1839 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STRING_TO_NUMERIC_CONVERTOR}.trailing_separators */
EIF_REFERENCE F151_1840 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {STRING_TO_NUMERIC_CONVERTOR}.set_trailing_separators_acceptable */
void F151_1848 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1695[Dtype(Current)-150]) = (EIF_BOOLEAN) arg1;
}

/* {STRING_TO_NUMERIC_CONVERTOR}.set_leading_separators_acceptable */
void F151_1849 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1696[Dtype(Current)-150]) = (EIF_BOOLEAN) arg1;
}

/* {STRING_TO_NUMERIC_CONVERTOR}.set_leading_separators */
void F151_1850 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F737_5725(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STRING_TO_NUMERIC_CONVERTOR}.set_trailing_separators */
void F151_1851 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F737_5725(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit129 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
