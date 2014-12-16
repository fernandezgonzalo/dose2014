/*
 * Code for class JSON_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js344.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_STRING}.make_json */
void F827_6557 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F827_6573(Current, arg1);
	F827_6559(Current, tr1);
	RTLE;
}

/* {JSON_STRING}.make_with_escaped_json */
void F827_6559 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F733_5610(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {JSON_STRING}.item */
EIF_REFERENCE F827_6560 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {JSON_STRING}.unescaped_string_8 */
EIF_REFERENCE F827_6561 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	F737_5723(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F827_6564(Current, Result);
	RTLE;
	return Result;
}

/* {JSON_STRING}.representation */
EIF_REFERENCE F827_6563 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
	F737_5723(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
	Result = (EIF_REFERENCE) tr1;
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) '\"');
	F741_5938(RTCV(Result), *(EIF_REFERENCE *)(Current));
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) '\"');
	RTLE;
	return Result;
}

/* {JSON_STRING}.unescape_to_string_8 */
void F827_6564 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc3 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		loc4 = F741_5903(RTCV(loc1), loc2);
		if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\\')) {
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				tc1 = F741_5903(RTCV(loc1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				switch (tc1) {
					case (EIF_CHARACTER_8) '\\':
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\\');
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) '\"':
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\"');
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'b':
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\010');
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'f':
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\014');
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'n':
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\012');
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'r':
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\015');
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 't':
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\011');
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'u':
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\\');
						loc2++;
						break;
					default:
						F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\\');
						loc2++;
						break;
				}
			} else {
				F741_5952(RTCV(arg1), (EIF_CHARACTER_8) '\\');
				loc2++;
			}
		} else {
			F741_5952(RTCV(arg1), loc4);
			loc2++;
		}
	}
	RTLE;
}

/* {JSON_STRING}.is_equal */
EIF_BOOLEAN F827_6567 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
	Result = F737_5748(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {JSON_STRING}.hash_code */
EIF_INTEGER_32 F827_6569 (EIF_REFERENCE Current)
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
	Result = F733_5563(RTCV(tr1));
	RTLE;
	return Result;
}

/* {JSON_STRING}.escaped_json_string */
EIF_REFERENCE F827_6573 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), (EIF_INTEGER_32) (loc2 + (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 10L))));
	Result = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		loc3 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg1)-578])(RTCV(arg1), loc1));
		switch (loc3) {
			case (EIF_CHARACTER_8) '\"':
				tr1 = RTMS_EX_H("\\\"",2,23586);
				F741_5941(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\\':
				tr1 = RTMS_EX_H("\\\\",2,23644);
				F741_5941(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\010':
				tr1 = RTMS_EX_H("\\b",2,23650);
				F741_5941(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\014':
				tr1 = RTMS_EX_H("\\f",2,23654);
				F741_5941(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\012':
				tr1 = RTMS_EX_H("\\n",2,23662);
				F741_5941(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\015':
				tr1 = RTMS_EX_H("\\r",2,23666);
				F741_5941(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\011':
				tr1 = RTMS_EX_H("\\t",2,23668);
				F741_5941(RTCV(Result), tr1);
				break;
			default:
				F741_5953(RTCV(Result), loc3);
				break;
		}
		loc1++;
	}
	RTLE;
	return Result;
}

void EIF_Minit344 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
