/*
 * Code for class WSF_FILE_SYSTEM_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws222.h"
#include "eif_built_in.h"
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

/* {WSF_FILE_SYSTEM_HANDLER}.make_with_path */
void F437_2807 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = F747_6074(RTCV(arg1));
	if (tb1) {
		tr1 = F495_3328(RTCV(RTOSCF(2695,F427_2695,(Current))));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.make */
void F437_2809 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(746, 746, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F747_6066(RTCV(tr1), arg1);
	F437_2807(Current, tr1);
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.make_hidden */
void F437_2810 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F437_2809(Current, arg1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.mapping_documentation */
EIF_REFERENCE F437_2812 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(25, 25, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F26_356(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	F26_362(RTCV(Result), *(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_));
	tr1 = RTMS_EX_H("File service",12,303376229);
	F26_363(RTCV(Result), tr1);
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.document_root */
EIF_REFERENCE F437_2813 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_FILE_SYSTEM_HANDLER}.index_ignores_function */
EIF_REFERENCE F437_2816 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_FILE_SYSTEM_HANDLER}.directory_index */
EIF_REFERENCE F437_2817 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_FILE_SYSTEM_HANDLER}.not_found_handler */
EIF_REFERENCE F437_2818 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_FILE_SYSTEM_HANDLER}.access_denied_handler */
EIF_REFERENCE F437_2819 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_FILE_SYSTEM_HANDLER}.set_directory_index */
void F437_2823 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(arg1 == NULL)) {
		tb2 = F281_2518(RTCV(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	} else {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.ignoring_index_entry */
EIF_BOOLEAN F437_2828 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1);
		;
		tb1 = tb1;
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		loc1 = F747_6082(RTCV(arg1));
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			loc1 = (EIF_REFERENCE) arg1;
		}
		tb1 = F747_6072(RTCV(loc1));
		if (tb1) {
		} else {
			tb1 = F747_6071(RTCV(loc1));
			if (tb1) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc2 = F747_6105(RTCV(loc1));
				Result = '\01';
				tb1 = '\01';
				tr1 = RTMS32_EX_H(".\000\000\000",1,46);
				tb2 = F735_5684(RTCV(loc2), tr1);
				if (!tb2) {
					tr1 = RTMS32_EX_H("~\000\000\000",1,126);
					tb2 = F735_5685(RTCV(loc2), tr1);
					tb1 = tb2;
				}
				if (!tb1) {
					tr1 = RTMS32_EX_H(".\000\000\000s\000\000\000w\000\000\000p\000\000\000",4,779319152);
					tb1 = F735_5685(RTCV(loc2), tr1);
					Result = tb1;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.execute */
void F437_2829 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,arg3);
	RTLR(6,Current);
	
	RTGC;
	tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_7_);
	F735_5652(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F733_5601(RTCV(loc1), arg1);
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
		F740_5868(RTCV(loc1), ti4_1);
	} else {
	}
	F437_2831(Current, loc1, arg2, arg3);
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.execute_starts_with */
void F437_2830 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	F437_2829(Current, arg1, arg2, arg3);
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_uri */
void F437_2831 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,arg2);
	RTLR(6,arg3);
	
	RTGC;
	loc2 = F437_2839(Current, arg1);
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F518_3986(RTCV(tr1), loc2);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F518_4016(RTCV(loc1));
	if (tb1) {
		tb1 = F518_4019(RTCV(loc1));
		if (tb1) {
			tb1 = F518_4025(RTCV(loc1));
			if (tb1) {
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_)) {
					tr1 = F733_5609(RTCV(arg1));
					F437_2837(Current, tr1, arg2, arg3);
				} else {
					tr1 = F749_6245(RTCV(arg2));
					F437_2832(Current, tr1, loc2, arg2, arg3);
				}
			} else {
				F437_2833(Current, loc1, arg2, arg3);
			}
		} else {
			tr1 = F733_5609(RTCV(arg1));
			F437_2836(Current, tr1, arg2, arg3);
		}
	} else {
		tr1 = F733_5609(RTCV(arg1));
		F437_2835(Current, tr1, arg2, arg3);
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_index */
void F437_2832 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
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
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(17);
	RTLR(0,loc4);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,loc11);
	RTLR(4,Current);
	RTLR(5,arg3);
	RTLR(6,arg4);
	RTLR(7,loc2);
	RTLR(8,arg1);
	RTLR(9,loc3);
	RTLR(10,loc5);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLR(13,loc9);
	RTLR(14,tr2);
	RTLR(15,loc8);
	RTLR(16,loc1);
	
	RTGC;
	tr1 = RTLNS(507, 507, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F508_3606(RTCV(tr1), arg2);
	loc4 = (EIF_REFERENCE) tr1;
	F508_3614(RTCV(loc4));
	tr1 = F437_2838(Current, loc4);
	loc11 = tr1;
	if (EIF_TEST(loc11)) {
		F437_2833(Current, loc11, arg3, arg4);
	} else {
		loc2 = F733_5610(RTCV(arg1));
		tb1 = '\0';
		tb2 = F286_2518(RTCV(loc2));
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
			tc1 = F741_5903(RTCV(loc2), ti4_1);
			tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '/');
		}
		if (tb1) {
			F741_5952(RTCV(loc2), (EIF_CHARACTER_8) '/');
		}
		loc3 = RTMS_EX_H("<html>\012\011<head>\012\011\011<title>Index of $URI</title>\012\011\011<style>\012\011\011\011td { padding-left: 10px;}\012\011\011</style>\012\011</head>\012\011<body>\012\011\011<h1>Index of $URI</h1>\012\011\011<table>\012\011\011<tr><th/><th>Name</th><th>Last modified</th><th>Size</th></tr>\012\011\011<tr><th colspan=\"4\"><hr></th></tr>",249,1602176062);
		tr1 = RTMS_EX_H("$URI",4,609571401);
		F741_5915(RTCV(loc3), tr1, loc2);
		loc5 = F508_3620(RTCV(loc4));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[Dtype(loc5)-395])(RTCV(loc5));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2245[Dtype(loc5)-395])(RTCV(loc5));
			if (tb1) break;
			loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2279[Dtype(loc5)-395])(RTCV(loc5));
			if (F437_2828(Current, loc6)) {
			} else {
				loc7 = F747_6105(RTCV(loc6));
				tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
				tr2 = F747_6094(RTCV(arg2), loc6);
				F518_3986(RTCV(tr1), tr2);
				loc9 = (EIF_REFERENCE) tr1;
				tb2 = '\0';
				tb3 = F518_4016(RTCV(loc9));
				if (tb3) {
					tb3 = F518_4025(RTCV(loc9));
					tb2 = tb3;
				}
				if (tb2) {
					loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				tr1 = RTMS_EX_H("<tr><td>",8,1655450942);
				F741_5938(RTCV(loc3), tr1);
				if (loc10) {
					tr1 = RTMS_EX_H("[dir]",5,1685331037);
					F741_5938(RTCV(loc3), tr1);
				} else {
					tr1 = RTMS_EX_H("&nbsp;",6,1727288379);
					F741_5938(RTCV(loc3), tr1);
				}
				tr1 = RTMS_EX_H("</td>",5,796617790);
				F741_5938(RTCV(loc3), tr1);
				tr1 = RTMS_EX_H("<td><a href=\"",13,343985954);
				tr1 = F741_5940(RTCV(tr1), loc2);
				F741_5938(RTCV(loc3), tr1);
				tr1 = RTOSCF(2718,F429_2718,(Current));
				F126_1639(RTCV(tr1), loc7, loc3);
				tr1 = RTMS_EX_H("\">",2,8766);
				F741_5938(RTCV(loc3), tr1);
				tb2 = F747_6072(RTCV(loc6));
				if (tb2) {
					tr1 = RTMS_EX_H("[Parent Directory] ..",21,1401102894);
					F741_5938(RTCV(loc3), tr1);
				} else {
					tr1 = RTOSCF(2806,F436_2806,(Current));
					tr1 = F464_3051(RTCV(tr1), loc7);
					F741_5938(RTCV(loc3), tr1);
				}
				if (loc10) {
					tr1 = RTMS_EX_H("/",1,47);
					F741_5938(RTCV(loc3), tr1);
				}
				tr1 = RTMS_EX_H("</td>",5,796617790);
				F741_5938(RTCV(loc3), tr1);
				tr1 = RTMS_EX_H("<td>",4,1014260798);
				F741_5938(RTCV(loc3), tr1);
				tb2 = F518_4016(RTCV(loc9));
				if (tb2) {
					tr1 = RTLNS(747, 747, _OBJSIZ_2_1_0_0_0_0_1_0_);
					tr2 = F437_2846(Current, loc9);
					F748_6128(RTCV(tr1), tr2);
					loc8 = (EIF_REFERENCE) tr1;
					F748_6142(RTCV(loc8), loc3);
				}
				tr1 = RTMS_EX_H("</td>",5,796617790);
				F741_5938(RTCV(loc3), tr1);
				tr1 = RTMS_EX_H("<td>",4,1014260798);
				F741_5938(RTCV(loc3), tr1);
				tb2 = '\0';
				if ((EIF_BOOLEAN) !loc10) {
					tb3 = F518_4016(RTCV(loc9));
					tb2 = tb3;
				}
				if (tb2) {
					ti4_1 = F437_2845(Current, loc9);
					F741_5942(RTCV(loc3), ti4_1);
				}
				tr1 = RTMS_EX_H("</td>",5,796617790);
				F741_5938(RTCV(loc3), tr1);
				tr1 = RTMS_EX_H("</tr>",5,796621374);
				F741_5938(RTCV(loc3), tr1);
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[Dtype(loc5)-395])(RTCV(loc5));
		}
		tr1 = RTMS_EX_H("\011\011<tr><th colspan=\"4\"><hr></th></tr>\011\011\011\011\012\011\011</table>\012\011</body>\012</html>",68,1386493502);
		F741_5938(RTCV(loc3), tr1);
		tr1 = RTLNS(680, 680, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F681_5142(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		F541_4527(RTCV(loc1));
		F94_1320(RTCV(arg4), ((EIF_INTEGER_32) 200L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
		F541_4517(RTCV(loc1), ti4_1);
		F94_1334(RTCV(arg4), loc1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg3) + _REFACS_9_);
		tr2 = RTOSCF(1951,F158_1951,(Current));
		tb2 = F737_5748(RTCV(tr1), tr2);
		if ((EIF_BOOLEAN) !tb2) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg4)-93])(RTCV(arg4), loc3);
		}
		F94_1344(RTCV(arg4));
	}
	F508_3615(RTCV(loc4));
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_file */
void F437_2833 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(14);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc5);
	RTLR(6,arg2);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,arg3);
	RTLR(10,loc3);
	RTLR(11,tr2);
	RTLR(12,loc4);
	RTLR(13,tr3);
	
	RTGC;
	tr1 = F518_3993(RTCV(arg1));
	tr1 = F747_6105(RTCV(tr1));
	loc1 = F437_2842(Current, tr1);
	tr1 = RTOSCF(2844,F437_2844,(Current));
	loc2 = F864_7591(RTCV(tr1), loc1);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = RTOSCF(2032,F162_2032,(Current));
	}
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = RTMS_EX_H("HTTP_IF_MODIFIED_SINCE",22,2066272837);
	tr1 = F749_6201(RTCV(arg2), tr1);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		tr1 = F733_5609(RTCV(loc5));
		tr1 = F437_2847(Current, tr1);
		loc6 = tr1;
		tb3 = EIF_TEST(loc6);
	}
	if (tb3) {
		tr1 = F437_2846(Current, arg1);
		loc7 = tr1;
		tb2 = EIF_TEST(loc7);
	}
	if (tb2) {
		tb2 = F445_2983(RTCV(loc7), loc6);
		tb1 = tb2;
	}
	if (tb1) {
		F437_2834(Current, loc7, arg2, arg3);
	} else {
		tr1 = RTLNS(489, 489, _OBJSIZ_5_2_0_3_0_0_0_0_);
		tr2 = F518_3993(RTCV(arg1));
		tr2 = F747_6105(RTCV(tr2));
		F490_3259(RTCV(tr1), loc2, tr2);
		loc3 = (EIF_REFERENCE) tr1;
		F490_3277(RTCV(loc3), ((EIF_INTEGER_32) 200L));
		tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_2_0_0_0_1_);
		F938_8178(RTCV(tr1));
		loc4 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
		tr2 = RTMS_EX_H("private, max-age=",17,1398495805);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_);
		tr3 = c_outi(ti4_1);
		tr2 = F741_5940(RTCV(tr2), tr3);
		F541_4564(RTCV(tr1), tr2);
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
		F541_4558(RTCV(tr1), loc4);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) > ((EIF_INTEGER_32) 0L))) {
			loc4 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc4);
			F938_8204(RTCV(loc4), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_));
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
		F541_4563(RTCV(tr1), loc4);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_9_);
		tr2 = RTOSCF(1951,F158_1951,(Current));
		tb1 = F737_5748(RTCV(tr1), tr2);
		F490_3278(RTCV(loc3), tb1);
		F94_1345(RTCV(arg3), loc3);
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_not_modified */
void F437_2834 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,arg1);
	RTLR(6,arg3);
	
	RTGC;
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F938_8178(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(680, 680, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F681_5142(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("private, max-age=",17,1398495805);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_);
	tr2 = c_outi(ti4_1);
	tr1 = F741_5940(RTCV(tr1), tr2);
	F541_4564(RTCV(loc1), tr1);
	F541_4558(RTCV(loc1), loc2);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) > ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc2);
		F938_8204(RTCV(loc2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_));
	}
	F541_4563(RTCV(loc1), loc2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F541_4559(RTCV(loc1), arg1);
	}
	F94_1320(RTCV(arg3), ((EIF_INTEGER_32) 304L));
	F94_1334(RTCV(arg3), loc1);
	F94_1344(RTCV(arg3));
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_not_found */
void F437_2835 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,arg3);
	RTLR(6,loc1);
	RTLR(7,loc2);
	RTLR(8,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1, arg2, arg3);
		;
	} else {
		tr1 = RTLNS(680, 680, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F681_5142(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		F541_4530(RTCV(loc1));
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("Resource \"",10,536103458);
		tr1 = F741_5940(RTCV(tr1), arg1);
		tr2 = RTMS_EX_H("\" not found\012",12,277993738);
		tr1 = F741_5940(RTCV(tr1), tr2);
		F741_5938(RTCV(loc2), tr1);
		F94_1320(RTCV(arg3), ((EIF_INTEGER_32) 404L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		F541_4517(RTCV(loc1), ti4_1);
		F94_1334(RTCV(arg3), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg3)-93])(RTCV(arg3), loc2);
		F94_1344(RTCV(arg3));
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_access_denied */
void F437_2836 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,arg3);
	RTLR(6,loc1);
	RTLR(7,loc2);
	RTLR(8,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1, arg2, arg3);
		;
	} else {
		tr1 = RTLNS(680, 680, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F681_5142(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		F541_4530(RTCV(loc1));
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("Resource \"",10,536103458);
		tr1 = F741_5940(RTCV(tr1), arg1);
		tr2 = RTMS_EX_H("\": Access denied\012",17,1181519882);
		tr1 = F741_5940(RTCV(tr1), tr2);
		F741_5938(RTCV(loc2), tr1);
		F94_1320(RTCV(arg3), ((EIF_INTEGER_32) 403L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		F541_4517(RTCV(loc1), ti4_1);
		F94_1334(RTCV(arg3), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg3)-93])(RTCV(arg3), loc2);
		F94_1344(RTCV(arg3));
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_directory_index_disabled */
void F437_2837 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,arg3);
	RTLR(6,loc1);
	RTLR(7,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1, arg2, arg3);
		;
	} else {
		tr1 = RTLNS(680, 680, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F681_5142(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		F541_4530(RTCV(loc1));
		tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("Directory index: Access denied\012",31,603815178);
		F741_5938(RTCV(loc2), tr1);
		F94_1320(RTCV(arg3), ((EIF_INTEGER_32) 403L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		F541_4517(RTCV(loc1), ti4_1);
		F94_1334(RTCV(arg3), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg3)-93])(RTCV(arg3), loc2);
		F94_1344(RTCV(arg3));
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.directory_index_file */
EIF_REFERENCE F437_2838 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,arg1);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLR(7,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		loc4 = F567_4631(RTCV(loc3));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc4)-537])(RTCV(loc4));
			if (tb1) break;
			if ((EIF_BOOLEAN)(Result != NULL)) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc4)-537])(RTCV(loc4));
			tb2 = F508_3613(RTCV(arg1), tr1);
			if (tb2) {
				loc2 = F508_3610(RTCV(arg1));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc4)-537])(RTCV(loc4));
				loc2 = F747_6093(RTCV(loc2), tr1);
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
					F518_3986(RTCV(tr1), loc2);
					loc1 = (EIF_REFERENCE) tr1;
				} else {
					F518_3986(RTCV(loc1), loc2);
				}
				tb2 = '\0';
				tb3 = F518_4016(RTCV(loc1));
				if (tb3) {
					tb3 = F518_4019(RTCV(loc1));
					tb2 = tb3;
				}
				if (tb2) {
					Result = (EIF_REFERENCE) loc1;
				}
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc4)-537])(RTCV(loc4));
		}
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.resource_filename */
EIF_REFERENCE F437_2839 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,arg1);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current);
	loc1 = F437_2843(Current, arg1);
	tb1 = F291_2518(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		Result = F747_6093(RTCV(Result), loc1);
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.extension */
EIF_REFERENCE F437_2842 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4699[Dtype(arg1)-734]);
	loc1 = F735_5663(RTCV(arg1), (EIF_CHARACTER_32) 46U, ti4_1);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4699[Dtype(arg1)-734]);
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), ti4_1);
	} else {
		tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F733_5554(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.uri_path_to_filename */
EIF_REFERENCE F437_2843 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4699[Dtype(arg1)-734]);
	tr1 = RTLNS(739, 739, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F735_5652(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(Result)+ _LNGOFF_1_1_0_2_);
		tw1 = F740_5813(RTCV(Result), ti4_1);
		tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 47U);
	}
	if (tb1) {
		F740_5870(RTCV(Result), ((EIF_INTEGER_32) 1L));
		loc1--;
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		tw1 = F740_5813(RTCV(Result), ((EIF_INTEGER_32) 1L));
		tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 47U);
	}
	if (tb1) {
		F740_5868(RTCV(Result), ((EIF_INTEGER_32) 1L));
		loc1--;
	}
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			tr1 = RTMS32_EX_H("/\000\000\000",1,47);
			tr2 = RTMS32_EX_H("\\\000\000\000",1,92);
			F740_5824(RTCV(Result), tr1, tr2);
		}
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.extension_mime_mapping */
static EIF_REFERENCE F437_2844_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOSP (2844);
#define Result RTOSR(2844)
	RTOC_NEW(Result);
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("mime.types",10,2075371635);
	F518_3985(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tb2 = F518_4016(RTCV(loc1));
	if (tb2) {
		tb2 = F518_4019(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(863, 863, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = F518_3993(RTCV(loc1));
		tr2 = F747_6105(RTCV(tr2));
		F864_7589(RTCV(tr1), tr2);
		Result = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(863, 863, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F864_7588(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTOSE (2844);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F437_2844 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2844,F437_2844_body,(Current));
}

/* {WSF_FILE_SYSTEM_HANDLER}.file_size */
EIF_INTEGER_32 F437_2845 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[Dtype(arg1)-517])(RTCV(arg1));
	return (EIF_INTEGER_32) ti4_1;
}

/* {WSF_FILE_SYSTEM_HANDLER}.file_date */
EIF_REFERENCE F437_2846 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	ti4_1 = F518_4008(RTCV(arg1));
	Result = F437_2848(Current, ti4_1);
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.http_date_format_to_date */
EIF_REFERENCE F437_2847 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(747, 747, _OBJSIZ_2_1_0_0_0_0_1_0_);
	F748_6127(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_2_0_);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WSF_FILE_SYSTEM_HANDLER}.timestamp_to_date */
EIF_REFERENCE F437_2848 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(747, 747, _OBJSIZ_2_1_0_0_0_0_1_0_);
	ti8_1 = (EIF_INTEGER_64) arg1;
	F748_6126(RTCV(tr1), ti8_1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit222 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
