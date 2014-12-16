/*
 * Code for class WSF_FILE_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws246.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_FILE_RESPONSE}.make_with_content_type_and_path */
void F490_3256 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	
	RTGC;
	F490_3277(Current, ((EIF_INTEGER_32) 200L));
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	F490_3261(Current);
	RTLE;
}

/* {WSF_FILE_RESPONSE}.make_with_content_type */
void F490_3259 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(746, 746, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F747_6066(RTCV(tr1), arg2);
	F490_3256(Current, arg1, tr1);
	RTLE;
}

/* {WSF_FILE_RESPONSE}.initialize */
void F490_3261 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	F490_3282(Current);
	tr1 = RTLNSMART(eif_non_attached_type(680));
	F681_5142(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	F541_4509(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		tr1 = F490_3284(Current);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F541_4559(RTCV(loc1), loc2);
		}
		F490_3283(Current);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_2_) == ((EIF_INTEGER_32) 0L))) {
			F490_3277(Current, ((EIF_INTEGER_32) 404L));
		} else {
			F490_3277(Current, ((EIF_INTEGER_32) 200L));
		}
	} else {
		F490_3277(Current, ((EIF_INTEGER_32) 404L));
	}
	F490_3262(Current);
	RTLE;
}

/* {WSF_FILE_RESPONSE}.update_content_length */
void F490_3262 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_2_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2) + O4737[Dtype(loc2)-736]);
			loc1 += ti4_1;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3) + O4737[Dtype(loc3)-736]);
			loc1 += ti4_1;
		}
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_1_) = (EIF_INTEGER_32) loc1;
	tr1 = *(EIF_REFERENCE *)(Current);
	F541_4517(RTCV(tr1), loc1);
	RTLE;
}

/* {WSF_FILE_RESPONSE}.header */
EIF_REFERENCE F490_3267 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_FILE_RESPONSE}.content_type */
EIF_REFERENCE F490_3269 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_FILE_RESPONSE}.file_path */
EIF_REFERENCE F490_3270 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_FILE_RESPONSE}.head */
EIF_REFERENCE F490_3274 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_FILE_RESPONSE}.bottom */
EIF_REFERENCE F490_3275 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_FILE_RESPONSE}.set_status_code */
void F490_3277 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {WSF_FILE_RESPONSE}.set_answer_head_request_method */
void F490_3278 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_FILE_RESPONSE}.send_to */
void F490_3281 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	F94_1320(RTCV(arg1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_));
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) == ((EIF_INTEGER_32) 404L))) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F681_5151(RTCV(tr1));
		F94_1330(RTCV(arg1), tr1);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg1)-93])(RTCV(arg1), loc1);
		}
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			F490_3287(Current, tr1, arg1);
		}
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg1)-93])(RTCV(arg1), loc1);
		}
	}
	RTLE;
}

/* {WSF_FILE_RESPONSE}.get_file_exists */
void F490_3282 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F518_3986(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F518_4016(RTCV(loc1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) tb1;
	RTLE;
}

/* {WSF_FILE_RESPONSE}.get_file_size */
void F490_3283 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F518_3986(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	loc1 = (EIF_REFERENCE) tr1;
	ti4_1 = F518_4011(RTCV(loc1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WSF_FILE_RESPONSE}.file_last_modified */
EIF_REFERENCE F490_3284 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F518_3986(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_2_0_0_0_1_);
	ti4_1 = F518_4107(RTCV(loc1));
	F938_8183(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {WSF_FILE_RESPONSE}.send_file_content_to */
void F490_3287 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F518_3986(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	F518_4051(RTCV(loc1));
	for (;;) {
		tb1 = F246_2497(RTCV(loc1));
		if (tb1) break;
		F518_4127(RTCV(loc1), ((EIF_INTEGER_32) 4096L));
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg2)-93])(RTCV(arg2), tr1);
	}
	F518_4068(RTCV(loc1));
	RTLE;
}

void EIF_Minit246 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
