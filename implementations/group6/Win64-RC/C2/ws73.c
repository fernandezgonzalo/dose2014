/*
 * Code for class WSF_REQUEST_PATH_PARAMETERS_PROVIDER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws73.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_REQUEST_PATH_PARAMETERS_PROVIDER}.make */
void F85_1213 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {WSF_REQUEST_PATH_PARAMETERS_PROVIDER}.path_parameters_count */
EIF_INTEGER_32 F85_1214 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_);
}


/* {WSF_REQUEST_PATH_PARAMETERS_PROVIDER}.urlencoded_path_parameters */
EIF_REFERENCE F85_1215 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_REQUEST_PATH_PARAMETERS_PROVIDER}.previous_path_parameters_source */
EIF_REFERENCE F85_1216 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_REQUEST_PATH_PARAMETERS_PROVIDER}.apply */
void F85_1217 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_11_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F749_6256(RTCV(arg1), Current);
	RTLE;
}

/* {WSF_REQUEST_PATH_PARAMETERS_PROVIDER}.revert */
void F85_1218 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F749_6256(RTCV(arg1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTLE;
}

void EIF_Minit73 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
