/*
 * Code for class WSF_DEFAULT_SERVICE_I [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws470.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_DEFAULT_SERVICE_I}.launch */
void F133_1682 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y1572,Y1572_gen_type,Dftype(Current),132)));
	F68_923(RTCV(tr1), arg1, arg2);
	loc1 = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit470 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
