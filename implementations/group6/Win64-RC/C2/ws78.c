/*
 * Code for class WSF_SESSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws78.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_SESSION}.remember */
void F90_1287 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = RTCCL(arg1);
	tr3 = F90_1289(Current, arg2);
	F579_4679(RTCV(tr1), tr2, tr3);
	RTLE;
}

/* {WSF_SESSION}.table_key */
EIF_REFERENCE F90_1289 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	
	
	tr1 = F733_5613(RTCV(arg1));
	return (EIF_REFERENCE) tr1;
}

/* {WSF_SESSION}.apply */
void F90_1293 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,Current);
	
	RTGC;
	tr1 = F94_1326(RTCV(arg2));
	F428_2699(Current, tr1, arg1, arg3);
	RTLE;
}

void EIF_Minit78 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
