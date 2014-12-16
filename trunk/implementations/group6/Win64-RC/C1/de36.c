/*
 * Code for class DEMO_DB
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "de36.h"
#include "eif_plug.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DEMO_DB}.make */
void F48_635 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(922));
	F923_7896(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DEMO_DB}.rows_to_json_array */
EIF_BOOLEAN F48_636 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,arg3);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > arg2)) break;
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = F922_7889(RTCV(arg1), loc2);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = F922_7883(RTCV(arg1), loc2);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc1), tr1, tr2);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		loc2 += tu4_1;
	}
	F859_7453(RTCV(arg3), loc1);
	RTLE;
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {DEMO_DB}.row_to_json_object */
EIF_BOOLEAN F48_637 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg3);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	loc1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg2)) break;
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = F922_7889(RTCV(arg1), loc1);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = F922_7883(RTCV(arg1), loc1);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(arg3), tr1, tr2);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		loc1 += tu4_1;
	}
	RTLE;
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {DEMO_DB}.get_projects */
EIF_REFERENCE F48_638 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM project;",22,442668347);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	RTLE;
	return Result;
}

/* {DEMO_DB}.add_project */
void F48_639 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,arg2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO project VALUES (\'",29,554885415);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\');",3,2566459);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while inserting new project",33,1773765492);
		F1_27(Current, tr1);
	}
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO member VALUES (\'",28,1841156135);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\',\'",3,2567207);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\',1);",5,741718843);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while inserting the owner of the project",46,1698553972);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.check_project_name */
EIF_BOOLEAN F48_640 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * from project WHERE name=\'",34,913265447);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F925_7975(RTCV(tr1));
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.is_owner */
EIF_BOOLEAN F48_641 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,arg1);
	RTLR(6,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT owner from member WHERE project=\'",40,77038631);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\'AND user=\'",11,1518955559);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F925_7975(RTCV(tr1));
	tb1 = F924_7962(RTCV(loc1));
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
		tr1 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		tb1 = F922_7893(RTCV(tr1), tu4_1);
		if (tb1) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.is_member */
EIF_BOOLEAN F48_642 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,arg1);
	RTLR(6,loc2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * from member WHERE project=\'",36,230990631);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\'AND user=\'",11,1518955559);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = F925_7975(RTCV(tr1));
	tb1 = F924_7962(RTCV(loc2));
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.get_project_points */
EIF_INTEGER_32 F48_643 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT sum(IFNULL(work_item.points, 0)) FROM work_item WHERE work_item.project=\'",80,1124815655);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F925_7975(RTCV(tr1));
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
		tr1 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		Result = F922_7887(RTCV(tr1), tu4_1);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.is_project_empty */
EIF_BOOLEAN F48_644 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,loc1);
	RTLR(6,loc2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT backlog FROM iteration WHERE project=\'",45,972847911);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F925_7975(RTCV(tr1));
	loc2 = (EIF_REFERENCE) loc1;
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F924_7964(RTCV(loc2));
	for (;;) {
		tb1 = F924_7962(RTCV(loc2));
		if (tb1) break;
		tr1 = F924_7959(RTCV(loc2));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		tr1 = F922_7884(RTCV(tr1), tu4_1);
		tr2 = RTCCL(tr1);
		F1_27(Current, tr2);
		tr1 = (loc3 ? makestr ("True", 4) : makestr ("False", 5));
		F1_27(Current, tr1);
		tr1 = F924_7959(RTCV(loc2));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		tb2 = F922_7893(RTCV(tr1), tu4_1);
		if ((EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0)) {
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		F924_7965(RTCV(loc2));
	}
	if (loc3) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.has_member */
EIF_BOOLEAN F48_645 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,loc1);
	RTLR(6,tr4);
	RTLR(7,tr5);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT user FROM member WHERE project=\'",39,1255609127);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	tr1 = RTMS_EX_H("count",5,1870727284);
	F1_27(Current, tr1);
	ti4_1 = F859_7449(RTCV(loc1));
	tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	F1_27(Current, tr1);
	ti4_1 = F859_7449(RTCV(loc1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.remove_project */
void F48_646 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM project WHERE name =\'",33,1870288423);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while deleting the project from project table",51,1259599205);
		F1_27(Current, tr1);
	}
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM member WHERE project =\'",35,160372263);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while deleting the project from member table",50,857345381);
		F1_27(Current, tr1);
	}
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM iteration WHERE project =\'",38,893121319);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while deleting the iterations of the project",50,1185440116);
		F1_27(Current, tr1);
	}
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM work_item WHERE project =\'",38,750393639);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while deleting the work_items of the project",50,60811124);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.rename_project */
void F48_647 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE project SET name=\'",25,262364455);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' WHERE name=\'",14,1219778087);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while changing project name in project table",50,146152549);
		F1_27(Current, tr1);
	}
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE member SET project=\'",27,1522331175);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' WHERE project=\'",17,745919271);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while changing project name in member table",49,1733798245);
		F1_27(Current, tr1);
	}
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE iteration SET project=\'",30,1799466023);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' WHERE project=\'",17,745919271);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while changing project name in iteration table",52,588867173);
		F1_27(Current, tr1);
	}
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE work_item SET project=\'",30,1078881831);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' WHERE project=\'",17,745919271);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while changing project name in work_item table",52,4919653);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.get_all_user_projects */
EIF_REFERENCE F48_648 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT member.project as project_name, sum(IFNULL(work_item.points, 0)) as points, member.owner FROM member LEFT JOIN work_item ON member.project = work_item.project WHERE user=\'",178,1882780199);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\' GROUP BY member.project;",26,1649643835);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	RTLE;
	return Result;
}

/* {DEMO_DB}.get_all_project_owners */
EIF_REFERENCE F48_650 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT member.user as email, user.name, user.surname, member.owner FROM member, user WHERE member.project=\'",107,526127143);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\'AND user.email = member.user AND owner=1;",42,261570107);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 4L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	RTLE;
	return Result;
}

/* {DEMO_DB}.add_member_to_project */
void F48_651 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	RTLR(5,arg2);
	RTLR(6,arg1);
	RTLR(7,tr4);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO member(user, project, owner) VALUES(\?,\?,\?);",55,1453389883);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 3L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 3L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = arg2;
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) arg2;
	RTAR(tr3,arg2);
	tr4 = arg1;
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) arg1;
	RTAR(tr3,arg1);
	tr4 = RTLNS(693, 693, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr4 = arg3;
	*((EIF_REFERENCE *)tr3+2) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	RTLE;
}

/* {DEMO_DB}.remove_member_from_project */
void F48_652 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM member WHERE user=\'",31,688196903);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' AND project=\'",15,1227978279);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while deleting member",27,662932338);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.promote_owner */
void F48_653 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE member SET owner=\'1\' WHERE user=\'",40,194599463);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' AND project=\'",15,1227978279);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while promoting member",28,1744427378);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.downgrade_owner */
void F48_654 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE member SET owner=\'0\' WHERE user=\'",40,797434663);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' AND project=\'",15,1227978279);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while promoting member",28,1744427378);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.get_members_info */
EIF_REFERENCE F48_656 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT user.email, user.name, user.surname, member.owner, sum(IFNULL(work_item.points, 0)) as points FROM member, user LEFT JOIN work_item ON member.project = work_item.project WHERE member.project=\'",199,1681383719);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\' AND user.email=member.user GROUP BY member.user;",50,327029819);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	RTLE;
	return Result;
}

/* {DEMO_DB}.get_all_users */
EIF_REFERENCE F48_657 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM user;",19,761626683);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	RTLE;
	return Result;
}

/* {DEMO_DB}.check_if_mail_already_present */
EIF_BOOLEAN F48_658 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	RTLR(5,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM user WHERE email = \?;",35,2077409083);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,740,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) arg1;
	RTAR(tr3,arg1);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.add_user */
void F48_659 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_BOOLEAN arg7)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	RTLR(5,arg1);
	RTLR(6,tr4);
	RTLR(7,arg2);
	RTLR(8,arg3);
	RTLR(9,arg4);
	RTLR(10,arg5);
	RTLR(11,arg6);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO user(email,password,name,surname,male,role,photo, changepwd) VALUES (\?,\?,\?,\?,\?,\?,\?,\?);",98,809119035);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 8L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = arg1;
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) arg1;
	RTAR(tr3,arg1);
	ti4_1 = F733_5563(RTCV(arg2));
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = ti4_1;
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = arg3;
	*((EIF_REFERENCE *)tr3+2) = (EIF_REFERENCE) arg3;
	RTAR(tr3,arg3);
	tr4 = arg4;
	*((EIF_REFERENCE *)tr3+3) = (EIF_REFERENCE) arg4;
	RTAR(tr3,arg4);
	tr4 = RTLNS(693, 693, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr4 = arg7;
	*((EIF_REFERENCE *)tr3+4) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = arg5;
	*((EIF_REFERENCE *)tr3+5) = (EIF_REFERENCE) arg5;
	RTAR(tr3,arg5);
	tr4 = arg6;
	*((EIF_REFERENCE *)tr3+6) = (EIF_REFERENCE) arg6;
	RTAR(tr3,arg6);
	tr4 = RTLNS(693, 693, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr4 = (EIF_BOOLEAN) 0;
	*((EIF_REFERENCE *)tr3+7) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	RTLE;
}

/* {DEMO_DB}.remove_user */
void F48_660 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM user WHERE email= \'",31,711765799);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	RTLE;
}

/* {DEMO_DB}.update_user_information */
void F48_661 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,arg3);
	RTLR(6,arg4);
	RTLR(7,arg5);
	RTLR(8,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE user SET name=\'",22,1201963815);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' , surname=\'",13,2001670951);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg3);
	tr3 = RTMS_EX_H("\' , role=\'",10,1190757415);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg4);
	tr3 = RTMS_EX_H("\' , photo=\'",11,1273813543);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg5);
	tr3 = RTMS_EX_H("\' WHERE email=\'",15,737424935);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F927_8008(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while updating user information",37,302863726);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.set_changepwd */
void F48_662 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE user SET changepwd = \? WHERE email = \'",45,2139844391);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {801,693,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_BOOLEAN), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_BOOLEAN *)tr3+0) = (EIF_BOOLEAN) arg2;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F802_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	RTLE;
}

/* {DEMO_DB}.change_user_password */
void F48_664 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,loc1);
	RTLR(6,arg2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("UPDATE user SET password = \? WHERE email = \'",44,571011111);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	ti4_1 = F733_5563(RTCV(arg2));
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ti4_1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	RTLE;
}

/* {DEMO_DB}.check_user_password */
EIF_REFERENCE F48_666 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(14);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc1);
	RTLR(6,arg1);
	RTLR(7,tr4);
	RTLR(8,arg2);
	RTLR(9,tr5);
	RTLR(10,tr6);
	RTLR(11,tr7);
	RTLR(12,tr8);
	RTLR(13,tr9);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,8,684,693,740,740,740,740,740,740,740,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 9, 0);
	}
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM user WHERE email=\? AND password=\?;",48,722962491);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 2L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = arg1;
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) arg1;
	RTAR(tr3,arg1);
	ti4_1 = F733_5563(RTCV(arg2));
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = ti4_1;
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
		
		eif_put_boolean_item(RTCV(Result),1,(EIF_BOOLEAN) 0);
	} else {
		
		eif_put_boolean_item(RTCV(Result),1,(EIF_BOOLEAN) 1);
		
		tr1 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		tr1 = F922_7884(RTCV(tr1), tu4_1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr1)-0])(RTCV(tr1));
		eif_put_reference_item(RTCV(Result),2,tr1);
		
		tr2 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
		tr2 = F922_7884(RTCV(tr2), tu4_1);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr2)-0])(RTCV(tr2));
		eif_put_reference_item(RTCV(Result),4,tr2);
		
		tr3 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
		tr3 = F922_7884(RTCV(tr3), tu4_1);
		tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr3)-0])(RTCV(tr3));
		eif_put_reference_item(RTCV(Result),5,tr3);
		
		tr4 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 4L);
		tr4 = F922_7884(RTCV(tr4), tu4_1);
		tr4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr4)-0])(RTCV(tr4));
		eif_put_reference_item(RTCV(Result),3,tr4);
		
		tr5 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 6L);
		tr5 = F922_7884(RTCV(tr5), tu4_1);
		tr5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr5)-0])(RTCV(tr5));
		eif_put_reference_item(RTCV(Result),7,tr5);
		tr6 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L);
		tr6 = F922_7884(RTCV(tr6), tu4_1);
		tr6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr6)-0])(RTCV(tr6));
		tr7 = RTMS_EX_H("1",1,49);
		tb1 = F737_5745(RTCV(tr6), tr7);
		if (tb1) {
			
			tr6 = RTMS_EX_H("male",4,1835101285);
			eif_put_reference_item(RTCV(Result),6,tr6);
		} else {
			
			tr7 = RTMS_EX_H("female",6,2036417125);
			eif_put_reference_item(RTCV(Result),6,tr7);
		}
		tr8 = F924_7959(RTCV(loc1));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L);
		tr8 = F922_7884(RTCV(tr8), tu4_1);
		tr8 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(tr8)-0])(RTCV(tr8));
		tr9 = RTMS_EX_H("1",1,49);
		tb1 = F737_5745(RTCV(tr8), tr9);
		if (tb1) {
			
			tr8 = RTMS_EX_H("true",4,1953658213);
			eif_put_reference_item(RTCV(Result),8,tr8);
		} else {
			
			tr9 = RTMS_EX_H("false",5,1635280741);
			eif_put_reference_item(RTCV(Result),8,tr9);
		}
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.get_user_name */
EIF_REFERENCE F48_667 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	RTLR(6,loc1);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT name FROM user WHERE email = \'",37,1387748903);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F925_7975(RTCV(tr1));
	Result = F924_7959(RTCV(loc1));
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	Result = F922_7889(RTCV(Result), tu4_1);
	RTLE;
	return Result;
}

/* {DEMO_DB}.get_user_surname */
EIF_REFERENCE F48_668 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	RTLR(6,loc1);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT surname FROM user WHERE email = \'",40,751534119);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F925_7975(RTCV(tr1));
	Result = F924_7959(RTCV(loc1));
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	Result = F922_7889(RTCV(Result), tu4_1);
	RTLE;
	return Result;
}

/* {DEMO_DB}.get_all_project_iterations */
EIF_REFERENCE F48_669 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT iteration.number as iteration_number, iteration.name as title, sum(IFNULL(work_item.points,0)) as points FROM iteration LEFT JOIN work_item ON iteration.number = work_item.nb_iteration AND iteration.project = work_item.project WHERE iteration.project=\'",259,1280485159);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\' GROUP BY iteration.project, iteration.number;",47,168994107);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	RTLE;
	return Result;
}

/* {DEMO_DB}.add_iteration */
EIF_REFERENCE F48_670 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,loc1);
	RTLR(8,tr4);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,684,740,740,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	Result = (EIF_REFERENCE) tr1;
	tr1 = F48_669(Current, arg1);
	loc3 = F859_7449(RTCV(tr1));
	if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = RTMS_EX_H("ITERATION ",10,962138912);
		tr2 = c_outi(loc3);
		loc4 = F741_5940(RTCV(tr1), tr2);
	} else {
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc4 = RTMS_EX_H("BACKLOG ITERATION",17,8675662);
	}
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO iteration(number, project, name, backlog) VALUES (\?,\?,\?,\?);",71,693912891);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 4L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 4L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = loc3;
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = arg1;
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) arg1;
	RTAR(tr3,arg1);
	tr4 = loc4;
	*((EIF_REFERENCE *)tr3+2) = (EIF_REFERENCE) loc4;
	RTAR(tr3,loc4);
	tr4 = RTLNS(693, 693, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr4 = loc2;
	*((EIF_REFERENCE *)tr3+3) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	
	tr1 = c_outi(loc3);
	eif_put_reference_item(RTCV(Result),1,tr1);
	
	eif_put_reference_item(RTCV(Result),2,loc4);
	RTLE;
	return Result;
}

/* {DEMO_DB}.remove_iteration */
void F48_671 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	RTLR(5,tr4);
	RTLR(6,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM iteration WHERE number=\? AND project=\?;",51,46985531);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 2L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = arg2;
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = arg1;
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) arg1;
	RTAR(tr3,arg1);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	RTLE;
}

/* {DEMO_DB}.check_iteration */
EIF_BOOLEAN F48_672 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM iteration WHERE number = \? AND project = \'",56,1289120551);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' ;",3,2564155);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.is_iteration_empty */
EIF_BOOLEAN F48_673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE project=\'",39,1581583655);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\' AND number=\?;",15,336397371);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg2;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.all_user_done_work_items */
EIF_REFERENCE F48_674 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,arg1);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT id, number, nb_iteration, project, name, description, points FROM work_item WHERE owner=\?  AND created_by=\?;",115,461418555);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {798,740,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr7 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr7) = 2L;
		memset(tr7, 0, RT_SPECIAL_VISIBLE_SIZE(tr7));
	}
	*((EIF_REFERENCE *)tr7+0) = (EIF_REFERENCE) arg1;
	RTAR(tr7,arg1);
	*((EIF_REFERENCE *)tr7+1) = (EIF_REFERENCE) arg1;
	RTAR(tr7,arg1);
	tr6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr7);
	F926_8005(RTCV(tr1), tr5, tr6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while searching the \'Done\' work_items.",44,376435758);
		F1_27(Current, tr1);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.update_number */
void F48_675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	RTLR(5,loc3);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT nb_iteration, project FROM work_item WHERE id=\?;",55,66231867);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tr1 = F924_7959(RTCV(loc1));
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	loc2 = F922_7887(RTCV(tr1), tu4_1);
	loc3 = F924_7959(RTCV(loc1));
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
	loc3 = F922_7889(RTCV(loc3), tu4_1);
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * from work_item WHERE nb_iteration=\? AND project = \'",60,1233000231);
	tr2 = F741_5940(RTCV(tr2), loc3);
	tr3 = RTMS_EX_H("\' AND id>\?;",11,1438665275);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 2L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) loc2;
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
	} else {
		for (;;) {
			tb1 = F924_7962(RTCV(loc1));
			if (tb1) break;
			tr1 = F924_7959(RTCV(loc1));
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			loc4 = F922_7887(RTCV(tr1), tu4_1);
			tr1 = F924_7959(RTCV(loc1));
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2L);
			loc5 = F922_7887(RTCV(tr1), tu4_1);
			tr1 = RTLNSMART(eif_non_attached_type(926));
			tr2 = RTMS_EX_H("UPDATE work_item SET number=\? WHERE id=\? ;",42,1598890043);
			tr3 = *(EIF_REFERENCE *)(Current);
			F925_7968(RTCV(tr1), tr2, tr3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			{
				static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 2L;
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
			*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) loc4;
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
			F927_8009(RTCV(tr1), tr2);
			F924_7965(RTCV(loc1));
		}
	}
	RTLE;
}

/* {DEMO_DB}.iteration_work_items */
EIF_REFERENCE F48_676 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,tr6);
	RTLR(9,tr7);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE nb_iteration=\? AND project = \'",60,658451239);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr7 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr7) = 1L;
	}
	*((EIF_INTEGER_32 *)tr7+0) = (EIF_INTEGER_32) arg1;
	tr6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr7);
	F926_8005(RTCV(tr1), tr5, tr6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while seaching work_items of the given iteration .",56,1275788078);
		F1_27(Current, tr1);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.work_item_info */
EIF_REFERENCE F48_678 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id=\? ;",36,573187387);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,859,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_34_2, (EIF_POINTER) _A36_34_2, (EIF_POINTER)(F48_637),tr2, 1, 1);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr7 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr7) = 1L;
	}
	*((EIF_INTEGER_32 *)tr7+0) = (EIF_INTEGER_32) arg1;
	tr6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr7);
	F926_8005(RTCV(tr1), tr5, tr6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while searching the given work_item.",42,359894830);
		F1_27(Current, tr1);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.count_number_work_item */
EIF_INTEGER_32 F48_679 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,tr3);
	RTLR(5,loc1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE nb_iteration=\? AND project = \'",60,658451239);
	tr2 = F741_5940(RTCV(tr2), arg2);
	tr3 = RTMS_EX_H("\' ;",3,2564155);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	for (;;) {
		tb1 = F924_7962(RTCV(loc1));
		if (tb1) break;
		loc2++;
		F924_7965(RTCV(loc1));
	}
	Result = (EIF_INTEGER_32) loc2;
	RTLE;
	return Result;
}

/* {DEMO_DB}.add_work_item */
EIF_INTEGER_32 F48_680 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,arg5);
	RTLR(5,loc1);
	RTLR(6,tr4);
	RTLR(7,arg1);
	RTLR(8,arg2);
	RTLR(9,arg6);
	RTLR(10,arg7);
	RTLR(11,arg8);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO work_item(number,nb_iteration,project,name,description,points,status,created_by,owner) VALUES (\?,\?,\?,\?,\?,\?,\?,\?,\?);",126,1408002619);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	loc2 = F48_679(Current, arg4, arg5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 9L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 9L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = loc2;
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = arg4;
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = arg5;
	*((EIF_REFERENCE *)tr3+2) = (EIF_REFERENCE) arg5;
	RTAR(tr3,arg5);
	tr4 = arg1;
	*((EIF_REFERENCE *)tr3+3) = (EIF_REFERENCE) arg1;
	RTAR(tr3,arg1);
	tr4 = arg2;
	*((EIF_REFERENCE *)tr3+4) = (EIF_REFERENCE) arg2;
	RTAR(tr3,arg2);
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = arg3;
	*((EIF_REFERENCE *)tr3+5) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = arg6;
	*((EIF_REFERENCE *)tr3+6) = (EIF_REFERENCE) arg6;
	RTAR(tr3,arg6);
	tr4 = arg7;
	*((EIF_REFERENCE *)tr3+7) = (EIF_REFERENCE) arg7;
	RTAR(tr3,arg7);
	tr4 = arg8;
	*((EIF_REFERENCE *)tr3+8) = (EIF_REFERENCE) arg8;
	RTAR(tr3,arg8);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while inserting a new work_item",37,963121773);
		F1_27(Current, tr1);
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		tr1 = RTMS_EX_H("SUCCESS: The new work_item was added to the db. \012",49,1615709962);
		F1_27(Current, tr1);
		tr1 = RTLNSMART(eif_non_attached_type(925));
		tr2 = RTMS_EX_H("SELECT last_insert_rowid();",27,995995451);
		tr3 = *(EIF_REFERENCE *)(Current);
		F925_7968(RTCV(tr1), tr2, tr3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc1 = F925_7975(RTCV(tr1));
		tb1 = F924_7962(RTCV(loc1));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = F924_7959(RTCV(loc1));
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			Result = F922_7887(RTCV(tr1), tu4_1);
		}
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.remove_work_item */
void F48_681 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc8);
	RTLR(5,loc9);
	RTLR(6,loc10);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLR(9,loc1);
	RTLR(10,loc7);
	RTLR(11,loc6);
	
	RTGC;
	loc2 = F48_687(Current, arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {666,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 666, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F859_7449(RTCV(loc2));
	F667_5008(RTCV(tr1), ti4_1);
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = F859_7457(RTCV(loc2));
	loc8 = F567_4631(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc8)-537])(RTCV(loc8));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc8)-537])(RTCV(loc8));
		loc9 = tr1;
		loc9 = RTRV(eif_non_attached_type(859),loc9);
		if (EIF_TEST(loc9)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("work_item_id",12,1060545380);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc9), tr1);
			loc10 = tr1;
			loc10 = RTRV(eif_non_attached_type(826),loc10);
			if (EIF_TEST(loc10)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc10));
				loc4 = F733_5619(RTCV(tr1));
				F667_5048(RTCV(loc3), loc4);
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc8)-537])(RTCV(loc8));
	}
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id=\?;",35,1436688443);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	loc7 = F924_7959(RTCV(loc1));
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L);
	loc7 = F922_7884(RTCV(loc7), tu4_1);
	loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc7)-0])(RTCV(loc7));
	tr1 = RTMS_EX_H("The link with work_item \'",25,1589303079);
	tr1 = F741_5940(RTCV(tr1), loc7);
	tr2 = RTMS_EX_H("\' was removed because the work_item was deleted from the db.",60,1352624174);
	loc6 = F741_5940(RTCV(tr1), tr2);
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = F667_5029(RTCV(loc3));
		if ((EIF_BOOLEAN) (loc5 > ti4_1)) break;
		ti4_2 = F667_5013(RTCV(loc3), loc5);
		F48_692(Current, ti4_2, loc6);
		loc5++;
	}
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM work_item WHERE id=\?;",33,719647035);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb2 = F925_7986(RTCV(tr1));
	if (tb2) {
		tr1 = RTMS_EX_H("Error while deleting a work_item.\012",34,1914578698);
		F1_27(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("SUCCESS: The work_item was deleted from the db. \012",49,423044618);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.modify_work_item */
EIF_REFERENCE F48_682 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(14);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc6);
	RTLR(7,arg3);
	RTLR(8,loc5);
	RTLR(9,tr4);
	RTLR(10,arg5);
	RTLR(11,arg6);
	RTLR(12,arg8);
	RTLR(13,arg7);
	
	RTGC;
	if (F48_689(Current, arg1)) {
		tr1 = RTLNSMART(eif_non_attached_type(925));
		tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id=\?;",35,1436688443);
		tr3 = *(EIF_REFERENCE *)(Current);
		F925_7968(RTCV(tr1), tr2, tr3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		{
			static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr3) = 1L;
		}
		*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
		loc4 = F925_7976(RTCV(tr1), tr2);
		loc1 = F924_7959(RTCV(loc4));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 5L);
		loc1 = F922_7884(RTCV(loc1), tu4_1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
		loc6 = (EIF_REFERENCE) loc1;
		tb1 = F737_5748(RTCV(loc1), arg3);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTMS_EX_H("Old name: ",10,1938117152);
			tr1 = F741_5940(RTCV(tr1), loc1);
			tr2 = RTMS_EX_H(" ",1,32);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H(", New name: ",12,83681312);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr1 = F741_5940(RTCV(tr1), arg3);
			tr2 = RTMS_EX_H("",0,0);
			loc5 = F741_5940(RTCV(tr1), tr2);
			loc5 = (EIF_REFERENCE) loc5;
			F48_692(Current, arg1, loc5);
			tr1 = RTLNSMART(eif_non_attached_type(926));
			tr2 = RTMS_EX_H("UPDATE work_item SET name=\? WHERE id=\? ;",40,1290960443);
			tr3 = *(EIF_REFERENCE *)(Current);
			F925_7968(RTCV(tr1), tr2, tr3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			{
				static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
				RT_SPECIAL_COUNT(tr3) = 2L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			tr4 = arg3;
			*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) arg3;
			RTAR(tr3,arg3);
			tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr4 = arg1;
			*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
			RTAR(tr3,tr4);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
			loc4 = F925_7976(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = F925_7986(RTCV(tr1));
			if (tb1) {
				tr1 = RTMS_EX_H("Error while changing the work_item name.",40,676494382);
				F1_27(Current, tr1);
			}
		}
		tr1 = RTLNSMART(eif_non_attached_type(925));
		tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id=\?;",35,1436688443);
		tr3 = *(EIF_REFERENCE *)(Current);
		F925_7968(RTCV(tr1), tr2, tr3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		{
			static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr3) = 1L;
		}
		*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
		loc4 = F925_7976(RTCV(tr1), tr2);
		tr1 = F924_7959(RTCV(loc4));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
		loc2 = F922_7887(RTCV(tr1), tu4_1);
		tb1 = loc2 == arg4;
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTMS_EX_H("Old points: ",12,1032659488);
			tr2 = c_outi(loc2);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H("",0,0);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H(", New points: ",14,1050223392);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = c_outi(arg4);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H("",0,0);
			loc5 = F741_5940(RTCV(tr1), tr2);
			loc5 = (EIF_REFERENCE) loc5;
			F48_692(Current, arg1, loc5);
			tr1 = RTLNSMART(eif_non_attached_type(926));
			tr2 = RTMS_EX_H("UPDATE work_item SET points=\? WHERE id=\? ;",42,435184699);
			tr3 = *(EIF_REFERENCE *)(Current);
			F925_7968(RTCV(tr1), tr2, tr3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			{
				static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 2L;
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg4;
			*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) arg1;
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
			loc4 = F925_7976(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = F925_7986(RTCV(tr1));
			if (tb1) {
				tr1 = RTMS_EX_H("Error while changing the work_item point.",41,1321715758);
				F1_27(Current, tr1);
			}
		}
		tr1 = RTLNSMART(eif_non_attached_type(925));
		tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id=\?;",35,1436688443);
		tr3 = *(EIF_REFERENCE *)(Current);
		F925_7968(RTCV(tr1), tr2, tr3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		{
			static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr3) = 1L;
		}
		*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
		loc4 = F925_7976(RTCV(tr1), tr2);
		loc1 = F924_7959(RTCV(loc4));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L);
		loc1 = F922_7884(RTCV(loc1), tu4_1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
		tb1 = F737_5748(RTCV(loc1), arg5);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTMS_EX_H("Old status: ",12,1403547936);
			tr1 = F741_5940(RTCV(tr1), loc1);
			tr2 = RTMS_EX_H("",0,0);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H(", New status: ",14,1421111840);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr1 = F741_5940(RTCV(tr1), arg5);
			tr2 = RTMS_EX_H("",0,0);
			loc5 = F741_5940(RTCV(tr1), tr2);
			loc5 = (EIF_REFERENCE) loc5;
			F48_692(Current, arg1, loc5);
			tr1 = RTLNSMART(eif_non_attached_type(926));
			tr2 = RTMS_EX_H("UPDATE work_item SET status=\? WHERE id=\? ;",42,936056891);
			tr3 = *(EIF_REFERENCE *)(Current);
			F925_7968(RTCV(tr1), tr2, tr3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			{
				static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
				RT_SPECIAL_COUNT(tr3) = 2L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			tr4 = arg5;
			*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) arg5;
			RTAR(tr3,arg5);
			tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr4 = arg1;
			*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
			RTAR(tr3,tr4);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
			loc4 = F925_7976(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = F925_7986(RTCV(tr1));
			if (tb1) {
				tr1 = RTMS_EX_H("Error while changing the work_item status.",42,677889326);
				F1_27(Current, tr1);
			}
		}
		tr1 = RTLNSMART(eif_non_attached_type(925));
		tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id=\?;",35,1436688443);
		tr3 = *(EIF_REFERENCE *)(Current);
		F925_7968(RTCV(tr1), tr2, tr3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		{
			static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr3) = 1L;
		}
		*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
		loc4 = F925_7976(RTCV(tr1), tr2);
		loc1 = F924_7959(RTCV(loc4));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
		loc1 = F922_7884(RTCV(loc1), tu4_1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
		tb1 = F737_5748(RTCV(loc1), arg6);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTMS_EX_H("Old owner: ",11,640409888);
			tr1 = F741_5940(RTCV(tr1), loc1);
			tr2 = RTMS_EX_H("",0,0);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H(", New owner: ",13,497872416);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr1 = F741_5940(RTCV(tr1), arg6);
			tr2 = RTMS_EX_H("",0,0);
			loc5 = F741_5940(RTCV(tr1), tr2);
			loc5 = (EIF_REFERENCE) loc5;
			F48_692(Current, arg1, loc5);
			tr1 = RTLNSMART(eif_non_attached_type(926));
			tr2 = RTMS_EX_H("UPDATE work_item SET owner=\? WHERE id=\? ;",41,1602125627);
			tr3 = *(EIF_REFERENCE *)(Current);
			F925_7968(RTCV(tr1), tr2, tr3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			{
				static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
				RT_SPECIAL_COUNT(tr3) = 2L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			tr4 = arg6;
			*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) arg6;
			RTAR(tr3,arg6);
			tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr4 = arg1;
			*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
			RTAR(tr3,tr4);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
			loc4 = F925_7976(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = F925_7986(RTCV(tr1));
			if (tb1) {
				tr1 = RTMS_EX_H("Error while changing the work_item owner.",41,1403106862);
				F1_27(Current, tr1);
			}
		}
		tr1 = RTLNSMART(eif_non_attached_type(925));
		tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id=\?;",35,1436688443);
		tr3 = *(EIF_REFERENCE *)(Current);
		F925_7968(RTCV(tr1), tr2, tr3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		{
			static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr3) = 1L;
		}
		*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
		loc4 = F925_7976(RTCV(tr1), tr2);
		tr1 = F924_7959(RTCV(loc4));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
		loc2 = F922_7887(RTCV(tr1), tu4_1);
		tb1 = loc2 == arg2;
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			F48_685(Current, arg1);
			tr1 = RTMS_EX_H("Old iteration: ",15,1866081056);
			tr2 = c_outi(loc2);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H("",0,0);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H(", New iteration: ",17,245518368);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = c_outi(arg2);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H("",0,0);
			loc5 = F741_5940(RTCV(tr1), tr2);
			loc5 = (EIF_REFERENCE) loc5;
			F48_692(Current, arg1, loc5);
			loc3 = F48_679(Current, arg2, arg8);
			tr1 = RTLNSMART(eif_non_attached_type(926));
			tr2 = RTMS_EX_H("UPDATE work_item SET number=\? WHERE id=\? ;",42,1598890043);
			tr3 = *(EIF_REFERENCE *)(Current);
			F925_7968(RTCV(tr1), tr2, tr3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			{
				static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 2L;
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) loc3;
			*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) arg1;
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
			loc4 = F925_7976(RTCV(tr1), tr2);
			F48_675(Current, arg1);
			tr1 = RTLNSMART(eif_non_attached_type(926));
			tr2 = RTMS_EX_H("UPDATE work_item SET nb_iteration=\? WHERE id=\? ;",48,1003832891);
			tr3 = *(EIF_REFERENCE *)(Current);
			F925_7968(RTCV(tr1), tr2, tr3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			{
				static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr3) = 2L;
			}
			*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg2;
			*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) arg1;
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
			loc4 = F925_7976(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = F925_7986(RTCV(tr1));
			if (tb1) {
				tr1 = RTMS_EX_H("Error while changing the work_item iteration.",45,1061887790);
				F1_27(Current, tr1);
			}
		}
		tr1 = RTLNSMART(eif_non_attached_type(925));
		tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id=\?;",35,1436688443);
		tr3 = *(EIF_REFERENCE *)(Current);
		F925_7968(RTCV(tr1), tr2, tr3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		{
			static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr3) = 1L;
		}
		*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
		loc4 = F925_7976(RTCV(tr1), tr2);
		loc1 = F924_7959(RTCV(loc4));
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 6L);
		loc1 = F922_7884(RTCV(loc1), tu4_1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
		tb1 = F737_5748(RTCV(loc1), arg7);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTMS_EX_H("Old description: ",17,924960288);
			tr1 = F741_5940(RTCV(tr1), loc1);
			tr2 = RTMS_EX_H("",0,0);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H(", New description: ",19,1490023968);
			tr1 = F741_5940(RTCV(tr1), tr2);
			tr1 = F741_5940(RTCV(tr1), arg7);
			tr2 = RTMS_EX_H("",0,0);
			loc5 = F741_5940(RTCV(tr1), tr2);
			loc5 = (EIF_REFERENCE) loc5;
			F48_692(Current, arg1, loc5);
			tr1 = RTLNSMART(eif_non_attached_type(926));
			tr2 = RTMS_EX_H("UPDATE work_item SET description=\? WHERE id=\? ;",47,1466212923);
			tr3 = *(EIF_REFERENCE *)(Current);
			F925_7968(RTCV(tr1), tr2, tr3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			{
				static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
				RT_SPECIAL_COUNT(tr3) = 2L;
				memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
			}
			tr4 = arg7;
			*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) arg7;
			RTAR(tr3,arg7);
			tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr4 = arg1;
			*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
			RTAR(tr3,tr4);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
			loc4 = F925_7976(RTCV(tr1), tr2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = F925_7986(RTCV(tr1));
			if (tb1) {
				tr1 = RTMS_EX_H("Error while changing the work_item description.",47,1185668910);
				F1_27(Current, tr1);
			}
		}
		RTLE;
		return (EIF_REFERENCE) loc6;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {DEMO_DB}.add_link */
void F48_683 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO link(work_item1,work_item2) VALUES (\?,\?);",53,1631905339);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 2L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) arg2;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while inserting a new link between two work_items",55,562311539);
		F1_27(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("SUCCESS: a new link  is added between the two given work_items",62,141233523);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.link_exist */
EIF_BOOLEAN F48_684 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM link WHERE work_item1 = \? AND work_item2 = \? OR work_item1 = \? AND work_item2 = \?;",96,1417230651);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 4L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 4L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) arg2;
	*((EIF_INTEGER_32 *)tr3+2) = (EIF_INTEGER_32) arg2;
	*((EIF_INTEGER_32 *)tr3+3) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.remove_all_work_item_links */
void F48_685 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM link WHERE work_item1 = \? OR work_item2 =\?;",55,2060642107);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 2L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while deleting all links connected with the given work_item.\012",67,131638282);
		F1_27(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("SUCCESS: all links connected with the given work_item are deleted.\012",67,357155338);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.remove_link */
void F48_686 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM link WHERE work_item1=\? AND work_item2=\? OR work_item1=\? AND  work_item2=\?;",87,1522540859);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 4L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 4L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) arg2;
	*((EIF_INTEGER_32 *)tr3+2) = (EIF_INTEGER_32) arg2;
	*((EIF_INTEGER_32 *)tr3+3) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while deleting an existing link\012",38,1417455882);
		F1_27(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("SUCCESS:the given link was deleted\012",35,1430680586);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.work_item_links */
EIF_REFERENCE F48_687 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT work_item2 as work_item_id FROM link WHERE work_item1=\?;",63,1007115579);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr7 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr7) = 1L;
	}
	*((EIF_INTEGER_32 *)tr7+0) = (EIF_INTEGER_32) arg1;
	tr6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr7);
	F926_8005(RTCV(tr1), tr5, tr6);
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT work_item1 as work_item_id FROM link WHERE work_item2=\?;",63,1611887931);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr7 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr7) = 1L;
	}
	*((EIF_INTEGER_32 *)tr7+0) = (EIF_INTEGER_32) arg1;
	tr6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr7);
	F926_8005(RTCV(tr1), tr5, tr6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while getting of the link\012",32,529838858);
		F1_27(Current, tr1);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.check_status */
EIF_BOOLEAN F48_688 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\01';
	tb2 = '\01';
	tr1 = RTMS_EX_H("Not started",11,1856657508);
	tb3 = F737_5748(RTCV(arg1), tr1);
	if (!tb3) {
		tr1 = RTMS_EX_H("Ongoing",7,1046125927);
		tb3 = F737_5748(RTCV(arg1), tr1);
		tb2 = tb3;
	}
	if (!tb2) {
		tr1 = RTMS_EX_H("Done",4,1148153445);
		tb2 = F737_5748(RTCV(arg1), tr1);
		tb1 = tb2;
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.work_item_exists */
EIF_BOOLEAN F48_689 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT * FROM work_item WHERE id = \?;",37,673568059);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tb1 = F924_7962(RTCV(loc1));
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {DEMO_DB}.remove_all_work_item_comments */
void F48_690 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(926));
	tr2 = RTMS_EX_H("DELETE FROM comment WHERE work_item = \?;",40,1297856315);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) arg1;
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr3);
	loc1 = F925_7976(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while deleting all comments connected with the given work_item.\012",70,859297546);
		F1_27(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("SUCCESS: all comments connected with the given work_item are deleted.\012",70,791054858);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.add_comment */
void F48_691 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,arg2);
	RTLR(9,arg3);
	
	RTGC;
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F938_8177(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc3 = F938_8207(RTCV(loc1));
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO comment(date,work_item,content,author) VALUES(\?,\?,\?,\?);",67,123791419);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 4L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 4L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = loc3;
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) loc3;
	RTAR(tr3,loc3);
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = arg1;
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = arg2;
	*((EIF_REFERENCE *)tr3+2) = (EIF_REFERENCE) arg2;
	RTAR(tr3,arg2);
	tr4 = arg3;
	*((EIF_REFERENCE *)tr3+3) = (EIF_REFERENCE) arg3;
	RTAR(tr3,arg3);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc2 = F925_7976(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while inserting a new comment\012",36,1189235722);
		F1_27(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("SUCCESS: the new comment was added\012",35,308462090);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.add_comment_from_modification */
void F48_692 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,arg2);
	RTLR(9,tr5);
	
	RTGC;
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F938_8177(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc3 = F938_8207(RTCV(loc1));
	tr1 = RTLNSMART(eif_non_attached_type(927));
	tr2 = RTMS_EX_H("INSERT INTO comment(date,work_item,content,author) VALUES (\?,\?,\?,\?);",68,1761310267);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 4L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 4L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = loc3;
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) loc3;
	RTAR(tr3,loc3);
	tr4 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr4 = arg1;
	*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr4 = arg2;
	*((EIF_REFERENCE *)tr3+2) = (EIF_REFERENCE) arg2;
	RTAR(tr3,arg2);
	tr5 = RTMS_EX_H("System",6,2101121901);
	tr4 = tr5;
	*((EIF_REFERENCE *)tr3+3) = (EIF_REFERENCE) tr5;
	RTAR(tr3,tr5);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	loc2 = F925_7976(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error while inserting a new comment\012",36,1189235722);
		F1_27(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("SUCCESS: the new comment was added\012",35,308462090);
		F1_27(Current, tr1);
	}
	RTLE;
}

/* {DEMO_DB}.work_item_comments */
EIF_REFERENCE F48_693 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT date, content, author FROM comment WHERE work_item=\? ;",61,1073880123);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = Result;
	RTAR(tr2,Result);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {799,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr7 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr7) = 1L;
	}
	*((EIF_INTEGER_32 *)tr7+0) = (EIF_INTEGER_32) arg1;
	tr6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F800_6358)(tr7);
	F926_8005(RTCV(tr1), tr5, tr6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F925_7986(RTCV(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("Error during the listing of the comments",40,2022499443);
		F1_27(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("SUCCESS: the comments regarding the given work_item are listed",62,1744597604);
		F1_27(Current, tr1);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.search_user */
EIF_REFERENCE F48_694 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,tr5);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,684,693,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("%",1,37);
	F741_5930(RTCV(arg1), tr1);
	tr1 = RTMS_EX_H("%",1,37);
	F741_5938(RTCV(arg1), tr1);
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT email, name, surname, male as gender, role, photo FROM user WHERE email LIKE \'",85,1040081703);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 6L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	ti4_1 = F859_7449(RTCV(loc1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		
		eif_put_boolean_item(RTCV(Result),1,(EIF_BOOLEAN) 1);
		
		eif_put_reference_item(RTCV(Result),2,loc1);
	} else {
		
		eif_put_boolean_item(RTCV(Result),1,(EIF_BOOLEAN) 0);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.search_work_items */
EIF_REFERENCE F48_695 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,tr5);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,684,693,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("%",1,37);
	F741_5930(RTCV(arg1), tr1);
	tr1 = RTMS_EX_H("%",1,37);
	F741_5938(RTCV(arg1), tr1);
	tr1 = RTLNSMART(eif_non_attached_type(925));
	tr2 = RTMS_EX_H("SELECT id as work_item_id, nb_iteration as iteration_number, project FROM work_item WHERE name LIKE \'",101,1680664871);
	tr2 = F741_5940(RTCV(tr2), arg1);
	tr3 = RTMS_EX_H("\';",2,10043);
	tr2 = F741_5940(RTCV(tr2), tr3);
	tr3 = *(EIF_REFERENCE *)(Current);
	F925_7968(RTCV(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,0,845,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 3L);
	((EIF_TYPED_VALUE *)tr2+2)->it_n4 = tu4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0,0xFFF9,1,684,921,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A36_33_2, (EIF_POINTER) _A36_33_2, (EIF_POINTER)(F48_636),tr2, 1, 1);
	}
	F926_8004(RTCV(tr1), tr5);
	ti4_1 = F859_7449(RTCV(loc1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		
		eif_put_boolean_item(RTCV(Result),1,(EIF_BOOLEAN) 1);
		
		eif_put_reference_item(RTCV(Result),2,loc1);
	} else {
		
		eif_put_boolean_item(RTCV(Result),1,(EIF_BOOLEAN) 0);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.path_to_src_folder */
EIF_REFERENCE F48_696 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_add_iteration.py ",32,1231687200);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_pass.py ",23,330986784);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_rem_iteration.py ",32,920954400);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 4L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_invitation.py ",29,1119954464);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 5L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/promote_owner.py ",21,928794656);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 6L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/new_owner.py ",17,982907168);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 7L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_add_member.py  ",30,509432096);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 8L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_is_added.py  ",28,789923616);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 9L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_remove_member.py  ",33,245135648);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 10L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_is_removed.py  ",30,1448796448);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 11L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_welcome.py  ",27,2125571360);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 12L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_add_work_item.py  ",33,1014228256);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 15L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/downgrade_owner.py  ",24,300142624);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 14L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/new_member.py  ",19,752737824);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L))) {
		tr1 = RTMS_EX_H("..",2,11822);
		tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
		tr2 = c_outc(tc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("src/send_email_rem_work_item.py  ",33,923384352);
		Result = F741_5940(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {DEMO_DB}.db */
EIF_REFERENCE F48_697 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DEMO_DB}.db_query_statement */
EIF_REFERENCE F48_698 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DEMO_DB}.db_insert_statement */
EIF_REFERENCE F48_699 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DEMO_DB}.db_modify_statement */
EIF_REFERENCE F48_700 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


void EIF_Minit36 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
