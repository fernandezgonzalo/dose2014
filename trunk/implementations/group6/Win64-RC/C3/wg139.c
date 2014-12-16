/*
 * Code for class WGI_NINO_OUTPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg139.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_NINO_OUTPUT_STREAM}.make */
void F161_2023 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F161_2024(Current, arg1);
}

/* {WGI_NINO_OUTPUT_STREAM}.set_target */
void F161_2024 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WGI_NINO_OUTPUT_STREAM}.target */
EIF_REFERENCE F161_2025 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_NINO_OUTPUT_STREAM}.put_status_line */
void F161_2026 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 16L));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(2088,F163_2088,(Current));
	F741_5938(RTCV(loc1), tr1);
	F741_5952(RTCV(loc1), (EIF_CHARACTER_8) ' ');
	F741_5942(RTCV(loc1), arg1);
	loc2 = (EIF_REFERENCE) arg2;
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = F160_2022(Current, arg1);
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		F741_5952(RTCV(loc1), (EIF_CHARACTER_8) ' ');
		F741_5941(RTCV(loc1), loc2);
	}
	F56_844(Current, loc1);
	RTLE;
}

/* {WGI_NINO_OUTPUT_STREAM}.put_string */
void F161_2027 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F517_3982(RTCV(tr1), arg1);
	RTLE;
}

/* {WGI_NINO_OUTPUT_STREAM}.flush */
void F161_2030 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit139 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
