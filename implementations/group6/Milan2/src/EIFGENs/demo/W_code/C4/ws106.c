/*
 * Code for class WSF_MIME_HANDLER_HELPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F106_1644(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F106_1645(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F106_1646(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F106_1647(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F106_1648(EIF_REFERENCE);
extern void EIF_Minit106(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_MIME_HANDLER_HELPER}.full_input_data */
EIF_TYPED_VALUE F106_1644 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "full_input_data";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 105, Current, 0, 1, 1613);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(105, Current, 1613);
	if (arg1) {
		RTCC(arg1, 105, l_feature_name, 1, 322);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800013A, 0,0); /* Result */
	
	tr1 = RTLN(314);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4556, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5018, "read_input_data_into", arg1))(arg1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg1
}

/* {WSF_MIME_HANDLER_HELPER}.add_string_value_to_table */
void F106_1645 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "add_string_value_to_table";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,ur3);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 105, Current, 0, 3, 1614);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(105, Current, 1614);
	if (arg1) {
		RTCC(arg1, 105, l_feature_name, 1, 310);
	}
	if (arg2) {
		RTCC(arg2, 105, l_feature_name, 2, 310);
	}
	if (arg3) {
		{
			static EIF_TYPE_INDEX typarr0[] = {462,332,306,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg3, 105, l_feature_name, 3, typres0);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg1);
	ur3 = RTCCL(arg2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1538, dtype))(Current, ur2x, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr1);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1537, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_MIME_HANDLER_HELPER}.add_value_to_table */
void F106_1646 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "add_value_to_table";
	RTEX;
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
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(21);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,loc3);
	RTLR(9,loc5);
	RTLR(10,loc8);
	RTLR(11,loc10);
	RTLR(12,loc4);
	RTLR(13,loc2);
	RTLR(14,loc9);
	RTLR(15,loc11);
	RTLR(16,ur2);
	RTLR(17,loc12);
	RTLR(18,loc13);
	RTLR(19,tr3);
	RTLR(20,tr4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	
	RTEAA(l_feature_name, 105, Current, 13, 3, 1615);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(105, Current, 1615);
	if (arg1) {
		RTCC(arg1, 105, l_feature_name, 1, 310);
	}
	if (arg2) {
		RTCC(arg2, 105, l_feature_name, 2, 332);
	}
	if (arg3) {
		{
			static EIF_TYPE_INDEX typarr0[] = {462,332,306,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg3, 105, l_feature_name, 3, typres0);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000139, 0, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1539, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1532, "decoded_string", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
	
	uw1 = (EIF_CHARACTER_32) 91U;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4560, "index_of", loc1))(loc1, uw1x, ui4_1x)).it_i4);
	loc6 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
		
		uw1 = (EIF_CHARACTER_32) 93U;
		ui4_1 = (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4560, "index_of", loc1))(loc1, uw1x, ui4_1x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc7 > loc6)) {
			RTHOOK(6);
			RTDBGAL(Current, 3, 0xF8000139, 0, 0); /* loc3 */
			
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4636, "substring", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			RTDBGAL(Current, 5, 0xF8000139, 0, 0); /* loc5 */
			
			ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4678, "count", loc1));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4636, "substring", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4732, "left_adjust", loc5))(loc5);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4733, "right_adjust", loc5))(loc5);
			RTHOOK(10);
			RTDBGAL(Current, 8, 0xF800014E, 0, 0); /* loc8 */
			
			tr1 = RTLN(334);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4612, "as_string_8", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5267, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(10,1);
			loc8 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5278, "name", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3929, "has_key", arg3))(arg3, ur1x)).it_b);
			if (tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3927, "found_item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc10 = RTCCL(tr1);
				loc10 = RTRV(eif_non_attached_type(334),loc10);
				tb1 = EIF_TEST(loc10);
			}
			if (tb1) {
				RTHOOK(12);
				RTDBGAL(Current, 8, 0xF800014E, 0, 0); /* loc8 */
				
				loc8 = (EIF_REFERENCE) RTCCL(loc10);
			}
			RTHOOK(13);
			RTDBGAL(Current, 4, 0xF8000139, 0, 0); /* loc4 */
			
			ui4_1 = (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
			ui4_2 = (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4636, "substring", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(14);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4732, "left_adjust", loc4))(loc4);
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4733, "right_adjust", loc4))(loc4);
			RTHOOK(16);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4573, "is_empty", loc4))(loc4)).it_b);
			if (tb1) {
				RTHOOK(17);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5272, "count", loc8))(loc8)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4762, "append_integer", loc4))(loc4, ui4_1x);
			}
			RTHOOK(18);
			RTDBGAL(Current, 2, 0xF800014C, 0, 0); /* loc2 */
			
			loc2 = (EIF_REFERENCE) RTCCL(loc8);
			RTHOOK(19);
			uw1 = (EIF_CHARACTER_32) 91U;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4772, "append_character", loc3))(loc3, uw1x);
			RTHOOK(20);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4759, "append", loc3))(loc3, ur1x);
			RTHOOK(21);
			uw1 = (EIF_CHARACTER_32) 93U;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4772, "append_character", loc3))(loc3, uw1x);
			for (;;) {
				RTHOOK(22);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4573, "is_empty", loc5))(loc5)).it_b);
				if (tb1) break;
				RTHOOK(23);
				RTDBGAL(Current, 9, 0xF800014E, 0, 0); /* loc9 */
				
				loc9 = (EIF_REFERENCE) RTCCL(loc8);
				RTHOOK(24);
				RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
				
				uw1 = (EIF_CHARACTER_32) 91U;
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4560, "index_of", loc5))(loc5, uw1x, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(25);
				if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(26);
					RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
					
					uw1 = (EIF_CHARACTER_32) 93U;
					ui4_1 = (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4560, "index_of", loc5))(loc5, uw1x, ui4_1x)).it_i4);
					loc7 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(27);
					if ((EIF_BOOLEAN) (loc7 > loc6)) {
						RTHOOK(28);
						ur1 = RTCCL(loc4);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5271, "value", loc9))(loc9, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc11 = RTCCL(tr1);
						loc11 = RTRV(eif_non_attached_type(334),loc11);
						if (EIF_TEST(loc11)) {
							RTHOOK(29);
							RTDBGAL(Current, 8, 0xF800014E, 0, 0); /* loc8 */
							
							loc8 = (EIF_REFERENCE) RTCCL(loc11);
						} else {
							RTHOOK(30);
							RTDBGAL(Current, 8, 0xF800014E, 0, 0); /* loc8 */
							
							tr1 = RTLN(334);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4612, "as_string_8", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5267, Dtype(tr1)))(tr1, ur1x);
							RTNHOOK(30,1);
							loc8 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(31);
							ur1 = RTCCL(loc8);
							ur2 = RTCCL(loc4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5276, "add_value", loc9))(loc9, ur1x, ur2x);
						}
						RTHOOK(32);
						RTDBGAL(Current, 4, 0xF8000139, 0, 0); /* loc4 */
						
						ui4_1 = (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
						ui4_2 = (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4636, "substring", loc5))(loc5, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc4 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(33);
						RTDBGAL(Current, 5, 0xF8000139, 0, 0); /* loc5 */
						
						ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
						ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(4678, "count", loc5));
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4636, "substring", loc5))(loc5, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc5 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(34);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4732, "left_adjust", loc5))(loc5);
						RTHOOK(35);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4733, "right_adjust", loc5))(loc5);
						RTHOOK(36);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4573, "is_empty", loc4))(loc4)).it_b);
						if (tb2) {
							RTHOOK(37);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5272, "count", loc8))(loc8)).it_i4);
							ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4762, "append_integer", loc4))(loc4, ui4_1x);
						}
						RTHOOK(38);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '[';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4772, "append_character", loc3))(loc3, uw1x);
						RTHOOK(39);
						ur1 = RTCCL(loc4);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4759, "append", loc3))(loc3, ur1x);
						RTHOOK(40);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ']';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4772, "append_character", loc3))(loc3, uw1x);
					}
				} else {
					RTHOOK(41);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2249, "wipe_out", loc5))(loc5);
				}
			}
			RTHOOK(42);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5253, "change_name", arg2))(arg2, ur1x);
			RTHOOK(43);
			ur1 = RTCCL(arg2);
			ur2 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5276, "add_value", loc8))(loc8, ur1x, ur2x);
		}
	}
	RTHOOK(44);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(45);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4614, "as_readable_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5253, "change_name", arg2))(arg2, ur1x);
		RTHOOK(46);
		RTDBGAL(Current, 2, 0xF800014C, 0, 0); /* loc2 */
		
		loc2 = (EIF_REFERENCE) RTCCL(arg2);
	}
	RTHOOK(47);
	tb2 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5250, "name", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3929, "has_key", arg3))(arg3, ur1x)).it_b);
	if (tb3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3927, "found_item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc12 = RTCCL(tr1);
		tb2 = EIF_TEST(loc12);
	}
	if (tb2) {
		RTHOOK(48);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
		} else {
			RTHOOK(49);
			loc13 = RTCCL(loc12);
			loc13 = RTRV(eif_non_attached_type(336),loc13);
			if (EIF_TEST(loc13)) {
				RTHOOK(50);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5293, "add_value", loc13))(loc13, ur1x);
			} else {
				RTHOOK(51);
				tr1 = RTLN(336);
				ui4_1 = ((EIF_INTEGER_32) 2L);
				{
					static EIF_TYPE_INDEX typarr0[] = {416,332,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
					RT_SPECIAL_COUNT(tr3) = 2L;
					memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
				}
				tr4 = RTCCL(loc12);
				*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) tr4;
				RTAR(tr3,tr4);
				tr4 = RTCCL(loc2);
				*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
				RTAR(tr3,tr4);
				tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(5196, Dtype(tr3)))(tr3).it_r;
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5287, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(51,1);
				ur1 = RTCCL(tr1);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5250, "name", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur2 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2256, "force", arg3))(arg3, ur1x, ur2x);
				if (RTAL & CK_CHECK) {
					RTHOOK(52);
					RTCT("replaced", EX_CHECK);
					tb2 = '\0';
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3942, "found", arg3))(arg3)).it_b);
					if (tb3) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3927, "found_item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tb2 = RTEQ(tr1, loc12);
					}
					if (tb2) {
						RTCK;
					} else {
						RTCF;
					}
				}
			}
		}
	} else {
		RTHOOK(53);
		ur1 = RTCCL(loc2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5250, "name", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2256, "force", arg3))(arg3, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(54);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uw1
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_MIME_HANDLER_HELPER}.new_string_value */
EIF_TYPED_VALUE F106_1647 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_string_value";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Result);
	RTLR(6,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 105, Current, 0, 2, 1616);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(105, Current, 1616);
	if (arg1) {
		RTCC(arg1, 105, l_feature_name, 1, 310);
	}
	if (arg2) {
		RTCC(arg2, 105, l_feature_name, 2, 310);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800014F, 0,0); /* Result */
	
	tr1 = RTLN(335);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5279, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {WSF_MIME_HANDLER_HELPER}.url_encoder */
RTOID (F106_1648)
EIF_TYPED_VALUE F106_1648 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "url_encoder";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F106_1648);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 105, Current, 0, 0, 1617);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(105, Current, 1617);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E6, 0,0); /* Result */
	
	tr1 = RTLN(231);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit106 (void)
{
	GTCX
	RTOTS (1648,F106_1648)
}


#ifdef __cplusplus
}
#endif
