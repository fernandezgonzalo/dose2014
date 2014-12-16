/*
 * Code for class C_DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "c_20.h"
#include <string.h>
#include <sys/timeb.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F20_243
static void inline_F20_243 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	*(time_t *) arg2 = (((struct timeb *)arg1)->time);
	;
}
#define INLINE_F20_243
#endif
#ifndef INLINE_F20_246
static EIF_POINTER inline_F20_246 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gmtime ((time_t *) arg1))
	;
}
#define INLINE_F20_246
#endif
#ifndef INLINE_F20_245
static EIF_POINTER inline_F20_245 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (localtime ((time_t *) arg1))
	;
}
#define INLINE_F20_245
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {C_DATE}.default_create */
void F20_227 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F20_230(Current);
	RTLE;
}

/* {C_DATE}.make_utc */
void F20_228 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F20_230(Current);
	RTLE;
}

/* {C_DATE}.update */
void F20_230 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) sizeof(struct timeb);
	loc1 = malloc((size_t)ti4_1);
	ti4_1 = (EIF_INTEGER_32) sizeof(time_t);
	loc3 = malloc((size_t)ti4_1);
	ftime(((struct timeb*) loc1));
	inline_F20_243(loc1, loc3);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc2 = inline_F20_246(loc3);
	} else {
		loc2 = inline_F20_245(loc3);
	}
	tr1 = RTLNSMART(eif_non_attached_type(506));
	ti4_1 = (EIF_INTEGER_32) sizeof(struct tm);
	F507_3517(RTCV(tr1), loc2, ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc4 = (EIF_INTEGER_32) (((struct timeb *)loc1)->millitm);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 999L)))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc4;
	}
	free(loc1);
	free(loc3);
	RTLE;
}

/* {C_DATE}.year_now */
EIF_INTEGER_32 F20_231 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_year);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1900L) + Result);
	RTLE;
	return Result;
}

/* {C_DATE}.month_now */
EIF_INTEGER_32 F20_232 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_mon);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {C_DATE}.day_now */
EIF_INTEGER_32 F20_233 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_mday);
	RTLE;
	return Result;
}

/* {C_DATE}.hour_now */
EIF_INTEGER_32 F20_234 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_hour);
	RTLE;
	return Result;
}

/* {C_DATE}.minute_now */
EIF_INTEGER_32 F20_235 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_min);
	RTLE;
	return Result;
}

/* {C_DATE}.second_now */
EIF_INTEGER_32 F20_236 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_sec);
	if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 59L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	}
	RTLE;
	return Result;
}

/* {C_DATE}.ftime */
void F20_238 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	ftime(((struct timeb*) arg1));
}

/* {C_DATE}.timeb_structure_size */
EIF_INTEGER_32 F20_239 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(struct timeb);
	return Result;
}

/* {C_DATE}.time_t_structure_size */
EIF_INTEGER_32 F20_240 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(time_t);
	return Result;
}

/* {C_DATE}.tm_structure_size */
EIF_INTEGER_32 F20_241 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(struct tm);
	return Result;
}

/* {C_DATE}.get_millitm */
EIF_INTEGER_32 F20_242 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct timeb *)arg1)->millitm);
	
	return Result;
}

/* {C_DATE}.get_time */
void F20_243 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F20_243 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {C_DATE}.internal_item */
EIF_REFERENCE F20_244 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {C_DATE}.localtime */
EIF_POINTER F20_245 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F20_245 ((EIF_POINTER) arg1);
	return Result;
}

/* {C_DATE}.gmtime */
EIF_POINTER F20_246 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F20_246 ((EIF_POINTER) arg1);
	return Result;
}

/* {C_DATE}.get_tm_year */
EIF_INTEGER_32 F20_247 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_year);
	
	return Result;
}

/* {C_DATE}.get_tm_mon */
EIF_INTEGER_32 F20_248 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_mon);
	
	return Result;
}

/* {C_DATE}.get_tm_mday */
EIF_INTEGER_32 F20_249 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_mday);
	
	return Result;
}

/* {C_DATE}.get_tm_hour */
EIF_INTEGER_32 F20_250 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_hour);
	
	return Result;
}

/* {C_DATE}.get_tm_min */
EIF_INTEGER_32 F20_251 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_min);
	
	return Result;
}

/* {C_DATE}.get_tm_sec */
EIF_INTEGER_32 F20_252 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_sec);
	
	return Result;
}

void EIF_Minit20 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
