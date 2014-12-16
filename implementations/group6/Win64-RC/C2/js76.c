/*
 * Code for class JSON_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js76.h"
#include <ctype.h>
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

/* {JSON_PARSER}.make_parser */
void F88_1243 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F87_1231(Current, arg1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	{
		static EIF_TYPE_INDEX typarr0[] = {660,740,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F661_4932(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {JSON_PARSER}.errors */
EIF_REFERENCE F88_1245 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {JSON_PARSER}.report_error */
void F88_1247 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2318[Dtype(tr1)-398])(RTCV(tr1), arg1);
	RTLE;
}

/* {JSON_PARSER}.parse */
EIF_REFERENCE F88_1249 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		F87_1236(Current);
		loc1 = F87_1241(Current);
		switch (loc1) {
			case (EIF_CHARACTER_8) '{':
				Result = F88_1250(Current);
				break;
			case (EIF_CHARACTER_8) '\"':
				Result = F88_1251(Current);
				break;
			case (EIF_CHARACTER_8) '[':
				Result = F88_1252(Current);
				break;
			default:
				tb1 = '\01';
				tb2 = EIF_TEST(isdigit(loc1));
				if (!tb2) {
					tb1 = (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '-');
				}
				if (tb1) {
					Result = F88_1253(Current);
				} else {
					if (F88_1254(Current)) {
						tr1 = RTLNS(825, 825, _OBJSIZ_0_0_0_0_0_0_0_0_);
						Result = (EIF_REFERENCE) tr1;
						F87_1234(Current);
						F87_1234(Current);
						F87_1234(Current);
					} else {
						if (F88_1256(Current)) {
							tr1 = RTLNS(823, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
							F824_6533(RTCV(tr1), (EIF_BOOLEAN) 1);
							Result = (EIF_REFERENCE) tr1;
							F87_1234(Current);
							F87_1234(Current);
							F87_1234(Current);
						} else {
							if (F88_1255(Current)) {
								tr1 = RTLNS(823, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
								F824_6533(RTCV(tr1), (EIF_BOOLEAN) 0);
								Result = (EIF_REFERENCE) tr1;
								F87_1234(Current);
								F87_1234(Current);
								F87_1234(Current);
								F87_1234(Current);
							} else {
								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								tr1 = RTMS_EX_H("JSON is not well formed in parse",32,1233185637);
								F88_1247(Current, tr1);
								Result = (EIF_REFERENCE) NULL;
							}
						}
					}
				}
				break;
		}
	}
	RTLE;
	return Result;
}

/* {JSON_PARSER}.parse_object */
EIF_REFERENCE F88_1250 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc3);
	
	RTGC;
	tr1 = RTLNS(859, 859, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F860_7460(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F87_1234(Current);
	F87_1236(Current);
	if ((EIF_BOOLEAN)(F87_1241(Current) == (EIF_CHARACTER_8) '}')) {
	} else {
		F87_1235(Current);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			if ((EIF_BOOLEAN) !loc1) break;
			F87_1234(Current);
			F87_1236(Current);
			loc2 = F88_1251(Current);
			F87_1234(Current);
			F87_1236(Current);
			if ((EIF_BOOLEAN)(F87_1241(Current) == (EIF_CHARACTER_8) ':')) {
				F87_1234(Current);
				F87_1236(Current);
			} else {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				tr1 = RTMS_EX_H("\012 Input string is a not well formed JSON, expected: : found: ",61,1225215520);
				tr2 = c_outc(F87_1241(Current));
				tr1 = F741_5940(RTCV(tr1), tr2);
				F88_1247(Current, tr1);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			loc3 = F88_1249(Current);
			if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) && (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && (EIF_BOOLEAN)(loc2 != NULL)))) {
				F860_7461(RTCV(Result), loc3, loc2);
				F87_1234(Current);
				F87_1236(Current);
				if ((EIF_BOOLEAN)(F87_1241(Current) == (EIF_CHARACTER_8) '}')) {
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					if ((EIF_BOOLEAN)(F87_1241(Current) != (EIF_CHARACTER_8) ',')) {
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						tr1 = RTMS_EX_H("JSON Object syntactically malformed expected , found: [",55,479025243);
						tr2 = c_outc(F87_1241(Current));
						tr1 = F741_5940(RTCV(tr1), tr2);
						tr2 = RTMS_EX_H("]",1,93);
						tr1 = F741_5940(RTCV(tr1), tr2);
						F88_1247(Current, tr1);
					}
				}
			} else {
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTLE;
	return Result;
}

/* {JSON_PARSER}.parse_string */
EIF_REFERENCE F88_1251 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN)(F87_1241(Current) == (EIF_CHARACTER_8) '\"')) {
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			if ((EIF_BOOLEAN) !loc1) break;
			F87_1234(Current);
			loc4 = F87_1241(Current);
			if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\"')) {
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\\')) {
					F87_1234(Current);
					loc4 = F87_1241(Current);
					if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) 'u')) {
						tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
						tr2 = RTMS_EX_H("\\u",2,23669);
						F737_5725(RTCV(tr1), tr2);
						loc3 = (EIF_REFERENCE) tr1;
						tr1 = F88_1257(Current);
						F741_5938(RTCV(loc3), tr1);
						loc4 = F87_1241(Current);
						if (F88_1259(Current, loc3)) {
							F741_5938(RTCV(loc2), loc3);
						} else {
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							tr1 = RTMS_EX_H("Input String is not well formed JSON, expected a Unicode value, found [",71,1487629147);
							tr2 = c_outc(loc4);
							tr1 = F741_5940(RTCV(tr1), tr2);
							tr2 = RTMS_EX_H(" ]",2,8285);
							tr1 = F741_5940(RTCV(tr1), tr2);
							F88_1247(Current, tr1);
						}
					} else {
						tb1 = '\01';
						tb2 = '\0';
						if ((EIF_BOOLEAN) !F86_1229(Current, loc4)) {
							tb2 = (EIF_BOOLEAN) !F86_1230(Current, loc4);
						}
						if (!(tb2)) {
							tb1 = (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\012');
						}
						if (tb1) {
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							tr1 = RTMS_EX_H("Input String is not well formed JSON, found [",45,1611731291);
							tr2 = c_outc(loc4);
							tr1 = F741_5940(RTCV(tr1), tr2);
							tr2 = RTMS_EX_H(" ]",2,8285);
							tr1 = F741_5940(RTCV(tr1), tr2);
							F88_1247(Current, tr1);
						} else {
							F741_5952(RTCV(loc2), (EIF_CHARACTER_8) '\\');
							F741_5952(RTCV(loc2), loc4);
						}
					}
				} else {
					tb1 = '\0';
					if (F86_1229(Current, loc4)) {
						tb1 = (EIF_BOOLEAN)(loc4 != (EIF_CHARACTER_8) '/');
					}
					if (tb1) {
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						tr1 = RTMS_EX_H("Input String is not well formed JSON, found [",45,1611731291);
						tr2 = c_outc(loc4);
						tr1 = F741_5940(RTCV(tr1), tr2);
						tr2 = RTMS_EX_H(" ]",2,8285);
						tr1 = F741_5940(RTCV(tr1), tr2);
						F88_1247(Current, tr1);
					} else {
						F741_5952(RTCV(loc2), loc4);
					}
				}
			}
		}
		tr1 = RTLNS(826, 826, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F827_6559(RTCV(tr1), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) NULL;
	}/* NOTREACHED */
	
}

/* {JSON_PARSER}.parse_array */
EIF_REFERENCE F88_1252 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = RTLNS(858, 858, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F859_7444(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F87_1234(Current);
	F87_1236(Current);
	if ((EIF_BOOLEAN)(F87_1241(Current) == (EIF_CHARACTER_8) ']')) {
	} else {
		F87_1235(Current);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			if ((EIF_BOOLEAN) !loc1) break;
			F87_1234(Current);
			F87_1236(Current);
			loc2 = F88_1249(Current);
			if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) && (EIF_BOOLEAN)(loc2 != NULL))) {
				F859_7452(RTCV(Result), loc2);
				F87_1234(Current);
				F87_1236(Current);
				loc3 = F87_1241(Current);
				if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) ']')) {
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					if ((EIF_BOOLEAN)(loc3 != (EIF_CHARACTER_8) ',')) {
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						tr1 = RTMS_EX_H("Array is not well formed JSON,  found [",39,1142695003);
						tr2 = c_outc(loc3);
						tr1 = F741_5940(RTCV(tr1), tr2);
						tr2 = RTMS_EX_H(" ]",2,8285);
						tr1 = F741_5940(RTCV(tr1), tr2);
						F88_1247(Current, tr1);
					}
				}
			} else {
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				tr1 = RTMS_EX_H("Array is not well formed JSON,  found [",39,1142695003);
				tr2 = c_outc(F87_1241(Current));
				tr1 = F741_5940(RTCV(tr1), tr2);
				tr2 = RTMS_EX_H(" ]",2,8285);
				tr1 = F741_5940(RTCV(tr1), tr2);
				F88_1247(Current, tr1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {JSON_PARSER}.parse_number */
EIF_REFERENCE F88_1253 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tc1 = F87_1241(Current);
	F741_5952(RTCV(loc1), tc1);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		if ((EIF_BOOLEAN) !loc2) break;
		F87_1234(Current);
		loc4 = F87_1241(Current);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		if (!(EIF_BOOLEAN) !F87_1238(Current)) {
			tb4 = F86_1228(Current, loc4);
		}
		if (!tb4) {
			tb3 = (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) ',');
		}
		if (!tb3) {
			tb2 = (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\012');
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\015');
		}
		if (tb1) {
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			F87_1235(Current);
		} else {
			F741_5952(RTCV(loc1), loc4);
		}
	}
	if (F88_1258(Current, loc1)) {
		tb1 = F733_5585(RTCV(loc1));
		if (tb1) {
			tr1 = RTLNS(824, 824, _OBJSIZ_1_0_0_1_0_0_0_0_);
			ti4_1 = F733_5619(RTCV(loc1));
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			F825_6539(RTCV(tr1), ti8_1);
			Result = (EIF_REFERENCE) tr1;
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			tb1 = '\0';
			tb2 = F733_5580(RTCV(loc1));
			if (tb2) {
				tb1 = (EIF_BOOLEAN) !loc3;
			}
			if (tb1) {
				tr1 = RTLNS(824, 824, _OBJSIZ_1_0_0_1_0_0_0_0_);
				tr8_1 = F733_5629(RTCV(loc1));
				F825_6541(RTCV(tr1), tr8_1);
				Result = (EIF_REFERENCE) tr1;
			}
		}
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = RTMS_EX_H("Expected a number, found: [ ",28,1471623456);
		tr1 = F741_5940(RTCV(tr1), loc1);
		tr2 = RTMS_EX_H(" ]",2,8285);
		tr1 = F741_5940(RTCV(tr1), tr2);
		F88_1247(Current, tr1);
	}
	RTLE;
	return Result;
}

/* {JSON_PARSER}.is_null */
EIF_BOOLEAN F88_1254 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc1 = RTOSCF(1264,F88_1264,(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	loc2 = F87_1237(Current, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ti4_3) - ((EIF_INTEGER_32) 1L)));
	tb1 = F737_5745(RTCV(loc2), loc1);
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {JSON_PARSER}.is_false */
EIF_BOOLEAN F88_1255 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc1 = RTOSCF(1262,F88_1262,(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	loc2 = F87_1237(Current, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ti4_3) - ((EIF_INTEGER_32) 1L)));
	tb1 = F737_5745(RTCV(loc2), loc1);
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {JSON_PARSER}.is_true */
EIF_BOOLEAN F88_1256 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc1 = RTOSCF(1263,F88_1263,(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	loc2 = F87_1237(Current, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ti4_3) - ((EIF_INTEGER_32) 1L)));
	tb1 = F737_5745(RTCV(loc2), loc1);
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {JSON_PARSER}.read_unicode */
EIF_REFERENCE F88_1257 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 4L))) {
			tb1 = (EIF_BOOLEAN) !F87_1238(Current);
		}
		if (tb1) break;
		F87_1234(Current);
		tc1 = F87_1241(Current);
		F741_5952(RTCV(Result), tc1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {JSON_PARSER}.is_valid_number */
EIF_BOOLEAN F88_1258 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc4 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = F741_5903(RTCV(arg1), loc3);
		if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '-')) {
			F741_5953(RTCV(loc1), loc2);
			loc3++;
			loc2 = F741_5903(RTCV(arg1), loc3);
		}
		tb1 = EIF_TEST(isdigit(loc2));
		if (tb1) {
			if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '0')) {
				F741_5953(RTCV(loc1), loc2);
				loc3++;
				loc2 = F741_5903(RTCV(arg1), loc3);
			} else {
				F741_5953(RTCV(loc1), loc2);
				loc3++;
				loc2 = F741_5903(RTCV(arg1), loc3);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN) (loc3 > loc4)) {
						tb2 = EIF_TEST(isdigit(loc2));
						tb1 = (EIF_BOOLEAN) !tb2;
					}
					if (tb1) break;
					F741_5953(RTCV(loc1), loc2);
					loc3++;
					loc2 = F741_5903(RTCV(arg1), loc3);
				}
			}
		}
	}
	if (Result) {
		if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '.')) {
			F741_5953(RTCV(loc1), loc2);
			loc3++;
			loc2 = F741_5903(RTCV(arg1), loc3);
			tb2 = EIF_TEST(isdigit(loc2));
			if (tb2) {
				for (;;) {
					tb2 = '\01';
					if (!(EIF_BOOLEAN) (loc3 > loc4)) {
						tb3 = EIF_TEST(isdigit(loc2));
						tb2 = (EIF_BOOLEAN) !tb3;
					}
					if (tb2) break;
					F741_5953(RTCV(loc1), loc2);
					loc3++;
					loc2 = F741_5903(RTCV(arg1), loc3);
				}
			} else {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	if (Result) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'e') || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'E'))) {
			F741_5953(RTCV(loc1), loc2);
			loc3++;
			loc2 = F741_5903(RTCV(arg1), loc3);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '+') || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '-'))) {
				F741_5953(RTCV(loc1), loc2);
				loc3++;
				loc2 = F741_5903(RTCV(arg1), loc3);
			}
			tb3 = EIF_TEST(isdigit(loc2));
			if (tb3) {
				for (;;) {
					tb3 = '\01';
					if (!(EIF_BOOLEAN) (loc3 > loc4)) {
						tb4 = EIF_TEST(isdigit(loc2));
						tb3 = (EIF_BOOLEAN) !tb4;
					}
					if (tb3) break;
					F741_5953(RTCV(loc1), loc2);
					loc3++;
					loc2 = F741_5903(RTCV(arg1), loc3);
				}
			} else {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	if (Result) {
		for (;;) {
			tb4 = '\01';
			if (!(EIF_BOOLEAN) (loc3 > loc4)) {
				tb5 = EIF_TEST(isspace(loc2));
				tb4 = (EIF_BOOLEAN) !tb5;
			}
			if (tb4) break;
			F741_5953(RTCV(loc1), loc2);
			loc3++;
			loc2 = F741_5903(RTCV(arg1), loc3);
		}
		Result = '\0';
		if ((EIF_BOOLEAN) (loc3 > loc4)) {
			tb5 = F737_5748(RTCV(loc1), arg1);
			Result = tb5;
		}
	}
	RTLE;
	return Result;
}

/* {JSON_PARSER}.is_valid_unicode */
EIF_BOOLEAN F88_1259 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 6L))) {
		tc1 = F741_5903(RTCV(arg1), ((EIF_INTEGER_32) 1L));
		tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\\');
	}
	if (tb2) {
		tc1 = F741_5903(RTCV(arg1), ((EIF_INTEGER_32) 2L));
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'u');
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 6L)) || (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0))) break;
			tc1 = F741_5903(RTCV(arg1), loc1);
			switch (tc1) {
				case (EIF_CHARACTER_8) '0':
				case (EIF_CHARACTER_8) '1':
				case (EIF_CHARACTER_8) '2':
				case (EIF_CHARACTER_8) '3':
				case (EIF_CHARACTER_8) '4':
				case (EIF_CHARACTER_8) '5':
				case (EIF_CHARACTER_8) '6':
				case (EIF_CHARACTER_8) '7':
				case (EIF_CHARACTER_8) '8':
				case (EIF_CHARACTER_8) '9':
				case (EIF_CHARACTER_8) 'A':
				case (EIF_CHARACTER_8) 'B':
				case (EIF_CHARACTER_8) 'C':
				case (EIF_CHARACTER_8) 'D':
				case (EIF_CHARACTER_8) 'E':
				case (EIF_CHARACTER_8) 'F':
				case (EIF_CHARACTER_8) 'a':
				case (EIF_CHARACTER_8) 'b':
				case (EIF_CHARACTER_8) 'c':
				case (EIF_CHARACTER_8) 'd':
				case (EIF_CHARACTER_8) 'e':
				case (EIF_CHARACTER_8) 'f':
					break;
				default:
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					break;
			}
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {JSON_PARSER}.false_id */

EIF_REFERENCE F88_1262 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (1262,RTMS_EX_H("false",5,1635280741));
}

/* {JSON_PARSER}.true_id */

EIF_REFERENCE F88_1263 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (1263,RTMS_EX_H("true",4,1953658213));
}

/* {JSON_PARSER}.null_id */

EIF_REFERENCE F88_1264 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (1264,RTMS_EX_H("null",4,1853189228));
}

void EIF_Minit76 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
