/*
 * Code for class WSF_NINO_SERVICE_LAUNCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws57.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_NINO_SERVICE_LAUNCHER}.initialize */
void F69_932 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc8);
	RTLR(8,loc10);
	RTLR(9,loc1);
	RTLR(10,tr3);
	RTLR(11,tr4);
	RTLR(12,tr5);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {679,0xFFF9,1,684,79,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F680_5105(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {679,0xFFF9,1,684,79,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F680_5105(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = RTMS_EX_H("server_name",11,666602853);
		tr1 = F566_4625(RTCV(loc2), tr1);
		loc3 = RTCCL(tr1);
		loc3 = RTRV(eif_non_attached_type(732),loc3);
		if (EIF_TEST(loc3)) {
			tr1 = F733_5607(RTCV(loc3));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
		}
		tr2 = RTMS_EX_H("port",4,1886351988);
		tr2 = F566_4625(RTCV(loc2), tr2);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 833, tr1, loc4, tb1);
		if (tb1) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_2_0_0_) = (EIF_INTEGER_32) loc4;
		} else {
			tb1 = '\0';
			tr1 = RTMS_EX_H("port",4,1886351988);
			tr1 = F566_4625(RTCV(loc2), tr1);
			loc5 = RTCCL(tr1);
			loc5 = RTRV(eif_non_attached_type(732),loc5);
			if (EIF_TEST(loc5)) {
				tb2 = F733_5585(RTCV(loc5));
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = F733_5610(RTCV(loc5));
				ti4_1 = F733_5619(RTCV(tr1));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_2_0_0_) = (EIF_INTEGER_32) ti4_1;
			}
		}
		tr1 = RTMS_EX_H("base",4,1650553701);
		tr1 = F566_4625(RTCV(loc2), tr1);
		loc6 = RTCCL(tr1);
		loc6 = RTRV(eif_non_attached_type(732),loc6);
		if (EIF_TEST(loc6)) {
			tr1 = F733_5610(RTCV(loc6));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		}
		tr2 = RTMS_EX_H("force_single_threaded",21,1502362724);
		tr2 = F566_4625(RTCV(loc2), tr2);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_BOOLEAN *), 693, tr1, loc7, tb1);
		if (tb1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_) = (EIF_BOOLEAN) loc7;
		} else {
			tr1 = RTMS_EX_H("force_single_threaded",21,1502362724);
			tr1 = F566_4625(RTCV(loc2), tr1);
			loc8 = RTCCL(tr1);
			loc8 = RTRV(eif_non_attached_type(732),loc8);
			if (EIF_TEST(loc8)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4638[Dtype(loc8)-735])(RTCV(loc8));
				tr2 = RTMS_EX_H("true",4,1953658213);
				tb1 = F733_5599(RTCV(tr1), tr2);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_) = (EIF_BOOLEAN) tb1;
			}
		}
		tr2 = RTMS_EX_H("verbose",7,1112830821);
		tr2 = F566_4625(RTCV(loc2), tr2);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_BOOLEAN *), 693, tr1, loc9, tb1);
		if (tb1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_) = (EIF_BOOLEAN) loc9;
		} else {
			tr1 = RTMS_EX_H("verbose",7,1112830821);
			tr1 = F566_4625(RTCV(loc2), tr1);
			loc10 = RTCCL(tr1);
			loc10 = RTRV(eif_non_attached_type(732),loc10);
			if (EIF_TEST(loc10)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4638[Dtype(loc10)-735])(RTCV(loc10));
				tr2 = RTMS_EX_H("true",4,1953658213);
				tb1 = F733_5599(RTCV(tr1), tr2);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_) = (EIF_BOOLEAN) tb1;
			}
		}
	}
	tr1 = RTLNSMART(eif_non_attached_type(80));
	F81_1089(RTCV(tr1), Current);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,0,0xFFF9,1,684,79,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A57_45_2, (EIF_POINTER) _A57_45_2, (EIF_POINTER)(F69_936),tr2, 1, 1);
	}
	F679_5088(RTCV(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_4_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,0,0xFFF9,1,684,79,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A57_46_2, (EIF_POINTER) _A57_46_2, (EIF_POINTER)(F69_937),tr2, 1, 1);
	}
	F679_5088(RTCV(tr1), tr5);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	F81_1103(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_5_));
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_)) {
		tr1 = F81_1095(RTCV(loc1));
		F6_86(RTCV(tr1), (EIF_BOOLEAN) 1);
	}
	tr1 = F81_1095(RTCV(loc1));
	F6_87(RTCV(tr1), *(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_));
	RTLE;
}

/* {WSF_NINO_SERVICE_LAUNCHER}.launch */
void F69_933 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F81_1103(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_5_));
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_)) {
			tr1 = F81_1095(RTCV(loc1));
			F6_86(RTCV(tr1), (EIF_BOOLEAN) 1);
		}
		tr1 = F81_1095(RTCV(loc1));
		F6_87(RTCV(tr1), *(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tr1 = F81_1095(RTCV(loc1));
			tr2 = F733_5610(RTCV(loc3));
			F6_80(RTCV(tr1), tr2);
		}
		tr1 = F81_1095(RTCV(loc1));
		F6_81(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_2_0_0_));
		F81_1104(RTCV(loc1));
	}
	RTLE;
}

/* {WSF_NINO_SERVICE_LAUNCHER}.on_launched_actions */
EIF_REFERENCE F69_934 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_NINO_SERVICE_LAUNCHER}.on_stopped_actions */
EIF_REFERENCE F69_935 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_NINO_SERVICE_LAUNCHER}.on_launched */
void F69_936 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,79,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	F680_5108(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_NINO_SERVICE_LAUNCHER}.on_stopped */
void F69_937 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,79,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	F680_5108(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_NINO_SERVICE_LAUNCHER}.server_name */
EIF_REFERENCE F69_939 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_NINO_SERVICE_LAUNCHER}.base_url */
EIF_REFERENCE F69_940 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WSF_NINO_SERVICE_LAUNCHER}.connector */
EIF_REFERENCE F69_943 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


void EIF_Minit57 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
