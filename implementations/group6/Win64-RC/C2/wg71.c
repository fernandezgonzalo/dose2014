/*
 * Code for class WGI_REQUEST_FROM_TABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg71.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_REQUEST_FROM_TABLE}.make */
void F83_1152 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLR(2,arg2);
	RTLR(3,arg1);
	
	RTGC;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) arg3;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) arg2;
	F83_1202(Current, arg1);
	F83_1205(Current);
	F83_1153(Current);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.update_input */
RTEOMS(1152,1);
void F83_1153 (EIF_REFERENCE Current)
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
	tb1 = '\0';
	tr1 = F83_1191(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = F737_5748(RTCV(loc1), RTOMS(1152,0));
		tb1 = tb2;
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_16_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = RTLNS(433, 433, _OBJSIZ_6_1_0_5_0_0_0_0_);
		F434_2773(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_15_));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.is_chunked_input */
EIF_BOOLEAN F83_1154 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_16_0_);
}


/* {WGI_REQUEST_FROM_TABLE}.input */
EIF_REFERENCE F83_1155 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_15_);
}


/* {WGI_REQUEST_FROM_TABLE}.wgi_connector */
EIF_REFERENCE F83_1158 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_14_);
}


/* {WGI_REQUEST_FROM_TABLE}.meta_variables */
EIF_REFERENCE F83_1159 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_13_);
}


/* {WGI_REQUEST_FROM_TABLE}.meta_variable */
EIF_REFERENCE F83_1160 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	Result = F579_4638(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.meta_string_variable_or_default */
EIF_REFERENCE F83_1161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,arg2);
	
	RTGC;
	tr1 = F83_1160(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F737_5737(RTCV(loc1));
		tb1 = '\0';
		if (arg3) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(Result)-735])(RTCV(Result));
			tb1 = tb2;
		}
		if (tb1) {
			RTLE;
			return (EIF_REFERENCE) arg2;
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) arg2;
	}
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.set_meta_string_variable */
void F83_1162 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	F579_4679(RTCV(tr1), arg2, arg1);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.unset_meta_variable */
void F83_1163 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	F579_4684(RTCV(tr1), arg1);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.content_length */
EIF_REFERENCE F83_1165 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {WGI_REQUEST_FROM_TABLE}.content_type */
EIF_REFERENCE F83_1166 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {WGI_REQUEST_FROM_TABLE}.path_info */
EIF_REFERENCE F83_1168 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {WGI_REQUEST_FROM_TABLE}.path_translated */
EIF_REFERENCE F83_1169 (EIF_REFERENCE Current)
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
	tr1 = RTOSCF(951,F71_951,(Current));
	Result = F82_1109(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.query_string */
EIF_REFERENCE F83_1170 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {WGI_REQUEST_FROM_TABLE}.remote_addr */
EIF_REFERENCE F83_1171 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {WGI_REQUEST_FROM_TABLE}.remote_host */
EIF_REFERENCE F83_1172 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {WGI_REQUEST_FROM_TABLE}.request_method */
EIF_REFERENCE F83_1175 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WGI_REQUEST_FROM_TABLE}.script_name */
EIF_REFERENCE F83_1176 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WGI_REQUEST_FROM_TABLE}.server_name */
EIF_REFERENCE F83_1177 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WGI_REQUEST_FROM_TABLE}.server_port */
EIF_INTEGER_32 F83_1178 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_16_1_0_0_);
}


/* {WGI_REQUEST_FROM_TABLE}.http_accept */
EIF_REFERENCE F83_1181 (EIF_REFERENCE Current)
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
	tr1 = RTOSCF(957,F71_957,(Current));
	Result = F82_1109(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.http_host */
EIF_REFERENCE F83_1187 (EIF_REFERENCE Current)
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
	tr1 = RTOSCF(954,F71_954,(Current));
	Result = F82_1109(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.http_transfer_encoding */
EIF_REFERENCE F83_1191 (EIF_REFERENCE Current)
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
	tr1 = RTOSCF(964,F71_964,(Current));
	Result = F82_1109(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.http_if_match */
EIF_REFERENCE F83_1193 (EIF_REFERENCE Current)
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
	tr1 = RTOSCF(966,F71_966,(Current));
	Result = F82_1109(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.request_uri */
EIF_REFERENCE F83_1200 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WGI_REQUEST_FROM_TABLE}.orig_path_info */
EIF_REFERENCE F83_1201 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_REQUEST_FROM_TABLE}.set_meta_variables */
void F83_1202 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLR(7,loc1);
	RTLR(8,loc4);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc5;
	{
		static EIF_TYPE_INDEX typarr0[] = {584,736,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 584, _OBJSIZ_7_4_0_7_0_0_0_0_);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4033[Dtype(arg1)-578]);
	F579_4635(RTCV(tr1), ti4_1);
	loc2 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) loc2;
	F579_4671(RTCV(arg1));
	for (;;) {
		tb1 = F579_4666(RTCV(arg1));
		if (tb1) break;
		tr1 = F579_4644(RTCV(arg1));
		tr1 = F733_5607(RTCV(tr1));
		tr2 = F579_4645(RTCV(arg1));
		F579_4679(RTCV(loc2), tr1, tr2);
		F579_4672(RTCV(arg1));
	}
	tr1 = RTOSCF(947,F71_947,(Current));
	loc3 = F83_1161(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc3;
	tr1 = RTOSCF(946,F71_946,(Current));
	tr1 = F83_1161(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(948,F71_948,(Current));
	loc1 = F82_1109(Current, tr1);
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc1)-735])(RTCV(loc1));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) loc1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) NULL;
	}
	tr1 = RTOSCF(949,F71_949,(Current));
	tr1 = F82_1109(Current, tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(950,F71_950,(Current));
	tr1 = F83_1161(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(980,F71_980,(Current));
	tr1 = F83_1161(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(981,F71_981,(Current));
	loc1 = F82_1109(Current, tr1);
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb3 = F733_5585(RTCV(loc1));
		tb2 = tb3;
	}
	if (tb2) {
		ti4_1 = F733_5619(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_16_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_16_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	}
	tr1 = RTOSCF(979,F71_979,(Current));
	tr1 = F83_1161(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(976,F71_976,(Current));
	tr1 = F83_1161(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(975,F71_975,(Current));
	tr1 = F83_1161(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(945,F71_945,(Current));
	loc1 = F82_1109(Current, tr1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc4 = F733_5613(RTCV(loc1));
	} else {
		tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr2 = F733_5612(RTCV(tr2));
		F735_5652(RTCV(tr1), tr2);
		loc4 = (EIF_REFERENCE) tr1;
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc3)-735])(RTCV(loc3));
		if ((EIF_BOOLEAN) !tb2) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\?';
			F740_5861(RTCV(loc4), tw1);
			tr1 = F733_5612(RTCV(loc3));
			F740_5847(RTCV(loc4), tr1);
		}
	}
	tr1 = F733_5610(RTCV(loc4));
	tr1 = F83_1207(Current, tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.set_orig_path_info */
void F83_1203 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTOSCF(986,F71_986,(Current));
	F83_1162(Current, tr1, arg1);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.unset_orig_path_info */
void F83_1204 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	tr1 = RTOSCF(986,F71_986,(Current));
	F83_1163(Current, tr1);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.update_path_info */
void F83_1205 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	loc1 = F733_5610(RTCV(tr1));
	tb1 = F286_2518(RTCV(loc1));
	if (tb1) {
		F83_1204(Current);
	} else {
		F83_1203(Current, loc1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb1 = F737_5756(RTCV(loc1), loc2);
			if (tb1) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2) + O4737[Dtype(loc2)-736]);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
				tr1 = F741_5984(RTCV(loc1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.single_slash_starting_string */
EIF_REFERENCE F83_1207 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg1)-578])(RTCV(arg1), ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '/')) {
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F737_5723(RTCV(tr1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc2));
			Result = (EIF_REFERENCE) tr1;
			F741_5952(RTCV(Result), (EIF_CHARACTER_8) '/');
			F741_5938(RTCV(Result), arg1);
		} else {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg1)-578])(RTCV(arg1), ((EIF_INTEGER_32) 2L)));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				for (;;) {
					if ((EIF_BOOLEAN) (loc1 > loc2)) break;
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg1)-578])(RTCV(arg1), loc1));
					if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '/')) {
						loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					} else {
						loc1++;
					}
				}
				loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ti4_1);
				Result = F733_5610(RTCV(tr1));
			} else {
				Result = F733_5610(RTCV(arg1));
				RTLE;
				return (EIF_REFERENCE) Result;
			}
		}
	} else {
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg1)-578])(RTCV(arg1), ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
				Result = F733_5610(RTCV(arg1));
				RTLE;
				return (EIF_REFERENCE) Result;
			} else {
				tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
				F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 2L));
				Result = (EIF_REFERENCE) tr1;
				F741_5952(RTCV(Result), (EIF_CHARACTER_8) '/');
				F741_5938(RTCV(Result), arg1);
			}
		} else {
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F737_5724(RTCV(tr1), (EIF_CHARACTER_8) '/', ((EIF_INTEGER_32) 1L));
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.empty_string */
EIF_REFERENCE F83_1208 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit71 (void)
{
	GTCX
	RTPOMS(1152,0,"chunked",7,346719076);
}


#ifdef __cplusplus
}
#endif
