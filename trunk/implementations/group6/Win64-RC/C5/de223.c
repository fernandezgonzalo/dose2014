/*
 * Code for class DEMO_SESSION_HELPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "de223.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DEMO_SESSION_HELPER}.req_has_cookie */
EIF_BOOLEAN F438_2850 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLR(5,tr2);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = F749_6250(RTCV(arg1), arg2);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(818),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2524[Dtype(Current)-499])(Current);
		tr2 = *(EIF_REFERENCE *)(RTCV(loc1));
		tr2 = F733_5609(RTCV(tr2));
		Result = F93_1302(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {DEMO_SESSION_HELPER}.get_session_from_req */
EIF_REFERENCE F438_2851 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,Result);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,Current);
	
	RTGC;
	Result = (EIF_REFERENCE) NULL;
	tr1 = F749_6250(RTCV(arg1), arg2);
	loc2 = tr1;
	loc2 = RTRV(eif_non_attached_type(818),loc2);
	if (EIF_TEST(loc2)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
		loc1 = F733_5610(RTCV(tr1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2524[Dtype(Current)-499])(Current);
		Result = F93_1303(RTCV(tr1), loc1);
	}
	RTLE;
	return Result;
}

void EIF_Minit223 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
