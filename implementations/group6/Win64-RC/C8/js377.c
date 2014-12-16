/*
 * Code for class JSON_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js377.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_OBJECT}.make */
void F860_7460 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {578,822,826,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F579_4634(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {JSON_OBJECT}.put */
void F860_7461 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg2);
	
	RTGC;
	loc1 = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNS(825, 825, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc1 = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	F579_4680(RTCV(tr1), loc1, arg2);
	RTLE;
}

/* {JSON_OBJECT}.item */
EIF_REFERENCE F860_7477 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F579_4638(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {JSON_OBJECT}.representation */
EIF_REFERENCE F860_7479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) '{');
	loc1 = F860_7484(Current);
	F579_4671(RTCV(loc1));
	for (;;) {
		tb1 = F579_4666(RTCV(loc1));
		if (tb1) break;
		tr1 = F579_4645(RTCV(loc1));
		tr1 = F827_6563(RTCV(tr1));
		F741_5938(RTCV(Result), tr1);
		F741_5952(RTCV(Result), (EIF_CHARACTER_8) ':');
		tr1 = F579_4644(RTCV(loc1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5336[Dtype(tr1)-823])(RTCV(tr1));
		F741_5938(RTCV(Result), tr1);
		F579_4672(RTCV(loc1));
		tb2 = F579_4666(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb2) {
			F741_5952(RTCV(Result), (EIF_CHARACTER_8) ',');
		}
	}
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) '}');
	RTLE;
	return Result;
}

/* {JSON_OBJECT}.new_cursor */
EIF_REFERENCE F860_7481 (EIF_REFERENCE Current)
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

/* {JSON_OBJECT}.map_representation */
EIF_REFERENCE F860_7484 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {JSON_OBJECT}.hash_code */
EIF_INTEGER_32 F860_7485 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F579_4671(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = F1_25(RTCV(tr1));
	Result = F733_5563(RTCV(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F579_4667(RTCV(tr1));
		if (tb1) break;
		ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F579_4644(RTCV(tr1));
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4239[Dtype(tr1)-683])(RTCV(tr1));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
		tr1 = *(EIF_REFERENCE *)(Current);
		F579_4672(RTCV(tr1));
	}
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return (EIF_INTEGER_32) Result;
}

/* {JSON_OBJECT}.object */
EIF_REFERENCE F860_7487 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit377 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
