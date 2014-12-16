/*
 * Code for class WSF_MULTIPART_FORM_DATA_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws122.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.make */
void F144_1764 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.valid_content_type */
EIF_BOOLEAN F144_1765 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTOSCF(2068,F162_2068,(Current));
	Result = F796_6335(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.handle */
void F144_1766 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg4);
	RTLR(4,arg1);
	RTLR(5,arg3);
	
	RTGC;
	loc1 = F129_1667(Current, arg2);
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		F98_1423(RTCV(arg4), loc1);
	}
	F144_1767(Current, arg2, arg1, loc1, arg3);
	RTLE;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.analyze_multipart_form */
void F144_1767 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc6);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,loc4);
	RTLR(5,loc7);
	RTLR(6,arg1);
	RTLR(7,arg4);
	RTLR(8,Current);
	RTLR(9,tr2);
	RTLR(10,tr3);
	
	RTGC;
	tr1 = RTMS_EX_H("boundary",8,1971217529);
	loc6 = F796_6330(RTCV(arg2), tr1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(loc6)-735])(RTCV(loc6));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		loc1 = F737_5739(RTCV(arg3), loc6, ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg3)-735])(RTCV(arg3), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			loc4 = F733_5610(RTCV(tr1));
			loc6 = F741_5940(RTCV(loc4), loc6);
		} else {
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F733_5554(RTCV(tr1));
			loc4 = (EIF_REFERENCE) tr1;
		}
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc6) + O4737[Dtype(loc6)-736]);
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg3)-578])(RTCV(arg3), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L))));
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc5) + ((EIF_INTEGER_32) 1L));
		if (loc8) {
			loc2++;
		}
		loc3 = (EIF_INTEGER_32) loc2;
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			loc3 = F737_5739(RTCV(arg3), loc6, loc2);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				if (loc8) {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg3)-735])(RTCV(arg3), loc2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) - ((EIF_INTEGER_32) 2L)));
					loc7 = F733_5610(RTCV(tr1));
				} else {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg3)-735])(RTCV(arg3), loc2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) - ((EIF_INTEGER_32) 1L)));
					loc7 = F733_5610(RTCV(tr1));
				}
				F144_1768(Current, arg1, loc7, arg4);
				tb1 = F733_5566(RTCV(arg3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L)));
				if (tb1) {
					if (loc8) {
						tb1 = '\0';
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg3)-578])(RTCV(arg3), (EIF_INTEGER_32) (loc3 + loc5)));
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg3)-578])(RTCV(arg3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L))));
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
						}
						if (tb1) {
						} else {
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg3)-578])(RTCV(arg3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L))));
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
						} else {
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					}
				} else {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
					tr2 = RTMS_EX_H("Invalid form data",17,534563937);
					tr3 = RTMS_EX_H("Invalid ending for form data from input",39,714666356);
					tr3 = F733_5613(RTCV(tr3));
					F862_7521(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
				}
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
					if (loc8) {
						loc2++;
					}
				}
			} else {
				if (loc8) {
					loc2++;
				}
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg3) + O4737[Dtype(arg3)-736]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg3)-735])(RTCV(arg3), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)), ti4_1);
				loc7 = F733_5610(RTCV(tr1));
				F741_5923(RTCV(loc7));
				tb1 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg3) + O4737[Dtype(arg3)-736]);
				if ((EIF_BOOLEAN) (loc2 >= ti4_1)) {
					tb2 = F737_5748(RTCV(loc4), loc7);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
					tr2 = RTMS_EX_H("Invalid form data",17,534563937);
					tr3 = RTMS_EX_H("Invalid ending for form data from input",39,714666356);
					tr3 = F733_5613(RTCV(tr3));
					F862_7521(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
				}
				loc2 = (EIF_INTEGER_32) loc3;
			}
		}
	}
	RTLE;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.analyze_multipart_form_input */
void F144_1768 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg2);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLR(4,tr1);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,loc8);
	RTLR(8,Current);
	RTLR(9,loc12);
	RTLR(10,arg3);
	RTLR(11,arg1);
	RTLR(12,tr2);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_1_1_0_2_);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc1) || (EIF_BOOLEAN)(loc9 != NULL))) break;
		tc1 = F741_5903(RTCV(arg2), loc3);
		switch (tc1) {
			case (EIF_CHARACTER_8) '\015':
				tb1 = '\0';
				tb2 = '\0';
				tb3 = '\0';
				if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L)))) {
					tc1 = F741_5903(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
					tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb3) {
					tc1 = F741_5903(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
					tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
				}
				if (tb2) {
					tc1 = F741_5903(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L)));
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb1) {
					loc9 = F741_5984(RTCV(arg2), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
					loc10 = F741_5984(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 4L)), loc1);
				}
				break;
			case (EIF_CHARACTER_8) '\012':
				tb1 = '\0';
				if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)))) {
					tc1 = F741_5903(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb1) {
					loc9 = F741_5984(RTCV(arg2), ((EIF_INTEGER_32) 1L), loc3);
					loc10 = F741_5984(RTCV(arg2), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)), loc1);
				}
				break;
		}
		loc3++;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc9 != NULL) && (EIF_BOOLEAN)(loc10 != NULL))) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc1 = *(EIF_INTEGER_32 *)(RTCV(loc9)+ _LNGOFF_1_1_0_2_);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc2 > loc1))) break;
			loc11 = (EIF_REFERENCE) NULL;
			loc4 = (EIF_INTEGER_32) loc2;
			loc3 = F737_5734(RTCV(loc9), (EIF_CHARACTER_8) '\012', loc4);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				tc1 = F741_5903(RTCV(loc9), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
					loc3--;
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
				} else {
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				}
			}
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				loc11 = F741_5984(RTCV(loc9), loc4, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
				tr1 = RTMS_EX_H("Content-Disposition: form-data",30,1482817121);
				tb1 = F737_5756(RTCV(loc11), tr1);
				if (tb1) {
					tr1 = RTMS_EX_H("name=",5,1635404093);
					loc3 = F737_5739(RTCV(loc11), tr1, ((EIF_INTEGER_32) 1L));
					if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
						loc3 += ((EIF_INTEGER_32) 4L);
						tb1 = '\0';
						tb2 = F733_5566(RTCV(loc11), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						if (tb2) {
							tc1 = F741_5903(RTCV(loc11), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"');
						}
						if (tb1) {
							loc3++;
							loc5 = F737_5734(RTCV(loc11), (EIF_CHARACTER_8) '\"', (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						} else {
							loc5 = F737_5734(RTCV(loc11), (EIF_CHARACTER_8) ';', (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
								loc5 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_1_0_2_);
							}
						}
						loc6 = F741_5984(RTCV(loc9), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
					}
					tr1 = RTMS_EX_H("filename=",9,2103120189);
					loc3 = F737_5739(RTCV(loc11), tr1, ((EIF_INTEGER_32) 1L));
					if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
						loc3 += ((EIF_INTEGER_32) 8L);
						tb1 = '\0';
						tb2 = F733_5566(RTCV(loc11), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						if (tb2) {
							tc1 = F741_5903(RTCV(loc11), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"');
						}
						if (tb1) {
							loc3++;
							loc5 = F737_5734(RTCV(loc11), (EIF_CHARACTER_8) '\"', (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						} else {
							loc5 = F737_5734(RTCV(loc11), (EIF_CHARACTER_8) ';', (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
								loc5 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_1_0_2_);
							}
						}
						loc7 = F741_5984(RTCV(loc9), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
					}
				} else {
					tr1 = RTMS_EX_H("Content-Type: ",14,597285920);
					tb1 = F737_5756(RTCV(loc11), tr1);
					if (tb1) {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc11)+ _LNGOFF_1_1_0_2_);
						loc8 = F741_5984(RTCV(loc11), ((EIF_INTEGER_32) 15L), ti4_1);
					}
				}
			} else {
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				tb2 = F286_2518(RTCV(loc7));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				if ((EIF_BOOLEAN)(loc8 == NULL)) {
					loc8 = RTOSCF(1769,F144_1769,(Current));
				}
				tr1 = RTLNS(821, 821, _OBJSIZ_6_0_0_2_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc10)+ _LNGOFF_1_1_0_2_);
				F822_6506(RTCV(tr1), loc6, loc7, loc8, ti4_1);
				loc12 = (EIF_REFERENCE) tr1;
				F129_1669(Current, loc6, loc12, arg3);
				F749_6283(RTCV(arg1), loc12, loc10);
			} else {
				F129_1668(Current, loc6, loc10, arg3);
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
			tr2 = RTMS_EX_H("unamed multipart entry",22,97040249);
			F862_7521(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, NULL);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
		tr2 = RTMS_EX_H("missformed multipart entry",26,1788966777);
		F862_7521(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, NULL);
	}
	RTLE;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.default_content_type */

EIF_REFERENCE F144_1769 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (1769,RTMS_EX_H("text/plain",10,1054604142));
}

void EIF_Minit122 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
