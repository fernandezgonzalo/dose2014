/*
 * Code for class HTTP_REQUEST_METHODS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F136_1933(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F136_1934(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_1935(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_1936(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_1937(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_1938(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_1939(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_1940(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_1941(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_1942(EIF_REFERENCE);
extern void EIF_Minit136(void);

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

/* {HTTP_REQUEST_METHODS}.method */
EIF_TYPED_VALUE F136_1933 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "method";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 135, Current, 0, 1, 1873);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(135, Current, 1873);
	if (arg1) {
		RTCC(arg1, 135, l_feature_name, 1, 310);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1761, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
		
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1761, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
			
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1764, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1760, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
				
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1760, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
					
					Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1762, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1763, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
						
						Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1763, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					} else {
						RTHOOK(11);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1765, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
							
							Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1765, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						} else {
							RTHOOK(13);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1766, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
								
								Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1766, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							} else {
								RTHOOK(15);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1767, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
									
									Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1767, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								} else {
									RTHOOK(17);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1768, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4699, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
										
										Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1768, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									} else {
										RTHOOK(19);
										RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
										
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4617, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										Result = (EIF_REFERENCE) RTCCL(tr1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {HTTP_REQUEST_METHODS}.method_head */
RTOID (F136_1934)


EIF_TYPED_VALUE F136_1934 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1934,1875,RTMS_EX_H("HEAD",4,1212498244));
}

/* {HTTP_REQUEST_METHODS}.method_get */
RTOID (F136_1935)


EIF_TYPED_VALUE F136_1935 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1935,1876,RTMS_EX_H("GET",3,4670804));
}

/* {HTTP_REQUEST_METHODS}.method_trace */
RTOID (F136_1936)


EIF_TYPED_VALUE F136_1936 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1936,1877,RTMS_EX_H("TRACE",5,1380653893));
}

/* {HTTP_REQUEST_METHODS}.method_options */
RTOID (F136_1937)


EIF_TYPED_VALUE F136_1937 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1937,1878,RTMS_EX_H("OPTIONS",7,347751251));
}

/* {HTTP_REQUEST_METHODS}.method_post */
RTOID (F136_1938)


EIF_TYPED_VALUE F136_1938 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1938,1879,RTMS_EX_H("POST",4,1347375956));
}

/* {HTTP_REQUEST_METHODS}.method_put */
RTOID (F136_1939)


EIF_TYPED_VALUE F136_1939 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1939,1880,RTMS_EX_H("PUT",3,5264724));
}

/* {HTTP_REQUEST_METHODS}.method_delete */
RTOID (F136_1940)


EIF_TYPED_VALUE F136_1940 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1940,1881,RTMS_EX_H("DELETE",6,1413835333));
}

/* {HTTP_REQUEST_METHODS}.method_connect */
RTOID (F136_1941)


EIF_TYPED_VALUE F136_1941 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1941,1882,RTMS_EX_H("CONNECT",7,831608660));
}

/* {HTTP_REQUEST_METHODS}.method_patch */
RTOID (F136_1942)


EIF_TYPED_VALUE F136_1942 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F136_1942,1883,RTMS_EX_H("PATCH",5,1096655688));
}

void EIF_Minit136 (void)
{
	GTCX
	RTOTS (1934,F136_1934)
	RTOTS (1935,F136_1935)
	RTOTS (1936,F136_1936)
	RTOTS (1937,F136_1937)
	RTOTS (1938,F136_1938)
	RTOTS (1939,F136_1939)
	RTOTS (1940,F136_1940)
	RTOTS (1941,F136_1941)
	RTOTS (1942,F136_1942)
}


#ifdef __cplusplus
}
#endif
