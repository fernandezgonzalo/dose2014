/*
 * Code for class INET_ADDRESS_IMPL_V4
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in90.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET_ADDRESS_IMPL_V4}.any_local_address */
static EIF_REFERENCE F110_1445_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (1445);
#define Result RTOSR(1445)
	RTOC_NEW(Result);
	tr1 = RTLNS(114, 114, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("0.0.0.0",7,1402630960);
	F115_1512(RTCV(tr1), tr2, NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1445);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F110_1445 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1445,F110_1445_body,(Current));
}

/* {INET_ADDRESS_IMPL_V4}.loopback_address */
static EIF_REFERENCE F110_1446_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLR(3,tr3);
	RTLR(4,tr4);
	
	RTEV;
	RTGC;
	RTOSP (1446);
#define Result RTOSR(1446)
	RTOC_NEW(Result);
	tr1 = RTLNS(114, 114, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("localhost",9,185724020);
	{
		static EIF_TYPE_INDEX typarr0[] = {807,851,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr4 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 4L),sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 4L;
	}
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L);
	*((EIF_NATURAL_8 *)tr4+0) = (EIF_NATURAL_8) tu1_1;
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr4+1) = (EIF_NATURAL_8) tu1_1;
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr4+2) = (EIF_NATURAL_8) tu1_1;
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
	*((EIF_NATURAL_8 *)tr4+3) = (EIF_NATURAL_8) tu1_1;
	tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F808_6358)(tr4);
	F115_1512(RTCV(tr1), tr2, tr3);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1446);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F110_1446 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1446,F110_1446_body,(Current));
}

void EIF_Minit90 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
