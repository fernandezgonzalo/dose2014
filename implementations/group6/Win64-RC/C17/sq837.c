/*
 * Code for class SQLITE_BIND_ARG [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq837.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_BIND_ARG}.make */
void F943_8219 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REAL_64 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(737));
	F737_5725(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_REAL_64 *)(Current+ _R64OFF_1_0_0_0_0_0_0_0_) = (EIF_REAL_64) arg2;
	RTLE;
}

/* {SQLITE_BIND_ARG}.variable */
EIF_REFERENCE F943_8220 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SQLITE_BIND_ARG}.value */
EIF_REAL_64 F943_8221 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_1_0_0_0_0_0_0_0_);
}


void EIF_Minit837 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
