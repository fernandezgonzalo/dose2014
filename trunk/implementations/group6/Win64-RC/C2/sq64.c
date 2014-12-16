/*
 * Code for class SQLITE_RESULT_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq64.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_107
static EIF_POINTER inline_F9_107 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER)sqlite3_column_blob((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_107
#endif
#ifndef INLINE_F9_108
static EIF_INTEGER_32 inline_F9_108 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_column_bytes((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_108
#endif
#ifndef INLINE_F9_111
static EIF_REAL_64 inline_F9_111 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_DOUBLE)sqlite3_column_double((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_111
#endif
#ifndef INLINE_F9_112
static EIF_INTEGER_32 inline_F9_112 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_column_int((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_112
#endif
#ifndef INLINE_F9_113
static EIF_INTEGER_64 inline_F9_113 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER_64)sqlite3_column_int64((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_113
#endif
#ifndef INLINE_F9_115
static EIF_POINTER inline_F9_115 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER)sqlite3_column_text((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_115
#endif
#ifndef INLINE_F9_117
static EIF_INTEGER_32 inline_F9_117 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_column_type((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_117
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_RESULT_EXTERNALS}.sqlite3_column_blob */
EIF_POINTER F76_1006 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_POINTER) inline_F9_107(arg2, arg3);
}

/* {SQLITE_RESULT_EXTERNALS}.sqlite3_column_bytes */
EIF_INTEGER_32 F76_1007 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_108(arg2, arg3);
}

/* {SQLITE_RESULT_EXTERNALS}.sqlite3_column_double */
EIF_REAL_64 F76_1009 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_REAL_64) inline_F9_111(arg2, arg3);
}

/* {SQLITE_RESULT_EXTERNALS}.sqlite3_column_int */
EIF_INTEGER_32 F76_1010 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_112(arg2, arg3);
}

/* {SQLITE_RESULT_EXTERNALS}.sqlite3_column_int64 */
EIF_INTEGER_64 F76_1011 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_INTEGER_64) inline_F9_113(arg2, arg3);
}

/* {SQLITE_RESULT_EXTERNALS}.sqlite3_column_text */
EIF_POINTER F76_1012 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_POINTER) inline_F9_115(arg2, arg3);
}

/* {SQLITE_RESULT_EXTERNALS}.sqlite3_column_type */
EIF_INTEGER_32 F76_1014 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_117(arg2, arg3);
}

void EIF_Minit64 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
