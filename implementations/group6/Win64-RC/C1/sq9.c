/*
 * Code for class SQLITE_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq9.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_93
static EIF_INTEGER_32 inline_F9_93 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5)
{
	return (EIF_INTEGER)sqlite3_bind_blob((sqlite3_stmt *)arg1, (int)arg2, (const void *)arg3, (int)arg4, (void(*)(void*))SQLITE_TRANSIENT)
	;
}
#define INLINE_F9_93
#endif
#ifndef INLINE_F9_94
static EIF_INTEGER_32 inline_F9_94 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	return (EIF_INTEGER)sqlite3_bind_double((sqlite3_stmt *)arg1, (int)arg2, (double)arg3)
	;
}
#define INLINE_F9_94
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
#ifndef INLINE_F9_97
static EIF_INTEGER_32 inline_F9_97 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_bind_null((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_97
#endif
#ifndef INLINE_F9_99
static EIF_INTEGER_32 inline_F9_99 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_INTEGER)sqlite3_bind_parameter_index((sqlite3_stmt *)arg1, (const char *)arg2)
	;
}
#define INLINE_F9_99
#endif
#ifndef INLINE_F9_101
static EIF_INTEGER_32 inline_F9_101 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5)
{
	return (EIF_INTEGER)sqlite3_bind_text((sqlite3_stmt *)arg1, (int)arg2, (const char *)arg3, (int)arg4, (void(*)(void*))SQLITE_TRANSIENT)
	;
}
#define INLINE_F9_101
#endif
#ifndef INLINE_F9_102
static EIF_INTEGER_32 inline_F9_102 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_busy_timeout((sqlite3 *)arg1, (int)arg2)
	;
}
#define INLINE_F9_102
#endif
#ifndef INLINE_F9_103
static EIF_INTEGER_32 inline_F9_103 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_INTEGER)sqlite3_busy_handler((sqlite3 *)arg1, (int (*)(void *, int))arg2, (void *)arg3)
	;
}
#define INLINE_F9_103
#endif
#ifndef INLINE_F9_105
static EIF_INTEGER_32 inline_F9_105 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_clear_bindings((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_105
#endif
#ifndef INLINE_F9_106
static EIF_INTEGER_32 inline_F9_106 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_close((sqlite3 *)arg1)
	;
}
#define INLINE_F9_106
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
#ifndef INLINE_F9_110
static EIF_INTEGER_32 inline_F9_110 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_column_count((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_110
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
#ifndef INLINE_F9_114
static EIF_POINTER inline_F9_114 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER)sqlite3_column_name((sqlite3_stmt *)arg1, (int)arg2)
	;
}
#define INLINE_F9_114
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
#ifndef INLINE_F9_119
static EIF_POINTER inline_F9_119 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER)sqlite3_commit_hook((sqlite3 *)arg1, (int (*)(void *))arg2, (void *)arg3)
	;
}
#define INLINE_F9_119
#endif
#ifndef INLINE_F9_122
static EIF_POINTER inline_F9_122 (EIF_POINTER arg1)
{
	return (EIF_POINTER)sqlite3_db_handle((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_122
#endif
#ifndef INLINE_F9_123
static EIF_POINTER inline_F9_123 (EIF_POINTER arg1)
{
	return (EIF_POINTER)sqlite3_db_mutex((sqlite3 *)arg1)
	;
}
#define INLINE_F9_123
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
#ifndef INLINE_F9_127
static EIF_INTEGER_32 inline_F9_127 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_INTEGER)sqlite3_extended_result_codes((sqlite3 *)arg1, (int)arg2)
	;
}
#define INLINE_F9_127
#endif
#ifndef INLINE_F9_128
static EIF_INTEGER_32 inline_F9_128 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_finalize((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_128
#endif
#ifndef INLINE_F9_129
static EIF_INTEGER_32 inline_F9_129 (void)
{
	return (EIF_INTEGER)sqlite3_initialize()
	;
}
#define INLINE_F9_129
#endif
#ifndef INLINE_F9_130
static void inline_F9_130 (EIF_POINTER arg1)
{
	sqlite3_interrupt((sqlite3 *)arg1)
	;
}
#define INLINE_F9_130
#endif
#ifndef INLINE_F9_131
static EIF_INTEGER_64 inline_F9_131 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_64)sqlite3_last_insert_rowid((sqlite3 *)arg1)
	;
}
#define INLINE_F9_131
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
#ifndef INLINE_F9_136
static EIF_POINTER inline_F9_136 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_POINTER)sqlite3_next_stmt((sqlite3 *)arg1, (sqlite3_stmt *)arg2)
	;
}
#define INLINE_F9_136
#endif
#ifndef INLINE_F9_137
static EIF_INTEGER_32 inline_F9_137 (EIF_POINTER arg1, EIF_POINTER* arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER)sqlite3_open_v2((const char *)arg1, (sqlite3 **)arg2, (int)arg3, (const char *)arg4)
	;
}
#define INLINE_F9_137
#endif
#ifndef INLINE_F9_138
static EIF_INTEGER_32 inline_F9_138 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER* arg4, EIF_POINTER* arg5)
{
	return (EIF_INTEGER)sqlite3_prepare_v2((sqlite3 *)arg1, (const char *)arg2, (int)arg3, (sqlite3_stmt **)arg4, (const char **)arg5)
	;
}
#define INLINE_F9_138
#endif
#ifndef INLINE_F9_139
static void inline_F9_139 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	sqlite3_progress_handler((sqlite3 *)arg1, (int)arg2, (int (*)(void *))arg3, (void *)arg4)
	;
}
#define INLINE_F9_139
#endif
#ifndef INLINE_F9_140
static EIF_INTEGER_32 inline_F9_140 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_reset((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_140
#endif
#ifndef INLINE_F9_141
static EIF_POINTER inline_F9_141 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return (EIF_POINTER)sqlite3_rollback_hook((sqlite3 *)arg1, (void (*)(void *))arg2, (void *)arg3)
	;
}
#define INLINE_F9_141
#endif
#ifndef INLINE_F9_143
static EIF_INTEGER_32 inline_F9_143 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_step((sqlite3_stmt *)arg1)
	;
}
#define INLINE_F9_143
#endif
#ifndef INLINE_F9_144
static EIF_INTEGER_32 inline_F9_144 (void)
{
	return (EIF_INTEGER)sqlite3_threadsafe()
	;
}
#define INLINE_F9_144
#endif
#ifndef INLINE_F9_145
static EIF_INTEGER_32 inline_F9_145 (EIF_POINTER arg1)
{
	return (EIF_INTEGER)sqlite3_total_changes((sqlite3 *)arg1)
	;
}
#define INLINE_F9_145
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

/* {SQLITE_EXTERNALS}.c_sqlite3_bind_blob */
EIF_INTEGER_32 F9_93 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_93 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4, (EIF_POINTER) arg5);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_bind_double */
EIF_INTEGER_32 F9_94 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_94 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_REAL_64) arg3);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_bind_int */
EIF_INTEGER_32 F9_95 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_95 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_bind_int64 */
EIF_INTEGER_32 F9_96 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_64 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_96 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_64) arg3);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_bind_null */
EIF_INTEGER_32 F9_97 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_97 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_bind_parameter_index */
EIF_INTEGER_32 F9_99 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_99 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_bind_text */
EIF_INTEGER_32 F9_101 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_101 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4, (EIF_POINTER) arg5);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_busy_timeout */
EIF_INTEGER_32 F9_102 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_102 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_busy_handler */
EIF_INTEGER_32 F9_103 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_103 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_clear_bindings */
EIF_INTEGER_32 F9_105 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_105 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_close */
EIF_INTEGER_32 F9_106 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_106 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_blob */
EIF_POINTER F9_107 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_107 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_bytes */
EIF_INTEGER_32 F9_108 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_108 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_count */
EIF_INTEGER_32 F9_110 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_110 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_double */
EIF_REAL_64 F9_111 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	Result = inline_F9_111 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_int */
EIF_INTEGER_32 F9_112 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_112 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_int64 */
EIF_INTEGER_64 F9_113 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	
	
	Result = inline_F9_113 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_name */
EIF_POINTER F9_114 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_114 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_text */
EIF_POINTER F9_115 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_115 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_column_type */
EIF_INTEGER_32 F9_117 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_117 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_commit_hook */
EIF_POINTER F9_119 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_119 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_db_handle */
EIF_POINTER F9_122 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_122 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_db_mutex */
EIF_POINTER F9_123 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_123 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_errcode */
EIF_INTEGER_32 F9_124 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_124 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_errmsg */
EIF_POINTER F9_125 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_125 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_extended_errcode */
EIF_INTEGER_32 F9_126 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_126 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_extended_result_codes */
EIF_INTEGER_32 F9_127 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_127 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_finalize */
EIF_INTEGER_32 F9_128 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_128 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_initialize */
EIF_INTEGER_32 F9_129 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_129 ();
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_interrupt */
void F9_130 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F9_130 ((EIF_POINTER) arg1);
}

/* {SQLITE_EXTERNALS}.c_sqlite3_last_insert_rowid */
EIF_INTEGER_64 F9_131 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	
	
	Result = inline_F9_131 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_mutex_enter */
void F9_134 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F9_134 ((EIF_POINTER) arg1);
}

/* {SQLITE_EXTERNALS}.c_sqlite3_mutex_leave */
void F9_135 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F9_135 ((EIF_POINTER) arg1);
}

/* {SQLITE_EXTERNALS}.c_sqlite3_next_stmt */
EIF_POINTER F9_136 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_136 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_open_v2 */
EIF_INTEGER_32 F9_137 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER* arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_137 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_prepare_v2 */
EIF_INTEGER_32 F9_138 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER* arg4, EIF_POINTER* arg5)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_138 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER*) arg4, (EIF_POINTER*) arg5);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_progress_handler */
void F9_139 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	inline_F9_139 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4);
}

/* {SQLITE_EXTERNALS}.c_sqlite3_reset */
EIF_INTEGER_32 F9_140 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_140 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_rollback_hook */
EIF_POINTER F9_141 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_141 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_step */
EIF_INTEGER_32 F9_143 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_143 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_threadsafe */
EIF_INTEGER_32 F9_144 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_144 ();
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_total_changes */
EIF_INTEGER_32 F9_145 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F9_145 ((EIF_POINTER) arg1);
	return Result;
}

/* {SQLITE_EXTERNALS}.c_sqlite3_update_hook */
EIF_POINTER F9_146 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F9_146 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
	return Result;
}

void EIF_Minit9 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
