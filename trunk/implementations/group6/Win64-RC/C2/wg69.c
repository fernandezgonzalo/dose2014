/*
 * Code for class WGI_NINO_CONNECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg69.h"
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

/* {WGI_NINO_CONNECTOR}.make */
void F81_1089 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tr1 = RTLNS(5, 5, _OBJSIZ_2_2_0_4_0_0_0_0_);
	F6_70(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(4));
	F5_64(RTCV(tr1), loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
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
	{
		static EIF_TYPE_INDEX typarr0[] = {679,0xFFF9,1,684,79,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F680_5105(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WGI_NINO_CONNECTOR}.service */
EIF_REFERENCE F81_1093 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_NINO_CONNECTOR}.server */
EIF_REFERENCE F81_1094 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_NINO_CONNECTOR}.configuration */
EIF_REFERENCE F81_1095 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WGI_NINO_CONNECTOR}.base */
EIF_REFERENCE F81_1096 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WGI_NINO_CONNECTOR}.on_launched_actions */
EIF_REFERENCE F81_1099 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WGI_NINO_CONNECTOR}.on_stopped_actions */
EIF_REFERENCE F81_1100 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WGI_NINO_CONNECTOR}.on_launched */
void F81_1101 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_0_) = (EIF_INTEGER_32) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	F680_5108(RTCV(tr1), tr2);
	RTLE;
}

/* {WGI_NINO_CONNECTOR}.on_stopped */
void F81_1102 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	F680_5108(RTCV(tr1), tr2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {WGI_NINO_CONNECTOR}.set_base */
void F81_1103 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {WGI_NINO_CONNECTOR}.launch */
void F81_1104 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,tr3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNS(866, 866, _OBJSIZ_9_3_0_1_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F867_7630(RTCV(tr1), tr2, Current);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCV(F81_1095(Current))+ _CHROFF_2_1_);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tr1 = RTOSCF(554,F45_554,(RTCV(RTOSCF(24,F1_24,(Current)))));
			tr2 = RTMS_EX_H("Base=",5,1635459389);
			tr2 = F741_5940(RTCV(tr2), loc2);
			tr3 = RTMS_EX_H("\012",1,10);
			tr2 = F741_5940(RTCV(tr2), tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3307[Dtype(tr1)-517])(RTCV(tr1), tr2);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F5_65(RTCV(tr1), loc1);
	RTLE;
}

/* {WGI_NINO_CONNECTOR}.process_request */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F81_1105 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr4 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTXD;
	
	RTXI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,arg3);
	RTLR(5,Current);
	RTLR(6,loc2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,arg2);
	RTLR(10,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc3) {
		tr1 = RTLNS(82, 82, _OBJSIZ_16_1_0_1_0_0_0_0_);
		tr2 = RTLNS(434, 434, _OBJSIZ_2_1_0_1_0_0_0_0_);
		F435_2797(RTCV(tr2), arg3);
		F83_1152(RTCV(tr1), arg1, tr2, Current);
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(139, 139, _OBJSIZ_4_3_0_1_0_0_0_0_);
		tr2 = RTLNS(160, 160, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F161_2023(RTCV(tr2), arg3);
		tr3 = RTLNS(54, 54, _OBJSIZ_2_0_0_0_0_0_0_0_);
		ti4_1 = F515_3906(RTCV(arg3));
		tr4 = c_outi(ti4_1);
		F55_836(RTCV(tr3), tr4);
		F139_1723(RTCV(tr1), tr2, tr3);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("RAW_HEADER_DATA",15,198827841);
		F83_1162(RTCV(loc1), tr1, arg2);
		tr1 = *(EIF_REFERENCE *)(Current);
		F67_921(RTCV(tr1), loc1, loc2);
		F138_1705(RTCV(loc2));
	}
	RTE_E
	RTXS(11);
	if ((EIF_BOOLEAN) !loc3) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit69 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
