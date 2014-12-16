/*
 * Code for class SQLITE_BIND_ARG [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq512.h"

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
void F940_8219 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(737));
	F737_5725(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O6484[dtype-939]) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + O6485[dtype-939]) = (EIF_REFERENCE) RTCCL(arg2);
	RTLE;
}

/* {SQLITE_BIND_ARG}.variable */
EIF_REFERENCE F940_8220 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O6484[Dtype(Current) - 939]);
}


/* {SQLITE_BIND_ARG}.value */
EIF_REFERENCE F940_8221 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O6485[Dtype(Current) - 939]);
}


void EIF_Minit512 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
