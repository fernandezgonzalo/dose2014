/*
 * Code for class SQLITE_DATABASE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq395.h"
#include "eif_built_in.h"
#include "../C8/sq395.h"
#include "esqlite.h"
#include "eif_memory.h"
#include "eif_threads.h"
#include <sqlite3.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F505_3475
static int inline_F505_3475 (void)
{
	return eif_is_in_final_collect;
	;
}
#define INLINE_F505_3475
#endif
#ifndef INLINE_F17_188
static EIF_INTEGER_32 inline_F17_188 (void)
{
	return SQLITE_OPEN_READWRITE
	;
}
#define INLINE_F17_188
#endif
#ifndef INLINE_F923_7953
static EIF_POINTER inline_F923_7953 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_CBDATAP p_data = (EIF_CBDATAP)malloc(sizeof(EIF_CBDATA));
p_data->o = eif_protect(arg2);
p_data->func = arg1;
return p_data;
	;
}
#define INLINE_F923_7953
#endif
#ifndef INLINE_F923_7954
static void inline_F923_7954 (EIF_POINTER arg1)
{
	eif_wean (((EIF_CBDATAP)arg1)->o);
free(arg1);
	;
}
#define INLINE_F923_7954
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_DATABASE}.make */
void F923_7894 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable) {
		ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) (EIF_POINTER) eif_thr_thread_id();
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {SQLITE_DATABASE}.make_open_read_write */
void F923_7896 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(77, 77, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F78_1020(RTCV(tr1), arg1);
	F923_7894(Current, tr1);
	F923_7926(Current);
	RTLE;
}

/* {SQLITE_DATABASE}.dispose */
void F923_7898 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !EIF_TEST (inline_F505_3475())) {
		F923_7928(Current);
	}
	RTLE;
}

/* {SQLITE_DATABASE}.source */
EIF_REFERENCE F923_7899 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SQLITE_DATABASE}.commit_action */
EIF_REFERENCE F923_7900 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SQLITE_DATABASE}.rollback_action */
EIF_REFERENCE F923_7901 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SQLITE_DATABASE}.update_action */
EIF_REFERENCE F923_7902 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SQLITE_DATABASE}.progress_handler */
EIF_REFERENCE F923_7903 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SQLITE_DATABASE}.busy_handler */
EIF_REFERENCE F923_7904 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {SQLITE_DATABASE}.last_exception */
RTEOMS(7904,1);
EIF_REFERENCE F923_7905 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,Result);
	
	RTGC;
	F923_7933(Current);
	loc1 = RTOSCF(7872,F921_7872,(Current));
	loc2 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
	loc3 = F411_2630(Current, loc1, loc2);
	if ((EIF_BOOLEAN) !F213_2444(Current, loc3)) {
		ti4_1 = F411_2632(Current, loc1, loc2);
		ti4_1 = eif_bit_shift_left(ti4_1,((EIF_INTEGER_32) 8L));
		loc3 = eif_bit_or(loc3,ti4_1);
		loc4 = F411_2631(Current, loc1, loc2);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc4 == tp1)) {
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 20L));
			loc5 = (EIF_REFERENCE) tr1;
			F741_5938(RTCV(loc5), RTOMS(7904,0));
			F741_5942(RTCV(loc5), loc3);
			F741_5952(RTCV(loc5), (EIF_CHARACTER_8) ')');
		} else {
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F737_5726(RTCV(tr1), loc4);
			loc5 = (EIF_REFERENCE) tr1;
		}
		Result = F213_2445(Current, loc3, loc5);
	}
	F923_7934(Current);
	RTLE;
	return Result;
}

/* {SQLITE_DATABASE}.total_changes_count */
EIF_NATURAL_32 F923_7908 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
	ti4_1 = F411_2629(Current, tr1, tp1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {SQLITE_DATABASE}.set_busy_timeout */
void F923_7909 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
	ti4_1 = (EIF_INTEGER_32) arg1;
	loc1 = F411_2634(Current, tr1, tp1, ti4_1);
	F213_2446(Current, loc1);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_6_1_0_0_) = (EIF_NATURAL_32) arg1;
	RTLE;
}

/* {SQLITE_DATABASE}.is_readable */
EIF_BOOLEAN F923_7916 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F923_7919(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {SQLITE_DATABASE}.is_closed */
EIF_BOOLEAN F923_7919 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 == tp3);
	RTLE;
	return Result;
}

/* {SQLITE_DATABASE}.open_read_write */
void F923_7926 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = inline_F17_188();
	F923_7935(Current, ti4_1);
	RTLE;
}

/* {SQLITE_DATABASE}.close */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F923_7928 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_POINTER EIF_VOLATILE loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER EIF_VOLATILE loc4 = (EIF_POINTER) 0;
	EIF_BOOLEAN EIF_VOLATILE loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_POINTER  EIF_VOLATILE tp2;
	EIF_POINTER  EIF_VOLATILE tp3;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTXD;
	
	RTXI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_) != tp1)) {
		loc1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		loc2 = RTOSCF(7872,F921_7872,(Current));
		loc3 = F411_2636(Current, loc2, loc1);
		tb1 = '\01';
		ti4_1 = eif_bit_and(loc3,((EIF_INTEGER_32) 255L));
		if (!((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) SQLITE_LOCKED))) {
			ti4_1 = eif_bit_and(loc3,((EIF_INTEGER_32) 255L));
			tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) SQLITE_BUSY);
		}
		if (tb1) {
			plsc();
			loc3 = F411_2636(Current, loc2, loc1);
			tb1 = '\01';
			ti4_1 = eif_bit_and(loc3,((EIF_INTEGER_32) 255L));
			if (!((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) SQLITE_LOCKED))) {
				ti4_1 = eif_bit_and(loc3,((EIF_INTEGER_32) 255L));
				tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) SQLITE_BUSY);
			}
			if (tb1) {
				F923_7933(Current);
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				{
				/* INLINED CODE (default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				tp2 = tp1;
				loc4 = F411_2639(Current, loc2, loc1, tp2);
				for (;;) {
					{
					/* INLINED CODE (default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
					}
					if ((EIF_BOOLEAN)(loc4 == tp1)) break;
					loc3 = F430_2726(Current, loc2, loc4);
					loc4 = F411_2639(Current, loc2, loc1, loc4);
				}
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				F923_7934(Current);
			}
		}
		F213_2446(Current, loc3);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			F923_7936(Current, (EIF_BOOLEAN) 0);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			F923_7938(Current, (EIF_BOOLEAN) 0);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
			F923_7940(Current, (EIF_BOOLEAN) 0);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
			F923_7942(Current, (EIF_BOOLEAN) 0);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
			F923_7944(Current, (EIF_BOOLEAN) 0);
		}
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_) = (EIF_POINTER) tp3;
	}
	RTE_E
	RTXS(3);
	if (loc5) {
		F923_7934(Current);
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SQLITE_DATABASE}.abort */
void F923_7929 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
	F411_2635(Current, tr1, tp1);
	RTLE;
}

/* {SQLITE_DATABASE}.lock */
void F923_7933 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_);
	loc1++;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) loc1;
	loc3 = RTOSCF(7872,F921_7872,(Current));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
	loc2 = F411_2640(Current, loc3, tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		F411_2641(Current, loc3, loc2);
	}
	RTLE;
}

/* {SQLITE_DATABASE}.unlock */
void F923_7934 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_);
	loc1--;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) loc1;
	if (F921_7873(Current)) {
		loc3 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		loc2 = F411_2640(Current, loc3, tp1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			F411_2642(Current, loc3, loc2);
		}
	}
	RTLE;
}

/* {SQLITE_DATABASE}.open_internal */
void F923_7935 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable) {
		tb2 = F939_8217(RTCV(RTOSCF(7872,F921_7872,(Current))));
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = (EIF_INTEGER_32) SQLITE_OPEN_FULLMUTEX;
		loc2 = eif_bit_or(arg1,ti4_1);
	} else {
		ti4_1 = (EIF_INTEGER_32) SQLITE_OPEN_NOMUTEX;
		loc2 = eif_bit_or(arg1,ti4_1);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) loc2;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc6 = tr1;
	loc6 = RTRV(eif_non_attached_type(77),loc6);
	if (EIF_TEST(loc6)) {
		tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(RTCV(loc6));
		tr2 = F747_6105(RTCV(tr2));
		F432_2731(RTCV(tr1), tr2);
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr2 = F78_1023(RTCV(tr2));
		F432_2731(RTCV(tr1), tr2);
		loc1 = (EIF_REFERENCE) tr1;
	}
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tp1 = F432_2750(RTCV(loc1));
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	loc4 = F411_2638(Current, tr1, tp1, (EIF_POINTER *) &(loc3), loc2, tp3);
	if (F213_2444(Current, loc4)) {
		*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_) = (EIF_POINTER) loc3;
		tr1 = RTOSCF(7872,F921_7872,(Current));
		loc5 = F411_2637(Current, tr1, loc3, ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			F923_7936(Current, (EIF_BOOLEAN) 1);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			F923_7938(Current, (EIF_BOOLEAN) 1);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
			F923_7940(Current, (EIF_BOOLEAN) 1);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
			F923_7942(Current, (EIF_BOOLEAN) 1);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
			F923_7944(Current, (EIF_BOOLEAN) 1);
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_6_1_0_0_) > tu4_1)) {
				F923_7909(Current, *(EIF_NATURAL_32 *)(Current+ _LNGOFF_6_1_0_0_));
			}
		}
	} else {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc3 != tp1)) {
			tr1 = RTOSCF(7872,F921_7872,(Current));
			loc5 = F411_2636(Current, tr1, loc3);
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc3 = tp1;
		}
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_) = (EIF_POINTER) tp2;
		F213_2446(Current, loc4);
	}
	RTLE;
}

/* {SQLITE_DATABASE}.enable_commit_callback */
void F923_7936 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (arg1) {
		loc1 = inline_F923_7953((EIF_POINTER) F923_7937, Current);
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		loc1 = F411_2645(Current, tr1, tp1, loc1);
	} else {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		loc1 = F411_2647(Current, tr1, tp1, tp3);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			inline_F923_7954(loc1);
		}
	}
	RTLE;
}

/* {SQLITE_DATABASE}.on_commit_callback */
EIF_BOOLEAN F923_7937 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_));
		;
		tb1 = tb1;
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {SQLITE_DATABASE}.enable_rollback_callback */
void F923_7938 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (arg1) {
		loc1 = inline_F923_7953((EIF_POINTER) F923_7939, Current);
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		loc1 = F411_2646(Current, tr1, tp1, loc1);
	} else {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		loc1 = F411_2647(Current, tr1, tp1, tp3);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			inline_F923_7954(loc1);
		}
	}
	RTLE;
}

/* {SQLITE_DATABASE}.on_rollback_callback */
void F923_7939 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_));
		;
	}
	RTLE;
}

/* {SQLITE_DATABASE}.enable_update_callback */
void F923_7940 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (arg1) {
		loc1 = inline_F923_7953((EIF_POINTER) F923_7941, Current);
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		loc1 = F411_2647(Current, tr1, tp1, loc1);
	} else {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		loc1 = F411_2647(Current, tr1, tp1, tp3);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			inline_F923_7954(loc1);
		}
	}
	RTLE;
}

/* {SQLITE_DATABASE}.on_update_callback */
void F923_7941 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_64 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F737_5726(RTCV(tr1), arg2);
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F737_5726(RTCV(tr1), arg3);
		loc2 = (EIF_REFERENCE) tr1;
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_64)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1, loc1, loc2, arg4);
		;
	}
	RTLE;
}

/* {SQLITE_DATABASE}.enable_progress_callback */
void F923_7942 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (arg1) {
		tp1 = inline_F923_7953((EIF_POINTER) F923_7945, Current);
		*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_1_) = (EIF_POINTER) tp1;
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		F411_2643(Current, tr1, tp1, ((EIF_INTEGER_32) 1L), loc1);
	} else {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		F411_2643(Current, tr1, tp1, ((EIF_INTEGER_32) 0L), tp3);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_1_) != tp1)) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_1_);
			inline_F923_7954(tp1);
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tp2 = tp1;
			*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_1_) = (EIF_POINTER) tp2;
		}
	}
	RTLE;
}

/* {SQLITE_DATABASE}.enable_busy_callback */
void F923_7944 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (arg1) {
		tp1 = inline_F923_7953((EIF_POINTER) F923_7945, Current);
		*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_2_) = (EIF_POINTER) tp1;
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_2_);
		loc1 = F411_2644(Current, tr1, tp1, tp2);
		F213_2446(Current, loc1);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_6_1_0_0_) = (EIF_NATURAL_32) tu4_1;
	} else {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_0_);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		loc1 = F411_2644(Current, tr1, tp1, tp3);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_2_) != tp1)) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_2_);
			inline_F923_7954(tp1);
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tp2 = tp1;
			*(EIF_POINTER *)(Current+ _PTROFF_6_1_0_4_0_2_) = (EIF_POINTER) tp2;
		}
		F213_2446(Current, loc1);
	}
	RTLE;
}

/* {SQLITE_DATABASE}.on_busy */
EIF_BOOLEAN F923_7945 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_NATURAL_32)) *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_), arg1);
		;
		tb1 = tb1;
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {SQLITE_DATABASE}.get_current_thread_id */
EIF_POINTER F923_7952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_thr_thread_id();
	
	return Result;
}

/* {SQLITE_DATABASE}.new_cb_data */
EIF_POINTER F923_7953 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F923_7953 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {SQLITE_DATABASE}.free_cb_data */
void F923_7954 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F923_7954 ((EIF_POINTER) arg1);
}

void EIF_Minit395 (void)
{
	GTCX
	RTPOMS(7904,0,"Unknown Error! (Code: ",22,333324320);
}


#ifdef __cplusplus
}
#endif
