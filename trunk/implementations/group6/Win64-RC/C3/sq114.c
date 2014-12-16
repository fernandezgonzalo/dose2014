/*
 * Code for class SQLITE_API_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq114.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_129
static EIF_INTEGER_32 inline_F9_129 (void)
{
	return (EIF_INTEGER)sqlite3_initialize()
	;
}
#define INLINE_F9_129
#endif
#ifndef INLINE_F9_144
static EIF_INTEGER_32 inline_F9_144 (void)
{
	return (EIF_INTEGER)sqlite3_threadsafe()
	;
}
#define INLINE_F9_144
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

/* {SQLITE_API_EXTERNALS}.sqlite3_initialize */
EIF_INTEGER_32 F136_1697 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_129();
}

/* {SQLITE_API_EXTERNALS}.sqlite3_threadsafe */
EIF_INTEGER_32 F136_1699 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_144();
}

/* {SQLITE_API_EXTERNALS}.sqlite3_config */
EIF_INTEGER_32 F136_1703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F8_92(arg2);
}

void EIF_Minit114 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
