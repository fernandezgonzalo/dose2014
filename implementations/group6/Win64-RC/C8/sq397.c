/*
 * Code for class SQLITE_STATEMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq397.h"
#include "eif_built_in.h"
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

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_STATEMENT}.make */
void F925_7968 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(737));
	F737_5725(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(737));
	F737_5725(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable) {
		ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) (EIF_POINTER) eif_thr_thread_id();
		*(EIF_INTEGER_32 *)(Current + O6290[Dtype(Current)-924]) = (EIF_INTEGER_32) ti4_1;
	}
	F925_7994(Current);
	RTLE;
}

/* {SQLITE_STATEMENT}.dispose */
void F925_7969 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	
	RTGC;
	if ((EIF_BOOLEAN) !EIF_TEST (inline_F505_3475())) {
		loc1 = *(EIF_POINTER *)(Current + O6287[dtype-924]);
		tb1 = '\0';
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			tb1 = RTOSCF(7874,F921_7874,(Current));
		}
		if (tb1) {
			loc3 = RTOSCF(7872,F921_7872,(Current));
			loc2 = F430_2720(Current, loc3, loc1);
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			if ((EIF_BOOLEAN)(loc2 != tp1)) {
				if ((EIF_BOOLEAN)(loc2 == *(EIF_POINTER *)(Current + O6288[dtype-924]))) {
					loc4 = F430_2726(Current, loc3, loc1);
					ti4_1 = eif_bit_and(loc4,((EIF_INTEGER_32) 255L));
					if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) SQLITE_MISUSE)) {
					} else {
					}
				} else {
				}
			}
		}
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current + O6287[dtype-924]) = (EIF_POINTER) tp2;
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current + O6288[dtype-924]) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {SQLITE_STATEMENT}.string */
EIF_REFERENCE F925_7970 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SQLITE_STATEMENT}.database */
EIF_REFERENCE F925_7971 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SQLITE_STATEMENT}.statement_string */
EIF_REFERENCE F925_7972 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SQLITE_STATEMENT}.next_statement */
EIF_REFERENCE F925_7973 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SQLITE_STATEMENT}.last_exception */
EIF_REFERENCE F925_7974 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SQLITE_STATEMENT}.execute_new */
EIF_REFERENCE F925_7975 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(923, 923, _OBJSIZ_3_1_0_1_0_0_0_0_);
	F924_7955(RTCV(tr1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {SQLITE_STATEMENT}.execute_new_with_arguments */
EIF_REFERENCE F925_7976 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(923, 923, _OBJSIZ_3_1_0_1_0_0_0_0_);
	tr2 = F215_2456(Current, arg1);
	F924_7956(RTCV(tr1), Current, tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {SQLITE_STATEMENT}.compile_statement_string */
EIF_REFERENCE F925_7977 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_2_);
}

/* {SQLITE_STATEMENT}.is_compiled */
EIF_BOOLEAN F925_7982 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current + O6287[Dtype(Current)-924]);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {SQLITE_STATEMENT}.is_connected */
EIF_BOOLEAN F925_7983 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\0';
	if (F925_7982(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_6_1_0_4_0_0_);
		Result = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O6288[Dtype(Current)-924]) == tp1);
	}
	RTLE;
	return Result;
}

/* {SQLITE_STATEMENT}.has_error */
EIF_BOOLEAN F925_7986 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL);
}

/* {SQLITE_STATEMENT}.reset */
void F925_7990 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O6277[dtype-924]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_32 *)(Current + O6289[dtype-924]) = (EIF_NATURAL_32) tu4_1;
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {SQLITE_STATEMENT}.reset_all */
void F925_7991 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R6280[Dtype(Current)-924])(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F925_7991(RTCV(loc1));
	}
	RTLE;
}

/* {SQLITE_STATEMENT}.execute_internal */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F925_7992 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc13 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 EIF_VOLATILE loc14 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_POINTER  EIF_VOLATILE tp2;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_NATURAL_32  EIF_VOLATILE tu4_2;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	EIF_CHARACTER_8  EIF_VOLATILE tc1;
	RTCFDT;
	RTCDT;
	RTXD;
	
	RTXI(14);
	RTLR(0,loc15);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLR(3,loc16);
	RTLR(4,tr1);
	RTLR(5,loc11);
	RTLR(6,loc12);
	RTLR(7,loc1);
	RTLR(8,loc3);
	RTLR(9,loc8);
	RTLR(10,arg1);
	RTLR(11,loc4);
	RTLR(12,loc17);
	RTLR(13,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	loc15 = arg2;
	if (EIF_TEST(loc15)) {
		loc10 = *(EIF_INTEGER_32 *)(RTCV(loc15)+ _LNGOFF_1_1_0_0_);
		loc9 = *(EIF_INTEGER_32 *)(RTCV(loc15)+ _LNGOFF_1_1_0_1_);
		for (;;) {
			if ((EIF_BOOLEAN) (loc10 > loc9)) break;
			tr1 = F601_4819(RTCV(loc15), loc10);
			loc16 = tr1;
			if (EIF_TEST(loc16)) {
				loc11 = *(EIF_REFERENCE *)(RTCV(loc16) + O6484[Dtype(loc16)-939]);
				tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
				F432_2731(RTCV(tr1), loc11);
				loc12 = (EIF_REFERENCE) tr1;
				tr1 = RTOSCF(7872,F921_7872,(Current));
				tp1 = *(EIF_POINTER *)(Current + O6287[dtype-924]);
				tp2 = F432_2750(RTCV(loc12));
				loc13 = F430_2727(Current, tr1, tp1, tp2);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc13 == ((EIF_INTEGER_32) 0L))) {
					tc1 = F738_5776(RTCV(loc11), ((EIF_INTEGER_32) 1L));
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\?');
				}
				if (tb1) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_0_0_2_);
					loc11 = F738_5785(RTCV(loc11), ((EIF_INTEGER_32) 2L), ti4_1);
					tb1 = F733_5586(RTCV(loc11));
					if (tb1) {
						loc13 = F733_5620(RTCV(loc11));
					} else {
					}
				}
				if ((EIF_BOOLEAN) (loc13 > ((EIF_INTEGER_32) 0L))) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R6489[Dtype(loc16)-943])(RTCV(loc16), Current, loc13);
				}
			}
			loc10++;
		}
	}
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	(*(EIF_NATURAL_32 *)(Current + O6270[dtype-924])) += tu4_1;
	loc1 = RTOSCF(7872,F921_7872,(Current));
	loc2 = *(EIF_POINTER *)(Current + O6287[dtype-924]);
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F925_7991(Current);
	*(EIF_BOOLEAN *)(Current + O6271[dtype-924]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R6285[dtype-924])(Current);
	F923_7933(RTCV(loc3));
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	loc14 = F923_7908(RTCV(loc3));
	tr1 = RTLNS(921, 921, _OBJSIZ_1_0_0_2_0_0_0_0_);
	F922_7875(RTCV(tr1), Current);
	loc8 = (EIF_REFERENCE) tr1;
	loc5 = F430_2723(Current, loc1, loc2);
	ti4_1 = (EIF_INTEGER_32) SQLITE_DONE;
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc5 == ti4_1);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !F213_2444(Current, loc5)) {
			tb1 = loc6;
		}
		if (tb1) break;
		F923_7934(RTCV(loc3));
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc8)+ _LNGOFF_1_0_0_0_);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			F922_7879(RTCV(loc8), (EIF_NATURAL_32) (tu4_1 + tu4_2));
			tb2 = '\01';
			tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_3_0_3_0_0_))(
				*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_3_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), loc8);
			;
			tb3 = tb3;
			if (!tb3) {
				tb2 = *(EIF_BOOLEAN *)(Current + O6277[dtype-924]);
			}
			*(EIF_BOOLEAN *)(Current + O6277[dtype-924]) = (EIF_BOOLEAN) tb2;
		}
		if (F925_7983(Current)) {
			F923_7933(RTCV(loc3));
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc6 = *(EIF_BOOLEAN *)(Current + O6277[dtype-924]);
			if (loc6) {
				F923_7929(RTCV(loc3));
			} else {
				ti4_1 = (EIF_INTEGER_32) SQLITE_ROW;
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc5 != ti4_1);
				if ((EIF_BOOLEAN) !loc6) {
					loc5 = F430_2723(Current, loc1, loc2);
					ti4_1 = (EIF_INTEGER_32) SQLITE_DONE;
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc5 == ti4_1);
				}
			}
		} else {
			loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if ((EIF_BOOLEAN) !F213_2444(Current, loc5)) {
		if (F925_7983(Current)) {
			loc4 = F923_7905(RTCV(loc3));
			if (loc7) {
				loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				F923_7934(RTCV(loc3));
			}
		}
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(loc4 != NULL)) {
			loc4 = F213_2445(Current, loc5, NULL);
		}
		RTAR(Current, loc4);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R6286[dtype-924])(Current);
		F166_2118(RTCV(loc4));
	} else {
		tu4_1 = F923_7908(RTCV(loc3));
		*(EIF_NATURAL_32 *)(Current + O6289[dtype-924]) = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 - loc14);
		if (loc7) {
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			F923_7934(RTCV(loc3));
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc17 = tr1;
		if (EIF_TEST(loc17)) {
			F925_7992(RTCV(loc17), arg1, arg2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R6286[dtype-924])(Current);
	}
	*(EIF_BOOLEAN *)(Current + O6271[dtype-924]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc5 = F430_2724(Current, loc1, loc2);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		loc5 = F430_2725(Current, loc1, loc2);
	}
	RTE_E
	RTXS(14);
	if (loc7) {
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F923_7934(RTCV(loc3));
	}
	if (*(EIF_BOOLEAN *)(Current + O6271[dtype-924])) {
		*(EIF_BOOLEAN *)(Current + O6271[dtype-924]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current + O6287[dtype-924]);
		ti4_1 = F430_2724(Current, tr1, tp1);
		eif_do_nothing_value.it_i4 = ti4_1;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SQLITE_STATEMENT}.reset_compilation_data */
void F925_7993 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O6287[dtype-924]) = (EIF_POINTER) tp2;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O6288[dtype-924]) = (EIF_POINTER) tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R6280[dtype-924])(Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	(*(EIF_NATURAL_32 *)(Current + O6270[dtype-924])) += tu4_1;
	RTLE;
}

/* {SQLITE_STATEMENT}.compile */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F925_7994 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc5 = (EIF_POINTER) 0;
	EIF_POINTER EIF_VOLATILE loc6 = (EIF_POINTER) 0;
	EIF_POINTER EIF_VOLATILE loc7 = (EIF_POINTER) 0;
	EIF_BOOLEAN EIF_VOLATILE loc8 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTXD;
	
	RTXI(9);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,tr3);
	RTLR(7,loc4);
	RTLR(8,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr2 = F925_7977(Current);
	F432_2731(RTCV(tr1), tr2);
	loc2 = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F923_7933(RTCV(loc1));
	loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	loc6 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_6_1_0_4_0_0_);
	tr1 = RTOSCF(7872,F921_7872,(Current));
	tp1 = F432_2750(RTCV(loc2));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_0_0_0_);
	loc9 = F430_2722(Current, tr1, loc6, tp1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), (EIF_POINTER *) &(loc5), (EIF_POINTER *) &(loc7));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc5 != tp1)) {
		*(EIF_POINTER *)(Current + O6287[dtype-924]) = (EIF_POINTER) loc5;
		*(EIF_POINTER *)(Current + O6288[dtype-924]) = (EIF_POINTER) loc6;
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc7 != tp1)) {
			tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
			F432_2735(RTCV(tr1), loc7);
			loc2 = (EIF_REFERENCE) tr1;
			loc3 = F432_2744(RTCV(loc2));
			tb1 = F286_2518(RTCV(loc3));
			if ((EIF_BOOLEAN) !tb1) {
				tr1 = RTLNSMART(eif_non_attached_type(737));
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_0_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
				tr2 = F738_5785(RTCV(tr2), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2));
				F737_5725(RTCV(tr1), tr2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
				F741_5964(RTCV(loc3), (EIF_CHARACTER_8) ';');
				F741_5922(RTCV(loc3));
				tb1 = F286_2518(RTCV(loc3));
				if ((EIF_BOOLEAN) !tb1) {
					tr1 = RTLNS(924, 924, _OBJSIZ_5_2_0_3_0_2_0_0_);
					F925_7968(RTCV(tr1), loc3, loc1);
					loc4 = (EIF_REFERENCE) tr1;
					tb1 = F925_7986(RTCV(loc4));
					if (tb1) {
						F925_7993(Current);
						tr1 = *(EIF_REFERENCE *)(RTCV(loc4) + _REFACS_4_);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
					} else {
						RTAR(Current, loc4);
						*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc4;
					}
				}
			}
		}
	} else {
		F925_7993(Current);
		if (F213_2444(Current, loc9)) {
			ti4_1 = (EIF_INTEGER_32) SQLITE_MISUSE;
			tr1 = RTMS_EX_H("no statement: syntax error",26,1822052210);
			tr1 = F213_2445(Current, ti4_1, tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = F923_7905(RTCV(loc1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
		}
	}
	loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F923_7934(RTCV(loc1));
	RTE_E
	RTXS(9);
	if (loc8) {
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F923_7934(RTCV(tr1));
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SQLITE_STATEMENT}.on_before_execute */
void F925_7995 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6271[Dtype(Current)-924]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {SQLITE_STATEMENT}.on_after_executed */
void F925_7996 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O6271[Dtype(Current)-924]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {SQLITE_STATEMENT}.get_current_thread_id */
EIF_POINTER F925_8001 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_thr_thread_id();
	
	return Result;
}

void EIF_Minit397 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
