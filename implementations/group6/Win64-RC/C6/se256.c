/*
 * Code for class SEARCH_CTRL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se256.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SEARCH_CTRL}.make */
void F500_3427 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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

/* {SEARCH_CTRL}.my_db */
EIF_REFERENCE F500_3428 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SEARCH_CTRL}.session_manager */
EIF_REFERENCE F500_3429 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SEARCH_CTRL}.search_users */
void F500_3430 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLR(3,loc6);
	RTLR(4,loc7);
	RTLR(5,Current);
	RTLR(6,arg1);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,tr2);
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
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,684,693,858,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	loc7 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc3 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc3 = F579_4639(RTCV(loc3), tr1);
		loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc3)-0])(RTCV(loc3));
	}
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
		tr2 = RTMS_EX_H("keyword",7,223684196);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc8), tr1);
		loc9 = tr1;
		loc9 = RTRV(eif_non_attached_type(826),loc9);
		if (EIF_TEST(loc9)) {
			loc2 = F827_6561(RTCV(loc9));
		}
	}
	tb1 = '\01';
	if (!((EIF_BOOLEAN)(loc3 == NULL))) {
		tb2 = F286_2518(RTCV(loc3));
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
		F859_7453(RTCV(loc6), loc5);
		tr1 = F859_7446(RTCV(loc6));
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
			F860_7461(RTCV(loc5), tr1, tr2);
			F859_7453(RTCV(loc6), loc5);
			tr1 = F859_7446(RTCV(loc6));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tb1 = '\01';
			if (!((EIF_BOOLEAN)(loc2 == NULL))) {
				tb2 = F286_2518(RTCV(loc2));
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Keyword ot valid.",17,917841966);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				F859_7453(RTCV(loc6), loc5);
				tr1 = F859_7446(RTCV(loc6));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				loc7 = F48_694(RTCV(tr1), loc2);
				tb1 = eif_boolean_item(RTCV(loc7),1);
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("Users has been found.",21,1457674030);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("success",7,1797825139);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
					tr1 = eif_boxed_item(loc7,2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("matches",7,886408051);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
				} else {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("No user has been found.",23,423248942);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("success",7,1797825139);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
				}
				F859_7453(RTCV(loc6), loc5);
				tr1 = F859_7446(RTCV(loc6));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3419(Current, arg2, ti4_1);
			}
		}
	}
	tr1 = F859_7446(RTCV(loc6));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

/* {SEARCH_CTRL}.search_work_items */
void F500_3431 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLR(3,loc6);
	RTLR(4,arg1);
	RTLR(5,Current);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,loc8);
	RTLR(9,loc9);
	RTLR(10,tr2);
	RTLR(11,loc2);
	RTLR(12,tr3);
	RTLR(13,arg2);
	RTLR(14,loc7);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("_session_",9,478726495);
	if (F438_2850(Current, arg1, tr1)) {
		tr1 = RTMS_EX_H("_session_",9,478726495);
		loc3 = F438_2851(Current, arg1, tr1);
		tr1 = RTMS_EX_H("email",5,1835876204);
		loc3 = F579_4639(RTCV(loc3), tr1);
		loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc3)-0])(RTCV(loc3));
	}
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
		tr2 = RTMS_EX_H("keyword",7,223684196);
		F827_6557(RTCV(tr1), tr2);
		tr1 = F860_7477(RTCV(loc8), tr1);
		loc9 = tr1;
		loc9 = RTRV(eif_non_attached_type(826),loc9);
		if (EIF_TEST(loc9)) {
			loc2 = F827_6561(RTCV(loc9));
		}
	}
	tb1 = '\01';
	if (!((EIF_BOOLEAN)(loc3 == NULL))) {
		tb2 = F286_2518(RTCV(loc3));
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
		F859_7453(RTCV(loc6), loc5);
		tr1 = F859_7446(RTCV(loc6));
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
			F860_7461(RTCV(loc5), tr1, tr2);
			F859_7453(RTCV(loc6), loc5);
			tr1 = F859_7446(RTCV(loc6));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
		} else {
			tb1 = '\01';
			if (!((EIF_BOOLEAN)(loc2 == NULL))) {
				tb2 = F286_2518(RTCV(loc2));
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Keyword not valid.",18,305805358);
				F827_6557(RTCV(tr1), tr2);
				tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr3 = RTMS_EX_H("error",5,1920877938);
				F827_6557(RTCV(tr2), tr3);
				F860_7461(RTCV(loc5), tr1, tr2);
				F859_7453(RTCV(loc6), loc5);
				tr1 = F859_7446(RTCV(loc6));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3420(Current, arg2, ((EIF_INTEGER_32) 401L), ti4_1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				loc7 = F48_695(RTCV(tr1), loc2);
				tb1 = eif_boolean_item(RTCV(loc7),1);
				if (tb1) {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("Work Items have been found.",27,1012610862);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("success",7,1797825139);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
					tr1 = eif_boxed_item(loc7,2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("matches",7,886408051);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
				} else {
					tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("No Work Item has been found.",28,1227805742);
					F827_6557(RTCV(tr1), tr2);
					tr2 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
					tr3 = RTMS_EX_H("success",7,1797825139);
					F827_6557(RTCV(tr2), tr3);
					F860_7461(RTCV(loc5), tr1, tr2);
				}
				F859_7453(RTCV(loc6), loc5);
				tr1 = F859_7446(RTCV(loc6));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				F498_3419(Current, arg2, ti4_1);
			}
		}
	}
	tr1 = F859_7446(RTCV(loc6));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	RTLE;
}

void EIF_Minit256 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
