/*
 * Code for class WSF_ROUTER_ITERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws46.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER_ITERATOR}.process_router */
void F58_854 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	loc1 = F539_4435(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc1)-537])(RTCV(loc1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc1)-537])(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R841[Dtype(Current)-57])(Current, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc1)-537])(RTCV(loc1));
	}
	RTLE;
}

/* {WSF_ROUTER_ITERATOR}.process_item */
void F58_855 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R842[Dtype(Current)-57])(Current, tr1);
	RTLE;
}

/* {WSF_ROUTER_ITERATOR}.process_mapping */
void F58_856 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5254[Dtype(arg1)-813])(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R843[Dtype(Current)-57])(Current, tr1);
	RTLE;
}

/* {WSF_ROUTER_ITERATOR}.process_handler */
void F58_857 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(412),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R840[Dtype(Current)-57])(Current, tr1);
	}
	RTLE;
}

void EIF_Minit46 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
