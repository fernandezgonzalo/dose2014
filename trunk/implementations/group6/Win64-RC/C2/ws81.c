/*
 * Code for class WSF_FS_SESSION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws81.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_FS_SESSION_MANAGER}.make */
void F93_1299 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTMS_EX_H("_WSF_SESSIONS_",14,1696101983);
	F93_1300(Current, tr1);
	RTLE;
}

/* {WSF_FS_SESSION_MANAGER}.make_with_folder */
void F93_1300 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(746));
	F747_6066(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_FS_SESSION_MANAGER}.sessions_folder_name */
EIF_REFERENCE F93_1301 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_FS_SESSION_MANAGER}.session_exists */
EIF_BOOLEAN F93_1302 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	tr2 = F93_1309(Current, arg1);
	F518_3986(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	Result = '\0';
	tb1 = F518_4016(RTCV(loc1));
	if (tb1) {
		tb1 = F518_4019(RTCV(loc1));
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {WSF_FS_SESSION_MANAGER}.session_data */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F93_1303 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTXD;
	
	RTXI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLR(7,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	tr2 = F93_1309(Current, arg1);
	F518_3986(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tb2 = F518_4016(RTCV(loc1));
	if (tb2) {
		tb2 = F518_4019(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		F518_4051(RTCV(loc1));
		tr1 = F93_1306(Current, loc1);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			Result = (EIF_REFERENCE) loc2;
		}
		F518_4068(RTCV(loc1));
	}
	RTE_E
	RTXS(8);
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_FS_SESSION_MANAGER}.save_session */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F93_1304 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTXD;
	
	RTXI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc2) {
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_5_0_);
		if (tb1) {
			F93_1305(Current, arg1);
		} else {
			RTOSCP(1307,F93_1307,(Current));
			tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
			tr2 = F428_2701(RTCV(arg1));
			tr2 = F93_1309(Current, tr2);
			F518_3986(RTCV(tr1), tr2);
			loc1 = (EIF_REFERENCE) tr1;
			tb1 = '\01';
			tb2 = F518_4016(RTCV(loc1));
			if (!(EIF_BOOLEAN) !tb2) {
				tb2 = F518_4020(RTCV(loc1));
				tb1 = tb2;
			}
			if (tb1) {
				F518_4055(RTCV(loc1));
				tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
				F587_4770(RTCV(tr1), tr2);
				tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
				F518_4110(RTCV(loc1), tr1);
				F518_4068(RTCV(loc1));
			}
		}
	}
	RTE_E
	RTXS(6);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_FS_SESSION_MANAGER}.delete_session */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F93_1305 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTXD;
	
	RTXI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLR(5,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc2) {
		tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
		tr2 = F428_2701(RTCV(arg1));
		tr2 = F93_1309(Current, tr2);
		F518_3986(RTCV(tr1), tr2);
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = F518_4016(RTCV(loc1));
		if (tb1) {
			F518_4113(RTCV(loc1));
		}
	}
	RTE_E
	RTXS(6);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_FS_SESSION_MANAGER}.data_from_file */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F93_1306 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTXD;
	
	RTXI(5);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc1) {
		tr1 = F518_4010(RTCV(arg1));
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_non_attached_type(586),loc2);
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		Result = (EIF_REFERENCE) loc2;
	}
	RTE_E
	RTXS(5);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_FS_SESSION_MANAGER}.ensure_session_folder_exists */
static void F93_1307_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTEV;
	RTGC;
	RTOSP (1307);
	tr1 = RTLNS(507, 507, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F508_3606(RTCV(tr1), *(EIF_REFERENCE *)(Current));
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F508_3628(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		F508_3609(RTCV(loc1));
	}
	RTOSE (1307);
	RTLE;
	RTEE;
#undef Result
}

void F93_1307 (EIF_REFERENCE Current)
{
	GTCX
	RTOSCP(1307,F93_1307_body,(Current));
}

/* {WSF_FS_SESSION_MANAGER}.file_name */
EIF_REFERENCE F93_1309 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current);
	Result = F747_6093(RTCV(Result), arg1);
	tr1 = RTMS_EX_H("session",7,2035187310);
	Result = F747_6096(RTCV(Result), tr1);
	RTLE;
	return Result;
}

void EIF_Minit81 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
