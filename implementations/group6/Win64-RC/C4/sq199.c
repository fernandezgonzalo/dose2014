/*
 * Code for class SQLITE_DATABASE_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq199.h"
#include <sqlite3.h>
#include "esqlite.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_145
static EIF_INTEGER_32 inline_F9_145 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_total_changes((sqlite3 *)arg1)
	;
}
#define INLINE_F9_145
#endif
#ifndef INLINE_F9_124
static EIF_INTEGER_32 inline_F9_124 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_errcode((sqlite3 *)arg1)
	;
}
#define INLINE_F9_124
#endif
#ifndef INLINE_F9_125
static EIF_POINTER inline_F9_125 (EIF_POINTER arg1)
{
	return (EIF_POINTER)sqlite3_errmsg((sqlite3 *)arg1)
	;
}
#define INLINE_F9_125
#endif
#ifndef INLINE_F9_126
static EIF_INTEGER_32 inline_F9_126 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_extended_errcode((sqlite3 *)arg1)
	;
}
#define INLINE_F9_126
#endif
#ifndef INLINE_F9_131
static EIF_INTEGER_64 inline_F9_131 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_64)sqlite3_last_insert_rowid((sqlite3 *)arg1)
	;
}
#define INLINE_F9_131
#endif
#ifndef INLINE_F9_102
static EIF_INTEGER_32 inline_F9_102 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_busy_timeout((sqlite3 *)arg1, (int)arg2)
	;
}
#define INLINE_F9_102
#endif
#ifndef INLINE_F9_130
static void inline_F9_130 (EIF_POINTER arg1)
{
	sqlite3_interrupt((sqlite3 *)arg1)
	;
}
#define INLINE_F9_130
#endif
#ifndef INLINE_F9_106
static EIF_INTEGER_32 inline_F9_106 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_close((sqlite3 *)arg1)
	;
}
#define INLINE_F9_106
#endif
#ifndef INLINE_F9_127
static EIF_INTEGER_32 inline_F9_127 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_extended_result_codes((sqlite3 *)arg1, (int)arg2)
	;
}
#define INLINE_F9_127
#endif
#ifndef INLINE_F9_137
static EIF_INTEGER_32 inline_F9_137 (EIF_POINTER arg1, EIF_POINTER* arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER)sqlite3_open_v2((const char *)arg1, (sqlite3 **)arg2, (int)arg3, (const char *)arg4)
	;
}
#define INLINE_F9_137
#endif
#ifndef INLINE_F9_136
static EIF_POINTER inline_F9_136 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_POINTER)sqlite3_next_stmt((sqlite3 *)arg1, (sqlite3_stmt *)arg2)
	;
}
#define INLINE_F9_136
#endif
#ifndef INLINE_F9_123
static EIF_POINTER inline_F9_123 (EIF_POINTER arg1)
{
	return (EIF_POINTER)sqlite3_db_mutex((sqlite3 *)arg1)
	;
}
#define INLINE_F9_123
#endif
#ifndef INLINE_F9_134
static void inline_F9_134 (EIF_POINTER arg1)
{
	#if defined(SQLITE_THREADSAFE) && SQLITE_THREADSAFE
				sqlite3_mutex_enter((sqlite3_mutex *)arg1);
#endif
	;
}
#define INLINE_F9_134
#endif
#ifndef INLINE_F9_135
static void inline_F9_135 (EIF_POINTER arg1)
{
	#if defined(SQLITE_THREADSAFE) && SQLITE_THREADSAFE
				sqlite3_mutex_leave((sqlite3_mutex *)arg1);
#endif
	;
}
#define INLINE_F9_135
#endif
#ifndef INLINE_F411_2649
static EIF_POINTER inline_F411_2649 (void)
{
	return c_esqlite3_busy_callback
	;
}
#define INLINE_F411_2649
#endif
#ifndef INLINE_F9_139
static void inline_F9_139 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	sqlite3_progress_handler((sqlite3 *)arg1, (int)arg2, (int (*)(void *))arg3, (void *)arg4)
	;
}
#define INLINE_F9_139
#endif
#ifndef INLINE_F9_103
static EIF_INTEGER_32 inline_F9_103 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_INTEGER)sqlite3_busy_handler((sqlite3 *)arg1, (int (*)(void *, int))arg2, (void *)arg3)
	;
}
#define INLINE_F9_103
#endif
#ifndef INLINE_F411_2650
static EIF_POINTER inline_F411_2650 (void)
{
	return c_esqlite3_commit_callback
	;
}
#define INLINE_F411_2650
#endif
#ifndef INLINE_F9_119
static EIF_POINTER inline_F9_119 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER)sqlite3_commit_hook((sqlite3 *)arg1, (int (*)(void *))arg2, (void *)arg3)
	;
}
#define INLINE_F9_119
#endif
#ifndef INLINE_F411_2651
static EIF_POINTER inline_F411_2651 (void)
{
	return c_esqlite3_rollback_callback
	;
}
#define INLINE_F411_2651
#endif
#ifndef INLINE_F9_141
static EIF_POINTER inline_F9_141 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER)sqlite3_rollback_hook((sqlite3 *)arg1, (void (*)(void *))arg2, (void *)arg3)
	;
}
#define INLINE_F9_141
#endif
#ifndef INLINE_F411_2652
static EIF_POINTER inline_F411_2652 (void)
{
	return c_esqlite3_update_callback
	;
}
#define INLINE_F411_2652
#endif
#ifndef INLINE_F9_146
static EIF_POINTER inline_F9_146 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER)sqlite3_update_hook((sqlite3 *)arg1, (void (*)(void *, int, char const *, char const *, sqlite3_int64))arg2, (void *)arg3)
	;
}
#define INLINE_F9_146
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_total_changes */
EIF_INTEGER_32 F411_2629 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_145(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_errcode */
EIF_INTEGER_32 F411_2630 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_124(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_errmsg */
EIF_POINTER F411_2631 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) inline_F9_125(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_extended_errcode */
EIF_INTEGER_32 F411_2632 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_126(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_last_insert_rowid */
EIF_INTEGER_64 F411_2633 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_64) inline_F9_131(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_busy_timeout */
EIF_INTEGER_32 F411_2634 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_102(arg2, arg3);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_interrupt */
void F411_2635 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F9_130(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_close */
EIF_INTEGER_32 F411_2636 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_106(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_extended_result_codes */
EIF_INTEGER_32 F411_2637 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_127(arg2, arg3);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_open_v2 */
EIF_INTEGER_32 F411_2638 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER* arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F9_137(arg2, arg3, arg4, arg5);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_next_stmt */
EIF_POINTER F411_2639 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	return (EIF_POINTER) inline_F9_136(arg2, arg3);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_db_mutex */
EIF_POINTER F411_2640 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) inline_F9_123(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_mutex_enter */
void F411_2641 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F9_134(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_mutex_leave */
void F411_2642 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F9_135(arg2);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_progress_handler */
void F411_2643 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER tp1;
	
	
	RTGC;
	tp1 = inline_F411_2649();
	inline_F9_139(arg2, arg3, tp1, arg4);
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_busy_handler */
EIF_INTEGER_32 F411_2644 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	tp1 = inline_F411_2649();
	Result = inline_F9_103(arg2, tp1, arg3);
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_commit_hook */
EIF_POINTER F411_2645 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	RTGC;
	tp1 = inline_F411_2650();
	Result = inline_F9_119(arg2, tp1, arg3);
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_rollback_hook */
EIF_POINTER F411_2646 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	RTGC;
	tp1 = inline_F411_2651();
	Result = inline_F9_141(arg2, tp1, arg3);
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite3_update_hook */
EIF_POINTER F411_2647 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	RTGC;
	tp1 = inline_F411_2652();
	Result = inline_F9_146(arg2, tp1, arg3);
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.c_sqlite3_busy_callback */
EIF_POINTER F411_2649 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F411_2649 ();
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.c_sqlite3_commit_callback */
EIF_POINTER F411_2650 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F411_2650 ();
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.c_sqlite3_rollback_callback */
EIF_POINTER F411_2651 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F411_2651 ();
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.c_sqlite3_update_callback */
EIF_POINTER F411_2652 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F411_2652 ();
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite_open_nomutex */
EIF_INTEGER_32 F411_2656 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_OPEN_NOMUTEX;
	return Result;
}

/* {SQLITE_DATABASE_EXTERNALS}.sqlite_open_fullmutex */
EIF_INTEGER_32 F411_2657 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) SQLITE_OPEN_FULLMUTEX;
	return Result;
}

void EIF_Minit199 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
