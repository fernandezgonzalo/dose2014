/*
 * Code for class WSF_COOKIE_SESSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws213.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_COOKIE_SESSION}.make */
void F428_2696 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLR(2,arg2);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLR(5,tr1);
	RTLR(6,loc1);
	RTLR(7,loc3);
	
	RTGC;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg3;
	F428_2698(Current, arg2);
	tr1 = F749_6250(RTCV(arg1), *(EIF_REFERENCE *)(Current));
	loc2 = tr1;
	loc2 = RTRV(eif_non_attached_type(818),loc2);
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_REFERENCE *)(RTCV(loc2));
	} else {
		tr1 = F749_6258(RTCV(arg1), *(EIF_REFERENCE *)(Current));
		loc3 = tr1;
		loc3 = RTRV(eif_non_attached_type(818),loc3);
		if (EIF_TEST(loc3)) {
			loc1 = *(EIF_REFERENCE *)(RTCV(loc3));
		}
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F733_5609(RTCV(loc1));
		tb1 = F428_2711(Current, tr1);
	}
	if (tb1) {
		tr1 = F733_5609(RTCV(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
		F428_2713(Current);
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		F428_2714(Current);
	}
	RTLE;
}

/* {WSF_COOKIE_SESSION}.make_new */
void F428_2697 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	
	RTGC;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	F428_2698(Current, arg1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F428_2714(Current);
	RTLE;
}

/* {WSF_COOKIE_SESSION}.initialize */
void F428_2698 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(arg1 == NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(arg1)-735])(RTCV(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTMS_EX_H("_EWF_SESSION_ID",15,440816964);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	}
	RTLE;
}

/* {WSF_COOKIE_SESSION}.apply_to */
void F428_2699 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,arg3);
	RTLR(8,loc1);
	
	RTGC;
	loc2 = F749_6222(RTCV(arg2));
	tr1 = RTMS_EX_H("localhost",9,185724020);
	tb1 = F737_5748(RTCV(loc2), tr1);
	if (tb1) {
		loc2 = (EIF_REFERENCE) NULL;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("deleted",7,693663076);
		tr3 = RTMS_EX_H("Thu, 01 Jan 1970 00:00:00 GMT",29,1498327124);
		F541_4569(RTCV(arg1), tr1, tr2, tr3, arg3, loc2, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 1);
	} else {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_2_0_0_0_1_);
			F938_8178(RTCV(tr1));
			loc1 = (EIF_REFERENCE) tr1;
			F938_8201(RTCV(loc1), ((EIF_INTEGER_32) 40L));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = F428_2701(Current);
		F541_4570(RTCV(arg1), tr1, tr2, loc1, arg3, loc2, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 1);
	}
	RTLE;
}

/* {WSF_COOKIE_SESSION}.cookie_name */
EIF_REFERENCE F428_2700 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_COOKIE_SESSION}.id */
EIF_REFERENCE F428_2701 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_4_);
}

/* {WSF_COOKIE_SESSION}.uuid */
EIF_REFERENCE F428_2702 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_COOKIE_SESSION}.data */
EIF_REFERENCE F428_2703 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_COOKIE_SESSION}.expiration */
EIF_REFERENCE F428_2704 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_COOKIE_SESSION}.is_pending */
EIF_BOOLEAN F428_2705 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_);
}


/* {WSF_COOKIE_SESSION}.is_destroyed */
EIF_BOOLEAN F428_2706 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_);
}


/* {WSF_COOKIE_SESSION}.destroy */
void F428_2707 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F579_4686(RTCV(tr1));
	F428_2716(Current);
	RTLE;
}

/* {WSF_COOKIE_SESSION}.commit */
void F428_2708 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F428_2715(Current);
}

/* {WSF_COOKIE_SESSION}.set_expiration */
void F428_2709 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {WSF_COOKIE_SESSION}.manager */
EIF_REFERENCE F428_2710 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_COOKIE_SESSION}.session_exists */
EIF_BOOLEAN F428_2711 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F93_1302(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {WSF_COOKIE_SESSION}.init_data */
void F428_2712 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(586));
	F585_4761(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F219_2481(RTCV(tr1));
	RTLE;
}

/* {WSF_COOKIE_SESSION}.load */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F428_2713 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTXD;
	
	RTXI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F428_2701(Current);
	tb1 = F93_1302(RTCV(tr1), tr2);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = F428_2701(Current);
		tr1 = F93_1303(RTCV(tr1), tr2);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_7_);
			F428_2709(Current, tr1);
		} else {
			F428_2712(Current);
			F428_2715(Current);
		}
	} else {
		F428_2714(Current);
	}
	RTE_E
	RTXS(5);
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_COOKIE_SESSION}.build */
void F428_2714 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F15_176(RTCV(RTOSCF(2717,F428_2717,(Current))));
	tr1 = F684_5185(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	F428_2712(Current);
	F428_2715(Current);
	RTLE;
}

/* {WSF_COOKIE_SESSION}.save */
void F428_2715 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F93_1304(RTCV(tr1), Current);
	RTLE;
}

/* {WSF_COOKIE_SESSION}.delete */
void F428_2716 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F93_1305(RTCV(tr1), Current);
	RTLE;
}

/* {WSF_COOKIE_SESSION}.uuid_generator */
static EIF_REFERENCE F428_2717_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (2717);
#define Result RTOSR(2717)
	RTOC_NEW(Result);
	tr1 = RTLNS(14, 14, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2717);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F428_2717 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2717,F428_2717_body,(Current));
}

void EIF_Minit213 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
