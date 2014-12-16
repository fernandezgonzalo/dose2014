/*
 * Code for class SQLITE_STATEMENT_ITERATION_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq396.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_STATEMENT_ITERATION_CURSOR}.make */
void F924_7955 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	ti4_1 = (EIF_INTEGER_32) SQLITE_OK;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	F924_7964(Current);
	RTLE;
}

/* {SQLITE_STATEMENT_ITERATION_CURSOR}.make_with_bindings */
void F924_7956 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	
	RTGC;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	F924_7955(Current, arg1);
	RTLE;
}

/* {SQLITE_STATEMENT_ITERATION_CURSOR}.statement */
EIF_REFERENCE F924_7957 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SQLITE_STATEMENT_ITERATION_CURSOR}.bindings */
EIF_REFERENCE F924_7958 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SQLITE_STATEMENT_ITERATION_CURSOR}.item */
EIF_REFERENCE F924_7959 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {SQLITE_STATEMENT_ITERATION_CURSOR}.new_cursor */
EIF_REFERENCE F924_7960 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

/* {SQLITE_STATEMENT_ITERATION_CURSOR}.after */
EIF_BOOLEAN F924_7962 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) !F213_2444(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_0_))) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_0_) == (EIF_INTEGER_32) SQLITE_DONE);
	}
	RTLE;
	return Result;
}

/* {SQLITE_STATEMENT_ITERATION_CURSOR}.start */
void F924_7964 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc6);
	RTLR(6,loc7);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	loc1 = RTOSCF(7872,F921_7872,(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = *(EIF_POINTER *)(RTCV(tr1) + O6287[Dtype(tr1)-924]);
	loc3 = F430_2724(Current, loc1, loc2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		loc3 = F430_2725(Current, loc1, loc2);
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc9)+ _LNGOFF_1_1_0_0_);
		loc4 = *(EIF_INTEGER_32 *)(RTCV(loc9)+ _LNGOFF_1_1_0_1_);
		for (;;) {
			if ((EIF_BOOLEAN) (loc5 > loc4)) break;
			tr1 = F601_4819(RTCV(loc9), loc5);
			loc10 = tr1;
			if (EIF_TEST(loc10)) {
				loc6 = *(EIF_REFERENCE *)(RTCV(loc10) + O6484[Dtype(loc10)-939]);
				tr1 = RTLNS(431, 431, _OBJSIZ_1_0_0_1_0_0_0_0_);
				F432_2731(RTCV(tr1), loc6);
				loc7 = (EIF_REFERENCE) tr1;
				tp1 = F432_2750(RTCV(loc7));
				loc8 = F430_2727(Current, loc1, loc2, tp1);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) {
					tc1 = F738_5776(RTCV(loc6), ((EIF_INTEGER_32) 1L));
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\?');
				}
				if (tb1) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc6)+ _LNGOFF_1_0_0_2_);
					loc6 = F738_5785(RTCV(loc6), ((EIF_INTEGER_32) 2L), ti4_1);
					tb1 = F733_5586(RTCV(loc6));
					if (tb1) {
						loc8 = F733_5620(RTCV(loc6));
					} else {
					}
				}
				if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) {
					tr1 = *(EIF_REFERENCE *)(Current);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R6489[Dtype(loc10)-943])(RTCV(loc10), tr1, loc8);
				}
			}
			loc5++;
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_0_) = (EIF_INTEGER_32) loc3;
	F213_2446(Current, loc3);
	if ((EIF_BOOLEAN) !F924_7962(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R6285[Dtype(tr1)-924])(RTCV(tr1));
		F924_7965(Current);
	}
	RTLE;
}

/* {SQLITE_STATEMENT_ITERATION_CURSOR}.forth */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F924_7965 (EIF_REFERENCE Current)
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
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTXD;
	
	RTXI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	loc1 = RTOSCF(7872,F921_7872,(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = *(EIF_POINTER *)(RTCV(tr1) + O6287[Dtype(tr1)-924]);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	F923_7933(RTCV(loc3));
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	loc5 = F430_2723(Current, loc1, loc2);
	ti4_1 = (EIF_INTEGER_32) SQLITE_DONE;
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc5 == ti4_1);
	if (F213_2444(Current, loc5)) {
		tr1 = RTLNSMART(eif_non_attached_type(921));
		F922_7875(RTCV(tr1), *(EIF_REFERENCE *)(Current));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
		loc4 = F923_7905(RTCV(loc3));
	}
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F923_7934(RTCV(loc3));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_0_) = (EIF_INTEGER_32) loc5;
	if (F924_7962(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R6286[Dtype(tr1)-924])(RTCV(tr1));
	}
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		F166_2118(RTCV(loc4));
	} else {
		F213_2446(Current, loc5);
	}
	RTE_E
	RTXS(6);
	if ((EIF_BOOLEAN) (loc7 && (EIF_BOOLEAN)(loc3 != NULL))) {
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F923_7934(RTCV(loc3));
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SQLITE_STATEMENT_ITERATION_CURSOR}.internal_item */
EIF_REFERENCE F924_7966 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


void EIF_Minit396 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
