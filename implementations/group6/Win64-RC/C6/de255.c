/*
 * Code for class DEMO_SESSION_CTRL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "de255.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DEMO_SESSION_CTRL}.make */
void F499_3421 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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

/* {DEMO_SESSION_CTRL}.my_db */
EIF_REFERENCE F499_3422 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DEMO_SESSION_CTRL}.session_manager */
EIF_REFERENCE F499_3423 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DEMO_SESSION_CTRL}.login */
void F499_3424 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLR(3,loc4);
	RTLR(4,loc8);
	RTLR(5,loc9);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,loc10);
	RTLR(9,loc3);
	RTLR(10,loc6);
	RTLR(11,Current);
	RTLR(12,loc7);
	RTLR(13,tr3);
	RTLR(14,arg2);
	RTLR(15,loc5);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc1);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc1);
	loc4 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc4));
	loc8 = tr1;
	loc8 = RTRV(eif_non_attached_type(859),loc8);
	if (EIF_TEST(loc8)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc4)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("email",5,1835876204);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc8), tr1);
		loc9 = tr1;
		loc9 = RTRV(eif_non_attached_type(826),loc9);
		if (EIF_TEST(loc9)) {
			loc2 = F827_6561(RTCV(loc9));
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("password",8,1686242660);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc8), tr1);
		loc10 = tr1;
		loc10 = RTRV(eif_non_attached_type(826),loc10);
		if (EIF_TEST(loc10)) {
			loc3 = F827_6561(RTCV(loc10));
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	loc6 = F48_666(RTCV(tr1), loc2, loc3);
	tb1 = eif_boolean_item(RTCV(loc6),1);
	if (tb1) {
		tr1 = RTLNS(427, 427, _OBJSIZ_5_2_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("_session_",9,478726495);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F428_2697(RTCV(tr1), tr2, tr3);
		loc7 = (EIF_REFERENCE) tr1;
		tr1 = eif_boxed_item(loc6,2);
		tr2 = RTMS_EX_H("email",5,1835876204);
		F90_1287(RTCV(loc7), tr1, tr2);
		tr1 = eif_boxed_item(loc6,3);
		tr2 = RTMS_EX_H("password",8,1686242660);
		F90_1287(RTCV(loc7), tr1, tr2);
		tr1 = eif_boxed_item(loc6,4);
		tr2 = RTMS_EX_H("name",4,1851878757);
		F90_1287(RTCV(loc7), tr1, tr2);
		tr1 = eif_boxed_item(loc6,5);
		tr2 = RTMS_EX_H("surname",7,1982226021);
		F90_1287(RTCV(loc7), tr1, tr2);
		tr1 = eif_boxed_item(loc6,6);
		tr2 = RTMS_EX_H("gender",6,2055355250);
		F90_1287(RTCV(loc7), tr1, tr2);
		tr1 = eif_boxed_item(loc6,7);
		tr2 = RTMS_EX_H("role",4,1919904869);
		F90_1287(RTCV(loc7), tr1, tr2);
		tr1 = eif_boxed_item(loc6,8);
		tr2 = RTMS_EX_H("changepwd",9,769372004);
		F90_1287(RTCV(loc7), tr1, tr2);
		F428_2708(RTCV(loc7));
		tr1 = RTMS_EX_H("/",1,47);
		F90_1293(RTCV(loc7), arg1, arg2, tr1);
		tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F860_7460(RTCV(tr1));
		loc5 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("User logged in.",15,1993021742);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("success",7,1797825139);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = eif_boxed_item(loc6,2);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("email",5,1835876204);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = eif_boxed_item(loc6,3);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("password",8,1686242660);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = eif_boxed_item(loc6,4);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("name",4,1851878757);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = eif_boxed_item(loc6,5);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("surname",7,1982226021);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = eif_boxed_item(loc6,6);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("gender",6,2055355250);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = eif_boxed_item(loc6,7);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("role",4,1919904869);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = eif_boxed_item(loc6,8);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("changepwd",9,769372004);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = F860_7479(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3419(Current, arg2, ti4_1);
	} else {
		tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F860_7460(RTCV(tr1));
		loc5 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Username or password incorrect",30,487032948);
		F827_6557(RTCV(tr1), tr2);
		tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr3 = RTMS_EX_H("error",5,1920877938);
		F827_6557(RTCV(tr2), tr3);
		F860_7461(RTCV(loc5), tr1, tr2);
		tr1 = F860_7479(RTCV(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	}
	tr1 = F860_7479(RTCV(loc5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {DEMO_SESSION_CTRL}.logout */
void F499_3425 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,loc1);
	RTLR(7,arg2);
	
	RTGC;
	tr1 = RTLNS(427, 427, _OBJSIZ_5_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("_session_",9,478726495);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F428_2696(RTCV(tr1), arg1, tr2, tr3);
	loc2 = (EIF_REFERENCE) tr1;
	F428_2707(RTCV(loc2));
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("User logged out",15,1993416820);
	F827_6557(RTCV(tr1), tr2);
	tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("success",7,1797825139);
	F827_6557(RTCV(tr2), tr3);
	F860_7461(RTCV(loc1), tr1, tr2);
	tr1 = F860_7479(RTCV(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	F498_3419(Current, arg2, ti4_1);
	tr1 = F860_7479(RTCV(loc1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {DEMO_SESSION_CTRL}.forgot_password */
void F499_3426 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(17);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,loc4);
	RTLR(5,loc10);
	RTLR(6,loc11);
	RTLR(7,tr2);
	RTLR(8,loc3);
	RTLR(9,tr3);
	RTLR(10,arg2);
	RTLR(11,Current);
	RTLR(12,loc5);
	RTLR(13,loc6);
	RTLR(14,loc9);
	RTLR(15,loc7);
	RTLR(16,loc8);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	F749_6172(RTCV(arg1), loc2);
	tr1 = RTLNS(87, 87, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F88_1243(RTCV(tr1), loc2);
	loc4 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tr1 = F88_1249(RTCV(loc4));
	loc10 = tr1;
	loc10 = RTRV(eif_non_attached_type(859),loc10);
	if (EIF_TEST(loc10)) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(loc4)+ _CHROFF_2_0_);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("email",5,1835876204);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc10), tr1);
		loc11 = tr1;
		loc11 = RTRV(eif_non_attached_type(826),loc11);
		if (EIF_TEST(loc11)) {
			loc3 = F827_6561(RTCV(loc11));
		}
	}
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
		F860_7461(RTCV(loc1), tr1, tr2);
		tr1 = F860_7479(RTCV(loc1));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F48_658(RTCV(tr1), loc3);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Email not present into the database.",36,1384334638);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("error",5,1920877938);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc1), tr1, tr2);
			tr1 = F860_7479(RTCV(loc1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tr1 = RTLNS(494, 494, _OBJSIZ_0_0_0_1_0_0_0_0_);
			loc5 = (EIF_REFERENCE) tr1;
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F733_5554(RTCV(tr1));
			loc6 = (EIF_REFERENCE) tr1;
			tr1 = RTMS_EX_H("python /Users/Anna/Desktop/Corsi/SE2/DOSE/dose2014/implementations/group6/src/temp_pass.py",90,1104193145);
			F495_3345(RTCV(loc5), tr1);
			tr1 = RTLNS(519, 519, _OBJSIZ_3_7_2_4_1_1_2_1_);
			tr2 = RTMS_EX_H("/Users/Anna/Desktop/Corsi/SE2/DOSE/dose2014/implementations/group6/src/generation_pass.txt",90,146386804);
			F518_3987(RTCV(tr1), tr2);
			loc9 = (EIF_REFERENCE) tr1;
			F518_4069(RTCV(loc9));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3333[Dtype(loc9)-512])(RTCV(loc9));
			for (;;) {
				tb1 = F518_4014(RTCV(loc9));
				if (tb1) break;
				tc1 = *(EIF_CHARACTER_8 *)(RTCV(loc9)+ _CHROFF_3_0_);
				tc1 = (EIF_CHARACTER_8) tc1;
				F741_5952(RTCV(loc6), tc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R3333[Dtype(loc9)-512])(RTCV(loc9));
			}
			F518_4068(RTCV(loc9));
			tr1 = RTMS_EX_H("python /Users/Anna/Desktop/Corsi/SE2/DOSE/dose2014/implementations/group6/src/delete_file_content.py",100,1569540729);
			F495_3345(RTCV(loc5), tr1);
			loc7 = RTMS_EX_H("python ",7,380410656);
			tr1 = *(EIF_REFERENCE *)(Current);
			loc8 = F48_696(RTCV(tr1), ((EIF_INTEGER_32) 2L));
			F741_5941(RTCV(loc7), loc8);
			tr1 = RTMS_EX_H(" ",1,32);
			F741_5938(RTCV(loc7), tr1);
			F741_5941(RTCV(loc7), loc3);
			tr1 = RTMS_EX_H(" ",1,32);
			F741_5938(RTCV(loc7), tr1);
			F741_5941(RTCV(loc7), loc6);
			F495_3345(RTCV(loc5), loc7);
			tr1 = *(EIF_REFERENCE *)(Current);
			F48_664(RTCV(tr1), loc3, loc6);
			tr1 = *(EIF_REFERENCE *)(Current);
			F48_662(RTCV(tr1), loc3, (EIF_BOOLEAN) 1);
			tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Sent an email to ",17,1473077792);
			tr2 = F741_5940(RTCV(tr2), loc3);
			tr3 = RTMS_EX_H(" with a random password.",24,1062948142);
			tr2 = F741_5940(RTCV(tr2), tr3);
			F827_6557(RTCV(tr1), tr2);
			tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("success",7,1797825139);
			F827_6557(RTCV(tr2), tr3);
			F860_7461(RTCV(loc1), tr1, tr2);
			tr1 = F860_7479(RTCV(loc1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3419(Current, arg2, ti4_1);
		}
	}
	tr1 = F860_7479(RTCV(loc1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

void EIF_Minit255 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
