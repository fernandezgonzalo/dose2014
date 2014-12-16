/*
 * Code for class WSF_STARTS_WITH_MAPPING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws331.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_STARTS_WITH_MAPPING}.handler */
EIF_REFERENCE F814_6416 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_STARTS_WITH_MAPPING}.set_handler */
void F814_6417 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {WSF_STARTS_WITH_MAPPING}.execute_handler */
void F814_6418 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	
	
	F437_2830(RTCV(arg1), arg2, arg3, arg4);
}

void EIF_Minit331 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
