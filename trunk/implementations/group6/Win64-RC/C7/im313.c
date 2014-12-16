/*
 * Code for class IMMUTABLE_STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "im313.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IMMUTABLE_STRING_8}.make_from_area_and_bounds */
void F738_5773 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {IMMUTABLE_STRING_8}.copy */
void F738_5775 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

/* {IMMUTABLE_STRING_8}.item */
EIF_CHARACTER_8 F738_5776 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tc2;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.character_32_item */
EIF_CHARACTER_32 F738_5778 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	Result = (EIF_CHARACTER_32) tc1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.code */
EIF_NATURAL_32 F738_5779 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	Result = (EIF_NATURAL_32) tc1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.plus */
EIF_REFERENCE F738_5781 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLR(6,loc2);
	RTLR(7,loc6);
	RTLR(8,Result);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	{
		static EIF_TYPE_INDEX typarr0[] = {803,690,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_8 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr1 + ti4_3, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)ti4_4);
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + ti4_4);
	/* END INLINED CODE */
	;
	loc7 = arg1;
	loc7 = RTRV(eif_non_attached_type(736),loc7);
	if (EIF_TEST(loc7)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc7) + O4734[Dtype(loc7)-736]);
		ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4735[Dtype(loc7)-736])(RTCV(loc7));
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		ti4_5 = *(EIF_INTEGER_32 *)(RTCV(loc7) + O4737[Dtype(loc7)-736]);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)loc1 + (ti4_4),(EIF_CHARACTER_8 *)tr1 + ti4_3, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ti4_4 + (EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
	} else {
		loc8 = arg1;
		loc8 = RTRV(eif_non_attached_type(734),loc8);
		if (EIF_TEST(loc8)) {
			ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc8) + O4699[Dtype(loc8)-734]);
			{
				static EIF_TYPE_INDEX typarr0[] = {803,690,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			loc2 = (EIF_REFERENCE) tr1;
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4697[Dtype(loc8)-734])(RTCV(loc8));
			loc6 = *(EIF_REFERENCE *)(RTCV(loc8) + O4696[Dtype(loc8)-734]);
			loc5 = *(EIF_INTEGER_32 *)(RTCV(loc8) + O4699[Dtype(loc8)-734]);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				if ((EIF_BOOLEAN) (loc3 > loc5)) break;
				tw1 = F809_6352(RTCV(loc6), loc4);
				tc1 = (EIF_CHARACTER_8) tw1;
				F804_6369(RTCV(loc2), tc1);
				loc3++;
				loc4++;
			}
			F804_6369(RTCV(loc2), (EIF_CHARACTER_8) '\000');
			ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_CHARACTER_8 *)loc1 + (ti4_4),(EIF_CHARACTER_8 *)loc2 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 2L)));
			RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ti4_4 + (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 2L)));
			/* END INLINED CODE */
			;
		}
	}
	tr1 = RTLNSMART(dftype);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4616[Dtype(arg1)-734])(RTCV(arg1));
	F738_5773(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_4 + ti4_5));
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.as_lower */
EIF_REFERENCE F738_5783 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {803,690,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_8 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr1 + ti4_2, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
	/* END INLINED CODE */
	;
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	F737_5767(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
	tr1 = RTLNSMART(dftype);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	F738_5773(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), ti4_2);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_8}.as_upper */
EIF_REFERENCE F738_5784 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {803,690,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_8 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr1 + ti4_2, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
	/* END INLINED CODE */
	;
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	F737_5768(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
	tr1 = RTLNSMART(dftype);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	F738_5773(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), ti4_2);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_8}.substring */
EIF_REFERENCE F738_5785 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
		{
			static EIF_TYPE_INDEX typarr0[] = {803,690,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr1 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg1) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + loc2);
		/* END INLINED CODE */
		;
		F804_6369(RTCV(loc1), (EIF_CHARACTER_8) '\000');
		tr1 = RTLNSMART(dftype);
		F738_5773(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) RTOSCF(5790,F738_5790,(Current));
	}/* NOTREACHED */
	
}

/* {IMMUTABLE_STRING_8}.is_empty */
EIF_BOOLEAN F738_5787 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ((EIF_INTEGER_32) 0L));
}

/* {IMMUTABLE_STRING_8}.new_string */
EIF_REFERENCE F738_5789 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F737_5723(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_8}.empty_string */
static EIF_REFERENCE F738_5790_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (5790);
#define Result RTOSR(5790)
	RTOC_NEW(Result);
	tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (5790);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F738_5790 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5790,F738_5790_body,(Current));
}

/* {IMMUTABLE_STRING_8}.area_lower */
EIF_INTEGER_32 F738_5791 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
}


void EIF_Minit313 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
