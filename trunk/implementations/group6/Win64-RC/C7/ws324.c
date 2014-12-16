/*
 * Code for class WSF_REQUEST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws324.h"
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

/* {WSF_REQUEST}.make_from_wgi */
void F749_6158 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_13_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {584,818,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_7_4_0_6_);
		F579_4635(RTCV(tr1), ti4_1);
		loc1 = (EIF_REFERENCE) tr1;
		loc3 = F579_4647(RTCV(loc2));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc3)-537])(RTCV(loc3));
			if (tb1) break;
			tr1 = F558_4614(RTCV(loc3));
			loc4 = tr1;
			loc4 = RTRV(eif_non_attached_type(736),loc4);
			if (EIF_TEST(loc4)) {
				tr1 = F558_4613(RTCV(loc3));
				tr1 = F749_6292(Current, loc4, tr1);
				tr2 = F558_4614(RTCV(loc3));
				F579_4679(RTCV(loc1), tr1, tr2);
			} else {
				tr1 = F558_4614(RTCV(loc3));
				tr1 = F749_6295(Current, tr1);
				tr2 = F558_4613(RTCV(loc3));
				tr1 = F749_6292(Current, tr1, tr2);
				tr2 = F558_4614(RTCV(loc3));
				F579_4679(RTCV(loc1), tr1, tr2);
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc3)-537])(RTCV(loc3));
		}
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {584,818,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc1;
	tr1 = RTLNSMART(eif_non_attached_type(861));
	F862_7505(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {584,821,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	F749_6280(Current, (EIF_BOOLEAN) 0);
	{
		static EIF_TYPE_INDEX typarr0[] = {584,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	F749_6159(Current);
	F749_6290(Current);
	RTLE;
}

/* {WSF_REQUEST}.initialize */
void F749_6159 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	
	RTGC;
	F749_6268(Current);
	loc2 = *(EIF_REFERENCE *)(Current);
	tb1 = '\0';
	tr1 = F749_6208(Current);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tb2 = F733_5592(RTCV(loc3));
		tb1 = tb2;
	}
	if (tb1) {
		tu8_1 = F733_5626(RTCV(loc3));
		*(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_) = (EIF_NATURAL_64) tu8_1;
	} else {
		tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_) = (EIF_NATURAL_64) tu8_1;
	}
	loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_10_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(796));
		F796_6325(RTCV(tr1), loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_5_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_9_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_9_);
	tr1 = F749_6296(Current, tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	loc1 = F83_1169(RTCV(loc2));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F749_6296(Current, loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	}
	tr1 = RTOSCF(984,F71_984,(Current));
	if ((EIF_BOOLEAN)(F749_6200(Current, tr1) == NULL)) {
		tr1 = RTOSCF(984,F71_984,(Current));
		tr2 = RTOSCF(6297,F749_6297,(Current));
		ti8_1 = F21_255(RTCV(tr2), NULL);
		tr2 = c_outi64(ti8_1);
		tr2 = F733_5613(RTCV(tr2));
		F749_6204(Current, tr1, tr2);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\0';
	tr1 = RTMS_EX_H("HTTPS",5,1415364691);
	tr1 = F749_6201(Current, tr1);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc4)-735])(RTCV(loc4));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tr1 = RTMS_EX_H("on",2,28526);
		tb4 = F733_5596(RTCV(loc4), tr1);
		if (!tb4) {
			tr1 = RTMS_EX_H("yes",3,7955827);
			tb4 = F733_5596(RTCV(loc4), tr1);
			tb3 = tb4;
		}
		if (!tb3) {
			tr1 = RTMS_EX_H("true",4,1953658213);
			tb3 = F733_5596(RTCV(loc4), tr1);
			tb2 = tb3;
		}
		if (!tb2) {
			tr1 = RTMS_EX_H("1",1,49);
			tb2 = F733_5596(RTCV(loc4), tr1);
			tb1 = tb2;
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) = (EIF_BOOLEAN) tb1;
	} else {
	}
	RTLE;
}

/* {WSF_REQUEST}.wgi_request */
EIF_REFERENCE F749_6160 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_REQUEST}.destroy */
void F749_6161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	loc1 = F579_4647(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc1)-537])(RTCV(loc1));
		if (tb1) break;
		tr1 = F558_4613(RTCV(loc1));
		F749_6282(Current, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc1)-537])(RTCV(loc1));
	}
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_) = (EIF_NATURAL_64) tu8_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2270[Dtype(tr1)-578])(RTCV(tr1));
	*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) NULL;
	F579_4686(RTCV(F749_6272(Current)));
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) NULL;
	tr1 = RTOSCF(6293,F749_6293,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTOSCF(6294,F749_6294,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	F749_6285(Current, NULL);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {WSF_REQUEST}.raw_input_data */
EIF_REFERENCE F749_6165 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_REQUEST}.set_raw_input_data */
void F749_6166 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(737),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F737_5725(RTCV(tr1), arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNSMART(eif_non_attached_type(737));
		F737_5725(RTCV(tr1), arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {WSF_REQUEST}.raw_header_data */
EIF_REFERENCE F749_6167 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTMS_EX_H("RAW_HEADER_DATA",15,198827841);
	Result = F749_6201(Current, tr1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.has_error */
EIF_BOOLEAN F749_6168 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F862_7507(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.error_handler */
EIF_REFERENCE F749_6169 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_REQUEST}.input */
EIF_REFERENCE F749_6170 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_15_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.is_chunked_input */
EIF_BOOLEAN F749_6171 (EIF_REFERENCE Current)
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
	Result = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_16_0_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.read_input_data_into */
void F749_6172 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc3 = tr1;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_) && EIF_TEST(loc3))) {
		F741_5938(RTCV(arg1), loc3);
	} else {
		loc1 = F749_6170(Current);
		if (F749_6171(Current)) {
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8192L);
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
					tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2458[Dtype(loc1)-433])(RTCV(loc1));
					tb1 = tb2;
				}
				if (tb1) break;
				F433_2765(RTCV(loc1), arg1, loc2);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1) + O2456[Dtype(loc1)-432]);
				if ((EIF_BOOLEAN) (ti4_1 < loc2)) {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		} else {
			tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_);
			loc2 = (EIF_INTEGER_32) tu8_1;
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				F433_2765(RTCV(loc1), arg1, loc2);
				loc2 = *(EIF_INTEGER_32 *)(RTCV(loc1) + O2456[Dtype(loc1)-432]);
			}
		}
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_)) {
			F749_6166(Current, arg1);
		}
	}
	RTLE;
}

/* {WSF_REQUEST}.is_request_method */
EIF_BOOLEAN F749_6174 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	tr2 = F733_5610(RTCV(arg1));
	Result = F737_5746(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.is_content_type_accepted */
EIF_BOOLEAN F749_6181 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,tr4);
	
	RTGC;
	tr1 = RTLNS(423, 423, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = F733_5610(RTCV(arg1));
	F424_2684(RTCV(tr1), tr2);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,740,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = F733_5610(RTCV(arg1));
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
	tr4 = F749_6226(Current);
	tr1 = F424_2688(RTCV(tr1), tr2, tr4);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_3_0_);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {WSF_REQUEST}.set_request_method */
void F749_6185 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) arg1;
}

/* {WSF_REQUEST}.execution_variables_table */
EIF_REFERENCE F749_6199 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_REQUEST}.meta_variable */
EIF_REFERENCE F749_6200 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	Result = F579_4638(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.meta_string_variable */
EIF_REFERENCE F749_6201 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	tr1 = F749_6200(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WSF_REQUEST}.set_meta_string_variable */
void F749_6204 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = F733_5609(RTCV(arg2));
	tr2 = F749_6292(Current, arg1, tr2);
	F579_4679(RTCV(tr1), tr2, arg1);
	RTLE;
}

/* {WSF_REQUEST}.meta_variables_table */
EIF_REFERENCE F749_6206 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_REQUEST}.content_length */
EIF_REFERENCE F749_6208 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_11_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.content_type */
EIF_REFERENCE F749_6210 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WSF_REQUEST}.percent_encoded_path_info */
EIF_REFERENCE F749_6212 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {WSF_REQUEST}.path_info */
EIF_REFERENCE F749_6213 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {WSF_REQUEST}.path_translated */
EIF_REFERENCE F749_6214 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {WSF_REQUEST}.query_string */
EIF_REFERENCE F749_6215 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_8_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.request_method */
EIF_REFERENCE F749_6220 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {WSF_REQUEST}.server_name */
EIF_REFERENCE F749_6222 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.server_port */
EIF_INTEGER_32 F749_6223 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_16_1_0_0_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.http_accept */
EIF_REFERENCE F749_6226 (EIF_REFERENCE Current)
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
	Result = F83_1181(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.http_host */
EIF_REFERENCE F749_6232 (EIF_REFERENCE Current)
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
	Result = F83_1187(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.http_if_match */
EIF_REFERENCE F749_6238 (EIF_REFERENCE Current)
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
	Result = F83_1193(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.request_uri */
EIF_REFERENCE F749_6245 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_2_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.cookie */
EIF_REFERENCE F749_6250 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = F749_6251(Current);
	Result = F579_4638(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.cookies_table */
EIF_REFERENCE F749_6251 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc10);
	RTLR(4,loc6);
	RTLR(5,loc9);
	RTLR(6,loc7);
	RTLR(7,loc8);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	if ((EIF_BOOLEAN)(loc5 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {584,816,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc5 = (EIF_REFERENCE) tr1;
		tr1 = RTOSCF(955,F71_955,(Current));
		tr1 = F749_6200(Current, tr1);
		loc10 = tr1;
		if (EIF_TEST(loc10)) {
			loc6 = *(EIF_REFERENCE *)(RTCV(loc10));
			tb1 = F735_5681(RTCV(loc6));
			if (tb1) {
				loc9 = F733_5607(RTCV(loc6));
				loc4 = *(EIF_INTEGER_32 *)(RTCV(loc9)+ _LNGOFF_1_1_0_2_);
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 1L))) break;
					loc1 = F737_5734(RTCV(loc9), (EIF_CHARACTER_8) '=', loc3);
					if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
						loc2 = F737_5734(RTCV(loc9), (EIF_CHARACTER_8) ';', loc1);
						if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
							loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
							loc7 = F741_5984(RTCV(loc9), loc3, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
							loc8 = F741_5984(RTCV(loc9), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc4);
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						} else {
							loc7 = F741_5984(RTCV(loc9), loc3, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
							loc8 = F741_5984(RTCV(loc9), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
							loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
						F741_5922(RTCV(loc7));
						F741_5923(RTCV(loc7));
						F749_6273(Current, loc7, loc8, loc5);
					}
				}
			}
		}
		RTAR(Current, loc5);
		*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) loc5;
	}
	RTLE;
	return (EIF_REFERENCE) loc5;
}

/* {WSF_REQUEST}.path_parameters_table */
EIF_REFERENCE F749_6254 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {WSF_REQUEST}.path_parameters_source */
EIF_REFERENCE F749_6255 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {WSF_REQUEST}.set_path_parameters_source */
void F749_6256 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,loc6);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		loc1 = (EIF_REFERENCE) NULL;
	} else {
		loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_3_0_0_0_);
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
			loc1 = (EIF_REFERENCE) NULL;
		} else {
			{
				static EIF_TYPE_INDEX typarr0[] = {584,816,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSMART(eif_non_attached_type(typres0));
			}
			F579_4635(RTCV(tr1), loc3);
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3695[Dtype(loc4)-535])(RTCV(loc4));
				for (;;) {
					tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc5)-537])(RTCV(loc5));
					if (tb1) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc5)-537])(RTCV(loc5));
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc5)-537])(RTCV(loc5));
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5271[Dtype(tr2)-817])(RTCV(tr2));
					F579_4679(RTCV(loc1), tr1, tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc5)-537])(RTCV(loc5));
				}
			} else {
				loc2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
				loc6 = F579_4647(RTCV(loc2));
				for (;;) {
					tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc6)-537])(RTCV(loc6));
					if (tb2) break;
					tr1 = F558_4614(RTCV(loc6));
					tr2 = F558_4613(RTCV(loc6));
					F749_6273(Current, tr1, tr2, loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc6)-537])(RTCV(loc6));
				}
				F84_1212(RTCV(arg1), loc1);
			}
		}
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {WSF_REQUEST}.query_parameter */
EIF_REFERENCE F749_6258 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = F749_6259(Current);
	Result = F579_4638(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.query_parameters_table */
EIF_REFERENCE F749_6259 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,loc4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = F749_6215(Current);
		loc5 = F733_5610(RTCV(tr1));
		if ((EIF_BOOLEAN)(loc5 == NULL)) {
			loc4 = F749_6245(Current);
			loc2 = F737_5734(RTCV(loc4), (EIF_CHARACTER_8) '\?', ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				loc3 = F737_5734(RTCV(loc4), (EIF_CHARACTER_8) '#', (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
					loc3 = *(EIF_INTEGER_32 *)(RTCV(loc4) + O4737[Dtype(loc4)-736]);
				} else {
					loc3--;
				}
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(loc4)-735])(RTCV(loc4), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), loc3);
				loc5 = F733_5610(RTCV(tr1));
			}
		}
		loc1 = F749_6260(Current, loc5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WSF_REQUEST}.urlencoded_parameters */
EIF_REFERENCE F749_6260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {584,816,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0, 584, _OBJSIZ_7_4_0_7_0_0_0_0_);
		}
		F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
			{
				static EIF_TYPE_INDEX typarr0[] = {584,816,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0, 584, _OBJSIZ_7_4_0_7_0_0_0_0_);
			}
			F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 0L));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			{
				static EIF_TYPE_INDEX typarr0[] = {584,816,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0, 584, _OBJSIZ_7_4_0_7_0_0_0_0_);
			}
			F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 3L));
			Result = (EIF_REFERENCE) tr1;
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
				loc3 = F737_5734(RTCV(arg1), (EIF_CHARACTER_8) '&', loc2);
				if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
					loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), loc2, loc1);
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				} else {
					loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), loc2, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				}
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc5)-735])(RTCV(loc5));
				if ((EIF_BOOLEAN) !tb1) {
					loc4 = F737_5734(RTCV(loc5), (EIF_CHARACTER_8) '=', ((EIF_INTEGER_32) 1L));
					if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
						loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(loc5)-735])(RTCV(loc5), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O4737[Dtype(loc5)-736]);
						loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(loc5)-735])(RTCV(loc5), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)), ti4_1);
					} else {
						loc6 = (EIF_REFERENCE) loc5;
						loc7 = RTOSCF(6294,F749_6294,(Current));
					}
					F749_6273(Current, loc6, loc7, Result);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.register_mime_handler */
void F749_6266 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {665,141,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 3L));
		loc1 = (EIF_REFERENCE) tr1;
		F219_2481(RTCV(loc1));
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) loc1;
	}
	F666_5047(RTCV(loc1), arg1);
	RTLE;
}

/* {WSF_REQUEST}.mime_handler */
EIF_REFERENCE F749_6267 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F666_5038(RTCV(loc1));
		for (;;) {
			tb1 = '\01';
			tb2 = F637_4919(RTCV(loc1));
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(Result != NULL);
			}
			if (tb1) break;
			Result = F243_2496(RTCV(loc1));
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1622[Dtype(Result)-142])(RTCV(Result), arg1);
			if ((EIF_BOOLEAN) !tb2) {
				Result = (EIF_REFERENCE) NULL;
			}
			F666_5040(RTCV(loc1));
		}
	}
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.init_mime_handlers */
void F749_6268 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(143, 143, _OBJSIZ_0_0_0_0_0_0_0_0_);
	F749_6266(Current, tr1);
	tr1 = RTLNS(142, 142, _OBJSIZ_0_0_0_0_0_0_0_0_);
	F749_6266(Current, tr1);
	RTLE;
}

/* {WSF_REQUEST}.mime_handlers */
EIF_REFERENCE F749_6269 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_12_);
}


/* {WSF_REQUEST}.uploaded_files_table */
EIF_REFERENCE F749_6270 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_13_);
}


/* {WSF_REQUEST}.get_form_parameters */
void F749_6271 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tb1 = '\0';
		if ((EIF_BOOLEAN) !F749_6171(Current)) {
			tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
			tb1 = (EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_) == tu8_1);
		}
		if (tb1) {
			{
				static EIF_TYPE_INDEX typarr0[] = {584,816,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSMART(eif_non_attached_type(typres0));
			}
			F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 0L));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {97,740,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNS(typres0, 97, _OBJSIZ_1_0_0_0_0_0_0_0_);
				}
				F98_1422(RTCV(tr1), NULL);
				loc2 = (EIF_REFERENCE) tr1;
			}
			{
				static EIF_TYPE_INDEX typarr0[] = {584,816,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSMART(eif_non_attached_type(typres0));
			}
			F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 5L));
			loc1 = (EIF_REFERENCE) tr1;
			loc3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tr1 = F749_6267(Current, loc3);
				loc4 = tr1;
				tb1 = EIF_TEST(loc4);
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1623[Dtype(loc4)-142])(RTCV(loc4), loc3, Current, loc1, loc2);
			}
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
				loc5 = tr1;
				tb1 = EIF_TEST(loc5);
			}
			if (tb1) {
				F749_6166(Current, loc5);
			}
		}
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
}

/* {WSF_REQUEST}.form_parameters_table */
EIF_REFERENCE F749_6272 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	F749_6271(Current);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {584,816,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F579_4635(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WSF_REQUEST}.add_value_to_table */
void F749_6273 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc8);
	RTLR(5,arg3);
	RTLR(6,loc10);
	RTLR(7,loc3);
	RTLR(8,loc1);
	RTLR(9,loc9);
	RTLR(10,loc5);
	RTLR(11,Current);
	RTLR(12,loc11);
	RTLR(13,arg2);
	RTLR(14,loc12);
	RTLR(15,loc13);
	RTLR(16,loc14);
	RTLR(17,tr2);
	RTLR(18,tr3);
	
	RTGC;
	loc6 = F737_5734(RTCV(arg1), (EIF_CHARACTER_8) '[', ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
		loc7 = F737_5734(RTCV(arg1), (EIF_CHARACTER_8) ']', (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN) (loc7 > loc6)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
			loc2 = F733_5610(RTCV(tr1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), ti4_1);
			loc4 = F733_5610(RTCV(tr1));
			F741_5922(RTCV(loc4));
			F741_5923(RTCV(loc4));
			tr1 = RTLNS(820, 820, _OBJSIZ_3_0_0_0_0_0_0_0_);
			F821_6487(RTCV(tr1), loc2);
			loc8 = (EIF_REFERENCE) tr1;
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(RTCV(loc8) + _REFACS_2_);
			tb2 = F579_4641(RTCV(arg3), tr1);
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
				loc10 = tr1;
				loc10 = RTRV(eif_non_attached_type(820),loc10);
				tb1 = EIF_TEST(loc10);
			}
			if (tb1) {
				loc8 = (EIF_REFERENCE) loc10;
			}
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)));
			loc3 = F733_5610(RTCV(tr1));
			F741_5922(RTCV(loc3));
			F741_5923(RTCV(loc3));
			tb1 = F286_2518(RTCV(loc3));
			if (tb1) {
				ti4_1 = F821_6494(RTCV(loc8));
				F741_5942(RTCV(loc3), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			}
			loc1 = (EIF_REFERENCE) loc8;
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F737_5725(RTCV(tr1), loc2);
			loc2 = (EIF_REFERENCE) tr1;
			F741_5952(RTCV(loc2), (EIF_CHARACTER_8) '[');
			F741_5938(RTCV(loc2), loc3);
			F741_5952(RTCV(loc2), (EIF_CHARACTER_8) ']');
			for (;;) {
				tb1 = F286_2518(RTCV(loc4));
				if (tb1) break;
				loc9 = (EIF_REFERENCE) loc8;
				loc6 = F737_5734(RTCV(loc4), (EIF_CHARACTER_8) '[', ((EIF_INTEGER_32) 1L));
				if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
					loc7 = F737_5734(RTCV(loc4), (EIF_CHARACTER_8) ']', (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
					if ((EIF_BOOLEAN) (loc7 > loc6)) {
						loc5 = F749_6296(Current, loc3);
						tr1 = F821_6493(RTCV(loc9), loc5);
						loc11 = tr1;
						loc11 = RTRV(eif_non_attached_type(820),loc11);
						if (EIF_TEST(loc11)) {
							loc8 = (EIF_REFERENCE) loc11;
						} else {
							tr1 = RTLNS(820, 820, _OBJSIZ_3_0_0_0_0_0_0_0_);
							F821_6487(RTCV(tr1), loc2);
							loc8 = (EIF_REFERENCE) tr1;
							F821_6502(RTCV(loc9), loc8, loc5);
						}
						loc3 = F741_5984(RTCV(loc4), (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
						loc4 = F741_5984(RTCV(loc4), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), ti4_1);
						F741_5922(RTCV(loc4));
						F741_5923(RTCV(loc4));
						tb2 = F286_2518(RTCV(loc3));
						if (tb2) {
							ti4_1 = F821_6494(RTCV(loc8));
							F741_5942(RTCV(loc3), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
						}
						F741_5952(RTCV(loc2), (EIF_CHARACTER_8) '[');
						F741_5938(RTCV(loc2), loc3);
						F741_5952(RTCV(loc2), (EIF_CHARACTER_8) ']');
					}
				} else {
					F741_5966(RTCV(loc4));
				}
			}
			tr1 = F749_6292(Current, loc2, arg2);
			F821_6502(RTCV(loc8), tr1, loc3);
		}
	}
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc1 = F749_6292(Current, arg1, arg2);
	}
	tb2 = '\0';
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5271[Dtype(loc1)-817])(RTCV(loc1));
	tb3 = F579_4641(RTCV(arg3), tr1);
	if (tb3) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
		loc12 = tr1;
		tb2 = EIF_TEST(loc12);
	}
	if (tb2) {
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
		} else {
			loc13 = loc12;
			loc13 = RTRV(eif_non_attached_type(819),loc13);
			if (EIF_TEST(loc13)) {
				F820_6484(RTCV(loc13), loc1);
			} else {
				loc14 = loc12;
				loc14 = RTRV(eif_non_attached_type(820),loc14);
				if (EIF_TEST(loc14)) {
				} else {
					tr1 = RTLNS(819, 819, _OBJSIZ_2_0_0_0_0_0_0_0_);
					{
						static EIF_TYPE_INDEX typarr0[] = {798,816,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
						RT_SPECIAL_COUNT(tr3) = 2L;
						memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
					}
					*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) loc12;
					RTAR(tr3,loc12);
					*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) loc1;
					RTAR(tr3,loc1);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F799_6358)(tr3);
					F820_6470(RTCV(tr1), tr2);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5271[Dtype(loc1)-817])(RTCV(loc1));
					F579_4679(RTCV(arg3), tr1, tr2);
				}
			}
		}
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5271[Dtype(loc1)-817])(RTCV(loc1));
		F579_4679(RTCV(arg3), loc1, tr1);
	}
	RTLE;
}

/* {WSF_REQUEST}.server_url */
EIF_REFERENCE F749_6275 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_)) {
			tr1 = RTLNSMART(eif_non_attached_type(740));
			tr2 = RTMS_EX_H("https://",8,441357103);
			F737_5725(RTCV(tr1), tr2);
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNSMART(eif_non_attached_type(740));
			tr2 = RTMS_EX_H("http://",7,769736239);
			F737_5725(RTCV(tr1), tr2);
			loc1 = (EIF_REFERENCE) tr1;
		}
		tr1 = F749_6222(Current);
		F741_5938(RTCV(loc1), tr1);
		loc2 = F749_6223(Current);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) && (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 443L)))) {
			} else {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) && (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 80L)))) {
				} else {
					F741_5952(RTCV(loc1), (EIF_CHARACTER_8) ':');
					F741_5942(RTCV(loc1), loc2);
				}
			}
		}
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WSF_REQUEST}.internal_server_url */
EIF_REFERENCE F749_6278 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_14_);
}


/* {WSF_REQUEST}.internal_url_base */
EIF_REFERENCE F749_6279 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_15_);
}


/* {WSF_REQUEST}.set_raw_input_data_recorded */
void F749_6280 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_REQUEST}.delete_uploaded_file */
void F749_6282 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F579_4642(RTCV(tr1), arg1);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
			F518_3986(RTCV(tr1), loc2);
			loc1 = (EIF_REFERENCE) tr1;
			tb1 = '\0';
			tb2 = F518_4016(RTCV(loc1));
			if (tb2) {
				tb2 = F518_4020(RTCV(loc1));
				tb1 = tb2;
			}
			if (tb1) {
				F518_4113(RTCV(loc1));
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr2 = RTMS_EX_H("Can not delete uploaded file",28,1195992165);
				tr3 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000d\000\000\000e\000\000\000l\000\000\000e\000\000\000t\000\000\000e\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000\"\000\000\000",21,439245858);
				tr4 = F747_6105(RTCV(loc2));
				tr3 = F740_5849(RTCV(tr3), tr4);
				tr4 = RTMS32_EX_H("\"\000\000\000",1,34);
				tr3 = F740_5849(RTCV(tr3), tr4);
				F862_7521(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTMS_EX_H("Can not delete uploaded file",28,1195992165);
			tr3 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000d\000\000\000e\000\000\000l\000\000\000e\000\000\000t\000\000\000e\000\000\000 \000\000\000u\000\000\000p\000\000\000l\000\000\000o\000\000\000a\000\000\000d\000\000\000e\000\000\000d\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000\"\000\000\000",30,1824501282);
			tr4 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_5_);
			tr3 = F740_5849(RTCV(tr3), tr4);
			tr4 = RTMS32_EX_H("\"\000\000\000 \000\000\000T\000\000\000m\000\000\000p\000\000\000 \000\000\000F\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000f\000\000\000o\000\000\000u\000\000\000n\000\000\000d\000\000\000",20,1907986020);
			tr3 = F740_5849(RTCV(tr3), tr4);
			F862_7521(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("Not an uploaded file",20,1565320549);
		tr3 = RTMS32_EX_H("T\000\000\000h\000\000\000i\000\000\000s\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000\"\000\000\000",11,1843696674);
		tr4 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_5_);
		tr3 = F740_5849(RTCV(tr3), tr4);
		tr4 = RTMS32_EX_H("\"\000\000\000 \000\000\000i\000\000\000s\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000a\000\000\000n\000\000\000 \000\000\000u\000\000\000p\000\000\000l\000\000\000o\000\000\000a\000\000\000d\000\000\000e\000\000\000d\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000.\000\000\000",26,545905454);
		tr3 = F740_5849(RTCV(tr3), tr4);
		F862_7521(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
	}
	RTLE;
}

/* {WSF_REQUEST}.save_uploaded_file */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F749_6283 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr4 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTXD;
	
	RTXI(15);
	RTLR(0,loc9);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc6);
	RTLR(5,loc2);
	RTLR(6,arg1);
	RTLR(7,loc1);
	RTLR(8,loc5);
	RTLR(9,loc3);
	RTLR(10,tr2);
	RTLR(11,arg2);
	RTLR(12,tr3);
	RTLR(13,tr4);
	RTLR(14,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc8) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
		loc9 = tr1;
		if (EIF_TEST(loc9)) {
			loc4 = (EIF_REFERENCE) loc9;
		} else {
			loc4 = F495_3328(RTCV(RTOSCF(2695,F427_2695,(Current))));
		}
		tr1 = RTLNS(507, 507, _OBJSIZ_3_0_0_1_0_2_0_0_);
		F508_3606(RTCV(tr1), loc4);
		loc6 = (EIF_REFERENCE) tr1;
		tb1 = '\0';
		tb2 = F508_3628(RTCV(loc6));
		if (tb2) {
			tb2 = F508_3631(RTCV(loc6));
			tb1 = tb2;
		}
		if (tb1) {
			loc2 = F822_6522(RTCV(arg1));
			tr1 = RTMS_EX_H("tmp-",4,1953329197);
			loc1 = F741_5940(RTCV(tr1), loc2);
			loc5 = F747_6093(RTCV(loc4), loc1);
			tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
			F518_3986(RTCV(tr1), loc5);
			loc3 = (EIF_REFERENCE) tr1;
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				tb1 = '\01';
				tb2 = F518_4016(RTCV(loc3));
				if (!(EIF_BOOLEAN) !tb2) {
					tb1 = (EIF_BOOLEAN) (loc7 > ((EIF_INTEGER_32) 1000L));
				}
				if (tb1) break;
				loc7++;
				tr1 = RTMS_EX_H("tmp-",4,1953329197);
				tr2 = c_outi(loc7);
				tr1 = F741_5940(RTCV(tr1), tr2);
				tr2 = RTMS_EX_H("-",1,45);
				tr1 = F741_5940(RTCV(tr1), tr2);
				loc1 = F741_5940(RTCV(tr1), loc2);
				loc5 = F747_6093(RTCV(loc4), loc1);
				F518_3986(RTCV(loc3), loc5);
			}
			tb2 = '\01';
			tb3 = F518_4016(RTCV(loc3));
			if (!(EIF_BOOLEAN) !tb3) {
				tb3 = F518_4020(RTCV(loc3));
				tb2 = tb3;
			}
			if (tb2) {
				tr1 = F518_3993(RTCV(loc3));
				F822_6528(RTCV(arg1), tr1);
				F822_6530(RTCV(arg1), loc1);
				F518_4052(RTCV(loc3));
				F518_4089(RTCV(loc3), arg2);
				F518_4068(RTCV(loc3));
			} else {
				F822_6527(RTCV(arg1), ((EIF_INTEGER_32) -1L));
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTMS_EX_H("Directory not writable",22,2105711717);
			tr3 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000c\000\000\000r\000\000\000e\000\000\000a\000\000\000t\000\000\000e\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000i\000\000\000n\000\000\000 \000\000\000d\000\000\000i\000\000\000r\000\000\000e\000\000\000c\000\000\000t\000\000\000o\000\000\000r\000\000\000y\000\000\000 \000\000\000\"\000\000\000",34,2071630114);
			tr4 = F747_6105(RTCV(loc4));
			tr3 = F740_5849(RTCV(tr3), tr4);
			tr4 = RTMS32_EX_H("\"\000\000\000",1,34);
			tr3 = F740_5849(RTCV(tr3), tr4);
			F862_7521(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_5_);
		F579_4679(RTCV(tr1), arg1, tr2);
	} else {
		F822_6527(RTCV(arg1), ((EIF_INTEGER_32) -1L));
	}
	RTE_E
	RTXS(15);
	loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_REQUEST}.uploaded_file_path */
EIF_REFERENCE F749_6284 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_16_);
}


/* {WSF_REQUEST}.set_uploaded_file_path */
void F749_6285 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) arg1;
}

/* {WSF_REQUEST}.internal_query_parameters_table */
EIF_REFERENCE F749_6286 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_17_);
}


/* {WSF_REQUEST}.internal_form_data_parameters_table */
EIF_REFERENCE F749_6287 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_18_);
}


/* {WSF_REQUEST}.internal_cookies_table */
EIF_REFERENCE F749_6288 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_19_);
}


/* {WSF_REQUEST}.report_bad_request_error */
void F749_6289 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(870, 870, _OBJSIZ_3_0_0_1_0_0_0_0_);
	F871_7658(RTCV(tr1), ((EIF_INTEGER_32) 400L));
	loc1 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = F733_5613(RTCV(arg1));
		F871_7662(RTCV(loc1), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F862_7519(RTCV(tr1), loc1);
	RTLE;
}

/* {WSF_REQUEST}.analyze */
void F749_6290 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = F749_6245(Current);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc1)-735])(RTCV(loc1));
	if (tb1) {
		tr1 = RTMS_EX_H("Missing URI",11,1426827849);
		F749_6289(Current, tr1);
	}
	if ((EIF_BOOLEAN) !F749_6168(Current)) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc1)-735])(RTCV(loc1));
		if (tb1) {
			tr1 = RTMS_EX_H("Missing request method",22,1254586980);
			F749_6289(Current, tr1);
		}
	}
	if ((EIF_BOOLEAN) !F749_6168(Current)) {
		loc1 = F749_6232(Current);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc1)-735])(RTCV(loc1));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTMS_EX_H("Missing host header",19,1896797042);
			F749_6289(Current, tr1);
		}
	}
	RTLE;
}

/* {WSF_REQUEST}.new_string_value */
EIF_REFERENCE F749_6292 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	tr1 = RTLNS(818, 818, _OBJSIZ_4_0_0_0_0_0_0_0_);
	F819_6455(RTCV(tr1), arg1, arg2);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WSF_REQUEST}.empty_string_32 */
static EIF_REFERENCE F749_6293_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (6293);
#define Result RTOSR(6293)
	RTOC_NEW(Result);
	tr1 = RTLNS(735, 735, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F733_5554(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (6293);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F749_6293 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(6293,F749_6293_body,(Current));
}

/* {WSF_REQUEST}.empty_string_8 */
static EIF_REFERENCE F749_6294_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (6294);
#define Result RTOSR(6294)
	RTOC_NEW(Result);
	tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F733_5554(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (6294);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F749_6294 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(6294,F749_6294_body,(Current));
}

/* {WSF_REQUEST}.url_encoded_string */
EIF_REFERENCE F749_6295 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	F737_5723(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(2718,F429_2718,(Current));
	F126_1639(RTCV(tr1), arg1, Result);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.url_decoded_string */
EIF_REFERENCE F749_6296 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	F735_5650(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(2718,F429_2718,(Current));
	F126_1646(RTCV(tr1), arg1, Result);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.date_time_utilities */
static EIF_REFERENCE F749_6297_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (6297);
#define Result RTOSR(6297)
	RTOC_NEW(Result);
	tr1 = RTLNS(20, 20, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (6297);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F749_6297 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(6297,F749_6297_body,(Current));
}

void EIF_Minit324 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
