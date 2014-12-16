/*
 * Code for class FILE_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi252.h"
#include "eif_built_in.h"
#include "eif_file.h"
#include "eif_eiffel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F496_3417
static EIF_INTEGER_32 inline_F496_3417 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	#ifdef EIF_WINDOWS
				return (EIF_INTEGER) MultiByteToWideChar(CP_ACP, 0, (LPSTR) arg1, -1, (LPWSTR) arg2, (int) arg3) * sizeof(wchar_t);
			#else
				return arg3
			#endif
	;
}
#define INLINE_F496_3417
#endif
#ifndef INLINE_F496_3418
static EIF_INTEGER_32 inline_F496_3418 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	#ifdef EIF_WINDOWS
				return (EIF_INTEGER) WideCharToMultiByte(CP_ACP, 0, (LPCWSTR) arg1, -1, (LPSTR) arg2, (int) arg3, NULL, NULL);
			#else
				return arg3;
			#endif
	;
}
#define INLINE_F496_3418
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE_INFO}.make */
void F496_3360 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ti4_1 = (EIF_INTEGER_32) stat_size();
	F481_3213(Current, tu1_1, ti4_1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {FILE_INFO}.size */
EIF_INTEGER_32 F496_3364 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_info((rt_stat_buf*) *(EIF_REFERENCE *)(Current), (int) ((EIF_INTEGER_32) 6L));
}

/* {FILE_INFO}.change_date */
EIF_INTEGER_32 F496_3369 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_info((rt_stat_buf*) *(EIF_REFERENCE *)(Current), (int) ((EIF_INTEGER_32) 9L));
}

/* {FILE_INFO}.file_name_to_pointer */
EIF_REFERENCE F496_3377 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	struct eif_ex_26 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 27);
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,arg2);
	RTLR(2,loc5);
	RTLR(3,arg1);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,Current);
	RTLR(8,loc6);
	
	RTGC;
	loc3 = (EIF_REFERENCE) arg2;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		loc5 = arg1;
		loc5 = RTRV(eif_non_attached_type(734),loc5);
		if (EIF_TEST(loc5)) {
			if ((EIF_BOOLEAN)(loc3 == NULL)) {
				tr1 = RTLNS(506, 506, _OBJSIZ_0_1_0_1_0_1_1_0_);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
				F507_3515(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L)));
				loc3 = (EIF_REFERENCE) tr1;
			} else {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
				F507_3599(RTCV(loc3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L)));
			}
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
			F28_402(RTCV(loc1), arg1, ((EIF_INTEGER_32) 1L), ti4_1, loc3, ((EIF_INTEGER_32) 0L), NULL);
		} else {
			tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
			F432_2731(RTCV(tr1), arg1);
			loc2 = (EIF_REFERENCE) tr1;
			if ((EIF_BOOLEAN)(loc3 == NULL)) {
				tr1 = RTLNS(506, 506, _OBJSIZ_0_1_0_1_0_1_1_0_);
				tp1 = F432_2750(RTCV(loc2));
				tp2 = F1_33(Current);
				ti4_1 = inline_F496_3417(tp1, tp2, ((EIF_INTEGER_32) 0L));
				F507_3515(RTCV(tr1), ti4_1);
				loc3 = (EIF_REFERENCE) tr1;
			} else {
				tp1 = F432_2750(RTCV(loc2));
				{
				/* INLINED CODE (default_pointer) */
				tp2 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				tp3 = tp2;
				ti4_1 = inline_F496_3417(tp1, tp3, ((EIF_INTEGER_32) 0L));
				F507_3599(RTCV(loc3), ti4_1);
			}
			tp1 = F432_2750(RTCV(loc2));
			tp2 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_0_1_0_0_);
			loc4 = inline_F496_3417(tp1, tp2, ti4_1);
		}
	} else {
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			tr1 = RTLNS(506, 506, _OBJSIZ_0_1_0_1_0_1_1_0_);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
			F507_3515(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			loc3 = (EIF_REFERENCE) tr1;
		} else {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
			F507_3599(RTCV(loc3), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		loc6 = arg1;
		loc6 = RTRV(eif_non_attached_type(734),loc6);
		if (EIF_TEST(loc6)) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
			F28_377(RTCV(loc1), arg1, ((EIF_INTEGER_32) 1L), ti4_1, loc3, ((EIF_INTEGER_32) 0L), NULL);
		} else {
			tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
			F432_2736(RTCV(tr1), tp1, ti4_1);
			loc2 = (EIF_REFERENCE) tr1;
			F432_2756(RTCV(loc2), arg1);
		}
	}
	RTLE;
	return (EIF_REFERENCE) loc3;
}

/* {FILE_INFO}.pointer_to_file_name_32 */
EIF_REFERENCE F496_3378 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	struct eif_ex_26 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 27);
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(506, 506, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = F493_3303(Current, arg1);
	F507_3518(RTCV(tr1), arg1, ti4_1);
	loc2 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		Result = F28_405(RTCV(loc1), loc2);
		Result = F28_409(RTCV(loc1), loc2);
		RTLE;
		return (EIF_REFERENCE) Result;
	} else {
		Result = F28_384(RTCV(loc1), loc2);
		RTLE;
		return (EIF_REFERENCE) Result;
	}/* NOTREACHED */
	
}

/* {FILE_INFO}.pointer_to_file_name_8 */
EIF_REFERENCE F496_3379 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		loc2 = inline_F496_3418(arg1, tp2, ((EIF_INTEGER_32) 0L));
		tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F432_2732(RTCV(tr1), loc2);
		loc1 = (EIF_REFERENCE) tr1;
		tp1 = F432_2750(RTCV(loc1));
		loc2 = inline_F496_3418(arg1, tp1, loc2);
		tr1 = F432_2743(RTCV(loc1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F432_2735(RTCV(tr1), arg1);
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = F432_2744(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {FILE_INFO}.is_directory */
EIF_BOOLEAN F496_3385 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) eif_file_info((rt_stat_buf*) *(EIF_REFERENCE *)(Current), (int) ((EIF_INTEGER_32) 12L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {FILE_INFO}.is_readable */
EIF_BOOLEAN F496_3391 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_file_eaccess((rt_stat_buf*) *(EIF_REFERENCE *)(Current), (int) ((EIF_INTEGER_32) 0L)));
}

/* {FILE_INFO}.is_writable */
EIF_BOOLEAN F496_3392 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_file_eaccess((rt_stat_buf*) *(EIF_REFERENCE *)(Current), (int) ((EIF_INTEGER_32) 1L)));
}

/* {FILE_INFO}.is_equal */
EIF_BOOLEAN F496_3402 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
			loc2 = tr1;
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			Result = '\0';
			tb1 = F733_5599(RTCV(loc1), loc2);
			if (tb1) {
				tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_3_1_);
				Result = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) == tb1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {FILE_INFO}.copy */
void F496_3403 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		F481_3218(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
}

/* {FILE_INFO}.fast_update */
void F496_3407 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	tp1 = *(EIF_POINTER *)(RTCV(arg2)+ _PTROFF_0_1_0_1_0_0_);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
	ti4_1 = (EIF_INTEGER_32) eif_file_stat((EIF_FILENAME) tp1, (rt_stat_buf*) *(EIF_REFERENCE *)(Current), (int) tb1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {FILE_INFO}.internal_file_name */
EIF_REFERENCE F496_3408 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FILE_INFO}.internal_name_pointer */
EIF_REFERENCE F496_3409 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {FILE_INFO}.stat_size */
EIF_INTEGER_32 F496_3410 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) stat_size();
	
	return Result;
}

/* {FILE_INFO}.eif_file_stat */
EIF_INTEGER_32 F496_3411 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_stat((EIF_FILENAME) arg1, (rt_stat_buf*) arg2, (int) arg3);
	
	return Result;
}

/* {FILE_INFO}.file_eaccess */
EIF_BOOLEAN F496_3413 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_eaccess((rt_stat_buf*) arg1, (int) arg2));
	
	return Result;
}

/* {FILE_INFO}.file_info */
EIF_INTEGER_32 F496_3414 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_info((rt_stat_buf*) arg1, (int) arg2);
	
	return Result;
}

/* {FILE_INFO}.multi_byte_to_utf_16 */
EIF_INTEGER_32 F496_3417 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F496_3417 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	return Result;
}

/* {FILE_INFO}.utf_16_to_multi_byte */
EIF_INTEGER_32 F496_3418 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F496_3418 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	return Result;
}

void EIF_Minit252 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
