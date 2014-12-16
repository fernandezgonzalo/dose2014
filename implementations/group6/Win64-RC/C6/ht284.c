/*
 * Code for class HTTP_HEADER_MODIFIER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht284.h"
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

/* {HTTP_HEADER_MODIFIER}.put_header_key_value */
void F541_4507 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg2) + O4737[Dtype(arg2)-736]);
	F737_5723(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)) + ti4_2));
	loc1 = (EIF_REFERENCE) tr1;
	F741_5938(RTCV(loc1), arg1);
	tr1 = RTOSCF(4575,F541_4575,(Current));
	F741_5938(RTCV(loc1), tr1);
	F741_5938(RTCV(loc1), arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3828[Dtype(Current)-541])(Current, loc1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_header_key_values */
void F541_4508 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg3);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,arg2);
	RTLR(7,arg1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg3 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(arg3)-735])(RTCV(arg3));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		loc2 = (EIF_REFERENCE) arg3;
	} else {
		loc2 = RTOSCF(4577,F541_4577,(Current));
	}
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3695[Dtype(arg2)-535])(RTCV(arg2));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc3)-537])(RTCV(loc3));
		if (tb1) break;
		tb2 = F286_2518(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb2) {
			F741_5941(RTCV(loc1), loc2);
		}
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc3)-537])(RTCV(loc3));
		F741_5938(RTCV(loc1), tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc3)-537])(RTCV(loc3));
	}
	tb2 = F286_2518(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb2) {
		F541_4507(Current, arg1, loc1);
	}
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_content_type */
void F541_4509 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOSCF(1080,F79_1080,(Current));
	F541_4507(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_content_length */
void F541_4517 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTOSCF(1078,F79_1078,(Current));
	tr2 = c_outi(arg1);
	F541_4507(Current, tr1, tr2);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_transfer_encoding */
void F541_4521 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOSCF(1069,F79_1069,(Current));
	F541_4507(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_transfer_encoding_chunked */
void F541_4523 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(4574,F541_4574,(Current));
	F541_4521(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_content_type_text_html */
void F541_4527 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(2074,F162_2074,(Current));
	F541_4509(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_content_type_text_plain */
void F541_4530 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(2077,F162_2077,(Current));
	F541_4509(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_content_type_application_json */
void F541_4532 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(2034,F162_2034,(Current));
	F541_4509(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_allow */
void F541_4555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOSCF(1050,F79_1050,(Current));
	F541_4508(Current, tr1, arg1, NULL);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_date */
void F541_4556 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOSCF(1081,F79_1081,(Current));
	F541_4507(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_utc_date */
void F541_4558 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F541_4571(Current, arg1);
	F541_4556(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_last_modified */
void F541_4559 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTOSCF(1058,F79_1058,(Current));
	tr2 = F541_4571(Current, arg1);
	F541_4507(Current, tr1, tr2);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_expires_date */
void F541_4563 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTMS_EX_H("Expires",7,227574899);
	tr2 = F541_4571(Current, arg1);
	F541_4507(Current, tr1, tr2);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_cache_control */
void F541_4564 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTMS_EX_H("Cache-Control",13,1776397420);
	F541_4507(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_cookie */
void F541_4569 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,arg2);
	RTLR(6,arg5);
	RTLR(7,arg4);
	RTLR(8,arg3);
	
	RTGC;
	tr1 = RTOSCF(1066,F79_1066,(Current));
	tr2 = RTOSCF(4575,F541_4575,(Current));
	tr1 = F741_5940(RTCV(tr1), tr2);
	tr1 = F741_5940(RTCV(tr1), arg1);
	tr2 = RTMS_EX_H("=",1,61);
	tr1 = F741_5940(RTCV(tr1), tr2);
	loc1 = F741_5940(RTCV(tr1), arg2);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg5 != NULL)) {
		tr1 = RTMS_EX_H("localhost",9,185724020);
		tb2 = F737_5748(RTCV(arg5), tr1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = RTMS_EX_H("; Domain=",9,911589949);
		F741_5938(RTCV(loc1), tr1);
		F741_5938(RTCV(loc1), arg5);
	}
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		tr1 = RTMS_EX_H("; Path=",7,1329502781);
		F741_5938(RTCV(loc1), tr1);
		F741_5938(RTCV(loc1), arg4);
	}
	if ((EIF_BOOLEAN)(arg3 != NULL)) {
		tr1 = RTMS_EX_H("; Expires=",10,1830705469);
		F741_5938(RTCV(loc1), tr1);
		F741_5938(RTCV(loc1), arg3);
	}
	if (arg6) {
		tr1 = RTMS_EX_H("; Secure",8,772484197);
		F741_5938(RTCV(loc1), tr1);
	}
	if (arg7) {
		tr1 = RTMS_EX_H("; HttpOnly",10,1386914169);
		F741_5938(RTCV(loc1), tr1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3827[Dtype(Current)-541])(Current, loc1);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.put_cookie_with_expiration_date */
void F541_4570 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,arg4);
	RTLR(6,arg5);
	
	RTGC;
	tr1 = F541_4571(Current, arg3);
	F541_4569(Current, arg1, arg2, tr1, arg4, arg5, arg6, arg7);
	RTLE;
}

/* {HTTP_HEADER_MODIFIER}.date_to_rfc1123_http_date_format */
EIF_REFERENCE F541_4571 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(747, 747, _OBJSIZ_2_1_0_0_0_0_1_0_);
	F748_6128(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F748_6132(RTCV(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {HTTP_HEADER_MODIFIER}.str_chunked */

EIF_REFERENCE F541_4574 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (4574,RTMS_EX_H("chunked",7,346719076));
}

/* {HTTP_HEADER_MODIFIER}.colon_space */
static EIF_REFERENCE F541_4575_body (EIF_REFERENCE Current)
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
	RTOSP (4575);
#define Result RTOSR(4575)
	RTOC_NEW(Result);
	tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H(": ",2,14880);
	F737_5725(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (4575);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F541_4575 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4575,F541_4575_body,(Current));
}

/* {HTTP_HEADER_MODIFIER}.comma_space */
static EIF_REFERENCE F541_4577_body (EIF_REFERENCE Current)
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
	RTOSP (4577);
#define Result RTOSR(4577)
	RTOC_NEW(Result);
	tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H(", ",2,11296);
	F737_5725(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (4577);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F541_4577 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4577,F541_4577_body,(Current));
}

void EIF_Minit284 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
