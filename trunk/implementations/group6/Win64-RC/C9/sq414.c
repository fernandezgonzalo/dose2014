/*
 * Code for class SQLITE_DOUBLE_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq414.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_94
static EIF_INTEGER_32 inline_F9_94 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	return (EIF_INTEGER)sqlite3_bind_double((sqlite3_stmt *)arg1, (int)arg2, (double)arg3)
	;
}
#define INLINE_F9_94
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_DOUBLE_ARG}.bind_to_statement */
void F946_8231 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(arg1) + O6287[Dtype(arg1)-924]);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_1_0_0_0_0_0_0_0_);
	ti4_1 = inline_F9_94(tp1, arg2, tr8_1);
	F213_2446(Current, ti4_1);
	RTLE;
}

void EIF_Minit414 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
