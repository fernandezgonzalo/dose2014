/*
 * Code for class WSF_REQUEST_PATH_PARAMETERS_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F70_1151(EIF_REFERENCE);
extern void F70_1152(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit70(void);

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

/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.path_parameters */
EIF_TYPED_VALUE F70_1151 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1093,Dtype(Current)));
	return r;
}


/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.update_path_parameters */
void F70_1152 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_path_parameters";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 69, Current, 0, 1, 1153);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(69, Current, 1153);
	RTCC(arg1, 69, l_feature_name, 1, RTWCT(1093, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 1093, 0xF80001A0, 0); /* path_parameters */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1093, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit70 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
