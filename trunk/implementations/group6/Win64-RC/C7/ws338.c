/*
 * Code for class WSF_TABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws338.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_TABLE}.make */
void F821_6487 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F817_6444(Current, arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	{
		static EIF_TYPE_INDEX typarr0[] = {578,816,739,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F579_4634(RTCV(tr1), ((EIF_INTEGER_32) 5L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_TABLE}.name */
EIF_REFERENCE F821_6488 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_TABLE}.url_encoded_name */
EIF_REFERENCE F821_6489 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_TABLE}.values */
EIF_REFERENCE F821_6492 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_TABLE}.value */
EIF_REFERENCE F821_6493 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = F733_5614(RTCV(arg1));
	Result = F579_4638(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {WSF_TABLE}.count */
EIF_INTEGER_32 F821_6494 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_7_3_0_6_);
	RTLE;
	return Result;
}

/* {WSF_TABLE}.change_name */
void F821_6496 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F817_6444(Current, arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = F733_5609(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_TABLE}.add_value */
void F821_6502 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = F733_5614(RTCV(arg2));
	F579_4679(RTCV(tr1), arg1, tr2);
	RTLE;
}

/* {WSF_TABLE}.new_cursor */
EIF_REFERENCE F821_6503 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F579_4647(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit338 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
