/*
 * Code for class ITERATION_CTRL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "it260.h"
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

/* {ITERATION_CTRL}.make */
void F504_3469 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {ITERATION_CTRL}.my_db */
EIF_REFERENCE F504_3470 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ITERATION_CTRL}.get_all_project_iterations */
void F504_3471 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,tr2);
	RTLR(8,loc4);
	RTLR(9,loc3);
	RTLR(10,tr3);
	RTLR(11,arg2);
	RTLR(12,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc5 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc5));
	loc6 = tr1;
	loc6 = RTRV(eif_non_attached_type(859),loc6);
	if (EIF_TEST(loc6)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc5)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name",12,465293157);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc6), tr1);
		loc7 = tr1;
		loc7 = RTRV(eif_non_attached_type(826),loc7);
		if (EIF_TEST(loc7)) {
			loc2 = F827_6561(RTCV(loc7));
		}
	}
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tb1 = '\01';
	tb2 = '\01';
	if (!((EIF_BOOLEAN)(loc2 == NULL))) {
		tb3 = F286_2518(RTCV(loc2));
		tb2 = tb3;
	}
	if (!tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L));
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name not valid.",23,1571071278);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc3), tr1, tr2);
		F859_7453(RTCV(loc4), loc3);
		tr1 = F859_7446(RTCV(loc4));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F48_640(RTCV(tr1), loc2);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Project not present into the database.",38,1529351726);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc3), tr1, tr2);
			F859_7453(RTCV(loc4), loc3);
			tr1 = F859_7446(RTCV(loc4));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Iterations of the project ",26,147595552);
			tr2 = F741_5940(RTCV(tr2), loc2);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("success",7,1797825139);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc3), tr1, tr2);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F48_669(RTCV(tr1), loc2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("iterations",10,238758259);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc3), tr1, tr2);
			F859_7453(RTCV(loc4), loc3);
			tr1 = F859_7446(RTCV(loc4));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3419(Current, arg2, ti4_1);
		}
	}
	tr1 = F859_7446(RTCV(loc4));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {ITERATION_CTRL}.create_iteration */
void F504_3472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(22);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,loc3);
	RTLR(5,loc13);
	RTLR(6,loc14);
	RTLR(7,tr2);
	RTLR(8,loc4);
	RTLR(9,tr3);
	RTLR(10,arg2);
	RTLR(11,Current);
	RTLR(12,loc5);
	RTLR(13,loc8);
	RTLR(14,loc7);
	RTLR(15,loc15);
	RTLR(16,loc16);
	RTLR(17,loc17);
	RTLR(18,loc11);
	RTLR(19,loc6);
	RTLR(20,loc10);
	RTLR(21,loc12);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc3 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc3));
	loc13 = tr1;
	loc13 = RTRV(eif_non_attached_type(859),loc13);
	if (EIF_TEST(loc13)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc3)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name",12,465293157);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc13), tr1);
		loc14 = tr1;
		loc14 = RTRV(eif_non_attached_type(826),loc14);
		if (EIF_TEST(loc14)) {
			loc2 = F827_6561(RTCV(loc14));
		}
	}
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tb1 = '\01';
	tb2 = '\01';
	if (!((EIF_BOOLEAN)(loc2 == NULL))) {
		tb3 = F286_2518(RTCV(loc2));
		tb2 = tb3;
	}
	if (!tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L));
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name not valid.",23,1571071278);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc4), tr1, tr2);
		tr1 = F860_7479(RTCV(loc4));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F48_640(RTCV(tr1), loc2);
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc5 = F48_670(RTCV(tr1), loc2);
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Iteration ",10,237894176);
			tr3 = eif_boxed_item(loc5,1);
			tr3 = F737_5764(RTCV(tr3));
			tr2 = F741_5940(RTCV(tr2), tr3);
			tr3 = RTMS_EX_H(" for project ",13,1036498976);
			tr2 = F741_5940(RTCV(tr2), tr3);
			tr2 = F741_5940(RTCV(tr2), loc2);
			tr3 = RTMS_EX_H(" sucessfully created.",21,604578094);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("success",7,1797825139);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc4), tr1, tr2);
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = eif_boxed_item(loc5,1);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("iteration_number",16,609711218);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc4), tr1, tr2);
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = eif_boxed_item(loc5,2);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("title",5,1770128485);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc4), tr1, tr2);
			tr1 = F860_7479(RTCV(loc4));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3419(Current, arg2, ti4_1);
			tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F859_7444(RTCV(tr1));
			loc8 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current);
			loc8 = F48_650(RTCV(tr1), loc2);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F48_650(RTCV(tr1), loc2);
			tr1 = F859_7446(RTCV(tr1));
			F1_27(Current, tr1);
			{
				static EIF_TYPE_INDEX typarr0[] = {665,740,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			ti4_1 = F859_7449(RTCV(loc8));
			F666_5008(RTCV(tr1), ti4_1);
			loc7 = (EIF_REFERENCE) tr1;
			ti4_1 = F859_7449(RTCV(loc8));
			tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			F1_27(Current, tr1);
			tr1 = F859_7457(RTCV(loc8));
			loc15 = F567_4631(RTCV(tr1));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc15)-537])(RTCV(loc15));
				if (tb1) break;
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc15)-537])(RTCV(loc15));
				loc16 = tr1;
				loc16 = RTRV(eif_non_attached_type(859),loc16);
				if (EIF_TEST(loc16)) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("email",5,1835876204);
					F827_6557(RTCV(tr1), tr2);
					tr1 = F860_7477(RTCV(loc16), tr1);
					loc17 = tr1;
					loc17 = RTRV(eif_non_attached_type(826),loc17);
					if (EIF_TEST(loc17)) {
						loc11 = F827_6561(RTCV(loc17));
						F1_27(Current, loc11);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc7)-395])(RTCV(loc7), loc11);
					}
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc15)-537])(RTCV(loc15));
			}
			tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
			loc6 = (EIF_REFERENCE) tr1;
			loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				ti4_1 = F666_5029(RTCV(loc7));
				if ((EIF_BOOLEAN) (loc9 > ti4_1)) break;
				tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
				F733_5554(RTCV(tr1));
				loc10 = (EIF_REFERENCE) tr1;
				tr1 = *(EIF_REFERENCE *)(Current);
				loc12 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 1L));
				loc10 = RTMS_EX_H("python ",7,380410656);
				F741_5941(RTCV(loc10), loc12);
				tr1 = F666_5013(RTCV(loc7), loc9);
				F741_5941(RTCV(loc10), tr1);
				tr1 = RTMS_EX_H(" \"",2,8226);
				F741_5938(RTCV(loc10), tr1);
				F741_5938(RTCV(loc10), loc2);
				tr1 = RTMS_EX_H("\" \"",3,2236450);
				F741_5938(RTCV(loc10), tr1);
				tr1 = eif_boxed_item(loc5,2);
				F741_5938(RTCV(loc10), tr1);
				tr1 = RTMS_EX_H("\"",1,34);
				F741_5938(RTCV(loc10), tr1);
				F495_3345(RTCV(loc6), loc10);
				loc9++;
			}
		} else {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Project not present into the database.",38,1529351726);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc4), tr1, tr2);
			tr1 = F860_7479(RTCV(loc4));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_2);
		}
	}
	tr1 = F860_7479(RTCV(loc4));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {ITERATION_CTRL}.delete_iteration */
void F504_3473 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(23);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,loc4);
	RTLR(5,loc14);
	RTLR(6,loc15);
	RTLR(7,tr2);
	RTLR(8,loc16);
	RTLR(9,loc5);
	RTLR(10,tr3);
	RTLR(11,arg2);
	RTLR(12,Current);
	RTLR(13,loc8);
	RTLR(14,loc7);
	RTLR(15,loc17);
	RTLR(16,loc18);
	RTLR(17,loc19);
	RTLR(18,loc11);
	RTLR(19,loc6);
	RTLR(20,loc10);
	RTLR(21,loc12);
	RTLR(22,loc13);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc4 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc4));
	loc14 = tr1;
	loc14 = RTRV(eif_non_attached_type(859),loc14);
	if (EIF_TEST(loc14)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc4)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name",12,465293157);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc15 = tr1;
		loc15 = RTRV(eif_non_attached_type(826),loc15);
		if (EIF_TEST(loc15)) {
			loc2 = F827_6561(RTCV(loc15));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("iteration_number",16,609711218);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc16 = tr1;
		loc16 = RTRV(eif_non_attached_type(826),loc16);
		if (EIF_TEST(loc16)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc16));
			loc3 = F733_5619(RTCV(tr1));
		}
	}
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tb1 = '\01';
	tb2 = '\01';
	if (!((EIF_BOOLEAN)(loc2 == NULL))) {
		tb3 = F286_2518(RTCV(loc2));
		tb2 = tb3;
	}
	if (!tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L));
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name not valid.",23,1571071278);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = F860_7479(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Iteration number not valid.",27,1466635822);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc5), tr1, tr2);
			tr1 = F860_7479(RTCV(loc5));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Cannot delete a BACKLOG iteration.",34,1063823150);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				tr1 = F860_7479(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tb1 = F48_640(RTCV(tr1), loc2);
				if ((EIF_BOOLEAN) !tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("Project not present into the database.",38,1529351726);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("error",5,1920877938);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
					tr1 = F860_7479(RTCV(loc5));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					tr1 = *(EIF_REFERENCE *)(Current);
					tb1 = F48_672(RTCV(tr1), loc3, loc2);
					if ((EIF_BOOLEAN) !tb1) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Iteration not present into the database.",40,2047092526);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("error",5,1920877938);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc5), tr1, tr2);
						tr1 = F860_7479(RTCV(loc5));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
					} else {
						tr1 = *(EIF_REFERENCE *)(Current);
						tb1 = F48_673(RTCV(tr1), loc2, loc3);
						if ((EIF_BOOLEAN) !tb1) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("Iteration is not empty.",23,1951252014);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("error",5,1920877938);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc5), tr1, tr2);
							tr1 = F860_7479(RTCV(loc5));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
						} else {
							tr1 = *(EIF_REFERENCE *)(Current);
							F48_671(RTCV(tr1), loc2, loc3);
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("Iteration ",10,237894176);
							tr3 = c_outi(loc3);
							tr2 = F741_5940(RTCV(tr2), tr3);
							tr3 = RTMS_EX_H(" removed from project.",22,2112376622);
							tr2 = F741_5940(RTCV(tr2), tr3);
							tr2 = F741_5940(RTCV(tr2), loc2);
							tr3 = RTMS_EX_H(" successfully.",14,955754286);
							tr2 = F741_5940(RTCV(tr2), tr3);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("success",7,1797825139);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc5), tr1, tr2);
							tr1 = F860_7479(RTCV(loc5));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3419(Current, arg2, ti4_1);
							tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
							F859_7444(RTCV(tr1));
							loc8 = (EIF_REFERENCE) tr1;
							tr1 = *(EIF_REFERENCE *)(Current);
							loc8 = F48_650(RTCV(tr1), loc2);
							tr1 = *(EIF_REFERENCE *)(Current);
							tr1 = F48_650(RTCV(tr1), loc2);
							tr1 = F859_7446(RTCV(tr1));
							F1_27(Current, tr1);
							{
								static EIF_TYPE_INDEX typarr0[] = {665,740,0xFFFF};
								EIF_TYPE_INDEX typres0;
								static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
								
								typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
								tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
							}
							ti4_1 = F859_7449(RTCV(loc8));
							F666_5008(RTCV(tr1), ti4_1);
							loc7 = (EIF_REFERENCE) tr1;
							ti4_1 = F859_7449(RTCV(loc8));
							tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
							*(EIF_INTEGER_32 *)tr1 = ti4_1;
							F1_27(Current, tr1);
							tr1 = F859_7457(RTCV(loc8));
							loc17 = F567_4631(RTCV(tr1));
							for (;;) {
								tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc17)-537])(RTCV(loc17));
								if (tb1) break;
								tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc17)-537])(RTCV(loc17));
								loc18 = tr1;
								loc18 = RTRV(eif_non_attached_type(859),loc18);
								if (EIF_TEST(loc18)) {
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("email",5,1835876204);
									F827_6557(RTCV(tr1), tr2);
									tr1 = F860_7477(RTCV(loc18), tr1);
									loc19 = tr1;
									loc19 = RTRV(eif_non_attached_type(826),loc19);
									if (EIF_TEST(loc19)) {
										loc11 = F827_6561(RTCV(loc19));
										F1_27(Current, loc11);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc7)-395])(RTCV(loc7), loc11);
									}
								}
								(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc17)-537])(RTCV(loc17));
							}
							tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
							loc6 = (EIF_REFERENCE) tr1;
							loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								ti4_1 = F666_5029(RTCV(loc7));
								if ((EIF_BOOLEAN) (loc9 > ti4_1)) break;
								tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
								F733_5554(RTCV(tr1));
								loc10 = (EIF_REFERENCE) tr1;
								tr1 = *(EIF_REFERENCE *)(Current);
								loc12 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 3L));
								loc10 = RTMS_EX_H("python ",7,380410656);
								F741_5941(RTCV(loc10), loc12);
								tr1 = F666_5013(RTCV(loc7), loc9);
								F741_5941(RTCV(loc10), tr1);
								tr1 = RTMS_EX_H(" \"",2,8226);
								F741_5938(RTCV(loc10), tr1);
								F741_5938(RTCV(loc10), loc2);
								tr1 = RTMS_EX_H("\" \"",3,2236450);
								F741_5938(RTCV(loc10), tr1);
								loc13 = RTMS_EX_H("ITERATION ",10,962138912);
								F741_5942(RTCV(loc13), loc3);
								F741_5938(RTCV(loc10), loc13);
								tr1 = RTMS_EX_H("\"",1,34);
								F741_5938(RTCV(loc10), tr1);
								F495_3345(RTCV(loc6), loc10);
								loc9++;
							}
						}
					}
				}
			}
		}
	}
	tr1 = F860_7479(RTCV(loc5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

void EIF_Minit260 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
