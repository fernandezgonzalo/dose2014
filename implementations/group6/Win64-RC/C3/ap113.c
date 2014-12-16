/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ap113.h"
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

/* {APPLICATION}.path_to_db_file */
static EIF_REFERENCE F135_1683_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOSP (1683);
#define Result RTOSR(1683)
	RTOC_NEW(Result);
	tr1 = RTMS_EX_H("..",2,11822);
	tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
	tr2 = c_outc(tc1);
	tr1 = F741_5940(RTCV(tr1), tr2);
	tr2 = RTMS_EX_H("db2.db",6,1039261794);
	Result = F741_5940(RTCV(tr1), tr2);
	RTOSE (1683);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F135_1683 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1683,F135_1683_body,(Current));
}

/* {APPLICATION}.path_to_www_folder */
static EIF_REFERENCE F135_1684_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOSP (1684);
#define Result RTOSR(1684)
	RTOC_NEW(Result);
	tr1 = RTMS_EX_H("..",2,11822);
	tc1 = RTOSCF(545,F44_545,(RTCV(RTOSCF(28,F1_28,(Current)))));
	tr2 = c_outc(tc1);
	tr1 = F741_5940(RTCV(tr1), tr2);
	tr2 = RTMS_EX_H("www",3,7829367);
	Result = F741_5940(RTCV(tr1), tr2);
	RTOSE (1684);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F135_1684 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1684,F135_1684_body,(Current));
}

/* {APPLICATION}.session_ctrl */
EIF_REFERENCE F135_1685 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {APPLICATION}.iteration_ctrl */
EIF_REFERENCE F135_1686 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {APPLICATION}.project_ctrl */
EIF_REFERENCE F135_1687 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {APPLICATION}.user_ctrl */
EIF_REFERENCE F135_1688 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {APPLICATION}.work_item_ctrl */
EIF_REFERENCE F135_1689 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {APPLICATION}.search_ctrl */
EIF_REFERENCE F135_1690 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {APPLICATION}.dao */
EIF_REFERENCE F135_1691 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {APPLICATION}.session_manager */
EIF_REFERENCE F135_1692 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {APPLICATION}.initialize */
void F135_1695 (EIF_REFERENCE Current)
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
	tr1 = RTLNSMART(eif_non_attached_type(47));
	tr2 = RTOSCF(1683,F135_1683,(Current));
	F48_635(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(92));
	F93_1299(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(498));
	F499_3421(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_8_), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(502));
	F503_3455(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_8_), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(501));
	F502_3446(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_8_), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(503));
	F504_3469(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_8_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(500));
	F501_3432(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_8_), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(499));
	F500_3427(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_8_), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("port",4,1886351988);
	tr2 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr2 = ((EIF_INTEGER_32) 9090L);
	F132_1681(Current, tr1, tr2);
	F107_1432(Current);
	RTLE;
}

/* {APPLICATION}.setup_router */
void F135_1696 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,loc1);
	
	RTGC;
	tr1 = RTMS_EX_H("/api/sessions",13,1188695667);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,498,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,498,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A255_37_2_3, (EIF_POINTER) _A255_37_2_3, (EIF_POINTER)(F499_3424),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/sessions/logout",20,773986932);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,498,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,498,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A255_38_2_3, (EIF_POINTER) _A255_38_2_3, (EIF_POINTER)(F499_3425),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/sessions/forgotpassword",28,144901732);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,498,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,498,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A255_39_2_3, (EIF_POINTER) _A255_39_2_3, (EIF_POINTER)(F499_3426),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users",10,1503126131);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,501,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,501,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A258_39_2_3, (EIF_POINTER) _A258_39_2_3, (EIF_POINTER)(F502_3449),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4438,F539_4438,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users",10,1503126131);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,501,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,501,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A258_40_2_3, (EIF_POINTER) _A258_40_2_3, (EIF_POINTER)(F502_3450),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users/delete",17,388994661);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,501,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,501,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A258_41_2_3, (EIF_POINTER) _A258_41_2_3, (EIF_POINTER)(F502_3451),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users/invite",17,566928485);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,501,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,501,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A258_42_2_3, (EIF_POINTER) _A258_42_2_3, (EIF_POINTER)(F502_3452),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users/changepassword",25,1347058788);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,501,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,501,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A258_43_2_3, (EIF_POINTER) _A258_43_2_3, (EIF_POINTER)(F502_3453),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users/update",17,288022629);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,501,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,501,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A258_44_2_3, (EIF_POINTER) _A258_44_2_3, (EIF_POINTER)(F502_3454),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects",13,1212852083);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_39_2_3, (EIF_POINTER) _A259_39_2_3, (EIF_POINTER)(F503_3458),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4438,F539_4438,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects",13,1212852083);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_40_2_3, (EIF_POINTER) _A259_40_2_3, (EIF_POINTER)(F503_3459),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/remove",20,256954213);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_41_2_3, (EIF_POINTER) _A259_41_2_3, (EIF_POINTER)(F503_3460),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/update",20,111023973);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_42_2_3, (EIF_POINTER) _A259_42_2_3, (EIF_POINTER)(F503_3461),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users/getprojects",22,964185203);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_43_2_3, (EIF_POINTER) _A259_43_2_3, (EIF_POINTER)(F503_3462),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users/info",15,770182255);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_44_2_3, (EIF_POINTER) _A259_44_2_3, (EIF_POINTER)(F503_3463),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/getmembers",24,1895832435);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_45_2_3, (EIF_POINTER) _A259_45_2_3, (EIF_POINTER)(F503_3464),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/members/add",25,879080804);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_46_2_3, (EIF_POINTER) _A259_46_2_3, (EIF_POINTER)(F503_3465),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/members/remove",28,324636005);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_47_2_3, (EIF_POINTER) _A259_47_2_3, (EIF_POINTER)(F503_3466),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/members/promote",29,487516773);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_48_2_3, (EIF_POINTER) _A259_48_2_3, (EIF_POINTER)(F503_3467),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/members/downgrade",31,833337701);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,502,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,502,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A259_49_2_3, (EIF_POINTER) _A259_49_2_3, (EIF_POINTER)(F503_3468),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations",24,1243290995);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,503,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,503,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A260_37_2_3, (EIF_POINTER) _A260_37_2_3, (EIF_POINTER)(F504_3472),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/getprojectiterations",45,207140211);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,503,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,503,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A260_36_2_3, (EIF_POINTER) _A260_36_2_3, (EIF_POINTER)(F504_3471),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/delete",31,1815747685);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,503,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,503,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A260_38_2_3, (EIF_POINTER) _A260_38_2_3, (EIF_POINTER)(F504_3473),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/getwork_item",37,1780745325);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_40_2_3, (EIF_POINTER) _A257_40_2_3, (EIF_POINTER)(F501_3436),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/workitems",34,450377587);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_41_2_3, (EIF_POINTER) _A257_41_2_3, (EIF_POINTER)(F501_3437),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/workitems/delete_workitem",50,1000976493);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_43_2_3, (EIF_POINTER) _A257_43_2_3, (EIF_POINTER)(F501_3439),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/workitems/update",41,572839013);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_42_2_3, (EIF_POINTER) _A257_42_2_3, (EIF_POINTER)(F501_3438),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/getworkitems",37,1964390515);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_44_2_3, (EIF_POINTER) _A257_44_2_3, (EIF_POINTER)(F501_3440),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/workitems/comments",43,742316915);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_45_2_3, (EIF_POINTER) _A257_45_2_3, (EIF_POINTER)(F501_3441),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/workitems/getcomments",46,852012403);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_46_2_3, (EIF_POINTER) _A257_46_2_3, (EIF_POINTER)(F501_3442),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/workitems/links",40,1227560819);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_47_2_3, (EIF_POINTER) _A257_47_2_3, (EIF_POINTER)(F501_3443),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/workitems/links/delete",47,381633381);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_48_2_3, (EIF_POINTER) _A257_48_2_3, (EIF_POINTER)(F501_3444),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/projects/iterations/workitems/getlinks",43,85894771);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_49_2_3, (EIF_POINTER) _A257_49_2_3, (EIF_POINTER)(F501_3445),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/users/achieved_work_items",30,747285363);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,500,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,500,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A257_39_2_3, (EIF_POINTER) _A257_39_2_3, (EIF_POINTER)(F501_3435),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/search/users",17,1561175411);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,499,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,499,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A256_39_2_3, (EIF_POINTER) _A256_39_2_3, (EIF_POINTER)(F500_3430),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/api/search/workitems",21,456591475);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,684,499,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {728,499,0xFFF9,2,684,748,93,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A256_40_2_3, (EIF_POINTER) _A256_40_2_3, (EIF_POINTER)(F500_3431),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current);
	tr6 = RTOSCF(4439,F539_4439,(RTCV(tr6)));
	F106_1431(Current, tr1, tr5, tr6);
	tr1 = RTLNS(436, 436, _OBJSIZ_5_2_0_1_0_0_0_0_);
	tr2 = RTOSCF(1684,F135_1684,(Current));
	F437_2810(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {798,736,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 1L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("index.html",10,1959670892);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr2);
	F437_2823(RTCV(loc1), tr1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("",0,0);
	tr3 = *(EIF_REFERENCE *)(Current);
	tr3 = RTOSCF(4438,F539_4438,(RTCV(tr3)));
	F539_4419(RTCV(tr1), tr2, loc1, tr3);
	RTLE;
}

void EIF_Minit113 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
