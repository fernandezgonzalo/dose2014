/*
 * Code for class WSF_URI_TEMPLATE_MAPPING_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws332.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_URI_TEMPLATE_MAPPING_I}.make */
void F815_6419 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(743, 743, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F744_5998(RTCV(tr1), arg1);
	F815_6420(Current, tr1, arg2);
	RTLE;
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.make_from_template */
void F815_6420 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	F816_6430(Current, arg2);
	RTLE;
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.associated_resource */
EIF_REFERENCE F815_6421 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_REFERENCE *)(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.template */
EIF_REFERENCE F815_6422 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_URI_TEMPLATE_MAPPING_I}.description */

EIF_REFERENCE F815_6424 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (6424,RTMS32_EX_H("M\000\000\000a\000\000\000t\000\000\000c\000\000\000h\000\000\000-\000\000\000U\000\000\000R\000\000\000I\000\000\000-\000\000\000T\000\000\000e\000\000\000m\000\000\000p\000\000\000l\000\000\000a\000\000\000t\000\000\000e\000\000\000",18,531259237));
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.is_mapping */
EIF_BOOLEAN F815_6425 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,arg2);
	
	RTGC;
	loc2 = F811_6405(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = F815_6428(Current, tr1, arg2);
	tr1 = F744_6010(RTCV(loc1), loc2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTLE;
	return Result;
}

/* {WSF_URI_TEMPLATE_MAPPING_I}.try */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F815_6426 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTXD;
	
	RTXI(12);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,arg4);
	RTLR(6,loc4);
	RTLR(7,arg3);
	RTLR(8,loc3);
	RTLR(9,tr2);
	RTLR(10,arg2);
	RTLR(11,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	loc2 = F811_6405(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = F815_6428(Current, tr1, arg4);
	tr1 = F744_6010(RTCV(loc1), loc2);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		F25_355(RTCV(arg3), *(EIF_REFERENCE *)(Current + _REFACS_1_));
		F539_4429(RTCV(arg4), Current);
		tr1 = RTLNS(84, 84, _OBJSIZ_3_0_0_1_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(RTCV(loc4));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2) + O4033[Dtype(tr2)-578]);
		tr2 = *(EIF_REFERENCE *)(RTCV(loc4));
		F85_1213(RTCV(tr1), ti4_1, tr2);
		loc3 = (EIF_REFERENCE) tr1;
		F85_1217(RTCV(loc3), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F816_6431(Current, tr1, arg1, arg2);
		F85_1218(RTCV(loc3), arg1);
		{
		/* INLINED CODE (execute_after) */
		/* END INLINED CODE */
		}
		;
	}
	RTE_E
	RTXS(12);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		F85_1218(RTCV(loc3), arg1);
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_URI_TEMPLATE_MAPPING_I}.based_uri_template */
EIF_REFERENCE F815_6428 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F744_6001(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4656[Dtype(loc1)-735])(RTCV(loc1), tr1);
		F744_6002(RTCV(Result), tr1);
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}
	RTLE;
	return Result;
}

void EIF_Minit332 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
