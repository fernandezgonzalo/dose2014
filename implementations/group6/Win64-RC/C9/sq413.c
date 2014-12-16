/*
 * Code for class SQLITE_BOOLEAN_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq413.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_95
static EIF_INTEGER_32 inline_F9_95 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return (EIF_INTEGER)sqlite3_bind_int((sqlite3_stmt *)arg1, (int)arg2, (int)arg3)
	;
}
#define INLINE_F9_95
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_BOOLEAN_ARG}.bind_to_statement */
void F945_8229 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O6287[Dtype(arg1)-924]);
		loc1 = inline_F9_95(tp1, arg2, ((EIF_INTEGER_32) 1L));
	} else {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O6287[Dtype(arg1)-924]);
		loc1 = inline_F9_95(tp1, arg2, ((EIF_INTEGER_32) 0L));
	}
	F213_2446(Current, loc1);
	RTLE;
}

void EIF_Minit413 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
