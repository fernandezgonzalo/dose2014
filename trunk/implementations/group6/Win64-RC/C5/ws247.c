/*
 * Code for class WSF_DEFAULT_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws247.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_DEFAULT_RESPONSE}.make */
void F491_3288 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_DEFAULT_RESPONSE}.request */
EIF_REFERENCE F491_3289 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_DEFAULT_RESPONSE}.send_to */
void F491_3290 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current);
	tr1 = RTOSCF(1953,F158_1953,(Current));
	tb1 = F749_6174(RTCV(loc2), tr1);
	if (tb1) {
		loc1 = F491_3291(Current, loc2);
	} else {
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2900[Dtype(Current)-490])(Current, loc2);
	}
	F94_1345(RTCV(arg1), loc1);
	RTLE;
}

/* {WSF_DEFAULT_RESPONSE}.trace_message */
EIF_REFERENCE F491_3291 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	
	RTGC;
	tr1 = RTLNS(485, 485, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F486_3220(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WSF_DEFAULT_RESPONSE}.not_found_message */
EIF_REFERENCE F491_3292 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	
	RTGC;
	tr1 = RTLNS(486, 486, _OBJSIZ_4_0_0_0_0_0_0_0_);
	F487_3224(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit247 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
