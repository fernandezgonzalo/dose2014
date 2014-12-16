/*
 * Code for class PROJECT_CTRL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr259.h"
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

/* {PROJECT_CTRL}.make */
void F503_3455 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {PROJECT_CTRL}.my_db */
EIF_REFERENCE F503_3456 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {PROJECT_CTRL}.session_manager */
EIF_REFERENCE F503_3457 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {PROJECT_CTRL}.get_projects */
void F503_3458 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc1 = F48_638(RTCV(loc1));
	loc1 = F859_7446(RTCV(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	F498_3419(Current, arg2, ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), loc1);
	RTLE;
}

/* {PROJECT_CTRL}.add_project */
void F503_3459 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(14);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,arg1);
	RTLR(4,loc5);
	RTLR(5,loc7);
	RTLR(6,loc8);
	RTLR(7,tr2);
	RTLR(8,loc3);
	RTLR(9,Current);
	RTLR(10,loc2);
	RTLR(11,tr3);
	RTLR(12,arg2);
	RTLR(13,loc6);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc5 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc5));
	loc7 = tr1;
	loc7 = RTRV(eif_non_attached_type(859),loc7);
	if (EIF_TEST(loc7)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc5)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name",12,465293157);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc7), tr1);
		loc8 = tr1;
		loc8 = RTRV(eif_non_attached_type(826),loc8);
		if (EIF_TEST(loc8)) {
			loc3 = F827_6561(RTCV(loc8));
		}
	}
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc2 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc2 = F579_4639(RTCV(loc2), tr1);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc2)-0])(RTCV(loc2));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc3 == NULL)) {
		tb2 = F286_2518(RTCV(loc3));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name empty",18,1814681209);
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
		tb1 = F48_640(RTCV(tr1), loc3);
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Project name already existing",29,555580007);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc4), tr1, tr2);
			tr1 = F860_7479(RTCV(loc4));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == NULL)) {
				tb2 = F286_2518(RTCV(loc2));
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("User is not logged in",21,1795627886);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc4), tr1, tr2);
				tr1 = F860_7479(RTCV(loc4));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("Project name too long",21,1432677479);
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
					F48_639(RTCV(tr1), loc3, loc2);
					tr1 = *(EIF_REFERENCE *)(Current);
					loc6 = F48_670(RTCV(tr1), loc3);
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("New project \'",13,1584619303);
					tr2 = F741_5940(RTCV(tr2), loc3);
					tr3 = RTMS_EX_H("\' added successfully.",21,172896558);
					tr2 = F741_5940(RTCV(tr2), tr3);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("success",7,1797825139);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc4), tr1, tr2);
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					F827_6557(RTCV(tr1), loc3);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("project_name",12,465293157);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc4), tr1, tr2);
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("0",1,48);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("points",6,1989899891);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc4), tr1, tr2);
					tr1 = F860_7479(RTCV(loc4));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3419(Current, arg2, ti4_1);
				}
			}
		}
	}
	tr1 = F860_7479(RTCV(loc4));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {PROJECT_CTRL}.remove_project */
void F503_3460 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLD;
	
	RTLI(13);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,arg1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,tr2);
	RTLR(8,loc2);
	RTLR(9,Current);
	RTLR(10,loc1);
	RTLR(11,tr3);
	RTLR(12,arg2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc3);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc3);
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
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc1 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc1 = F579_4639(RTCV(loc1), tr1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name empty",18,1814681209);
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
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Project name doesn\'t exist",26,1370813812);
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
			tb1 = F48_644(RTCV(tr1), loc2);
			if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Project is not empty",20,2042786169);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc4), tr1, tr2);
				tr1 = F860_7479(RTCV(loc4));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tb2 = F286_2518(RTCV(loc1));
					tb1 = tb2;
				}
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("User is not logged in",21,1795627886);
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
					tb1 = F48_641(RTCV(tr1), loc1, loc2);
					if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("User doesn\'t own the project",28,2032781940);
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
						tb1 = F48_645(RTCV(tr1), loc2);
						if (tb1) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("Project still has some members",30,594258035);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("error",5,1920877938);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc4), tr1, tr2);
							tr1 = F860_7479(RTCV(loc4));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
						} else {
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("Project name too long",21,1432677479);
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
								F48_646(RTCV(tr1), loc2);
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("Project \'",9,213807399);
								tr2 = F741_5940(RTCV(tr2), loc2);
								tr3 = RTMS_EX_H("\' removed successfully.",23,1792051246);
								tr2 = F741_5940(RTCV(tr2), tr3);
								F827_6557(RTCV(tr1), tr2);
								tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr3 = RTMS_EX_H("success",7,1797825139);
								F827_6557(RTCV(tr2), tr3);
								F860_7461(RTCV(loc4), tr1, tr2);
								tr1 = F860_7479(RTCV(loc4));
								ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
								F498_3419(Current, arg2, ti4_1);
							}
						}
					}
				}
			}
		}
	}
	tr1 = F860_7479(RTCV(loc4));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {PROJECT_CTRL}.rename_project */
void F503_3461 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc5);
	RTLR(3,arg1);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,loc8);
	RTLR(7,tr2);
	RTLR(8,loc4);
	RTLR(9,loc9);
	RTLR(10,loc3);
	RTLR(11,Current);
	RTLR(12,loc2);
	RTLR(13,tr3);
	RTLR(14,arg2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc6 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc6));
	loc7 = tr1;
	loc7 = RTRV(eif_non_attached_type(859),loc7);
	if (EIF_TEST(loc7)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc6)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name_id",15,627184740);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc7), tr1);
		loc8 = tr1;
		loc8 = RTRV(eif_non_attached_type(826),loc8);
		if (EIF_TEST(loc8)) {
			loc4 = F827_6561(RTCV(loc8));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("new_project_name_id",19,488604004);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc7), tr1);
		loc9 = tr1;
		loc9 = RTRV(eif_non_attached_type(826),loc9);
		if (EIF_TEST(loc9)) {
			loc3 = F827_6561(RTCV(loc9));
		}
	}
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc2 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc2 = F579_4639(RTCV(loc2), tr1);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc2)-0])(RTCV(loc2));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc4 == NULL)) {
		tb2 = F286_2518(RTCV(loc4));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Old project name empty",22,1906243705);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = F860_7479(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc3 == NULL)) {
			tb2 = F286_2518(RTCV(loc3));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("New project name empty",22,1921598329);
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
			tb1 = F48_640(RTCV(tr1), loc3);
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Project name already existing",29,555580007);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				tr1 = F860_7479(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc2 == NULL)) {
					tb2 = F286_2518(RTCV(loc2));
					tb1 = tb2;
				}
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("User is not logged in",21,1795627886);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("error",5,1920877938);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
					tr1 = F860_7479(RTCV(loc5));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Project name too long",21,1432677479);
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
						tb1 = F48_641(RTCV(tr1), loc2, loc4);
						if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("The user is not an owner",24,1429988978);
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
							F48_647(RTCV(tr1), loc4, loc3);
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("Project name changed successfully",33,583300473);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("success",7,1797825139);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc5), tr1, tr2);
							tr1 = F860_7479(RTCV(loc5));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3419(Current, arg2, ti4_1);
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

/* {PROJECT_CTRL}.get_all_user_projects */
void F503_3462 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,arg2);
	
	RTGC;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc1 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc1 = F579_4639(RTCV(loc1), tr1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
	}
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == NULL)) {
		tb2 = F286_2518(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("User email empty",16,2034592377);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc2), tr1, tr2);
		F859_7453(RTCV(loc3), loc2);
		tr1 = F859_7446(RTCV(loc3));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F48_658(RTCV(tr1), loc1);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H(" is not valid",13,1957752164);
			tr2 = F741_5940(RTCV(loc1), tr2);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc2), tr1, tr2);
			F859_7453(RTCV(loc3), loc2);
			tr1 = F859_7446(RTCV(loc3));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Projects of user",16,841837938);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("success",7,1797825139);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc2), tr1, tr2);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F48_648(RTCV(tr1), loc1);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("projects",8,1341994355);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc2), tr1, tr2);
			F859_7453(RTCV(loc3), loc2);
			tr1 = F859_7446(RTCV(loc3));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3419(Current, arg2, ti4_1);
		}
	}
	tr1 = F859_7446(RTCV(loc3));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {PROJECT_CTRL}.get_all_user_projects_not_login */
void F503_3463 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLD;
	
	RTLI(13);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,arg1);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,tr2);
	RTLR(9,loc1);
	RTLR(10,tr3);
	RTLR(11,arg2);
	RTLR(12,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc2);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc2);
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
		tr2 = RTMS_EX_H("email",5,1835876204);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc6), tr1);
		loc7 = tr1;
		loc7 = RTRV(eif_non_attached_type(826),loc7);
		if (EIF_TEST(loc7)) {
			loc1 = F827_6561(RTCV(loc7));
		}
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == NULL)) {
		tb2 = F286_2518(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("User email empty",16,2034592377);
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
		tb1 = F48_658(RTCV(tr1), loc1);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H(" is not valid",13,1957752164);
			tr2 = F741_5940(RTCV(loc1), tr2);
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
			tr2 = RTMS_EX_H("Projects of user",16,841837938);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("success",7,1797825139);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc3), tr1, tr2);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F48_648(RTCV(tr1), loc1);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("projects",8,1341994355);
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

/* {PROJECT_CTRL}.get_all_project_members */
void F503_3464 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLD;
	
	RTLI(13);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc5);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,tr2);
	RTLR(9,loc1);
	RTLR(10,tr3);
	RTLR(11,arg2);
	RTLR(12,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc2);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc2);
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
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
		tr2 = RTMS_EX_H("project_name_id",15,627184740);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc6), tr1);
		loc7 = tr1;
		loc7 = RTRV(eif_non_attached_type(826),loc7);
		if (EIF_TEST(loc7)) {
			loc1 = F827_6561(RTCV(loc7));
		}
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == NULL)) {
		tb2 = F286_2518(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name empty",18,1814681209);
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
		tb1 = F48_640(RTCV(tr1), loc1);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H(" does not exist",15,1203856244);
			tr2 = F741_5940(RTCV(loc1), tr2);
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
			tr2 = RTMS_EX_H("Members of project ",19,756764448);
			tr2 = F741_5940(RTCV(tr2), loc1);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("success",7,1797825139);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc3), tr1, tr2);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F48_656(RTCV(tr1), loc1);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("members",7,877248115);
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

/* {PROJECT_CTRL}.add_member_to_project */
void F503_3465 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(25);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,arg1);
	RTLR(5,loc7);
	RTLR(6,loc15);
	RTLR(7,loc16);
	RTLR(8,tr2);
	RTLR(9,loc2);
	RTLR(10,loc17);
	RTLR(11,loc3);
	RTLR(12,Current);
	RTLR(13,loc1);
	RTLR(14,tr3);
	RTLR(15,arg2);
	RTLR(16,loc10);
	RTLR(17,loc9);
	RTLR(18,loc18);
	RTLR(19,loc19);
	RTLR(20,loc20);
	RTLR(21,loc13);
	RTLR(22,loc8);
	RTLR(23,loc12);
	RTLR(24,loc14);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc4);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc4);
	loc7 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc7));
	loc15 = tr1;
	loc15 = RTRV(eif_non_attached_type(859),loc15);
	if (EIF_TEST(loc15)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name_id",15,627184740);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc15), tr1);
		loc16 = tr1;
		loc16 = RTRV(eif_non_attached_type(826),loc16);
		if (EIF_TEST(loc16)) {
			loc2 = F827_6561(RTCV(loc16));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("user_email_id",13,1032416868);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc15), tr1);
		loc17 = tr1;
		loc17 = RTRV(eif_non_attached_type(826),loc17);
		if (EIF_TEST(loc17)) {
			loc3 = F827_6561(RTCV(loc17));
		}
	}
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc1 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc1 = F579_4639(RTCV(loc1), tr1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name empty",18,1814681209);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc6), tr1, tr2);
		F859_7453(RTCV(loc5), loc6);
		tr1 = F859_7446(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc3 == NULL)) {
			tb2 = F286_2518(RTCV(loc3));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("New member email empty",22,342328697);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc6), tr1, tr2);
			F859_7453(RTCV(loc5), loc6);
			tr1 = F859_7446(RTCV(loc5));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb1 = F48_640(RTCV(tr1), loc2);
			if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Project name does not exist",27,1430802804);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc6), tr1, tr2);
				F859_7453(RTCV(loc5), loc6);
				tr1 = F859_7446(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tb1 = F48_658(RTCV(tr1), loc3);
				if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("The user you want to add doesn\'t exist",38,2079713140);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("error",5,1920877938);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc6), tr1, tr2);
					F859_7453(RTCV(loc5), loc6);
					tr1 = F859_7446(RTCV(loc5));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					tr1 = *(EIF_REFERENCE *)(Current);
					tb1 = F48_642(RTCV(tr1), loc3, loc2);
					if (tb1) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("The user you want to add is already a member",44,1713128306);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("error",5,1920877938);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc6), tr1, tr2);
						F859_7453(RTCV(loc5), loc6);
						tr1 = F859_7446(RTCV(loc5));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
					} else {
						tb1 = '\01';
						if (!(EIF_BOOLEAN)(loc1 == NULL)) {
							tb2 = F286_2518(RTCV(loc1));
							tb1 = tb2;
						}
						if (tb1) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("User is not logged in",21,1795627886);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("error",5,1920877938);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc6), tr1, tr2);
							F859_7453(RTCV(loc5), loc6);
							tr1 = F859_7446(RTCV(loc5));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
						} else {
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("Project name too long",21,1432677479);
								F827_6557(RTCV(tr1), tr2);
								tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr3 = RTMS_EX_H("error",5,1920877938);
								F827_6557(RTCV(tr2), tr3);
								F860_7461(RTCV(loc6), tr1, tr2);
								F859_7453(RTCV(loc5), loc6);
								tr1 = F859_7446(RTCV(loc5));
								ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
								F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
							} else {
								tr1 = *(EIF_REFERENCE *)(Current);
								tb1 = F48_642(RTCV(tr1), loc1, loc2);
								if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("The user is not a member of this project",40,609323892);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("error",5,1920877938);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc6), tr1, tr2);
									F859_7453(RTCV(loc5), loc6);
									tr1 = F859_7446(RTCV(loc5));
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
								} else {
									tr1 = *(EIF_REFERENCE *)(Current);
									F48_651(RTCV(tr1), loc2, loc3, (EIF_BOOLEAN) 0);
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("New member \'",12,1655007783);
									tr2 = F741_5940(RTCV(tr2), loc3);
									tr3 = RTMS_EX_H("\' added successfully to \'",25,508896551);
									tr2 = F741_5940(RTCV(tr2), tr3);
									tr2 = F741_5940(RTCV(tr2), loc2);
									tr3 = RTMS_EX_H("\'.",2,10030);
									tr2 = F741_5940(RTCV(tr2), tr3);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("success",7,1797825139);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc6), tr1, tr2);
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = *(EIF_REFERENCE *)(Current);
									tr2 = F48_667(RTCV(tr2), loc3);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("name",4,1851878757);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc6), tr1, tr2);
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = *(EIF_REFERENCE *)(Current);
									tr2 = F48_668(RTCV(tr2), loc3);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("surname",7,1982226021);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc6), tr1, tr2);
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									F827_6557(RTCV(tr1), loc3);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("email",5,1835876204);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc6), tr1, tr2);
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = *(EIF_REFERENCE *)(Current);
									ti4_1 = F48_643(RTCV(tr2), loc2);
									tr2 = c_outi(ti4_1);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("points",6,1989899891);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc6), tr1, tr2);
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("0",1,48);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("owner",5,2004576114);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc6), tr1, tr2);
									F859_7453(RTCV(loc5), loc6);
									tr1 = F859_7446(RTCV(loc5));
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									F498_3419(Current, arg2, ti4_1);
									tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
									F859_7444(RTCV(tr1));
									loc10 = (EIF_REFERENCE) tr1;
									tr1 = *(EIF_REFERENCE *)(Current);
									loc10 = F48_650(RTCV(tr1), loc2);
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
									ti4_1 = F859_7449(RTCV(loc10));
									F666_5008(RTCV(tr1), ti4_1);
									loc9 = (EIF_REFERENCE) tr1;
									ti4_1 = F859_7449(RTCV(loc10));
									tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
									*(EIF_INTEGER_32 *)tr1 = ti4_1;
									F1_27(Current, tr1);
									tr1 = F859_7457(RTCV(loc10));
									loc18 = F567_4631(RTCV(tr1));
									for (;;) {
										tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc18)-537])(RTCV(loc18));
										if (tb1) break;
										tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc18)-537])(RTCV(loc18));
										loc19 = tr1;
										loc19 = RTRV(eif_non_attached_type(859),loc19);
										if (EIF_TEST(loc19)) {
											tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr2 = RTMS_EX_H("email",5,1835876204);
											F827_6557(RTCV(tr1), tr2);
											tr1 = F860_7477(RTCV(loc19), tr1);
											loc20 = tr1;
											loc20 = RTRV(eif_non_attached_type(826),loc20);
											if (EIF_TEST(loc20)) {
												loc13 = F827_6561(RTCV(loc20));
												F1_27(Current, loc13);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc9)-395])(RTCV(loc9), loc13);
											}
										}
										(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc18)-537])(RTCV(loc18));
									}
									tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
									loc8 = (EIF_REFERENCE) tr1;
									loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									for (;;) {
										ti4_1 = F666_5029(RTCV(loc9));
										if ((EIF_BOOLEAN) (loc11 > ti4_1)) break;
										tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
										F733_5554(RTCV(tr1));
										loc12 = (EIF_REFERENCE) tr1;
										tr1 = *(EIF_REFERENCE *)(Current);
										loc14 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 7L));
										loc12 = RTMS_EX_H("python ",7,380410656);
										F741_5941(RTCV(loc12), loc14);
										tr1 = F666_5013(RTCV(loc9), loc11);
										F741_5941(RTCV(loc12), tr1);
										tr1 = RTMS_EX_H(" ",1,32);
										F741_5941(RTCV(loc12), tr1);
										F741_5941(RTCV(loc12), loc3);
										tr1 = RTMS_EX_H(" \"",2,8226);
										F741_5938(RTCV(loc12), tr1);
										F741_5938(RTCV(loc12), loc2);
										tr1 = RTMS_EX_H("\"",1,34);
										F741_5938(RTCV(loc12), tr1);
										F495_3345(RTCV(loc8), loc12);
										loc11++;
									}
									tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
									F733_5554(RTCV(tr1));
									loc12 = (EIF_REFERENCE) tr1;
									tr1 = *(EIF_REFERENCE *)(Current);
									loc14 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 8L));
									loc12 = RTMS_EX_H("python ",7,380410656);
									F741_5941(RTCV(loc12), loc14);
									F741_5941(RTCV(loc12), loc1);
									tr1 = RTMS_EX_H(" ",1,32);
									F741_5941(RTCV(loc12), tr1);
									F741_5941(RTCV(loc12), loc3);
									tr1 = RTMS_EX_H(" \"",2,8226);
									F741_5938(RTCV(loc12), tr1);
									F741_5938(RTCV(loc12), loc2);
									tr1 = RTMS_EX_H("\"",1,34);
									F741_5938(RTCV(loc12), tr1);
									F495_3345(RTCV(loc8), loc12);
								}
							}
						}
					}
				}
			}
		}
	}
	tr1 = F859_7446(RTCV(loc5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {PROJECT_CTRL}.remove_member_from_project */
void F503_3466 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(25);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,arg1);
	RTLR(5,loc7);
	RTLR(6,loc15);
	RTLR(7,loc16);
	RTLR(8,tr2);
	RTLR(9,loc2);
	RTLR(10,loc17);
	RTLR(11,loc3);
	RTLR(12,Current);
	RTLR(13,loc1);
	RTLR(14,tr3);
	RTLR(15,arg2);
	RTLR(16,loc10);
	RTLR(17,loc9);
	RTLR(18,loc18);
	RTLR(19,loc19);
	RTLR(20,loc20);
	RTLR(21,loc13);
	RTLR(22,loc8);
	RTLR(23,loc12);
	RTLR(24,loc14);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc4);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc4);
	loc7 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc7));
	loc15 = tr1;
	loc15 = RTRV(eif_non_attached_type(859),loc15);
	if (EIF_TEST(loc15)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name_id",15,627184740);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc15), tr1);
		loc16 = tr1;
		loc16 = RTRV(eif_non_attached_type(826),loc16);
		if (EIF_TEST(loc16)) {
			loc2 = F827_6561(RTCV(loc16));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("user_email_id",13,1032416868);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc15), tr1);
		loc17 = tr1;
		loc17 = RTRV(eif_non_attached_type(826),loc17);
		if (EIF_TEST(loc17)) {
			loc3 = F827_6561(RTCV(loc17));
		}
	}
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc1 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc1 = F579_4639(RTCV(loc1), tr1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name empty",18,1814681209);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Error",5,1920632178);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = F860_7479(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc3 == NULL)) {
			tb2 = F286_2518(RTCV(loc3));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Member email empty",18,235411577);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Error",5,1920632178);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc5), tr1, tr2);
			tr1 = F860_7479(RTCV(loc5));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb1 = F48_640(RTCV(tr1), loc2);
			if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Project name does not exist",27,1430802804);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("Error",5,1920632178);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				tr1 = F860_7479(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tb2 = F286_2518(RTCV(loc1));
					tb1 = tb2;
				}
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("User is not logged in",21,1795627886);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("Error",5,1920632178);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
					tr1 = F860_7479(RTCV(loc5));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Project name too long",21,1432677479);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("Error",5,1920632178);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc5), tr1, tr2);
						tr1 = F860_7479(RTCV(loc5));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
					} else {
						tr1 = *(EIF_REFERENCE *)(Current);
						tb1 = F48_642(RTCV(tr1), loc1, loc2);
						if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("The user is not a member of this project",40,609323892);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("Error",5,1920632178);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc5), tr1, tr2);
							tr1 = F860_7479(RTCV(loc5));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
						} else {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb1 = F48_641(RTCV(tr1), loc1, loc2);
							if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("The user is not an owner of this project",40,2123679860);
								F827_6557(RTCV(tr1), tr2);
								tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr3 = RTMS_EX_H("Error",5,1920632178);
								F827_6557(RTCV(tr2), tr3);
								F860_7461(RTCV(loc5), tr1, tr2);
								tr1 = F860_7479(RTCV(loc5));
								ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
								F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
							} else {
								tr1 = *(EIF_REFERENCE *)(Current);
								F48_652(RTCV(tr1), loc2, loc3);
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("Member \'",8,1230223399);
								tr2 = F741_5940(RTCV(tr2), loc3);
								tr3 = RTMS_EX_H("\' removed successfully from \'",29,1085871399);
								tr2 = F741_5940(RTCV(tr2), tr3);
								tr2 = F741_5940(RTCV(tr2), loc2);
								tr3 = RTMS_EX_H("\'.",2,10030);
								tr2 = F741_5940(RTCV(tr2), tr3);
								F827_6557(RTCV(tr1), tr2);
								tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr3 = RTMS_EX_H("Success",7,724056435);
								F827_6557(RTCV(tr2), tr3);
								F860_7461(RTCV(loc5), tr1, tr2);
								tr1 = F860_7479(RTCV(loc5));
								ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
								F498_3419(Current, arg2, ti4_1);
								tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
								F859_7444(RTCV(tr1));
								loc10 = (EIF_REFERENCE) tr1;
								tr1 = *(EIF_REFERENCE *)(Current);
								loc10 = F48_650(RTCV(tr1), loc2);
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
								ti4_1 = F859_7449(RTCV(loc10));
								F666_5008(RTCV(tr1), ti4_1);
								loc9 = (EIF_REFERENCE) tr1;
								ti4_1 = F859_7449(RTCV(loc10));
								tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
								*(EIF_INTEGER_32 *)tr1 = ti4_1;
								F1_27(Current, tr1);
								tr1 = F859_7457(RTCV(loc10));
								loc18 = F567_4631(RTCV(tr1));
								for (;;) {
									tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc18)-537])(RTCV(loc18));
									if (tb1) break;
									tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc18)-537])(RTCV(loc18));
									loc19 = tr1;
									loc19 = RTRV(eif_non_attached_type(859),loc19);
									if (EIF_TEST(loc19)) {
										tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
										tr2 = RTMS_EX_H("email",5,1835876204);
										F827_6557(RTCV(tr1), tr2);
										tr1 = F860_7477(RTCV(loc19), tr1);
										loc20 = tr1;
										loc20 = RTRV(eif_non_attached_type(826),loc20);
										if (EIF_TEST(loc20)) {
											loc13 = F827_6561(RTCV(loc20));
											F1_27(Current, loc13);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc9)-395])(RTCV(loc9), loc13);
										}
									}
									(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc18)-537])(RTCV(loc18));
								}
								tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
								loc8 = (EIF_REFERENCE) tr1;
								loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
								for (;;) {
									ti4_1 = F666_5029(RTCV(loc9));
									if ((EIF_BOOLEAN) (loc11 > ti4_1)) break;
									tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
									F733_5554(RTCV(tr1));
									loc12 = (EIF_REFERENCE) tr1;
									tr1 = *(EIF_REFERENCE *)(Current);
									loc14 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 9L));
									loc12 = RTMS_EX_H("python ",7,380410656);
									F741_5941(RTCV(loc12), loc14);
									tr1 = F666_5013(RTCV(loc9), loc11);
									F741_5941(RTCV(loc12), tr1);
									tr1 = RTMS_EX_H(" ",1,32);
									F741_5941(RTCV(loc12), tr1);
									F741_5941(RTCV(loc12), loc3);
									tr1 = RTMS_EX_H(" \"",2,8226);
									F741_5938(RTCV(loc12), tr1);
									F741_5938(RTCV(loc12), loc2);
									tr1 = RTMS_EX_H("\" ",2,8736);
									F741_5938(RTCV(loc12), tr1);
									F741_5938(RTCV(loc12), loc1);
									F495_3345(RTCV(loc8), loc12);
									loc11++;
								}
								tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
								F733_5554(RTCV(tr1));
								loc12 = (EIF_REFERENCE) tr1;
								tr1 = *(EIF_REFERENCE *)(Current);
								loc14 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 10L));
								loc12 = RTMS_EX_H("python ",7,380410656);
								F741_5941(RTCV(loc12), loc14);
								F741_5941(RTCV(loc12), loc1);
								tr1 = RTMS_EX_H(" ",1,32);
								F741_5941(RTCV(loc12), tr1);
								F741_5941(RTCV(loc12), loc3);
								tr1 = RTMS_EX_H(" \"",2,8226);
								F741_5938(RTCV(loc12), tr1);
								F741_5938(RTCV(loc12), loc2);
								tr1 = RTMS_EX_H("\"",1,34);
								F741_5938(RTCV(loc12), tr1);
								F495_3345(RTCV(loc8), loc12);
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

/* {PROJECT_CTRL}.promote_owner */
void F503_3467 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(25);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,arg1);
	RTLR(5,loc7);
	RTLR(6,loc15);
	RTLR(7,loc16);
	RTLR(8,tr2);
	RTLR(9,loc2);
	RTLR(10,loc17);
	RTLR(11,loc3);
	RTLR(12,Current);
	RTLR(13,loc1);
	RTLR(14,tr3);
	RTLR(15,arg2);
	RTLR(16,loc12);
	RTLR(17,loc8);
	RTLR(18,loc14);
	RTLR(19,loc10);
	RTLR(20,loc9);
	RTLR(21,loc18);
	RTLR(22,loc19);
	RTLR(23,loc20);
	RTLR(24,loc13);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc4);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc4);
	loc7 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc7));
	loc15 = tr1;
	loc15 = RTRV(eif_non_attached_type(859),loc15);
	if (EIF_TEST(loc15)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name_id",15,627184740);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc15), tr1);
		loc16 = tr1;
		loc16 = RTRV(eif_non_attached_type(826),loc16);
		if (EIF_TEST(loc16)) {
			loc2 = F827_6561(RTCV(loc16));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("user_email_id",13,1032416868);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc15), tr1);
		loc17 = tr1;
		loc17 = RTRV(eif_non_attached_type(826),loc17);
		if (EIF_TEST(loc17)) {
			loc3 = F827_6561(RTCV(loc17));
		}
	}
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc1 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc1 = F579_4639(RTCV(loc1), tr1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name empty",18,1814681209);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Error",5,1920632178);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = F860_7479(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc3 == NULL)) {
			tb2 = F286_2518(RTCV(loc3));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("New owner email empty",21,1275916153);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Error",5,1920632178);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc5), tr1, tr2);
			tr1 = F860_7479(RTCV(loc5));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb1 = F48_640(RTCV(tr1), loc2);
			if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Project name does not exist",27,1430802804);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("Error",5,1920632178);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				tr1 = F860_7479(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tb2 = F286_2518(RTCV(loc1));
					tb1 = tb2;
				}
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("User is not logged in",21,1795627886);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("Error",5,1920632178);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
					tr1 = F860_7479(RTCV(loc5));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Project name too long",21,1432677479);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("Error",5,1920632178);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc5), tr1, tr2);
						tr1 = F860_7479(RTCV(loc5));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
					} else {
						tr1 = *(EIF_REFERENCE *)(Current);
						tb1 = F48_642(RTCV(tr1), loc3, loc2);
						if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("The new owner is not member of this project",43,120381812);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("Error",5,1920632178);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc5), tr1, tr2);
							tr1 = F860_7479(RTCV(loc5));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
						} else {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb1 = F48_641(RTCV(tr1), loc1, loc2);
							if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("The user is not owner of this project",37,1020860276);
								F827_6557(RTCV(tr1), tr2);
								tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr3 = RTMS_EX_H("Error",5,1920632178);
								F827_6557(RTCV(tr2), tr3);
								F860_7461(RTCV(loc5), tr1, tr2);
								tr1 = F860_7479(RTCV(loc5));
								ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
								F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
							} else {
								tr1 = *(EIF_REFERENCE *)(Current);
								tb1 = F48_641(RTCV(tr1), loc3, loc2);
								if (tb1) {
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("The user is already owner of the project",40,1750563188);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("Error",5,1920632178);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc5), tr1, tr2);
									tr1 = F860_7479(RTCV(loc5));
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
								} else {
									tr1 = *(EIF_REFERENCE *)(Current);
									F48_653(RTCV(tr1), loc2, loc3);
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("New owner \'",11,1284206631);
									tr2 = F741_5940(RTCV(tr2), loc3);
									tr3 = RTMS_EX_H("\' added successfully to \'",25,508896551);
									tr2 = F741_5940(RTCV(tr2), tr3);
									tr2 = F741_5940(RTCV(tr2), loc2);
									tr3 = RTMS_EX_H("\'.",2,10030);
									tr2 = F741_5940(RTCV(tr2), tr3);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("Success",7,724056435);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc5), tr1, tr2);
									tr1 = F860_7479(RTCV(loc5));
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									F498_3419(Current, arg2, ti4_1);
									tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
									F733_5554(RTCV(tr1));
									loc12 = (EIF_REFERENCE) tr1;
									tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
									loc8 = (EIF_REFERENCE) tr1;
									tr1 = *(EIF_REFERENCE *)(Current);
									loc14 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 6L));
									loc12 = RTMS_EX_H("python ",7,380410656);
									F741_5941(RTCV(loc12), loc14);
									F741_5938(RTCV(loc12), loc3);
									tr1 = RTMS_EX_H(" \"",2,8226);
									F741_5938(RTCV(loc12), tr1);
									F741_5938(RTCV(loc12), loc2);
									tr1 = RTMS_EX_H("\"",1,34);
									F741_5938(RTCV(loc12), tr1);
									F495_3345(RTCV(loc8), loc12);
									tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
									F859_7444(RTCV(tr1));
									loc10 = (EIF_REFERENCE) tr1;
									tr1 = *(EIF_REFERENCE *)(Current);
									loc10 = F48_650(RTCV(tr1), loc2);
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
									ti4_1 = F859_7449(RTCV(loc10));
									F666_5008(RTCV(tr1), ti4_1);
									loc9 = (EIF_REFERENCE) tr1;
									ti4_1 = F859_7449(RTCV(loc10));
									tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
									*(EIF_INTEGER_32 *)tr1 = ti4_1;
									F1_27(Current, tr1);
									tr1 = F859_7457(RTCV(loc10));
									loc18 = F567_4631(RTCV(tr1));
									for (;;) {
										tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc18)-537])(RTCV(loc18));
										if (tb1) break;
										tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc18)-537])(RTCV(loc18));
										loc19 = tr1;
										loc19 = RTRV(eif_non_attached_type(859),loc19);
										if (EIF_TEST(loc19)) {
											tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr2 = RTMS_EX_H("email",5,1835876204);
											F827_6557(RTCV(tr1), tr2);
											tr1 = F860_7477(RTCV(loc19), tr1);
											loc20 = tr1;
											loc20 = RTRV(eif_non_attached_type(826),loc20);
											if (EIF_TEST(loc20)) {
												loc13 = F827_6561(RTCV(loc20));
												F1_27(Current, loc13);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc9)-395])(RTCV(loc9), loc13);
											}
										}
										(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc18)-537])(RTCV(loc18));
									}
									tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
									loc8 = (EIF_REFERENCE) tr1;
									loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									for (;;) {
										ti4_1 = F666_5029(RTCV(loc9));
										if ((EIF_BOOLEAN) (loc11 > ti4_1)) break;
										tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
										F733_5554(RTCV(tr1));
										loc12 = (EIF_REFERENCE) tr1;
										tr1 = *(EIF_REFERENCE *)(Current);
										loc14 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 5L));
										loc12 = RTMS_EX_H("python ",7,380410656);
										F741_5941(RTCV(loc12), loc14);
										tr1 = F666_5013(RTCV(loc9), loc11);
										F741_5941(RTCV(loc12), tr1);
										tr1 = RTMS_EX_H(" ",1,32);
										F741_5941(RTCV(loc12), tr1);
										F741_5938(RTCV(loc12), loc2);
										tr1 = RTMS_EX_H(" \"",2,8226);
										F741_5938(RTCV(loc12), tr1);
										F741_5938(RTCV(loc12), loc3);
										tr1 = RTMS_EX_H("\"",1,34);
										F741_5938(RTCV(loc12), tr1);
										F495_3345(RTCV(loc8), loc12);
										loc11++;
									}
								}
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

/* {PROJECT_CTRL}.downgrade_owner */
void F503_3468 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(25);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,arg1);
	RTLR(5,loc7);
	RTLR(6,loc15);
	RTLR(7,loc16);
	RTLR(8,tr2);
	RTLR(9,loc2);
	RTLR(10,loc17);
	RTLR(11,loc3);
	RTLR(12,Current);
	RTLR(13,loc1);
	RTLR(14,tr3);
	RTLR(15,arg2);
	RTLR(16,loc12);
	RTLR(17,loc8);
	RTLR(18,loc14);
	RTLR(19,loc10);
	RTLR(20,loc9);
	RTLR(21,loc18);
	RTLR(22,loc19);
	RTLR(23,loc20);
	RTLR(24,loc13);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc4);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc4);
	loc7 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc7));
	loc15 = tr1;
	loc15 = RTRV(eif_non_attached_type(859),loc15);
	if (EIF_TEST(loc15)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name_id",15,627184740);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc15), tr1);
		loc16 = tr1;
		loc16 = RTRV(eif_non_attached_type(826),loc16);
		if (EIF_TEST(loc16)) {
			loc2 = F827_6561(RTCV(loc16));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("user_email_id",13,1032416868);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc15), tr1);
		loc17 = tr1;
		loc17 = RTRV(eif_non_attached_type(826),loc17);
		if (EIF_TEST(loc17)) {
			loc3 = F827_6561(RTCV(loc17));
		}
	}
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc1 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc1 = F579_4639(RTCV(loc1), tr1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Project name empty",18,1814681209);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("Error",5,1920632178);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = F860_7479(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc3 == NULL)) {
			tb2 = F286_2518(RTCV(loc3));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("New owner email empty",21,1275916153);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Error",5,1920632178);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc5), tr1, tr2);
			tr1 = F860_7479(RTCV(loc5));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb1 = F48_640(RTCV(tr1), loc2);
			if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Project name does not exist",27,1430802804);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("Error",5,1920632178);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				tr1 = F860_7479(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tb2 = F286_2518(RTCV(loc1));
					tb1 = tb2;
				}
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("User is not logged in",21,1795627886);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("Error",5,1920632178);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
					tr1 = F860_7479(RTCV(loc5));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Project name too long",21,1432677479);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("Error",5,1920632178);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc5), tr1, tr2);
						tr1 = F860_7479(RTCV(loc5));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
					} else {
						tr1 = *(EIF_REFERENCE *)(Current);
						tb1 = F48_641(RTCV(tr1), loc1, loc2);
						if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("The user is not owner of this project",37,1020860276);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("Error",5,1920632178);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc5), tr1, tr2);
							tr1 = F860_7479(RTCV(loc5));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
						} else {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb1 = F48_641(RTCV(tr1), loc3, loc2);
							if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("The user is not an owner of the project",39,1912764020);
								F827_6557(RTCV(tr1), tr2);
								tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr3 = RTMS_EX_H("Error",5,1920632178);
								F827_6557(RTCV(tr2), tr3);
								F860_7461(RTCV(loc5), tr1, tr2);
								tr1 = F860_7479(RTCV(loc5));
								ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
								F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
							} else {
								tr1 = *(EIF_REFERENCE *)(Current);
								tb1 = F48_642(RTCV(tr1), loc3, loc2);
								if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("The owner is not member of this project",39,503282804);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("Error",5,1920632178);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc5), tr1, tr2);
									tr1 = F860_7479(RTCV(loc5));
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
								} else {
									tr1 = *(EIF_REFERENCE *)(Current);
									F48_654(RTCV(tr1), loc2, loc3);
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("User \'",6,1869978151);
									tr2 = F741_5940(RTCV(tr2), loc3);
									tr3 = RTMS_EX_H("\' is no longer a owner of the project \'",39,1959176487);
									tr2 = F741_5940(RTCV(tr2), tr3);
									tr2 = F741_5940(RTCV(tr2), loc2);
									tr3 = RTMS_EX_H("\'.",2,10030);
									tr2 = F741_5940(RTCV(tr2), tr3);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("Success",7,724056435);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc5), tr1, tr2);
									tr1 = F860_7479(RTCV(loc5));
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									F498_3419(Current, arg2, ti4_1);
									tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
									F733_5554(RTCV(tr1));
									loc12 = (EIF_REFERENCE) tr1;
									tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
									loc8 = (EIF_REFERENCE) tr1;
									tr1 = *(EIF_REFERENCE *)(Current);
									loc14 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 14L));
									loc12 = RTMS_EX_H("python ",7,380410656);
									F741_5941(RTCV(loc12), loc14);
									F741_5938(RTCV(loc12), loc3);
									tr1 = RTMS_EX_H(" \"",2,8226);
									F741_5938(RTCV(loc12), tr1);
									F741_5938(RTCV(loc12), loc2);
									tr1 = RTMS_EX_H("\"",1,34);
									F741_5938(RTCV(loc12), tr1);
									F495_3345(RTCV(loc8), loc12);
									tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
									F859_7444(RTCV(tr1));
									loc10 = (EIF_REFERENCE) tr1;
									tr1 = *(EIF_REFERENCE *)(Current);
									loc10 = F48_650(RTCV(tr1), loc2);
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
									ti4_1 = F859_7449(RTCV(loc10));
									F666_5008(RTCV(tr1), ti4_1);
									loc9 = (EIF_REFERENCE) tr1;
									ti4_1 = F859_7449(RTCV(loc10));
									tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
									*(EIF_INTEGER_32 *)tr1 = ti4_1;
									F1_27(Current, tr1);
									tr1 = F859_7457(RTCV(loc10));
									loc18 = F567_4631(RTCV(tr1));
									for (;;) {
										tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc18)-537])(RTCV(loc18));
										if (tb1) break;
										tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc18)-537])(RTCV(loc18));
										loc19 = tr1;
										loc19 = RTRV(eif_non_attached_type(859),loc19);
										if (EIF_TEST(loc19)) {
											tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr2 = RTMS_EX_H("email",5,1835876204);
											F827_6557(RTCV(tr1), tr2);
											tr1 = F860_7477(RTCV(loc19), tr1);
											loc20 = tr1;
											loc20 = RTRV(eif_non_attached_type(826),loc20);
											if (EIF_TEST(loc20)) {
												loc13 = F827_6561(RTCV(loc20));
												F1_27(Current, loc13);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc9)-395])(RTCV(loc9), loc13);
											}
										}
										(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc18)-537])(RTCV(loc18));
									}
									tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
									loc8 = (EIF_REFERENCE) tr1;
									loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									for (;;) {
										ti4_1 = F666_5029(RTCV(loc9));
										if ((EIF_BOOLEAN) (loc11 > ti4_1)) break;
										tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
										F733_5554(RTCV(tr1));
										loc12 = (EIF_REFERENCE) tr1;
										tr1 = *(EIF_REFERENCE *)(Current);
										loc14 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 15L));
										loc12 = RTMS_EX_H("python ",7,380410656);
										F741_5941(RTCV(loc12), loc14);
										tr1 = F666_5013(RTCV(loc9), loc11);
										F741_5941(RTCV(loc12), tr1);
										tr1 = RTMS_EX_H(" ",1,32);
										F741_5941(RTCV(loc12), tr1);
										F741_5938(RTCV(loc12), loc2);
										tr1 = RTMS_EX_H(" \"",2,8226);
										F741_5938(RTCV(loc12), tr1);
										F741_5938(RTCV(loc12), loc3);
										tr1 = RTMS_EX_H("\"",1,34);
										F741_5938(RTCV(loc12), tr1);
										F495_3345(RTCV(loc8), loc12);
										loc11++;
									}
								}
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

void EIF_Minit259 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
