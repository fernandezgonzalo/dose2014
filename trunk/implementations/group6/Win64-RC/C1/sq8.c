/*
 * Code for class SQLITE_EXPERIMENTAL_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq8.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F8_92
static EIF_INTEGER_32 inline_F8_92 (EIF_INTEGER_32 arg1)
{
	return (EIF_INTEGER)sqlite3_config((int)arg1);
	;
}
#define INLINE_F8_92
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_EXPERIMENTAL_EXTERNALS}.c_sqlite3_config */
EIF_INTEGER_32 F8_92 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F8_92 ((EIF_INTEGER_32) arg1);
	return Result;
}

void EIF_Minit8 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
