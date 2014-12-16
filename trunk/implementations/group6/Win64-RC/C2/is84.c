/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is84.h"
#include "eif_built_in.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F96_1361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOSCF(1380,F96_1380,(Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F96_1362 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	tb1 = F166_2136(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F96_1361(Current);
			F166_2140(RTCV(arg1), tr1);
		}
		F96_1373(Current, arg1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F432_2750(RTCV(loc3));
		} else {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1946[Dtype(arg1)-165])(RTCV(arg1));
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F96_1368 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOSCF(1375,F96_1375,(Current));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = F582_4640(RTCV(tr1), ti4_1);
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F96_1370 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNTY(194);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			tr1 = RTLNTY(185);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			tr1 = RTLNTY(203);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNTY(202);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNTY(171);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNTY(201);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNTY(200);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNTY(193);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNTY(192);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNTY(205);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNTY(204);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNTY(175);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNTY(182);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			tr1 = RTLNTY(179);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			tr1 = RTLNTY(185);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			tr1 = RTLNTY(178);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNTY(198);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNTY(186);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNTY(195);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNTY(177);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNTY(190);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			tr1 = RTLNTY(174);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNTY(189);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNTY(166);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNTY(182);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			tr1 = RTLNTY(197);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNTY(190);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			tr1 = RTLNTY(173);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNTY(200);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNTY(181);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNTY(188);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F96_1371 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc2);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNS(194, 194, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(1381,F96_1381,(Current))));
			F186_2202(RTCV(loc3), ((EIF_INTEGER_32) 2L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			tr1 = RTLNS(203, 203, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNS(202, 202, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNS(171, 171, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNS(201, 201, _OBJSIZ_5_2_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNS(200, 200, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNS(193, 193, _OBJSIZ_7_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNS(192, 192, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNS(205, 205, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNS(204, 204, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNS(175, 175, _OBJSIZ_5_1_0_2_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNS(182, 182, _OBJSIZ_5_1_0_2_0_0_0_0_);
			loc1 = (EIF_REFERENCE) tr1;
			F183_2198(RTCV(loc1), ((EIF_INTEGER_32) 13L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			tr1 = RTLNS(179, 179, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(1381,F96_1381,(Current))));
			F186_2202(RTCV(loc3), ((EIF_INTEGER_32) 15L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			tr1 = RTLNS(178, 178, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNS(198, 198, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNS(186, 186, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNS(195, 195, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNS(177, 177, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNS(190, 190, _OBJSIZ_5_1_0_3_0_0_0_0_);
			loc2 = (EIF_REFERENCE) tr1;
			F191_2214(RTCV(loc2), ((EIF_INTEGER_32) 21L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			tr1 = RTLNS(174, 174, _OBJSIZ_5_1_0_2_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNS(189, 189, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNS(166, 166, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNS(182, 182, _OBJSIZ_5_1_0_2_0_0_0_0_);
			loc1 = (EIF_REFERENCE) tr1;
			F183_2198(RTCV(loc1), ((EIF_INTEGER_32) 25L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			tr1 = RTLNS(197, 197, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNS(190, 190, _OBJSIZ_5_1_0_3_0_0_0_0_);
			loc2 = (EIF_REFERENCE) tr1;
			F191_2214(RTCV(loc2), ((EIF_INTEGER_32) 27L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			tr1 = RTLNS(173, 173, _OBJSIZ_6_1_0_3_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNS(200, 200, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNS(181, 181, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNS(188, 188, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F96_1372 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOSCF(1379,F96_1379,(Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F96_1373 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOSCF(1380,F96_1380,(Current));
	F98_1422(RTCV(tr1), arg1);
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F96_1374 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	
	RTGC;
	tr1 = RTOSCF(1379,F96_1379,(Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,11,684,833,833,833,740,740,740,740,740,740,833,693,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	F98_1422(RTCV(tr1), tr2);
	if (arg2) {
		tr1 = F96_1382(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F96_1373(Current, loc1);
		}
	} else {
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = F96_1361(Current);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F166_2147(RTCV(loc2), arg10);
		F166_2141(RTCV(loc2), arg6);
		F166_2145(RTCV(loc2), arg7);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F96_1375_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1375);
#define Result RTOSR(1375)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {581,833,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 581, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F582_4634(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1375);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_1375 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1375,F96_1375_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F96_1376_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1376);
#define Result RTOSR(1376)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {581,833,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 581, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F582_4634(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY(194);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F582_4679(RTCV(Result), loc1, loc1);
	RTOSE (1376);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_1376 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1376,F96_1376_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F96_1377_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1377);
#define Result RTOSR(1377)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {581,833,833,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 581, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F582_4634(RTCV(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY(193);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F582_4679(RTCV(Result), loc1, loc1);
	tr1 = RTLNTY(181);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F582_4679(RTCV(Result), loc1, loc1);
	RTOSE (1377);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_1377 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1377,F96_1377_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F96_1378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F96_1370(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_BOOLEAN) F96_1368(Current, loc1);
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F96_1379_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1379);
#define Result RTOSR(1379)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {97,0xFFF9,11,684,833,833,833,740,740,740,740,740,740,833,693,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 97, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F98_1422(RTCV(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1379);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_1379 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1379,F96_1379_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F96_1380_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1380);
#define Result RTOSR(1380)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {97,165,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 97, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F98_1422(RTCV(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1380);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_1380 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1380,F96_1380_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F96_1381_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTEV;
	RTGC;
	RTOSP (1381);
#define Result RTOSR(1381)
	RTOC_NEW(Result);
	tr1 = RTLNS(185, 185, _OBJSIZ_5_1_0_2_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 4096L));
	F166_2147(RTCV(loc1), tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {97,185,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 97, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F98_1422(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1381);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_1381 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1381,F96_1381_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F96_1382 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	
	RTGC;
	tb1 = '\0';
	tr1 = F96_1372(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(RTCV(loc2),1);
		tr1 = F96_1371(Current, ti4_1);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		loc4 = loc3;
		loc4 = RTRV(eif_non_attached_type(193),loc4);
		if (EIF_TEST(loc4)) {
			loc1 = F96_1361(Current);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F166_2140(RTCV(loc3), loc1);
			}
			tr1 = eif_boxed_item(loc2,7);
			F194_2222(RTCV(loc4), tr1);
			tr1 = eif_boxed_item(loc2,8);
			F194_2223(RTCV(loc4), tr1);
		} else {
			loc5 = loc3;
			loc5 = RTRV(eif_non_attached_type(181),loc5);
			if (EIF_TEST(loc5)) {
				loc1 = F96_1361(Current);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					F166_2140(RTCV(loc3), loc1);
				}
			} else {
				loc6 = loc3;
				loc6 = RTRV(eif_non_attached_type(201),loc6);
				if (EIF_TEST(loc6)) {
					tb1 = eif_boolean_item(RTCV(loc2),11);
					F202_2235(RTCV(loc6), tb1);
				} else {
					loc7 = loc3;
					loc7 = RTRV(eif_non_attached_type(175),loc7);
					if (EIF_TEST(loc7)) {
						ti4_1 = eif_integer_32_item(RTCV(loc2),2);
						F176_2187(RTCV(loc7), ti4_1);
					} else {
						loc8 = loc3;
						loc8 = RTRV(eif_non_attached_type(190),loc8);
						if (EIF_TEST(loc8)) {
							ti4_1 = eif_integer_32_item(RTCV(loc2),3);
							F191_2213(RTCV(loc8), ti4_1);
						} else {
							loc9 = loc3;
							loc9 = RTRV(eif_non_attached_type(174),loc9);
							if (EIF_TEST(loc9)) {
								ti4_1 = eif_integer_32_item(RTCV(loc2),3);
								F175_2183(RTCV(loc9), ti4_1);
							} else {
								loc10 = loc3;
								loc10 = RTRV(eif_non_attached_type(173),loc10);
								if (EIF_TEST(loc10)) {
									ti4_1 = eif_integer_32_item(RTCV(loc2),2);
									F174_2165(RTCV(loc10), ti4_1);
									tr1 = eif_boxed_item(loc2,4);
									F174_2170(RTCV(loc10), tr1);
								}
							}
						}
					}
				}
				if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
					loc1 = F96_1361(Current);
				}
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					loc1 = (EIF_REFERENCE) loc3;
				}
				F166_2140(RTCV(loc3), loc1);
			}
		}
		tr1 = eif_boxed_item(loc2,9);
		F166_2147(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,4);
		F166_2133(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,5);
		F166_2141(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,6);
		F166_2145(RTCV(loc3), tr1);
		RTLE;
		return (EIF_REFERENCE) loc3;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F96_1383 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc3);
	
	RTGC;
	tb1 = F166_2136(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F166_2126(RTCV(arg1));
			tr2 = F96_1361(Current);
			F166_2140(RTCV(tr1), tr2);
		}
		F96_1373(Current, arg1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F432_2750(RTCV(loc3));
		} else {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1946[Dtype(arg1)-165])(RTCV(arg1));
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F96_1384 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	
	RTGC;
	loc1 = RTOSCF(1375,F96_1375,(Current));
	loc1 = RTOSCF(1376,F96_1376,(Current));
	loc1 = RTOSCF(1377,F96_1377,(Current));
	loc2 = RTOSCF(1379,F96_1379,(Current));
	loc3 = RTOSCF(1380,F96_1380,(Current));
	loc4 = RTOSCF(1381,F96_1381,(Current));
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F96_1385 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(1381,F96_1381,(Current))));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F166_2133(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F96_1386 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, arg1, arg2, arg3);
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F96_1387 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	return Result;
}

void EIF_Minit84 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
