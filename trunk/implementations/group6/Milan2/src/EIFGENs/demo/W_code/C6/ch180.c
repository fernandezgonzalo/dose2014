/*
 * Code for class CHECK_VIOLATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F180_2217(EIF_REFERENCE);
extern EIF_TYPED_VALUE F180_2218(EIF_REFERENCE);
extern void EIF_Minit180(void);

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

/* {CHECK_VIOLATION}.code */
EIF_TYPED_VALUE F180_2217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "code";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 179, Current, 0, 0, 2157);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(179, Current, 2157);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1302, 83))(Current)).it_i4);
	Result = (EIF_INTEGER_32) Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CHECK_VIOLATION}.tag */
RTOID (F180_2218)
EIF_TYPED_VALUE F180_2218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tag";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F180_2218);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 179, Current, 0, 0, 2158);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(179, Current, 2158);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000135, 0,0); /* Result */
	
	tr1 = RTLN(309);
	tr2 = RTMS_EX_H("Check assertion violated.",25,1758752046);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4678, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
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
#undef ur1
#undef Result
}

void EIF_Minit180 (void)
{
	GTCX
	RTOTS (2218,F180_2218)
}


#ifdef __cplusplus
}
#endif
