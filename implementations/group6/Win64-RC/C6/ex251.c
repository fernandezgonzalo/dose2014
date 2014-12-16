/*
 * Code for class EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex251.h"
#include "eif_dir.h"
#include <string.h>
#include <stdlib.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F495_3352
static EIF_POINTER inline_F495_3352 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wgetenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return getenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F495_3352
#endif
#ifndef INLINE_F495_3348
static EIF_POINTER inline_F495_3348 (EIF_INTEGER_32 arg1)
{
	if (eif_environ) {
	#ifdef EIF_WINDOWS
		EIF_NATIVE_CHAR *vars = (EIF_NATIVE_CHAR *) eif_environ;
		int cnt = 0;
		for (; *vars; vars++) {
		   if (arg1==cnt) return vars;
		   while (*vars) { vars++; }
		   cnt++;
		}
		return NULL;
	#else
		return ((EIF_NATIVE_CHAR **)eif_environ)[arg1];
	#endif
} else {
	return NULL;
}
	;
}
#define INLINE_F495_3348
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXECUTION_ENVIRONMENT}.current_working_path */
EIF_REFERENCE F495_3328 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	tr1 = RTLNS(506, 506, _OBJSIZ_0_1_0_1_0_1_1_0_);
	F507_3515(RTCV(tr1), loc1);
	loc3 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) tp1, (EIF_INTEGER) loc1);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		tr1 = RTLNS(746, 746, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H(".",1,46);
		F747_6066(RTCV(tr1), tr2);
		Result = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			loc1 = (EIF_INTEGER_32) loc2;
			F507_3599(RTCV(loc3), loc1);
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) tp1, (EIF_INTEGER) loc1);
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			tr1 = RTLNS(746, 746, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			F747_6070(RTCV(tr1), tp1);
			Result = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(746, 746, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H(".",1,46);
			F747_6066(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.default_shell */
static EIF_REFERENCE F495_3330_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTEV;
	RTGC;
	RTOSP (3330);
#define Result RTOSR(3330)
	RTOC_NEW(Result);
	tr1 = RTMS_EX_H("SHELL",5,1213138508);
	tr1 = F495_3332(Current, tr1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = (EIF_REFERENCE) loc1;
	} else {
		tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTOSE (3330);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F495_3330 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3330,F495_3330_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.item */
EIF_REFERENCE F495_3332 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	
	RTGC;
	tr1 = RTLNS(493, 493, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F494_3305(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F494_3312(RTCV(loc1));
	loc3 = inline_F495_3352(tp1);
	tb1 = !loc3;
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(493, 493, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F494_3307(RTCV(tr1), loc3);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = F494_3310(RTCV(loc2));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EXECUTION_ENVIRONMENT}.starting_environment */
EIF_REFERENCE F495_3339 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {578,739,739,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 578, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F579_4634(RTCV(tr1), ((EIF_INTEGER_32) 40L));
	Result = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = inline_F495_3348(loc2);
	tr1 = RTLNS(493, 493, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F494_3306(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = !loc1;
		if (tb1) break;
		F494_3322(RTCV(loc3), loc1);
		tr1 = F494_3310(RTCV(loc3));
		tr1 = F495_3349(Current, tr1);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tr1 = eif_boxed_item(loc4,1);
			tr2 = eif_boxed_item(loc4,2);
			F579_4679(RTCV(Result), tr1, tr2);
		}
		loc2++;
		loc1 = inline_F495_3348(loc2);
	}
	RTLE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.launch */
void F495_3345 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	
	RTGC;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(arg1)-735])(RTCV(arg1));
	if (tb1) {
		tr1 = RTLNS(493, 493, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr2 = RTOSCF(3330,F495_3330,(Current));
		F494_3305(RTCV(tr1), tr2);
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(493, 493, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F494_3305(RTCV(tr1), arg1);
		loc1 = (EIF_REFERENCE) tr1;
	}
	tp1 = F494_3312(RTCV(loc1));
	eif_system_asynchronous(tp1);
	RTLE;
}

/* {EXECUTION_ENVIRONMENT}.i_th_environ */
EIF_POINTER F495_3348 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F495_3348 ((EIF_INTEGER_32) arg1);
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.separated_variables */
EIF_REFERENCE F495_3349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || loc3)) break;
		tw1 = F740_5813(RTCV(arg1), loc1);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			loc1++;
		}
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (loc1 < loc2))) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,684,739,739,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0, 3, 0);
		}
		tr2 = F740_5893(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc2);
		((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
		RTAR(tr1,tr2);
		tr2 = F740_5893(RTCV(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
		((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
		RTAR(tr1,tr2);
		Result = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_dir_current */
EIF_INTEGER_32 F495_3351 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_getenv */
EIF_POINTER F495_3352 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F495_3352 ((EIF_POINTER) arg1);
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.asynchronous_system_call */
void F495_3356 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	EIF_ENTER_C;eif_system_asynchronous(arg1);
	
	EIF_EXIT_C;
	RTGC;
}

void EIF_Minit251 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
