/*
 * Code for class SQLITE_NULL_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq412.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_97
static EIF_INTEGER_32 inline_F9_97 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_bind_null((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_97
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_NULL_ARG}.make */
void F944_8226 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F940_8219(Current, arg1, NULL);
}

/* {SQLITE_NULL_ARG}.bind_to_statement */
void F944_8228 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(arg1) + O6287[Dtype(arg1)-924]);
	ti4_1 = inline_F9_97(tp1, arg2);
	F213_2446(Current, ti4_1);
	RTLE;
}

void EIF_Minit412 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
