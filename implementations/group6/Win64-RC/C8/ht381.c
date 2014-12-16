/*
 * Code for class HTTP_FILE_EXTENSION_MIME_MAPPING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht381.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.make_empty */
void F864_7587 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {584,736,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F585_4761(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.make_default */
void F864_7588 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {584,736,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F585_4761(RTCV(tr1), ((EIF_INTEGER_32) 40L));
	loc1 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	tr1 = RTOSCF(2072,F162_2072,(Current));
	tr2 = RTMS_EX_H("css",3,6517619);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2074,F162_2074,(Current));
	tr2 = RTMS_EX_H("html",4,1752460652);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2080,F162_2080,(Current));
	tr2 = RTMS_EX_H("xml",3,7892332);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2034,F162_2034,(Current));
	tr2 = RTMS_EX_H("json",4,1785950062);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2033,F162_2033,(Current));
	tr2 = RTMS_EX_H("js",2,27251);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2038,F162_2038,(Current));
	tr2 = RTMS_EX_H("rss",3,7500659);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2031,F162_2031,(Current));
	tr2 = RTMS_EX_H("atom",4,1635020653);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2059,F162_2059,(Current));
	tr2 = RTMS_EX_H("ico",3,6906735);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2053,F162_2053,(Current));
	tr2 = RTMS_EX_H("gif",3,6777190);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2054,F162_2054,(Current));
	tr2 = RTMS_EX_H("jpeg",4,1785750887);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2055,F162_2055,(Current));
	tr2 = RTMS_EX_H("jpg",3,6975591);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2056,F162_2056,(Current));
	tr2 = RTMS_EX_H("png",3,7368295);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2044,F162_2044,(Current));
	tr2 = RTMS_EX_H("zip",3,8022384);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2045,F162_2045,(Current));
	tr2 = RTMS_EX_H("bz",2,25210);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2046,F162_2046,(Current));
	tr2 = RTMS_EX_H("bz2",3,6453810);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2043,F162_2043,(Current));
	tr2 = RTMS_EX_H("gz",2,26490);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2043,F162_2043,(Current));
	tr2 = RTMS_EX_H("gzip",4,1736075632);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2047,F162_2047,(Current));
	tr2 = RTMS_EX_H("tar",3,7627122);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2042,F162_2042,(Current));
	tr2 = RTMS_EX_H("tgz",3,7628666);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2037,F162_2037,(Current));
	tr2 = RTMS_EX_H("ps",2,28787);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2036,F162_2036,(Current));
	tr2 = RTMS_EX_H("pdf",3,7365734);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2041,F162_2041,(Current));
	tr2 = RTMS_EX_H("swf",3,7567206);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2077,F162_2077,(Current));
	tr2 = RTMS_EX_H("conf",4,1668247142);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2077,F162_2077,(Current));
	tr2 = RTMS_EX_H("log",3,7106407);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2077,F162_2077,(Current));
	tr2 = RTMS_EX_H("text",4,1952807028);
	F579_4679(RTCV(loc1), tr1, tr2);
	tr1 = RTOSCF(2077,F162_2077,(Current));
	tr2 = RTMS_EX_H("txt",3,7633012);
	F579_4679(RTCV(loc1), tr1, tr2);
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.make_from_file */
void F864_7589 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(518, 518, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F518_3985(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tb2 = F518_4016(RTCV(loc1));
	if (tb2) {
		tb2 = F518_4019(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		F864_7587(Current, ((EIF_INTEGER_32) 50L));
		F518_4051(RTCV(loc1));
		F518_4124(RTCV(loc1));
		for (;;) {
			tb1 = '\01';
			tb2 = F246_2497(RTCV(loc1));
			if (!tb2) {
				tb2 = F518_4015(RTCV(loc1));
				tb1 = tb2;
			}
			if (tb1) break;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
			F864_7593(Current, tr1);
			F518_4124(RTCV(loc1));
		}
		F518_4068(RTCV(loc1));
	} else {
		F864_7587(Current, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.mime_type */
EIF_REFERENCE F864_7591 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4638[Dtype(arg1)-735])(RTCV(arg1));
	Result = F579_4638(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.map */
void F864_7592 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,arg1);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4638[Dtype(arg1)-735])(RTCV(arg1));
	F579_4679(RTCV(tr1), arg2, tr2);
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.add_mapping_line */
void F864_7593 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc5);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		loc1 = F864_7595(Current, arg1, loc1);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg1)-578])(RTCV(arg1), loc1));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '#')) {
			} else {
				loc2 = F864_7594(Current, arg1, loc1);
				if ((EIF_BOOLEAN) (loc2 > loc1)) {
					loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
					for (;;) {
						if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
						loc1 = F864_7595(Current, arg1, loc2);
						if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
							loc2 = F864_7594(Current, arg1, loc1);
							if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
								loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), loc1, loc3);
								loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							} else {
								loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4657[Dtype(arg1)-735])(RTCV(arg1), loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
								loc1 = (EIF_INTEGER_32) loc2;
							}
							F864_7592(Current, loc5, loc4);
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.next_blank_position */
EIF_INTEGER_32 F864_7594 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > loc2)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg1)-578])(RTCV(arg1), loc1));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = tb2;
		}
		if (tb1) break;
		loc1++;
	}
	if ((EIF_BOOLEAN) (loc1 <= loc2)) {
		RTLE;
		return (EIF_INTEGER_32) loc1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.next_non_blank_position */
EIF_INTEGER_32 F864_7595 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O4737[Dtype(arg1)-736]);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > loc2)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3942[Dtype(arg1)-578])(RTCV(arg1), loc1));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc1++;
	}
	if ((EIF_BOOLEAN) (loc1 <= loc2)) {
		RTLE;
		return (EIF_INTEGER_32) loc1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.mapping */
EIF_REFERENCE F864_7596 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit381 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
