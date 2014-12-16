/*
 * Code for class SQLITE_HELPERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq191.h"
#include <sqlite3.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_HELPERS}.sqlite_success */
EIF_BOOLEAN F213_2444 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	ti4_1 = eif_bit_and(((EIF_INTEGER_32) 31L),arg1);
	if (!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
		tb1 = (EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) SQLITE_ROW);
	}
	if (!tb1) {
		Result = (EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) SQLITE_DONE);
	}
	return Result;
}

/* {SQLITE_HELPERS}.sqlite_exception */
EIF_REFERENCE F213_2445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,tr1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) SQLITE_IOERR;
	ti4_1 = eif_bit_and(arg1,ti4_1);
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) SQLITE_IOERR)) {
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = RTLNS(168, 168, _OBJSIZ_6_1_0_2_0_0_0_0_);
			F168_2152(RTCV(tr1), arg1, arg2);
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(168, 168, _OBJSIZ_6_1_0_2_0_0_0_0_);
			F168_2151(RTCV(tr1), arg1);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	} else {
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = RTLNS(167, 167, _OBJSIZ_6_1_0_2_0_0_0_0_);
			F168_2152(RTCV(tr1), arg1, arg2);
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(167, 167, _OBJSIZ_6_1_0_2_0_0_0_0_);
			F168_2151(RTCV(tr1), arg1);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}/* NOTREACHED */
	
}

/* {SQLITE_HELPERS}.sqlite_raise_on_failure */
void F213_2446 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F213_2444(Current, arg1)) {
		loc1 = F213_2445(Current, arg1, NULL);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			F166_2118(RTCV(loc1));
		}
	}
	RTLE;
}

void EIF_Minit191 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
