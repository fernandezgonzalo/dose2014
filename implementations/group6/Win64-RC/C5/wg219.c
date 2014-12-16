/*
 * Code for class WGI_CHUNKED_INPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg219.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_CHUNKED_INPUT_STREAM}.make */
void F434_2773 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F733_5554(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F733_5554(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F733_5554(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_character */
void F434_2774 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_))++;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_))) {
		F434_2791(Current);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
			F434_2795(Current);
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_6_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = F741_5903(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_));
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_6_0_) = (EIF_CHARACTER_8) tc1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F741_5903(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_));
		*(EIF_CHARACTER_8 *)(Current+ _CHROFF_6_0_) = (EIF_CHARACTER_8) tc1;
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_string */
void F434_2775 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	F741_5966(RTCV(tr1));
	if (F434_2786(Current)) {
	} else {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
			F434_2791(Current);
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_))++;
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_)) + ((EIF_INTEGER_32) 1L)) == arg1) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L)))) break;
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg1) - ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_);
				ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_);
				tr2 = F741_5984(RTCV(tr2), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_2) + ((EIF_INTEGER_32) 1L)) + arg1) - ((EIF_INTEGER_32) 1L)));
				F741_5938(RTCV(tr1), tr2);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg1) - ((EIF_INTEGER_32) 1L));
			} else {
				if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_))) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
					tr2 = *(EIF_REFERENCE *)(Current);
					ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_);
					ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_);
					ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_);
					tr2 = F741_5984(RTCV(tr2), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) + ((EIF_INTEGER_32) 1L)));
					F741_5938(RTCV(tr1), tr2);
					loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_);
				}
				F434_2791(Current);
				loc1++;
			}
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
			F434_2795(Current);
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) loc1;
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.last_string */
EIF_REFERENCE F434_2776 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.last_character */
EIF_CHARACTER_8 F434_2777 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_6_0_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.last_character_available */
EIF_BOOLEAN F434_2778 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F434_2786(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {WGI_CHUNKED_INPUT_STREAM}.last_chunk_data */
EIF_REFERENCE F434_2780 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_CHUNKED_INPUT_STREAM}.last_trailer */
EIF_REFERENCE F434_2781 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.last_chunk_extension */
EIF_REFERENCE F434_2782 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.read_chunk */
void F434_2783 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F434_2791(Current);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
		F434_2795(Current);
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.end_of_input */
EIF_BOOLEAN F434_2785 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2458[Dtype(tr1)-433])(RTCV(tr1));
	if (!tb1) {
		Result = F434_2786(Current);
	}
	RTLE;
	return Result;
}

/* {WGI_CHUNKED_INPUT_STREAM}.is_trailer_reached */
EIF_BOOLEAN F434_2786 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL);
}

/* {WGI_CHUNKED_INPUT_STREAM}.tmp_hex_chunk_size */
EIF_REFERENCE F434_2790 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.read_chunk_block */
void F434_2791 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2458[Dtype(tr1)-433])(RTCV(tr1));
	if (tb1) {
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_) + ((EIF_INTEGER_32) 1L));
		tr1 = *(EIF_REFERENCE *)(Current);
		F741_5966(RTCV(tr1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F434_2793(Current);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) > ((EIF_INTEGER_32) 0L))) {
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_)) += *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_);
			F434_2792(Current);
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc1)-433])(RTCV(loc1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc1)-433])(RTCV(loc1));
		}
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_chunk_data */
void F434_2792 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2449[Dtype(loc1)-433])(RTCV(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2453[Dtype(loc1)-433])(RTCV(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_chunk_size */
void F434_2793 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc4)-433])(RTCV(loc4));
	for (;;) {
		if (loc1) break;
		loc2 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[Dtype(loc4)-433])(RTCV(loc4));
		switch (loc2) {
			case (EIF_CHARACTER_8) '\015':
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc4)-433])(RTCV(loc4));
				break;
			case (EIF_CHARACTER_8) ';':
				F434_2794(Current);
				break;
			default:
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				F741_5952(RTCV(tr1), loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc4)-433])(RTCV(loc4));
				break;
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = RTMS_EX_H("0",1,48);
	tb1 = F737_5748(RTCV(tr1), tr2);
	if (tb1) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		tr1 = RTLNS(151, 151, _OBJSIZ_2_4_0_3_0_0_4_0_);
		F152_1856(RTCV(tr1));
		loc3 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		ti4_1 = ((EIF_INTEGER_32) 3L);
		F152_1862(RTCV(loc3), tr1, ti4_1);
		tb1 = F152_1860(RTCV(loc3));
		if (tb1) {
			ti4_1 = F152_1870(RTCV(loc3));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ti4_1;
		} else {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F741_5966(RTCV(tr1));
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_extension_chunk */
void F434_2794 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc1)-433])(RTCV(loc1));
	tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[Dtype(loc1)-433])(RTCV(loc1));
	F741_5952(RTCV(loc2), tc1);
	for (;;) {
		tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[Dtype(loc1)-433])(RTCV(loc1));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc1)-433])(RTCV(loc1));
		tc2 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[Dtype(loc1)-433])(RTCV(loc1));
		F741_5952(RTCV(loc2), tc2);
	}
	F741_5961(RTCV(loc2), ((EIF_INTEGER_32) 1L));
	tb1 = F286_2518(RTCV(loc2));
	if (tb1) {
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	} else {
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_trailer_and_crlf */
void F434_2795 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2458[Dtype(loc1)-433])(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc1)-433])(RTCV(loc1));
			tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[Dtype(loc1)-433])(RTCV(loc1));
			F741_5952(RTCV(loc3), tc1);
			for (;;) {
				tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[Dtype(loc1)-433])(RTCV(loc1));
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) break;
				loc2++;
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc1)-433])(RTCV(loc1));
				tc2 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[Dtype(loc1)-433])(RTCV(loc1));
				F741_5952(RTCV(loc3), tc2);
			}
			F741_5961(RTCV(loc3), ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[Dtype(loc1)-433])(RTCV(loc1));
		}
	}
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc3;
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.input */
EIF_REFERENCE F434_2796 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


void EIF_Minit219 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
