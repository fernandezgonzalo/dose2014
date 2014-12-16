/*
 * Code for class ERROR_CUSTOM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "er386.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ERROR_CUSTOM}.make */
void F869_7647 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	if ((EIF_BOOLEAN)(arg3 != NULL)) {
		RTAR(Current, arg3);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg3;
	} else {
		tr1 = RTMS_EX_H("Error: ",7,316445984);
		tr1 = F741_5940(RTCV(tr1), arg2);
		tr2 = RTMS_EX_H(" (code=",7,874542909);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = c_outi(arg1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H(")",1,41);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr1 = F733_5613(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ERROR_CUSTOM}.code */
EIF_INTEGER_32 F869_7648 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_);
}


/* {ERROR_CUSTOM}.name */
EIF_REFERENCE F869_7649 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ERROR_CUSTOM}.message */
EIF_REFERENCE F869_7650 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit386 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
