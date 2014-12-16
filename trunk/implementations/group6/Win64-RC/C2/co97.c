/*
 * Code for class CODE_VALIDITY_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co97.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CODE_VALIDITY_CHECKER}.is_day */
EIF_BOOLEAN F117_1540 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("dd",2,25700);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_day0 */
EIF_BOOLEAN F117_1541 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]dd",5,812125796);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_day_text */
EIF_BOOLEAN F117_1542 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("ddd",3,6579300);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_year4 */
EIF_BOOLEAN F117_1543 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("yyyy",4,2038004089);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_year2 */
EIF_BOOLEAN F117_1544 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("yy",2,31097);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month */
EIF_BOOLEAN F117_1545 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("mm",2,28013);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month0 */
EIF_BOOLEAN F117_1546 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]mm",5,812128109);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month_text */
EIF_BOOLEAN F117_1547 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("mmm",3,7171437);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour */
EIF_BOOLEAN F117_1548 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("hh",2,26728);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour0 */
EIF_BOOLEAN F117_1549 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]hh",5,812126824);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour12 */
EIF_BOOLEAN F117_1550 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("hh12",4,1751658802);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minute */
EIF_BOOLEAN F117_1552 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("mi",2,28009);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minute0 */
EIF_BOOLEAN F117_1553 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]mi",5,812128105);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_second */
EIF_BOOLEAN F117_1554 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("ss",2,29555);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_second0 */
EIF_BOOLEAN F117_1555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]ss",5,812129651);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_fractional_second */
EIF_BOOLEAN F117_1556 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
		loc1 = F741_5984(RTCV(arg1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 2L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		loc2 = F741_5984(RTCV(arg1), ((EIF_INTEGER_32) 3L), ti4_1);
		Result = '\0';
		tr1 = RTMS_EX_H("ff",2,26214);
		tb1 = F737_5745(RTCV(loc1), tr1);
		if (tb1) {
			tb1 = F733_5585(RTCV(loc2));
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_colon */
EIF_BOOLEAN F117_1557 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H(":",1,58);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_slash */
EIF_BOOLEAN F117_1558 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("/",1,47);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minus */
EIF_BOOLEAN F117_1559 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("-",1,45);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_comma */
EIF_BOOLEAN F117_1560 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H(",",1,44);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_space */
EIF_BOOLEAN F117_1561 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H(" ",1,32);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_dot */
EIF_BOOLEAN F117_1562 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H(".",1,46);
	Result = F737_5745(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_meridiem */
EIF_BOOLEAN F117_1564 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = F741_5973(RTCV(arg1));
	Result = '\01';
	tr1 = RTMS_EX_H("AM",2,16717);
	tb1 = F737_5745(RTCV(loc1), tr1);
	if (!tb1) {
		tr1 = RTMS_EX_H("PM",2,20557);
		tb1 = F737_5745(RTCV(loc1), tr1);
		Result = tb1;
	}
	RTLE;
	return Result;
}

void EIF_Minit97 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
