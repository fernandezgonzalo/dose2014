/*
 * Code for class WSF_ROUTED_SERVICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws87.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTED_SERVICE}.initialize_router */
void F107_1432 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F107_1433(Current);
	F135_1696(Current);
	RTLE;
}

/* {WSF_ROUTED_SERVICE}.create_router */
void F107_1433 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(538));
	F539_4412(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_ROUTED_SERVICE}.execute */
void F107_1435 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = RTLNS(24, 24, _OBJSIZ_1_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	F539_4420(RTCV(tr1), arg1, arg2, loc1);
	tb1 = F25_353(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		F107_1436(Current, arg1, arg2);
	}
	RTLE;
}

/* {WSF_ROUTED_SERVICE}.execute_default */
void F107_1436 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,arg2);
	
	RTGC;
	tr1 = RTLNS(491, 491, _OBJSIZ_2_2_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	F492_3293(RTCV(tr1), arg1, tr2);
	loc1 = (EIF_REFERENCE) tr1;
	F492_3297(RTCV(loc1), (EIF_BOOLEAN) 1);
	F94_1345(RTCV(arg2), loc1);
	RTLE;
}

/* {WSF_ROUTED_SERVICE}.router */
EIF_REFERENCE F107_1437 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit87 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
