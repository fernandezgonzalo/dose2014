/*
 * Code for class USER_CTRL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "us258.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {USER_CTRL}.make */
void F502_3446 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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

/* {USER_CTRL}.my_db */
EIF_REFERENCE F502_3447 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {USER_CTRL}.session_manager */
EIF_REFERENCE F502_3448 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {USER_CTRL}.get_users */
void F502_3449 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	loc1 = F48_657(RTCV(loc1));
	loc1 = F859_7446(RTCV(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	F498_3419(Current, arg2, ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), loc1);
	RTLE;
}

/* {USER_CTRL}.create_user */
void F502_3450 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(26);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,arg1);
	RTLR(9,loc9);
	RTLR(10,loc14);
	RTLR(11,loc15);
	RTLR(12,tr2);
	RTLR(13,loc16);
	RTLR(14,loc17);
	RTLR(15,loc18);
	RTLR(16,loc19);
	RTLR(17,loc20);
	RTLR(18,loc21);
	RTLR(19,loc10);
	RTLR(20,tr3);
	RTLR(21,arg2);
	RTLR(22,Current);
	RTLR(23,loc11);
	RTLR(24,loc12);
	RTLR(25,loc13);
	
	RTGC;
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
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc7 = (EIF_REFERENCE) tr1;
	tb1 = ((EIF_BOOLEAN) 0);
	loc8 = (EIF_BOOLEAN) tb1;
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc9 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc9));
	loc14 = tr1;
	loc14 = RTRV(eif_non_attached_type(859),loc14);
	if (EIF_TEST(loc14)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc9)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("name",4,1851878757);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc15 = tr1;
		loc15 = RTRV(eif_non_attached_type(826),loc15);
		if (EIF_TEST(loc15)) {
			loc2 = F827_6561(RTCV(loc15));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("surname",7,1982226021);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc16 = tr1;
		loc16 = RTRV(eif_non_attached_type(826),loc16);
		if (EIF_TEST(loc16)) {
			loc3 = F827_6561(RTCV(loc16));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("email",5,1835876204);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc17 = tr1;
		loc17 = RTRV(eif_non_attached_type(826),loc17);
		if (EIF_TEST(loc17)) {
			loc4 = F827_6561(RTCV(loc17));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("password",8,1686242660);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc18 = tr1;
		loc18 = RTRV(eif_non_attached_type(826),loc18);
		if (EIF_TEST(loc18)) {
			loc5 = F827_6561(RTCV(loc18));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("role",4,1919904869);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc19 = tr1;
		loc19 = RTRV(eif_non_attached_type(826),loc19);
		if (EIF_TEST(loc19)) {
			loc6 = F827_6561(RTCV(loc19));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("photo",5,1752994927);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc20 = tr1;
		loc20 = RTRV(eif_non_attached_type(826),loc20);
		if (EIF_TEST(loc20)) {
			loc7 = F827_6561(RTCV(loc20));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("gender",6,2055355250);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc14), tr1);
		loc21 = tr1;
		loc21 = RTRV(eif_non_attached_type(826),loc21);
		if (EIF_TEST(loc21)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc21));
			tr2 = RTMS_EX_H("true",4,1953658213);
			tb1 = F737_5745(RTCV(tr1), tr2);
			if (tb1) {
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc10 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN)(loc4 == NULL)) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Email not valid",15,14250340);
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
		tb1 = F48_658(RTCV(tr1), loc4);
		if (tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Mail already present into the database.",39,278633006);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc10), tr1, tr2);
			tr1 = F860_7479(RTCV(loc10));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tb1 = '\01';
			tb2 = '\01';
			tb3 = '\01';
			if (!((EIF_BOOLEAN)(loc2 == NULL))) {
				tb4 = F286_2518(RTCV(loc2));
				tb3 = tb4;
			}
			if (!tb3) {
				tb2 = (EIF_BOOLEAN)(loc3 == NULL);
			}
			if (!tb2) {
				tb2 = F286_2518(RTCV(loc3));
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Name or surname not valid.",26,1977682734);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc10), tr1, tr2);
				tr1 = F860_7479(RTCV(loc10));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tb1 = '\01';
				if (!((EIF_BOOLEAN)(loc5 == NULL))) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_1_1_0_2_);
					tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 8L));
				}
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("Password not valid.",19,1639460654);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("error",5,1920877938);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc10), tr1, tr2);
					tr1 = F860_7479(RTCV(loc10));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc6 == NULL) || (EIF_BOOLEAN)(loc7 == NULL))) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Role or photo not valid.",24,172408622);
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
						F48_659(RTCV(tr1), loc4, loc5, loc2, loc3, loc6, loc7, loc8);
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Added new user ",15,1277555232);
						tr2 = F741_5940(RTCV(tr2), loc4);
						tr3 = RTMS_EX_H(" to the database.",17,103017262);
						tr2 = F741_5940(RTCV(tr2), tr3);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("success",7,1797825139);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc10), tr1, tr2);
						tr1 = F860_7479(RTCV(loc10));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3419(Current, arg2, ti4_1);
						tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
						loc11 = (EIF_REFERENCE) tr1;
						tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
						F733_5554(RTCV(tr1));
						loc12 = (EIF_REFERENCE) tr1;
						tr1 = *(EIF_REFERENCE *)(Current);
						loc13 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 11L));
						loc12 = RTMS_EX_H("python ",7,380410656);
						F741_5941(RTCV(loc12), loc13);
						F741_5938(RTCV(loc12), loc4);
						tr1 = RTMS_EX_H("",0,0);
						F741_5938(RTCV(loc12), tr1);
						F495_3345(RTCV(loc11), loc12);
					}
				}
			}
		}
	}
	tr1 = F860_7479(RTCV(loc10));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {USER_CTRL}.delete_user */
void F502_3451 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,arg2);
	
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
	tb1 = '\01';
	if (!((EIF_BOOLEAN)(loc1 == NULL))) {
		tb2 = F286_2518(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("User not logged in.",19,1278195502);
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
		tb1 = F48_658(RTCV(tr1), loc1);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Email not present into the database.",36,1384334638);
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
			F48_660(RTCV(tr1), loc1);
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Removed user ",13,1222117408);
			tr2 = F741_5940(RTCV(tr2), loc1);
			tr3 = RTMS_EX_H(" from the database.",19,713063470);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("success",7,1797825139);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc2), tr1, tr2);
			tr1 = F860_7479(RTCV(loc2));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3419(Current, arg2, ti4_1);
		}
	}
	tr1 = F860_7479(RTCV(loc2));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {USER_CTRL}.send_invitation */
void F502_3452 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc4);
	RTLR(6,loc9);
	RTLR(7,loc10);
	RTLR(8,tr2);
	RTLR(9,loc3);
	RTLR(10,loc5);
	RTLR(11,tr3);
	RTLR(12,arg2);
	RTLR(13,loc6);
	RTLR(14,loc7);
	RTLR(15,loc8);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc2 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc2 = F579_4639(RTCV(loc2), tr1);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc2)-0])(RTCV(loc2));
	}
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc4 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc4));
	loc9 = tr1;
	loc9 = RTRV(eif_non_attached_type(859),loc9);
	if (EIF_TEST(loc9)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc4)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("email",5,1835876204);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc9), tr1);
		loc10 = tr1;
		loc10 = RTRV(eif_non_attached_type(826),loc10);
		if (EIF_TEST(loc10)) {
			loc3 = F827_6561(RTCV(loc10));
		}
	}
	tb1 = '\01';
	if (!((EIF_BOOLEAN)(loc2 == NULL))) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("User not logged in.",19,1278195502);
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
		tb1 = F48_658(RTCV(tr1), loc2);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("User not present into the database.",35,1821488686);
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
			if (!((EIF_BOOLEAN)(loc3 == NULL))) {
				tb2 = F286_2518(RTCV(loc3));
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Email not valid.",16,1500607278);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				tr1 = F860_7479(RTCV(loc5));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
				loc6 = (EIF_REFERENCE) tr1;
				tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
				F733_5554(RTCV(tr1));
				loc7 = (EIF_REFERENCE) tr1;
				tr1 = *(EIF_REFERENCE *)(Current);
				loc8 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 4L));
				loc7 = RTMS_EX_H("python ",7,380410656);
				F741_5941(RTCV(loc7), loc8);
				F741_5938(RTCV(loc7), loc2);
				tr1 = RTMS_EX_H(" ",1,32);
				F741_5938(RTCV(loc7), tr1);
				F741_5938(RTCV(loc7), loc3);
				tr1 = RTMS_EX_H("",0,0);
				F741_5938(RTCV(loc7), tr1);
				F495_3345(RTCV(loc6), loc7);
				tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
				F860_7460(RTCV(tr1));
				loc5 = (EIF_REFERENCE) tr1;
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Invitation successfully sent.",29,294229294);
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
	tr1 = F860_7479(RTCV(loc5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {USER_CTRL}.change_password */
void F502_3453 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,arg1);
	RTLR(5,loc4);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,tr2);
	RTLR(9,loc8);
	RTLR(10,loc5);
	RTLR(11,tr3);
	RTLR(12,arg2);
	RTLR(13,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc4 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc4));
	loc6 = tr1;
	loc6 = RTRV(eif_non_attached_type(859),loc6);
	if (EIF_TEST(loc6)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc4)+ _CHROFF_2_0_);
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
			loc2 = F827_6561(RTCV(loc7));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("new_password",12,165735012);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc6), tr1);
		loc8 = tr1;
		loc8 = RTRV(eif_non_attached_type(826),loc8);
		if (EIF_TEST(loc8)) {
			loc3 = F827_6561(RTCV(loc8));
		}
	}
	tb1 = '\01';
	if (!((EIF_BOOLEAN)(loc2 == NULL))) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Email not valid.",16,1500607278);
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
		tb1 = F48_658(RTCV(tr1), loc2);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Email not present into the database.",36,1384334638);
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
			if (!((EIF_BOOLEAN)(loc3 == NULL))) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
				tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 8L));
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("New password not valid.",23,1093005870);
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
				F48_664(RTCV(tr1), loc2, loc3);
				tr1 = *(EIF_REFERENCE *)(Current);
				F48_662(RTCV(tr1), loc2, (EIF_BOOLEAN) 0);
				tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
				F860_7460(RTCV(tr1));
				loc5 = (EIF_REFERENCE) tr1;
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Password successfully changed.",30,487036462);
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
	tr1 = F860_7479(RTCV(loc5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {USER_CTRL}.update_user */
void F502_3454 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(19);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc8);
	RTLR(3,arg1);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLR(6,loc7);
	RTLR(7,loc9);
	RTLR(8,loc10);
	RTLR(9,tr2);
	RTLR(10,loc3);
	RTLR(11,loc11);
	RTLR(12,loc4);
	RTLR(13,loc12);
	RTLR(14,loc5);
	RTLR(15,loc13);
	RTLR(16,loc6);
	RTLR(17,tr3);
	RTLR(18,arg2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc8 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc2 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc2 = F579_4639(RTCV(loc2), tr1);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc2)-0])(RTCV(loc2));
	}
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc7 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc7));
	loc9 = tr1;
	loc9 = RTRV(eif_non_attached_type(859),loc9);
	if (EIF_TEST(loc9)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("name",4,1851878757);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc9), tr1);
		loc10 = tr1;
		loc10 = RTRV(eif_non_attached_type(826),loc10);
		if (EIF_TEST(loc10)) {
			loc3 = F827_6561(RTCV(loc10));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("surname",7,1982226021);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc9), tr1);
		loc11 = tr1;
		loc11 = RTRV(eif_non_attached_type(826),loc11);
		if (EIF_TEST(loc11)) {
			loc4 = F827_6561(RTCV(loc11));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("role",4,1919904869);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc9), tr1);
		loc12 = tr1;
		loc12 = RTRV(eif_non_attached_type(826),loc12);
		if (EIF_TEST(loc12)) {
			loc5 = F827_6561(RTCV(loc12));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("photo",5,1752994927);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc9), tr1);
		loc13 = tr1;
		loc13 = RTRV(eif_non_attached_type(826),loc13);
		if (EIF_TEST(loc13)) {
			loc6 = F827_6561(RTCV(loc13));
		}
	}
	tb1 = '\01';
	if (!((EIF_BOOLEAN)(loc2 == NULL))) {
		tb2 = F286_2518(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("User not logged in.",19,1278195502);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc8), tr1, tr2);
		tr1 = F860_7479(RTCV(loc8));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F48_658(RTCV(tr1), loc2);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Email not present into the database.",36,1384334638);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc8), tr1, tr2);
			tr1 = F860_7479(RTCV(loc8));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tb1 = '\01';
			tb2 = '\01';
			tb3 = '\01';
			if (!((EIF_BOOLEAN)(loc3 == NULL))) {
				tb4 = F286_2518(RTCV(loc3));
				tb3 = tb4;
			}
			if (!tb3) {
				tb2 = (EIF_BOOLEAN)(loc4 == NULL);
			}
			if (!tb2) {
				tb2 = F286_2518(RTCV(loc4));
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Name or surname not valid.",26,1977682734);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc8), tr1, tr2);
				tr1 = F860_7479(RTCV(loc8));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				if ((EIF_BOOLEAN)(loc5 == NULL)) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("Role not valid.",15,579836718);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("error",5,1920877938);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc8), tr1, tr2);
					tr1 = F860_7479(RTCV(loc8));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
				} else {
					if ((EIF_BOOLEAN)(loc6 == NULL)) {
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Photo not valid.",16,1593962798);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("error",5,1920877938);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc8), tr1, tr2);
						tr1 = F860_7479(RTCV(loc8));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
					} else {
						tr1 = *(EIF_REFERENCE *)(Current);
						F48_661(RTCV(tr1), loc2, loc3, loc4, loc5, loc6);
						tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
						F860_7460(RTCV(tr1));
						loc8 = (EIF_REFERENCE) tr1;
						tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("User information for  ",22,766125856);
						tr2 = F741_5940(RTCV(tr2), loc2);
						tr3 = RTMS_EX_H(" has been updated.",18,1820452654);
						tr2 = F741_5940(RTCV(tr2), tr3);
						F827_6557(RTCV(tr1), tr2);
						tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
						tr3 = RTMS_EX_H("success",7,1797825139);
						F827_6557(RTCV(tr2), tr3);
						F860_7461(RTCV(loc8), tr1, tr2);
						tr1 = F860_7479(RTCV(loc8));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						F498_3419(Current, arg2, ti4_1);
					}
				}
			}
		}
	}
	tr1 = F860_7479(RTCV(loc8));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

void EIF_Minit258 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
