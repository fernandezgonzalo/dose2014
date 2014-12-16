/*
 * Code for class SQLITE_STATEMENT_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq215.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_110
static EIF_INTEGER_32 inline_F9_110 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_column_count((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_110
#endif
#ifndef INLINE_F9_122
static EIF_POINTER inline_F9_122 (EIF_POINTER arg1)
{
	return (EIF_POINTER)sqlite3_db_handle((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_122
#endif
#ifndef INLINE_F9_114
static EIF_POINTER inline_F9_114 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER)sqlite3_column_name((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_114
#endif
#ifndef INLINE_F9_138
static EIF_INTEGER_32 inline_F9_138 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER* arg4, EIF_POINTER* arg5)
{
	return (EIF_INTEGER)sqlite3_prepare_v2((sqlite3 *)arg1, (const char *)arg2, (int)arg3, (sqlite3_stmt **)arg4, (const char **)arg5)
	;
}
#define INLINE_F9_138
#endif
#ifndef INLINE_F9_143
static EIF_INTEGER_32 inline_F9_143 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_step((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_143
#endif
#ifndef INLINE_F9_140
static EIF_INTEGER_32 inline_F9_140 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_reset((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_140
#endif
#ifndef INLINE_F9_105
static EIF_INTEGER_32 inline_F9_105 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_clear_bindings((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_105
#endif
#ifndef INLINE_F9_128
static EIF_INTEGER_32 inline_F9_128 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_finalize((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_128
#endif
#ifndef INLINE_F9_99
static EIF_INTEGER_32 inline_F9_99 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_INTEGER)sqlite3_bind_parameter_index((sqlite3_stmt *)arg1, (const char *)arg2)
	;
}
#define INLINE_F9_99
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_column_count */
EIF_INTEGER_32 F430_2719 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_110(arg2);
}

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_db_handle */
EIF_POINTER F430_2720 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) inline_F9_122(arg2);
}

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_column_name */
EIF_POINTER F430_2721 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_POINTER) inline_F9_114(arg2, arg3);
}

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_prepare_v2 */
EIF_INTEGER_32 F430_2722 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_POINTER* arg5, EIF_POINTER* arg6)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_138(arg2, arg3, arg4, arg5, arg6);
}

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_step */
EIF_INTEGER_32 F430_2723 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_143(arg2);
}

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_reset */
EIF_INTEGER_32 F430_2724 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_140(arg2);
}

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_clear_bindings */
EIF_INTEGER_32 F430_2725 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_105(arg2);
}

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_finalize */
EIF_INTEGER_32 F430_2726 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_128(arg2);
}

/* {SQLITE_STATEMENT_EXTERNALS}.sqlite3_bind_parameter_index */
EIF_INTEGER_32 F430_2727 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_99(arg2, arg3);
}

void EIF_Minit215 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
