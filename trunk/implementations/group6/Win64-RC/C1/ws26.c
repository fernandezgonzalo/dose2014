/*
 * Code for class WSF_ROUTER_MAPPING_DOCUMENTATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws26.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER_MAPPING_DOCUMENTATION}.make */
void F26_356 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	{
		static EIF_TYPE_INDEX typarr0[] = {665,732,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_ROUTER_MAPPING_DOCUMENTATION}.mapping */
EIF_REFERENCE F26_359 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_ROUTER_MAPPING_DOCUMENTATION}.descriptions */
EIF_REFERENCE F26_360 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_ROUTER_MAPPING_DOCUMENTATION}.set_is_hidden */
void F26_362 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_ROUTER_MAPPING_DOCUMENTATION}.add_description */
void F26_363 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F666_5047(RTCV(tr1), arg1);
	RTLE;
}

void EIF_Minit26 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
