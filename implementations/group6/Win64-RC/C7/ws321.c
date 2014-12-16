/*
 * Code for class WSF_ROUTER_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws321.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER_ITEM}.make */
void F746_6058 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_ROUTER_ITEM}.make_with_request_methods */
void F746_6059 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	
	RTGC;
	F746_6058(Current, arg1);
	F746_6063(Current, arg2);
	RTLE;
}

/* {WSF_ROUTER_ITEM}.mapping */
EIF_REFERENCE F746_6060 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_ROUTER_ITEM}.request_methods */
EIF_REFERENCE F746_6061 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_ROUTER_ITEM}.debug_output */
EIF_REFERENCE F746_6062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	
	RTGC;
	tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr2 = F811_6402(RTCV(tr2));
	F740_5807(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = RTMS_EX_H(" [ ",3,2120480);
		tr1 = F733_5613(RTCV(tr1));
		F740_5850(RTCV(loc1), tr1);
		loc3 = F540_4467(RTCV(loc2));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc3)-537])(RTCV(loc3));
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
			tr1 = F733_5612(RTCV(tr1));
			F740_5850(RTCV(loc1), tr1);
			tr1 = RTMS_EX_H(" ",1,32);
			tr1 = F733_5613(RTCV(tr1));
			F740_5850(RTCV(loc1), tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc3)-537])(RTCV(loc3));
		}
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = F733_5613(RTCV(tr1));
		F740_5850(RTCV(loc1), tr1);
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WSF_ROUTER_ITEM}.set_request_methods */
void F746_6063 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

void EIF_Minit321 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
