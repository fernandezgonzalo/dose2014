/*
 * Code for class SQLITE_BLOB_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq416.h"
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

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_BLOB_ARG}.bind_to_statement */
void F948_8236 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp1 = *(EIF_POINTER *)(RTCV(arg1) + O6287[Dtype(arg1)-924]);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_1_0_0_);
	{
	/* INLINED CODE (default_pointer) */
	tp3 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp4 = tp3;
	ti4_1 = inline_F9_93(tp1, arg2, tp2, ti4_1, tp4);
	F213_2446(Current, ti4_1);
	RTLE;
}

void EIF_Minit416 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
