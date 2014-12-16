/*
 * Code for class SQLITE_QUERY_STATEMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq398.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_QUERY_STATEMENT}.column_count */
EIF_NATURAL_32 F926_8002 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_);
	ti4_1 = F430_2719(Current, tr1, tp1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {SQLITE_QUERY_STATEMENT}.column_name */
EIF_REFERENCE F926_8003 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc5);
	RTLR(5,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		loc2 = (EIF_REFERENCE) loc4;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {600,737,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		ti4_1 = (EIF_INTEGER_32) F926_8002(Current);
		F601_4814(RTCV(tr1), NULL, ((EIF_INTEGER_32) 1L), ti4_1);
		loc2 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) loc2;
	}
	loc3 = (EIF_INTEGER_32) arg1;
	tr1 = F601_4819(RTCV(loc2), loc3);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		RTLE;
		return (EIF_REFERENCE) loc5;
	} else {
		tr1 = RTOSCF(7872,F921_7872,(Current));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_);
		loc1 = F430_2721(Current, tr1, tp1, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 == tp1)) {
			tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
			F733_5554(RTCV(tr1));
			Result = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
			F737_5726(RTCV(tr1), loc1);
			Result = (EIF_REFERENCE) tr1;
		}
		F601_4839(RTCV(loc2), Result, loc3);
	}
	RTLE;
	return Result;
}

/* {SQLITE_QUERY_STATEMENT}.execute */
void F926_8004 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F925_7992(Current, arg1, NULL);
}

/* {SQLITE_QUERY_STATEMENT}.execute_with_arguments */
void F926_8005 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	tr1 = F215_2456(Current, arg2);
	F925_7992(Current, arg1, tr1);
	RTLE;
}

/* {SQLITE_QUERY_STATEMENT}.reset */
void F926_8006 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	F925_7990(Current);
	RTLE;
}

/* {SQLITE_QUERY_STATEMENT}.internal_column_names */
EIF_REFERENCE F926_8007 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


void EIF_Minit398 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
