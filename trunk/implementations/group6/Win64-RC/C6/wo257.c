/*
 * Code for class WORK_ITEM_CTRL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wo257.h"
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

/* {WORK_ITEM_CTRL}.make */
void F501_3432 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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

/* {WORK_ITEM_CTRL}.my_db */
EIF_REFERENCE F501_3433 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WORK_ITEM_CTRL}.session_manager */
EIF_REFERENCE F501_3434 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WORK_ITEM_CTRL}.get_achieved_work_items */
void F501_3435 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,arg2);
	RTLR(8,loc3);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc1 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc1 = F579_4639(RTCV(loc1), tr1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == NULL)) {
		tb2 = F286_2518(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: the user isn\'t logged in.",32,1895529006);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc2), tr1, tr2);
		tr1 = F860_7479(RTCV(loc2));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = F48_674(RTCV(tr1), loc1);
		ti4_1 = F859_7449(RTCV(loc3));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("SUCCESS: All \'Done\' work_items of \'",35,82549031);
			tr2 = F741_5940(RTCV(tr2), loc1);
			tr3 = RTMS_EX_H("\' are listed above.",19,678911022);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("sucess",6,1894590835);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc2), tr1, tr2);
		} else {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("SUCCESS: The user \'",19,193441319);
			tr2 = F741_5940(RTCV(tr2), loc1);
			tr3 = RTMS_EX_H("\' hasn\'t any \'Done\' work_item.",30,943783470);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("sucess",6,1894590835);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc2), tr1, tr2);
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("work_items",10,1838363251);
		F827_6557(RTCV(tr1), tr2);
		F860_7461(RTCV(loc2), loc3, tr1);
		tr1 = F860_7479(RTCV(loc2));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3419(Current, arg2, ti4_1);
	}
	tr1 = F860_7479(RTCV(loc2));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.get_work_item_info */
void F501_3436 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,tr2);
	RTLR(8,Current);
	RTLR(9,tr3);
	RTLR(10,arg2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	ti4_1 = ((EIF_INTEGER_32) 0);
	loc1 = (EIF_INTEGER_32) ti4_1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc3);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc3);
	loc4 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc4));
	loc5 = tr1;
	loc5 = RTRV(eif_non_attached_type(859),loc5);
	if (EIF_TEST(loc5)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc4)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("work_item_id",12,1060545380);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc5), tr1);
		loc6 = tr1;
		loc6 = RTRV(eif_non_attached_type(826),loc6);
		if (EIF_TEST(loc6)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc6));
			loc1 = F733_5619(RTCV(tr1));
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F48_689(RTCV(tr1), loc1);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc2 = F48_678(RTCV(tr1), loc1);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("SUCCESS: The fields of the work_item \'",38,1438571303);
		tr3 = c_outi(loc1);
		tr2 = F741_5940(RTCV(tr2), tr3);
		tr3 = RTMS_EX_H("\' are listed above.",19,678911022);
		tr2 = F741_5940(RTCV(tr2), tr3);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("success",7,1797825139);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc2), tr1, tr2);
		tr1 = F860_7479(RTCV(loc2));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3419(Current, arg2, ti4_1);
	} else {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: The work_item \'",22,2007773479);
		tr3 = c_outi(loc1);
		tr2 = F741_5940(RTCV(tr2), tr3);
		tr3 = RTMS_EX_H("\' doesn\'t exist into the db.",28,77385262);
		tr2 = F741_5940(RTCV(tr2), tr3);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc2), tr1, tr2);
		tr1 = F860_7479(RTCV(loc2));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	}
	tr1 = F860_7479(RTCV(loc2));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.create_work_item */
void F501_3437 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc19 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc26 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc27 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc28 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc29 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc30 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc31 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc32 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc33 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc34 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc35 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc36 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc37 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc38 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc39 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc40 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc41 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc42 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc43 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc44 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc45 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc46 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTLD;
	
	RTLI(45);
	RTLR(0,loc10);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc6);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,arg2);
	RTLR(8,loc1);
	RTLR(9,loc2);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,loc3);
	RTLR(13,loc11);
	RTLR(14,loc27);
	RTLR(15,loc28);
	RTLR(16,loc29);
	RTLR(17,loc30);
	RTLR(18,loc31);
	RTLR(19,loc32);
	RTLR(20,loc33);
	RTLR(21,loc34);
	RTLR(22,loc16);
	RTLR(23,loc35);
	RTLR(24,loc36);
	RTLR(25,loc37);
	RTLR(26,loc15);
	RTLR(27,loc13);
	RTLR(28,loc38);
	RTLR(29,loc17);
	RTLR(30,loc39);
	RTLR(31,loc40);
	RTLR(32,loc41);
	RTLR(33,loc14);
	RTLR(34,loc42);
	RTLR(35,loc43);
	RTLR(36,loc22);
	RTLR(37,loc21);
	RTLR(38,loc44);
	RTLR(39,loc45);
	RTLR(40,loc46);
	RTLR(41,loc25);
	RTLR(42,loc20);
	RTLR(43,loc24);
	RTLR(44,loc26);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc10 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc6 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc6 = F579_4639(RTCV(loc6), tr1);
		loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc6)-0])(RTCV(loc6));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc6 == NULL)) {
		tb2 = F286_2518(RTCV(loc6));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: the user isn\'t logged in.",32,1895529006);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc10), tr1, tr2);
		tr1 = F860_7479(RTCV(loc10));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		ti4_1 = ((EIF_INTEGER_32) 0);
		loc9 = (EIF_INTEGER_32) ti4_1;
		ti4_1 = ((EIF_INTEGER_32) 0);
		loc8 = (EIF_INTEGER_32) ti4_1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc4 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc5 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc3 = (EIF_REFERENCE) tr1;
		ti4_1 = ((EIF_INTEGER_32) 0);
		loc7 = (EIF_INTEGER_32) ti4_1;
		F749_6172(RTCV(arg1), loc1);
		tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
		F88_1243(RTCV(tr1), loc1);
		loc11 = (EIF_REFERENCE) tr1;
		tb1 = '\0';
		tr1 = F88_1249(RTCV(loc11));
		loc27 = tr1;
		loc27 = RTRV(eif_non_attached_type(859),loc27);
		if (EIF_TEST(loc27)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(loc11)+ _CHROFF_2_0_);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("iteration_number",16,609711218);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc27), tr1);
			loc28 = tr1;
			loc28 = RTRV(eif_non_attached_type(826),loc28);
			if (EIF_TEST(loc28)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc28));
				loc9 = F733_5619(RTCV(tr1));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("project_name_id",15,627184740);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc27), tr1);
			loc29 = tr1;
			loc29 = RTRV(eif_non_attached_type(826),loc29);
			if (EIF_TEST(loc29)) {
				loc2 = F827_6561(RTCV(loc29));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("work_item_title",15,1373483365);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc27), tr1);
			loc30 = tr1;
			loc30 = RTRV(eif_non_attached_type(826),loc30);
			if (EIF_TEST(loc30)) {
				loc4 = F827_6561(RTCV(loc30));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("description",11,801826414);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc27), tr1);
			loc31 = tr1;
			loc31 = RTRV(eif_non_attached_type(826),loc31);
			if (EIF_TEST(loc31)) {
				loc5 = F827_6561(RTCV(loc31));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("points",6,1989899891);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc27), tr1);
			loc32 = tr1;
			loc32 = RTRV(eif_non_attached_type(826),loc32);
			if (EIF_TEST(loc32)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc32));
				loc8 = F733_5619(RTCV(tr1));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("status",6,1862012275);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc27), tr1);
			loc33 = tr1;
			loc33 = RTRV(eif_non_attached_type(826),loc33);
			if (EIF_TEST(loc33)) {
				loc3 = F827_6561(RTCV(loc33));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("comments",8,1973341299);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc27), tr1);
			loc34 = tr1;
			loc34 = RTRV(eif_non_attached_type(858),loc34);
			if (EIF_TEST(loc34)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {665,46,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
				}
				ti4_1 = F859_7449(RTCV(loc34));
				F666_5008(RTCV(tr1), ti4_1);
				loc16 = (EIF_REFERENCE) tr1;
				tr1 = F859_7457(RTCV(loc34));
				loc35 = F567_4631(RTCV(tr1));
				for (;;) {
					tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc35)-537])(RTCV(loc35));
					if (tb1) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc35)-537])(RTCV(loc35));
					loc36 = tr1;
					loc36 = RTRV(eif_non_attached_type(859),loc36);
					if (EIF_TEST(loc36)) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("text",4,1952807028);
						F827_6557(RTCV(tr1), tr2);
						tr1 = F860_7477(RTCV(loc36), tr1);
						loc37 = tr1;
						loc37 = RTRV(eif_non_attached_type(826),loc37);
						if (EIF_TEST(loc37)) {
							loc15 = F827_6561(RTCV(loc37));
							tr1 = RTLNS(46, 46, _OBJSIZ_2_0_0_0_0_0_0_0_);
							F47_632(RTCV(tr1), loc15, loc6);
							loc13 = (EIF_REFERENCE) tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc16)-395])(RTCV(loc16), loc13);
						}
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc35)-537])(RTCV(loc35));
				}
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("links",5,1769673587);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc27), tr1);
			loc38 = tr1;
			loc38 = RTRV(eif_non_attached_type(858),loc38);
			if (EIF_TEST(loc38)) {
				loc19 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				{
					static EIF_TYPE_INDEX typarr0[] = {665,45,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
				}
				ti4_1 = F859_7449(RTCV(loc38));
				F666_5008(RTCV(tr1), ti4_1);
				loc17 = (EIF_REFERENCE) tr1;
				tr1 = F859_7457(RTCV(loc38));
				loc39 = F567_4631(RTCV(tr1));
				for (;;) {
					tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc39)-537])(RTCV(loc39));
					if (tb2) break;
					tb3 = '\0';
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc39)-537])(RTCV(loc39));
					loc40 = tr1;
					loc40 = RTRV(eif_non_attached_type(859),loc40);
					if (EIF_TEST(loc40)) {
						tb3 = (EIF_BOOLEAN)(loc19 == (EIF_BOOLEAN) 1);
					}
					if (tb3) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("work_item_2",11,322909234);
						F827_6557(RTCV(tr1), tr2);
						tr1 = F860_7477(RTCV(loc40), tr1);
						loc41 = tr1;
						loc41 = RTRV(eif_non_attached_type(826),loc41);
						if (EIF_TEST(loc41)) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tr2 = *(EIF_REFERENCE *)(RTCV(loc41));
							ti4_1 = F733_5619(RTCV(tr2));
							tb3 = F48_689(RTCV(tr1), ti4_1);
							if ((EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) 0)) {
								loc19 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								tr1 = *(EIF_REFERENCE *)(RTCV(loc41));
								loc18 = F733_5619(RTCV(tr1));
							} else {
								tr1 = RTLNS(45, 45, _OBJSIZ_0_0_0_1_0_0_0_0_);
								tr2 = *(EIF_REFERENCE *)(RTCV(loc41));
								ti4_1 = F733_5619(RTCV(tr2));
								F46_628(RTCV(tr1), ti4_1);
								loc14 = (EIF_REFERENCE) tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc17)-395])(RTCV(loc17), loc14);
							}
						}
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc39)-537])(RTCV(loc39));
				}
			}
		}
		if ((EIF_BOOLEAN)(loc19 == (EIF_BOOLEAN) 0)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("ERROR: The work_item \'",22,2007773479);
			tr3 = c_outi(loc18);
			tr2 = F741_5940(RTCV(tr2), tr3);
			tr3 = RTMS_EX_H("\' as regards to adding links doesn\'t exist into the db.",55,762035758);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc10), tr1, tr2);
			tr1 = F860_7479(RTCV(loc10));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tb3 = '\01';
			tb4 = F286_2518(RTCV(loc4));
			if (!tb4) {
				tb3 = (EIF_BOOLEAN)(loc4 == NULL);
			}
			if (tb3) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("ERROR: The work_item name is empty.",35,1098345006);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc10), tr1, tr2);
				tr1 = F860_7479(RTCV(loc10));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("ERROR: The work_item name has more then 40 characters.",54,521661230);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("error",5,1920877938);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc10), tr1, tr2);
					tr1 = F860_7479(RTCV(loc10));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					tb3 = '\01';
					tb4 = F286_2518(RTCV(loc5));
					if (!tb4) {
						tb3 = (EIF_BOOLEAN)(loc5 == NULL);
					}
					if (tb3) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("ERROR: The work_item description is empty.",42,1276815918);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("error",5,1920877938);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc10), tr1, tr2);
						tr1 = F860_7479(RTCV(loc10));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
					} else {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 165536L))) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("ERROR: The work_item description has more then 166536 characters.",65,1847735598);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("error",5,1920877938);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc10), tr1, tr2);
							tr1 = F860_7479(RTCV(loc10));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
						} else {
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc8 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 100L)))) {
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("ERROR: The work_item points aren\'t in the valid range [0-100].",62,2016899630);
								F827_6557(RTCV(tr1), tr2);
								tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr3 = RTMS_EX_H("error",5,1920877938);
								F827_6557(RTCV(tr2), tr3);
								F860_7461(RTCV(loc10), tr1, tr2);
								tr1 = F860_7479(RTCV(loc10));
								ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
								F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
							} else {
								tr1 = *(EIF_REFERENCE *)(Current);
								tb3 = F48_640(RTCV(tr1), loc2);
								if ((EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) 0)) {
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("ERROR: The given project doesn\'t exist.",39,503579438);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("error",5,1920877938);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc10), tr1, tr2);
									tr1 = F860_7479(RTCV(loc10));
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
								} else {
									tr1 = *(EIF_REFERENCE *)(Current);
									tb3 = F48_672(RTCV(tr1), loc9, loc2);
									if ((EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) 0)) {
										tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
										tr2 = RTMS_EX_H("ERROR: The given iteration doesn\'t exist.",41,180389934);
										F827_6557(RTCV(tr1), tr2);
										tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
										tr3 = RTMS_EX_H("error",5,1920877938);
										F827_6557(RTCV(tr2), tr3);
										F860_7461(RTCV(loc10), tr1, tr2);
										tr1 = F860_7479(RTCV(loc10));
										ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
										F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
									} else {
										tr1 = *(EIF_REFERENCE *)(Current);
										tb3 = F48_688(RTCV(tr1), loc3);
										if ((EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) 0)) {
											tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr2 = RTMS_EX_H("ERROR: The given status isn\'t among the possible choices.",57,825420846);
											F827_6557(RTCV(tr1), tr2);
											tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr3 = RTMS_EX_H("error",5,1920877938);
											F827_6557(RTCV(tr2), tr3);
											F860_7461(RTCV(loc10), tr1, tr2);
											tr1 = F860_7479(RTCV(loc10));
											ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
											F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
										} else {
											tr1 = *(EIF_REFERENCE *)(Current);
											loc12 = F48_680(RTCV(tr1), loc4, loc5, loc8, loc9, loc2, loc3, loc6, loc6);
											tb3 = '\0';
											if ((EIF_BOOLEAN)(loc16 != NULL)) {
												ti4_1 = F666_5029(RTCV(loc16));
												tb3 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L));
											}
											if (tb3) {
												loc42 = F567_4631(RTCV(loc16));
												for (;;) {
													tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc42)-537])(RTCV(loc42));
													if (tb3) break;
													tr1 = *(EIF_REFERENCE *)(Current);
													tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc42)-537])(RTCV(loc42));
													tr2 = F47_633(RTCV(tr2));
													tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc42)-537])(RTCV(loc42));
													tr3 = F47_634(RTCV(tr3));
													F48_691(RTCV(tr1), loc12, tr2, tr3);
													(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc42)-537])(RTCV(loc42));
												}
											}
											tb4 = '\0';
											if ((EIF_BOOLEAN)(loc17 != NULL)) {
												ti4_1 = F666_5029(RTCV(loc17));
												tb4 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L));
											}
											if (tb4) {
												loc43 = F567_4631(RTCV(loc17));
												for (;;) {
													tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc43)-537])(RTCV(loc43));
													if (tb4) break;
													tr1 = *(EIF_REFERENCE *)(Current);
													tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc43)-537])(RTCV(loc43));
													ti4_1 = F46_629(RTCV(tr2));
													F48_683(RTCV(tr1), loc12, ti4_1);
													(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc43)-537])(RTCV(loc43));
												}
											}
											tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr2 = c_outi(loc12);
											F827_6557(RTCV(tr1), tr2);
											tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr3 = RTMS_EX_H("new_id",6,72306276);
											F827_6557(RTCV(tr2), tr3);
											F860_7461(RTCV(loc10), tr1, tr2);
											tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr2 = RTMS_EX_H("SUCCESS: The work_item \'",24,2126466087);
											tr2 = F741_5940(RTCV(tr2), loc4);
											tr3 = RTMS_EX_H("\' was added successfully.",25,88626990);
											tr2 = F741_5940(RTCV(tr2), tr3);
											F827_6557(RTCV(tr1), tr2);
											tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr3 = RTMS_EX_H("success",7,1797825139);
											F827_6557(RTCV(tr2), tr3);
											F860_7461(RTCV(loc10), tr1, tr2);
											tr1 = F860_7479(RTCV(loc10));
											ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
											F498_3419(Current, arg2, ti4_1);
											tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
											F859_7444(RTCV(tr1));
											loc22 = (EIF_REFERENCE) tr1;
											tr1 = *(EIF_REFERENCE *)(Current);
											loc22 = F48_650(RTCV(tr1), loc2);
											{
												static EIF_TYPE_INDEX typarr0[] = {665,740,0xFFFF};
												EIF_TYPE_INDEX typres0;
												static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
												
												typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
												tr1 = RTLNS(typres0, 665, _OBJSIZ_1_1_0_1_0_0_0_0_);
											}
											ti4_1 = F859_7449(RTCV(loc22));
											F666_5008(RTCV(tr1), ti4_1);
											loc21 = (EIF_REFERENCE) tr1;
											tr1 = F859_7457(RTCV(loc22));
											loc44 = F567_4631(RTCV(tr1));
											for (;;) {
												tb5 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc44)-537])(RTCV(loc44));
												if (tb5) break;
												tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc44)-537])(RTCV(loc44));
												loc45 = tr1;
												loc45 = RTRV(eif_non_attached_type(859),loc45);
												if (EIF_TEST(loc45)) {
													tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
													tr2 = RTMS_EX_H("email",5,1835876204);
													F827_6557(RTCV(tr1), tr2);
													tr1 = F860_7477(RTCV(loc45), tr1);
													loc46 = tr1;
													loc46 = RTRV(eif_non_attached_type(826),loc46);
													if (EIF_TEST(loc46)) {
														loc25 = F827_6561(RTCV(loc46));
														(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc21)-395])(RTCV(loc21), loc25);
													}
												}
												(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc44)-537])(RTCV(loc44));
											}
											tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
											loc20 = (EIF_REFERENCE) tr1;
											loc23 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
											for (;;) {
												ti4_1 = F666_5029(RTCV(loc21));
												if ((EIF_BOOLEAN) (loc23 > ti4_1)) break;
												tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
												F733_5554(RTCV(tr1));
												loc24 = (EIF_REFERENCE) tr1;
												tr1 = *(EIF_REFERENCE *)(Current);
												loc26 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 12L));
												loc24 = RTMS_EX_H("python ",7,380410656);
												F741_5941(RTCV(loc24), loc26);
												tr1 = F666_5013(RTCV(loc21), loc23);
												F741_5941(RTCV(loc24), tr1);
												tr1 = RTMS_EX_H(" \"",2,8226);
												F741_5941(RTCV(loc24), tr1);
												F741_5941(RTCV(loc24), loc4);
												tr1 = RTMS_EX_H("\" ",2,8736);
												F741_5941(RTCV(loc24), tr1);
												F741_5941(RTCV(loc24), loc6);
												tr1 = RTMS_EX_H(" \"",2,8226);
												F741_5941(RTCV(loc24), tr1);
												F741_5941(RTCV(loc24), loc2);
												tr1 = RTMS_EX_H("\" \"",3,2236450);
												F741_5941(RTCV(loc24), tr1);
												tr1 = RTMS_EX_H("ITERATION ",10,962138912);
												F741_5941(RTCV(loc24), tr1);
												tr1 = c_outi(loc9);
												F741_5941(RTCV(loc24), tr1);
												tr1 = RTMS_EX_H("\"",1,34);
												F741_5941(RTCV(loc24), tr1);
												F495_3345(RTCV(loc20), loc24);
												loc23++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	tr1 = F860_7479(RTCV(loc10));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.change_work_item */
void F501_3438 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(25);
	RTLR(0,loc11);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc7);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,arg2);
	RTLR(8,loc1);
	RTLR(9,loc6);
	RTLR(10,loc3);
	RTLR(11,loc4);
	RTLR(12,loc5);
	RTLR(13,loc2);
	RTLR(14,loc12);
	RTLR(15,loc14);
	RTLR(16,loc15);
	RTLR(17,loc16);
	RTLR(18,loc17);
	RTLR(19,loc18);
	RTLR(20,loc19);
	RTLR(21,loc20);
	RTLR(22,loc21);
	RTLR(23,loc22);
	RTLR(24,loc13);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc11 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc7 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc7 = F579_4639(RTCV(loc7), tr1);
		loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc7)-0])(RTCV(loc7));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc7 == NULL)) {
		tb2 = F286_2518(RTCV(loc7));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: the user isn\'t logged in.",32,1895529006);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc11), tr1, tr2);
		tr1 = F860_7479(RTCV(loc11));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		ti4_1 = ((EIF_INTEGER_32) 0);
		loc10 = (EIF_INTEGER_32) ti4_1;
		ti4_1 = ((EIF_INTEGER_32) 0);
		loc9 = (EIF_INTEGER_32) ti4_1;
		ti4_1 = ((EIF_INTEGER_32) 0);
		loc8 = (EIF_INTEGER_32) ti4_1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc6 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc3 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc4 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc5 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F860_7460(RTCV(tr1));
		loc11 = (EIF_REFERENCE) tr1;
		F749_6172(RTCV(arg1), loc1);
		tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
		F88_1243(RTCV(tr1), loc1);
		loc12 = (EIF_REFERENCE) tr1;
		tb1 = '\0';
		tr1 = F88_1249(RTCV(loc12));
		loc14 = tr1;
		loc14 = RTRV(eif_non_attached_type(859),loc14);
		if (EIF_TEST(loc14)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(loc12)+ _CHROFF_2_0_);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("work_item_id",12,1060545380);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc14), tr1);
			loc15 = tr1;
			loc15 = RTRV(eif_non_attached_type(826),loc15);
			if (EIF_TEST(loc15)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc15));
				loc10 = F733_5619(RTCV(tr1));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("nb_iteration",12,1084922734);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc14), tr1);
			loc16 = tr1;
			loc16 = RTRV(eif_non_attached_type(826),loc16);
			if (EIF_TEST(loc16)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc16));
				loc9 = F733_5619(RTCV(tr1));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("project",7,399506036);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc14), tr1);
			loc17 = tr1;
			loc17 = RTRV(eif_non_attached_type(826),loc17);
			if (EIF_TEST(loc17)) {
				loc6 = F827_6561(RTCV(loc17));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("name",4,1851878757);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc14), tr1);
			loc18 = tr1;
			loc18 = RTRV(eif_non_attached_type(826),loc18);
			if (EIF_TEST(loc18)) {
				loc3 = F827_6561(RTCV(loc18));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("description",11,801826414);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc14), tr1);
			loc19 = tr1;
			loc19 = RTRV(eif_non_attached_type(826),loc19);
			if (EIF_TEST(loc19)) {
				loc4 = F827_6561(RTCV(loc19));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("points",6,1989899891);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc14), tr1);
			loc20 = tr1;
			loc20 = RTRV(eif_non_attached_type(826),loc20);
			if (EIF_TEST(loc20)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc20));
				loc8 = F733_5619(RTCV(tr1));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("status",6,1862012275);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc14), tr1);
			loc21 = tr1;
			loc21 = RTRV(eif_non_attached_type(826),loc21);
			if (EIF_TEST(loc21)) {
				loc2 = F827_6561(RTCV(loc21));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("owner",5,2004576114);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc14), tr1);
			loc22 = tr1;
			loc22 = RTRV(eif_non_attached_type(826),loc22);
			if (EIF_TEST(loc22)) {
				loc5 = F827_6561(RTCV(loc22));
			}
		}
		tb1 = '\01';
		tb2 = F286_2518(RTCV(loc3));
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(loc3 == NULL);
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("ERROR: The work_item name is empty.",35,1098345006);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc11), tr1, tr2);
			tr1 = F860_7479(RTCV(loc11));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 40L))) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("ERROR: The work_item name has more then 40 characters.",54,521661230);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("Error",5,1920632178);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc11), tr1, tr2);
				tr1 = F860_7479(RTCV(loc11));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tb1 = F48_689(RTCV(tr1), loc10);
				if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("ERROR: The work_item with id \'",30,1126525479);
					tr3 = c_outi(loc10);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = RTMS_EX_H("\' doesn\'t exist.",16,1341445678);
					tr2 = F741_5940(RTCV(tr2), tr3);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("Error",5,1920632178);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc11), tr1, tr2);
					tr1 = F860_7479(RTCV(loc11));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					tb1 = '\01';
					tb2 = F286_2518(RTCV(loc4));
					if (!tb2) {
						tb1 = (EIF_BOOLEAN)(loc4 == NULL);
					}
					if (tb1) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("ERROR: The work_item description is empty.",42,1276815918);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("error",5,1920877938);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc11), tr1, tr2);
						tr1 = F860_7479(RTCV(loc11));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
					} else {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 165536L))) {
							tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("ERROR: The work_item description has more then 166536 characters.",65,1847735598);
							F827_6557(RTCV(tr1), tr2);
							tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
							tr3 = RTMS_EX_H("error",5,1920877938);
							F827_6557(RTCV(tr2), tr3);
							F860_7461(RTCV(loc11), tr1, tr2);
							tr1 = F860_7479(RTCV(loc11));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
						} else {
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc8 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 100L)))) {
								tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("ERROR: The work_item points aren\'t in the valid range [0-100].",62,2016899630);
								F827_6557(RTCV(tr1), tr2);
								tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
								tr3 = RTMS_EX_H("error",5,1920877938);
								F827_6557(RTCV(tr2), tr3);
								F860_7461(RTCV(loc11), tr1, tr2);
								tr1 = F860_7479(RTCV(loc11));
								ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
								F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
							} else {
								tr1 = *(EIF_REFERENCE *)(Current);
								tb1 = F48_672(RTCV(tr1), loc9, loc6);
								if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
									tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr2 = RTMS_EX_H("ERROR: The given iteration doesn\'t exist.",41,180389934);
									F827_6557(RTCV(tr1), tr2);
									tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
									tr3 = RTMS_EX_H("error",5,1920877938);
									F827_6557(RTCV(tr2), tr3);
									F860_7461(RTCV(loc11), tr1, tr2);
									tr1 = F860_7479(RTCV(loc11));
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
								} else {
									tr1 = *(EIF_REFERENCE *)(Current);
									tb1 = F48_640(RTCV(tr1), loc6);
									if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
										tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
										tr2 = RTMS_EX_H("ERROR: The given project doesn\'t exist.",39,503579438);
										F827_6557(RTCV(tr1), tr2);
										tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
										tr3 = RTMS_EX_H("error",5,1920877938);
										F827_6557(RTCV(tr2), tr3);
										F860_7461(RTCV(loc11), tr1, tr2);
										tr1 = F860_7479(RTCV(loc11));
										ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
										F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
									} else {
										tr1 = *(EIF_REFERENCE *)(Current);
										tb1 = F48_688(RTCV(tr1), loc2);
										if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
											tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr2 = RTMS_EX_H("ERROR: The given status isn\'t in the valid ones",47,719245939);
											F827_6557(RTCV(tr1), tr2);
											tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
											tr3 = RTMS_EX_H("error",5,1920877938);
											F827_6557(RTCV(tr2), tr3);
											F860_7461(RTCV(loc11), tr1, tr2);
											tr1 = F860_7479(RTCV(loc11));
											ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
											F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
										} else {
											tr1 = RTMS_EX_H("System",6,2101121901);
											tb1 = F737_5748(RTCV(loc5), tr1);
											if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
												tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
												tr2 = RTMS_EX_H("ERROR: System can\'t be the new owner.",37,1981112878);
												F827_6557(RTCV(tr1), tr2);
												tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
												tr3 = RTMS_EX_H("error",5,1920877938);
												F827_6557(RTCV(tr2), tr3);
												F860_7461(RTCV(loc11), tr1, tr2);
												tr1 = F860_7479(RTCV(loc11));
												ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
												F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
											} else {
												tr1 = *(EIF_REFERENCE *)(Current);
												tb1 = F48_658(RTCV(tr1), loc5);
												if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
													tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
													tr2 = RTMS_EX_H("ERROR: The given owner doesn\'t exist into the db",48,375471970);
													F827_6557(RTCV(tr1), tr2);
													tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
													tr3 = RTMS_EX_H("error",5,1920877938);
													F827_6557(RTCV(tr2), tr3);
													F860_7461(RTCV(loc11), tr1, tr2);
													tr1 = F860_7479(RTCV(loc11));
													ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
													F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
												} else {
													tr1 = *(EIF_REFERENCE *)(Current);
													loc13 = F48_682(RTCV(tr1), loc10, loc9, loc3, loc8, loc2, loc5, loc4, loc6);
													tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
													tr2 = RTMS_EX_H("SUCCESS: The work_item \'",24,2126466087);
													tr2 = F741_5940(RTCV(tr2), loc13);
													tr3 = RTMS_EX_H("\' was modified successfully.",28,1740196142);
													tr2 = F741_5940(RTCV(tr2), tr3);
													F827_6557(RTCV(tr1), tr2);
													tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
													tr3 = RTMS_EX_H("success",7,1797825139);
													F827_6557(RTCV(tr2), tr3);
													F860_7461(RTCV(loc11), tr1, tr2);
													tr1 = F860_7479(RTCV(loc11));
													ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
													F498_3419(Current, arg2, ti4_1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	tr1 = F860_7479(RTCV(loc11));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.delete_work_item */
void F501_3439 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(27);
	RTLR(0,loc4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,arg2);
	RTLR(8,loc1);
	RTLR(9,loc5);
	RTLR(10,loc17);
	RTLR(11,loc18);
	RTLR(12,loc16);
	RTLR(13,loc19);
	RTLR(14,loc14);
	RTLR(15,loc20);
	RTLR(16,loc21);
	RTLR(17,loc15);
	RTLR(18,loc8);
	RTLR(19,loc7);
	RTLR(20,loc22);
	RTLR(21,loc23);
	RTLR(22,loc24);
	RTLR(23,loc12);
	RTLR(24,loc6);
	RTLR(25,loc11);
	RTLR(26,loc13);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc2 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc2 = F579_4639(RTCV(loc2), tr1);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc2)-0])(RTCV(loc2));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: the user isn\'t logged in.",32,1895529006);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc4), tr1, tr2);
		tr1 = F860_7479(RTCV(loc4));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		ti4_1 = ((EIF_INTEGER_32) 0);
		loc3 = (EIF_INTEGER_32) ti4_1;
		F749_6172(RTCV(arg1), loc1);
		tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
		F88_1243(RTCV(tr1), loc1);
		loc5 = (EIF_REFERENCE) tr1;
		tb1 = '\0';
		tr1 = F88_1249(RTCV(loc5));
		loc17 = tr1;
		loc17 = RTRV(eif_non_attached_type(859),loc17);
		if (EIF_TEST(loc17)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(loc5)+ _CHROFF_2_0_);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("work_item_id",12,1060545380);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc17), tr1);
			loc18 = tr1;
			loc18 = RTRV(eif_non_attached_type(826),loc18);
			if (EIF_TEST(loc18)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc18));
				loc3 = F733_5619(RTCV(tr1));
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F48_689(RTCV(tr1), loc3);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("ERROR: The work_item with id \'",30,1126525479);
			tr3 = c_outi(loc3);
			tr2 = F741_5940(RTCV(tr2), tr3);
			tr3 = RTMS_EX_H("\' doesn\'t exist.",16,1341445678);
			tr2 = F741_5940(RTCV(tr2), tr3);
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
			loc16 = F48_678(RTCV(tr1), loc3);
			tr1 = *(EIF_REFERENCE *)(Current);
			F48_675(RTCV(tr1), loc3);
			tr1 = *(EIF_REFERENCE *)(Current);
			F48_690(RTCV(tr1), loc3);
			tr1 = *(EIF_REFERENCE *)(Current);
			F48_681(RTCV(tr1), loc3);
			tr1 = *(EIF_REFERENCE *)(Current);
			F48_685(RTCV(tr1), loc3);
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("SUCCESS: The work_item with id \'",32,424463911);
			tr3 = c_outi(loc3);
			tr2 = F741_5940(RTCV(tr2), tr3);
			tr3 = RTMS_EX_H("\' was removed successfully.",27,272229166);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("success",7,1797825139);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc4), tr1, tr2);
			tr1 = F860_7479(RTCV(loc4));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3419(Current, arg2, ti4_1);
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("project",7,399506036);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc16), tr1);
			loc19 = tr1;
			loc19 = RTRV(eif_non_attached_type(826),loc19);
			if (EIF_TEST(loc19)) {
				loc14 = F827_6561(RTCV(loc19));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("nb_iteration",12,1084922734);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc16), tr1);
			loc20 = tr1;
			loc20 = RTRV(eif_non_attached_type(826),loc20);
			if (EIF_TEST(loc20)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc20));
				loc10 = F733_5619(RTCV(tr1));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("name",4,1851878757);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc16), tr1);
			loc21 = tr1;
			loc21 = RTRV(eif_non_attached_type(826),loc21);
			if (EIF_TEST(loc21)) {
				loc15 = F827_6561(RTCV(loc21));
			}
			tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F859_7444(RTCV(tr1));
			loc8 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current);
			loc8 = F48_650(RTCV(tr1), loc14);
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
			tr1 = F859_7457(RTCV(loc8));
			loc22 = F567_4631(RTCV(tr1));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc22)-537])(RTCV(loc22));
				if (tb1) break;
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc22)-537])(RTCV(loc22));
				loc23 = tr1;
				loc23 = RTRV(eif_non_attached_type(859),loc23);
				if (EIF_TEST(loc23)) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("email",5,1835876204);
					F827_6557(RTCV(tr1), tr2);
					tr1 = F860_7477(RTCV(loc23), tr1);
					loc24 = tr1;
					loc24 = RTRV(eif_non_attached_type(826),loc24);
					if (EIF_TEST(loc24)) {
						loc12 = F827_6561(RTCV(loc24));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(loc7)-395])(RTCV(loc7), loc12);
					}
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc22)-537])(RTCV(loc22));
			}
			tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
			loc6 = (EIF_REFERENCE) tr1;
			loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				ti4_1 = F666_5029(RTCV(loc7));
				if ((EIF_BOOLEAN) (loc9 > ti4_1)) break;
				tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
				F733_5554(RTCV(tr1));
				loc11 = (EIF_REFERENCE) tr1;
				tr1 = *(EIF_REFERENCE *)(Current);
				loc13 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 13L));
				loc11 = RTMS_EX_H("python ",7,380410656);
				F741_5941(RTCV(loc11), loc13);
				tr1 = F666_5013(RTCV(loc7), loc9);
				F741_5941(RTCV(loc11), tr1);
				tr1 = RTMS_EX_H(" \"",2,8226);
				F741_5941(RTCV(loc11), tr1);
				F741_5941(RTCV(loc11), loc15);
				tr1 = RTMS_EX_H("\" ",2,8736);
				F741_5941(RTCV(loc11), tr1);
				F741_5941(RTCV(loc11), loc2);
				tr1 = RTMS_EX_H(" \"",2,8226);
				F741_5941(RTCV(loc11), tr1);
				F741_5941(RTCV(loc11), loc14);
				tr1 = RTMS_EX_H("\" \"",3,2236450);
				F741_5941(RTCV(loc11), tr1);
				tr1 = RTMS_EX_H("ITERATION ",10,962138912);
				F741_5941(RTCV(loc11), tr1);
				tr1 = c_outi(loc10);
				F741_5941(RTCV(loc11), tr1);
				tr1 = RTMS_EX_H("\"",1,34);
				F741_5941(RTCV(loc11), tr1);
				F495_3345(RTCV(loc6), loc11);
				loc9++;
			}
		}
	}
	tr1 = F860_7479(RTCV(loc4));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.get_all_iteration_work_items */
void F501_3440 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc4);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc6);
	RTLR(5,loc5);
	RTLR(6,arg1);
	RTLR(7,loc7);
	RTLR(8,loc8);
	RTLR(9,loc9);
	RTLR(10,tr2);
	RTLR(11,loc10);
	RTLR(12,tr3);
	RTLR(13,arg2);
	RTLR(14,Current);
	
	RTGC;
	ti4_1 = ((EIF_INTEGER_32) 0);
	loc3 = (EIF_INTEGER_32) ti4_1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc2);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc2);
	loc7 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc7));
	loc8 = tr1;
	loc8 = RTRV(eif_non_attached_type(859),loc8);
	if (EIF_TEST(loc8)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("project_name",12,465293157);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc8), tr1);
		loc9 = tr1;
		loc9 = RTRV(eif_non_attached_type(826),loc9);
		if (EIF_TEST(loc9)) {
			loc1 = F827_6561(RTCV(loc9));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("iteration_number",16,609711218);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc8), tr1);
		loc10 = tr1;
		loc10 = RTRV(eif_non_attached_type(826),loc10);
		if (EIF_TEST(loc10)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc10));
			loc3 = F733_5619(RTCV(tr1));
		}
	}
	tb1 = '\01';
	tb2 = F286_2518(RTCV(loc1));
	if (!tb2) {
		tb1 = (EIF_BOOLEAN)(loc1 == NULL);
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: The project name is empty.",33,1411868462);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc4), tr1, tr2);
		F859_7453(RTCV(loc5), loc4);
		tr1 = F859_7446(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F48_640(RTCV(tr1), loc1);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("ERROR: The project doesn\'t exist into db.",41,409760302);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc4), tr1, tr2);
			F859_7453(RTCV(loc5), loc4);
			tr1 = F859_7446(RTCV(loc5));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb1 = F48_672(RTCV(tr1), loc3, loc1);
			if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("ERROR: The iteration doesn\'t exist into db.",43,1509959982);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc4), tr1, tr2);
				F859_7453(RTCV(loc5), loc4);
				tr1 = F859_7446(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (EIF_INTEGER_32) loc3;
				loc6 = F48_676(RTCV(tr1), ti4_1, loc1);
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("workitems",9,14665843);
				F827_6557(RTCV(tr1), tr2);
				F860_7461(RTCV(loc4), loc6, tr1);
				ti4_1 = F859_7449(RTCV(loc5));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("SUCCESS: The iteration \'",24,648751655);
					tr3 = c_outi(loc3);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = RTMS_EX_H("\' into project \'",16,1193944615);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr2 = F741_5940(RTCV(tr2), loc1);
					tr3 = RTMS_EX_H("\' hasn\'t any work_item.",23,1439866926);
					tr2 = F741_5940(RTCV(tr2), tr3);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("sucess",6,1894590835);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc4), tr1, tr2);
					F859_7453(RTCV(loc5), loc4);
				} else {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("SUCCESS: The work_items of iteration \'",38,165668391);
					tr3 = c_outi(loc3);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = RTMS_EX_H("\' into project \'",16,1193944615);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr2 = F741_5940(RTCV(tr2), loc1);
					tr3 = RTMS_EX_H("\' are listed above.",19,678911022);
					tr2 = F741_5940(RTCV(tr2), tr3);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("sucess",6,1894590835);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc4), tr1, tr2);
					F859_7453(RTCV(loc5), loc4);
				}
				tr1 = F859_7446(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3419(Current, arg2, ti4_1);
			}
		}
	}
	tr1 = F859_7446(RTCV(loc5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.add_comment */
void F501_3441 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(16);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,arg2);
	RTLR(8,loc1);
	RTLR(9,loc2);
	RTLR(10,loc3);
	RTLR(11,loc4);
	RTLR(12,loc7);
	RTLR(13,loc8);
	RTLR(14,loc9);
	RTLR(15,loc10);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc5 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc5 = F579_4639(RTCV(loc5), tr1);
		loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc5)-0])(RTCV(loc5));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc5 == NULL)) {
		tb2 = F286_2518(RTCV(loc5));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: the user isn\'t logged in.",32,1895529006);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc6), tr1, tr2);
		tr1 = F860_7479(RTCV(loc6));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc3 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc4 = (EIF_REFERENCE) tr1;
		F749_6172(RTCV(arg1), loc1);
		tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
		F88_1243(RTCV(tr1), loc1);
		loc7 = (EIF_REFERENCE) tr1;
		tb1 = '\0';
		tr1 = F88_1249(RTCV(loc7));
		loc8 = tr1;
		loc8 = RTRV(eif_non_attached_type(859),loc8);
		if (EIF_TEST(loc8)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_0_);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("work_item_id",12,1060545380);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc8), tr1);
			loc9 = tr1;
			loc9 = RTRV(eif_non_attached_type(826),loc9);
			if (EIF_TEST(loc9)) {
				loc4 = F827_6561(RTCV(loc9));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("comment",7,343252084);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc8), tr1);
			loc10 = tr1;
			loc10 = RTRV(eif_non_attached_type(826),loc10);
			if (EIF_TEST(loc10)) {
				loc2 = F827_6561(RTCV(loc10));
			}
		}
		loc3 = (EIF_REFERENCE) loc5;
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F733_5619(RTCV(loc4));
		tb1 = F48_689(RTCV(tr1), ti4_1);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("ERROR: The work_item doesn\'t exist into the db.",47,1440308270);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc6), tr1, tr2);
			tr1 = F860_7479(RTCV(loc6));
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
				tr2 = RTMS_EX_H("ERROR: The comment hasn\'t text.",31,1581369390);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc6), tr1, tr2);
				tr1 = F860_7479(RTCV(loc6));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tb1 = F48_658(RTCV(tr1), loc3);
				if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("ERROR: The user doesn\'t exist into the db.",42,1124246574);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("error",5,1920877938);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc6), tr1, tr2);
					tr1 = F860_7479(RTCV(loc6));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					tr1 = *(EIF_REFERENCE *)(Current);
					ti4_1 = F733_5619(RTCV(loc4));
					F48_691(RTCV(tr1), ti4_1, loc2, loc3);
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("SUCCESS: The comment was added successfully.",44,1823566894);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("success",7,1797825139);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc6), tr1, tr2);
					tr1 = F860_7479(RTCV(loc6));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3419(Current, arg2, ti4_1);
				}
			}
		}
	}
	tr1 = F860_7479(RTCV(loc6));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.get_all_work_item_comments */
void F501_3442 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	
	RTLI(12);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,tr2);
	RTLR(9,Current);
	RTLR(10,tr3);
	RTLR(11,arg2);
	
	RTGC;
	ti4_1 = ((EIF_INTEGER_32) 0);
	loc2 = (EIF_INTEGER_32) ti4_1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
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
		tr2 = RTMS_EX_H("work_item_id",12,1060545380);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc6), tr1);
		loc7 = tr1;
		loc7 = RTRV(eif_non_attached_type(826),loc7);
		if (EIF_TEST(loc7)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc7));
			loc2 = F733_5619(RTCV(tr1));
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F48_689(RTCV(tr1), loc2);
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: The given work_item doesn\'t exist.",41,394100270);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc3), tr1, tr2);
		tr1 = F860_7479(RTCV(loc3));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3419(Current, arg2, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc4 = F48_693(RTCV(tr1), loc2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("comments",8,1973341299);
		F827_6557(RTCV(tr1), tr2);
		F860_7461(RTCV(loc3), loc4, tr1);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("SUCCESS: The comments of work_item \'",36,986078247);
		tr3 = c_outi(loc2);
		tr2 = F741_5940(RTCV(tr2), tr3);
		tr3 = RTMS_EX_H("\' are listed above.",19,678911022);
		tr2 = F741_5940(RTCV(tr2), tr3);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("success",7,1797825139);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc3), tr1, tr2);
		tr1 = F860_7479(RTCV(loc3));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3419(Current, arg2, ti4_1);
	}
	tr1 = F860_7479(RTCV(loc3));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.add_link */
void F501_3443 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
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
	
	RTLI(13);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,arg2);
	RTLR(8,loc1);
	RTLR(9,loc6);
	RTLR(10,loc7);
	RTLR(11,loc8);
	RTLR(12,loc9);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc2 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc2 = F579_4639(RTCV(loc2), tr1);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc2)-0])(RTCV(loc2));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: the user isn\'t logged in.",32,1895529006);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = F860_7479(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
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
			tr2 = RTMS_EX_H("id_work_item_source",19,378090853);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc7), tr1);
			loc8 = tr1;
			loc8 = RTRV(eif_non_attached_type(826),loc8);
			if (EIF_TEST(loc8)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc8));
				loc3 = F733_5619(RTCV(tr1));
			}
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("id_work_item_destination",24,90191982);
			F827_6557(RTCV(tr1), tr2);
			tr1 = F860_7477(RTCV(loc7), tr1);
			loc9 = tr1;
			loc9 = RTRV(eif_non_attached_type(826),loc9);
			if (EIF_TEST(loc9)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc9));
				loc4 = F733_5619(RTCV(tr1));
			}
		}
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		tb2 = F48_689(RTCV(tr1), loc3);
		if ((EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb2 = F48_689(RTCV(tr1), loc4);
			tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1);
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("ERROR: The work_item source \'",29,38804007);
			tr3 = c_outi(loc3);
			tr2 = F741_5940(RTCV(tr2), tr3);
			tr3 = RTMS_EX_H("\'  doesn\'t exist into the db.",29,1456714542);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc5), tr1, tr2);
			tr1 = F860_7479(RTCV(loc5));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current);
			tb2 = F48_689(RTCV(tr1), loc3);
			if ((EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tb2 = F48_689(RTCV(tr1), loc4);
				tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0);
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("ERROR: The work_item destination \'",34,607167015);
				tr3 = c_outi(loc4);
				tr2 = F741_5940(RTCV(tr2), tr3);
				tr3 = RTMS_EX_H("\'  doesn\'t exist into the db.",29,1456714542);
				tr2 = F741_5940(RTCV(tr2), tr3);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				tr1 = F860_7479(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current);
				tb2 = F48_689(RTCV(tr1), loc3);
				if ((EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0)) {
					tr1 = *(EIF_REFERENCE *)(Current);
					tb2 = F48_689(RTCV(tr1), loc4);
					tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0);
				}
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("ERROR: Both work_item sourse \'",30,880606503);
					tr3 = c_outi(loc3);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = RTMS_EX_H("\' and destination \'",19,1321092647);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = c_outi(loc4);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = RTMS_EX_H("\' don\'t exist.",14,1013659950);
					tr2 = F741_5940(RTCV(tr2), tr3);
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
					tb1 = F48_684(RTCV(tr1), loc3, loc4);
					if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("ERROR: Link (\'",14,633123879);
						tr3 = c_outi(loc3);
						tr2 = F741_5940(RTCV(tr2), tr3);
						tr3 = RTMS_EX_H("\',\'",3,2567207);
						tr2 = F741_5940(RTCV(tr2), tr3);
						tr3 = c_outi(loc4);
						tr2 = F741_5940(RTCV(tr2), tr3);
						tr3 = RTMS_EX_H("\') already exists into the db.",30,2110033710);
						tr2 = F741_5940(RTCV(tr2), tr3);
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
						F48_683(RTCV(tr1), loc3, loc4);
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("SUCCESS: The link was added successfully.",41,1671636526);
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
	tr1 = F860_7479(RTCV(loc5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.remove_link */
void F501_3444 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	
	RTLI(12);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,arg1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,tr2);
	RTLR(8,loc8);
	RTLR(9,Current);
	RTLR(10,tr3);
	RTLR(11,arg2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	ti4_1 = ((EIF_INTEGER_32) 0);
	loc2 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = ((EIF_INTEGER_32) 0);
	loc3 = (EIF_INTEGER_32) ti4_1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
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
		tr2 = RTMS_EX_H("work_item1",10,1838363185);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc6), tr1);
		loc7 = tr1;
		loc7 = RTRV(eif_non_attached_type(826),loc7);
		if (EIF_TEST(loc7)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc7));
			loc2 = F733_5619(RTCV(tr1));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("work_item2",10,1838363186);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc6), tr1);
		loc8 = tr1;
		loc8 = RTRV(eif_non_attached_type(826),loc8);
		if (EIF_TEST(loc8)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc8));
			loc3 = F733_5619(RTCV(tr1));
		}
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	tb2 = F48_689(RTCV(tr1), loc2);
	if ((EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb2 = F48_689(RTCV(tr1), loc3);
		tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1);
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: The work_item1 \'",23,743448871);
		tr3 = c_outi(loc2);
		tr2 = F741_5940(RTCV(tr2), tr3);
		tr3 = RTMS_EX_H("\'  doesn\'t exist into the db.",29,1456714542);
		tr2 = F741_5940(RTCV(tr2), tr3);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc4), tr1, tr2);
		tr1 = F860_7479(RTCV(loc4));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		tb2 = F48_689(RTCV(tr1), loc2);
		if ((EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb2 = F48_689(RTCV(tr1), loc3);
			tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0);
		}
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("ERROR: The work_item2 \'",23,743514407);
			tr3 = c_outi(loc3);
			tr2 = F741_5940(RTCV(tr2), tr3);
			tr3 = RTMS_EX_H("\'  doesn\'t exist into the db.",29,1456714542);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc4), tr1, tr2);
			tr1 = F860_7479(RTCV(loc4));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current);
			tb2 = F48_689(RTCV(tr1), loc2);
			if ((EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tb2 = F48_689(RTCV(tr1), loc3);
				tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 0);
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("ERROR: Both work_items \'",24,1333003047);
				tr3 = c_outi(loc2);
				tr2 = F741_5940(RTCV(tr2), tr3);
				tr3 = RTMS_EX_H("\' and \'",7,70259751);
				tr2 = F741_5940(RTCV(tr2), tr3);
				tr3 = c_outi(loc3);
				tr2 = F741_5940(RTCV(tr2), tr3);
				tr3 = RTMS_EX_H("\' don\'t exist.",14,1013659950);
				tr2 = F741_5940(RTCV(tr2), tr3);
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
				tb1 = F48_684(RTCV(tr1), loc2, loc3);
				if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("ERROR: The link between \'",25,466094375);
					tr3 = c_outi(loc2);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = RTMS_EX_H("\' and \'",7,70259751);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = c_outi(loc3);
					tr2 = F741_5940(RTCV(tr2), tr3);
					tr3 = RTMS_EX_H("\' don\'t exist into the db.",26,1598726958);
					tr2 = F741_5940(RTCV(tr2), tr3);
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
					F48_686(RTCV(tr1), loc2, loc3);
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("SUCCESS: The link was deleted successfully.",43,436500014);
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
	tr1 = F860_7479(RTCV(loc4));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {WORK_ITEM_CTRL}.get_all_work_item_links */
void F501_3445 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	
	RTLI(12);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,arg1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,tr2);
	RTLR(8,Current);
	RTLR(9,tr3);
	RTLR(10,arg2);
	RTLR(11,loc4);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	ti4_1 = ((EIF_INTEGER_32) 0);
	loc2 = (EIF_INTEGER_32) ti4_1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
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
		tr2 = RTMS_EX_H("work_item_id",12,1060545380);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc6), tr1);
		loc7 = tr1;
		loc7 = RTRV(eif_non_attached_type(826),loc7);
		if (EIF_TEST(loc7)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc7));
			loc2 = F733_5619(RTCV(tr1));
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F48_689(RTCV(tr1), loc2);
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("ERROR: The work_item \'",22,2007773479);
		tr3 = c_outi(loc2);
		tr2 = F741_5940(RTCV(tr2), tr3);
		tr3 = RTMS_EX_H("\'  doesn\'t exist into the db.",29,1456714542);
		tr2 = F741_5940(RTCV(tr2), tr3);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc3), tr1, tr2);
		tr1 = F860_7479(RTCV(loc3));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc4 = F48_687(RTCV(tr1), loc2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("links",5,1769673587);
		F827_6557(RTCV(tr1), tr2);
		F860_7461(RTCV(loc3), loc4, tr1);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("SUCCESS: The links regading the work_item \'",43,520962343);
		tr3 = c_outi(loc2);
		tr2 = F741_5940(RTCV(tr2), tr3);
		tr3 = RTMS_EX_H("\' are listed.",13,1968180014);
		tr2 = F741_5940(RTCV(tr2), tr3);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("success",7,1797825139);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc3), tr1, tr2);
		tr1 = F860_7479(RTCV(loc3));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3419(Current, arg2, ti4_1);
	}
	tr1 = F860_7479(RTCV(loc3));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

void EIF_Minit257 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
