/*
 * Code for class SQLITE_INTEGER_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq415.h"
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
#ifndef INLINE_F9_96
static EIF_INTEGER_32 inline_F9_96 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_64 arg3)
{
	return (EIF_INTEGER)sqlite3_bind_int64((sqlite3_stmt *)arg1, (int)arg2, (sqlite_int64)arg3)
	;
}
#define INLINE_F9_96
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_INTEGER_ARG}.bind_to_statement */
void F947_8233 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 2147483647L);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_1_0_0_0_0_0_0_) <= ti8_1)) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O6287[Dtype(arg1)-924]);
		ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_1_0_0_0_0_0_0_);
		ti4_1 = (EIF_INTEGER_32) ti8_1;
		loc1 = inline_F9_95(tp1, arg2, ti4_1);
	} else {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O6287[Dtype(arg1)-924]);
		ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_1_0_0_0_0_0_0_);
		loc1 = inline_F9_96(tp1, arg2, ti8_1);
	}
	F213_2446(Current, loc1);
	RTLE;
}

void EIF_Minit415 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
