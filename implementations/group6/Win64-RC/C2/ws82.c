/*
 * Code for class WSF_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws82.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_RESPONSE}.make_from_wgi */
void F94_1310 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc1);
	
	RTGC;
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current + O1274[Dtype(Current)-93]) = (EIF_NATURAL_64) tu8_1;
	tr1 = RTLNSMART(eif_non_attached_type(681));
	F681_5142(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	loc2 = arg1;
	loc2 = RTRV(eif_non_attached_type(217),loc2);
	if (EIF_TEST(loc2)) {
		F218_2466(RTCV(loc2), Current);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	} else {
		loc3 = arg1;
		loc3 = RTRV(eif_non_attached_type(140),loc3);
		if (EIF_TEST(loc3)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(217, 217, _OBJSIZ_3_0_0_0_0_0_0_0_);
			F218_2465(RTCV(tr1), arg1, Current);
			loc1 = (EIF_REFERENCE) tr1;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		}
	}
	F94_1320(Current, ((EIF_INTEGER_32) 200L));
	RTLE;
}

/* {WSF_RESPONSE}.make_from_wsf */
void F94_1311 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current + O1274[Dtype(Current)-93]) = (EIF_NATURAL_64) tu8_1;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F94_1320(Current, ((EIF_INTEGER_32) 200L));
	RTLE;
}

/* {WSF_RESPONSE}.wgi_response */
EIF_REFERENCE F94_1312 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_RESPONSE}.internal_header */
EIF_REFERENCE F94_1313 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_RESPONSE}.set_wgi_response */
void F94_1314 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_RESPONSE}.status_committed */
EIF_BOOLEAN F94_1315 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1597[Dtype(tr1)-138])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_RESPONSE}.header_committed */
EIF_BOOLEAN F94_1316 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1598[Dtype(tr1)-138])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_RESPONSE}.set_status_code */
void F94_1320 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O1260[Dtype(Current)-93]) = (EIF_INTEGER_32) arg1;
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {WSF_RESPONSE}.status_reason_phrase */
EIF_REFERENCE F94_1323 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_RESPONSE}.process_header */
void F94_1324 (EIF_REFERENCE Current)
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
	if ((EIF_BOOLEAN) !F94_1316(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE)) R1602[Dtype(tr1)-138])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O1260[Dtype(Current)-93]), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = F681_5151(RTCV(tr2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1605[Dtype(tr1)-138])(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {WSF_RESPONSE}.report_content_already_sent_and_header_ignored */
void F94_1325 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTMS_EX_H("Content already sent, new header text ignored!",46,181631265);
	F94_1349(Current, tr1);
	RTLE;
}

/* {WSF_RESPONSE}.header */
EIF_REFERENCE F94_1326 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNS(541, 541, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F542_4578(RTCV(tr1), Current);
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WSF_RESPONSE}.internal_response_header */
EIF_REFERENCE F94_1327 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_RESPONSE}.put_header_line */
void F94_1328 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if (F94_1316(Current)) {
		F94_1325(Current);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F681_5163(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {WSF_RESPONSE}.add_header_line */
void F94_1329 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if (F94_1316(Current)) {
		F94_1325(Current);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F681_5162(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {WSF_RESPONSE}.put_header_text */
void F94_1330 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if (F94_1316(Current)) {
		F94_1325(Current);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F681_5158(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {WSF_RESPONSE}.put_header_lines */
void F94_1334 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3695[Dtype(arg1)-535])(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc1)-537])(RTCV(loc1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc1)-537])(RTCV(loc1));
		F94_1328(Current, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc1)-537])(RTCV(loc1));
	}
	RTLE;
}

/* {WSF_RESPONSE}.increment_transfered_content_length */
void F94_1337 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu8_1 = (EIF_NATURAL_64) arg1;
	(*(EIF_NATURAL_64 *)(Current + O1274[dtype-93])) += tu8_1;
	RTLE;
}

/* {WSF_RESPONSE}.put_string */
void F94_1339 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1607[Dtype(tr1)-138])(RTCV(tr1), arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	F94_1337(Current, ti4_1);
	RTLE;
}

/* {WSF_RESPONSE}.put_chunk */
void F94_1341 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLR(5,tr2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	tr1 = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	
	loc1 = F832_6729(RTCV(tr1));
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tc1 = F741_5903(RTCV(loc1), loc2);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0')) break;
		loc2++;
	}
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		loc1 = F741_5984(RTCV(loc1), loc2, ti4_1);
	}
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		F741_5938(RTCV(loc1), arg2);
	}
	tr1 = RTOSCF(2089,F163_2089,(Current));
	F741_5938(RTCV(loc1), tr1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1607[Dtype(tr1)-138])(RTCV(tr1), loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(Current)-93])(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(2089,F163_2089,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1607[Dtype(tr1)-138])(RTCV(tr1), tr2);
	F94_1344(Current);
	RTLE;
}

/* {WSF_RESPONSE}.put_custom_chunk_end */
void F94_1342 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,arg2);
	RTLR(5,tr2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_REFERENCE) tr1;
	F741_5942(RTCV(loc1), ((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F741_5938(RTCV(loc1), arg1);
	}
	tr1 = RTOSCF(2089,F163_2089,(Current));
	F741_5938(RTCV(loc1), tr1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1607[Dtype(tr1)-138])(RTCV(tr1), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(arg2)-735])(RTCV(arg2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1607[Dtype(tr1)-138])(RTCV(tr1), arg2);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(2089,F163_2089,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1607[Dtype(tr1)-138])(RTCV(tr1), tr2);
	F94_1344(Current);
	RTLE;
}

/* {WSF_RESPONSE}.put_chunk_end */
void F94_1343 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F94_1342(Current, NULL, NULL);
}

/* {WSF_RESPONSE}.flush */
void F94_1344 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1609[Dtype(tr1)-138])(RTCV(tr1));
	RTLE;
}

/* {WSF_RESPONSE}.send */
void F94_1345 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2833[Dtype(arg1)-485])(RTCV(arg1), Current);
}

/* {WSF_RESPONSE}.put_error */
void F94_1349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1610[Dtype(tr1)-138])(RTCV(tr1), arg1);
	RTLE;
}

void EIF_Minit82 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
