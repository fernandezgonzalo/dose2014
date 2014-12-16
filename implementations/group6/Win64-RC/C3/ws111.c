/*
 * Code for class WSF_LAUNCHABLE_SERVICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws111.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_LAUNCHABLE_SERVICE}.make_and_launch */
void F132_1677 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1568[dtype-131])(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O1569[dtype-131]);
	F133_1682(Current, Current, tr1);
	RTLE;
}

/* {WSF_LAUNCHABLE_SERVICE}.initialize */
void F132_1678 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_LAUNCHABLE_SERVICE}.service_options */
EIF_REFERENCE F132_1679 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O1569[Dtype(Current) - 131]);
}


/* {WSF_LAUNCHABLE_SERVICE}.set_service_option */
void F132_1681 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O1569[dtype-131]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(565));
		F566_4620(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O1569[dtype-131]) = (EIF_REFERENCE) loc1;
	}
	tr1 = RTCCL(arg2);
	F566_4627(RTCV(loc1), arg1, tr1);
	RTLE;
}

void EIF_Minit111 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
