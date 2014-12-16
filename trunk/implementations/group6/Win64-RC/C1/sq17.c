/*
 * Code for class SQLITE_OPEN_MODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq17.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F17_188
static EIF_INTEGER_32 inline_F17_188 (void)
{
	return SQLITE_OPEN_READWRITE
	;
}
#define INLINE_F17_188
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_OPEN_MODE}.read_write */
EIF_INTEGER_32 F17_188 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F17_188 ();
	return Result;
}

void EIF_Minit17 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
