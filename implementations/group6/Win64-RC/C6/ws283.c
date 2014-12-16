/*
 * Code for class WSF_REQUEST_METHODS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws283.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_REQUEST_METHODS}.default_create */
void F540_4449 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1_29(Current);
	F540_4450(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {WSF_REQUEST_METHODS}.make */
void F540_4450 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {665,736,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F666_5008(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_REQUEST_METHODS}.make_from_iterable */
void F540_4451 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F540_4450(Current, ((EIF_INTEGER_32) 1L));
	F540_4492(Current, arg1);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.is_empty */
EIF_BOOLEAN F540_4454 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F666_5029(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {WSF_REQUEST_METHODS}.has */
EIF_BOOLEAN F540_4455 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = F567_4631(RTCV(tr1));
	tb1 = EIF_FALSE;
	for (;;) {
		if (tb1) break;
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc1)-537])(RTCV(loc1));
		if (tb2) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc1)-537])(RTCV(loc1));
		tb1 = (EIF_BOOLEAN)(tr1 == arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc1)-537])(RTCV(loc1));
	}
	Result = (EIF_BOOLEAN) tb1;
	if ((EIF_BOOLEAN) !Result) {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc2 = F567_4631(RTCV(tr1));
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc2)-537])(RTCV(loc2));
			if (tb2) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc2)-537])(RTCV(loc2));
			tb3 = F733_5599(RTCV(tr1), arg1);
			tb1 = tb3;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc2)-537])(RTCV(loc2));
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return Result;
}

/* {WSF_REQUEST_METHODS}.new_cursor */
EIF_REFERENCE F540_4467 (EIF_REFERENCE Current)
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
	Result = F567_4631(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST_METHODS}.lock */
void F540_4468 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {WSF_REQUEST_METHODS}.plus */
EIF_REFERENCE F540_4469 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNS(539, 539, _OBJSIZ_1_1_0_0_0_0_0_0_);
	F540_4451(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	F540_4492(RTCV(Result), arg1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST_METHODS}.enable_get */
void F540_4470 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1952,F158_1952,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_post */
void F540_4472 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1955,F158_1955,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_put */
void F540_4474 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1956,F158_1956,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_delete */
void F540_4476 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1957,F158_1957,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_options */
void F540_4478 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1954,F158_1954,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_head */
void F540_4480 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1951,F158_1951,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_trace */
void F540_4482 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1953,F158_1953,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_connect */
void F540_4484 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1958,F158_1958,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_patch */
void F540_4486 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOSCF(1959,F158_1959,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_custom */
void F540_4488 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4639[Dtype(arg1)-735])(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(tr1)-395])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.methods */
EIF_REFERENCE F540_4490 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_REQUEST_METHODS}.add_methods */
void F540_4492 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3695[Dtype(arg1)-535])(RTCV(arg1));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc2)-537])(RTCV(loc2));
			if (tb1) break;
			tb2 = '\0';
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc2)-537])(RTCV(loc2));
			tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4594[Dtype(tr1)-735])(RTCV(tr1));
			if ((EIF_BOOLEAN) !tb3) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc2)-537])(RTCV(loc2));
				tb2 = (EIF_BOOLEAN) !F540_4455(Current, tr1);
			}
			if (tb2) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc2)-537])(RTCV(loc2));
				F540_4493(Current, tr1);
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc2)-537])(RTCV(loc2));
		}
	}
	RTLE;
}

/* {WSF_REQUEST_METHODS}.add_method_using_constant */
void F540_4493 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTOSCF(1952,F158_1952,(Current));
	tb1 = F737_5746(RTCV(arg1), tr1);
	if (tb1) {
		F540_4470(Current);
	} else {
		tr1 = RTOSCF(1955,F158_1955,(Current));
		tb1 = F737_5746(RTCV(arg1), tr1);
		if (tb1) {
			F540_4472(Current);
		} else {
			tr1 = RTOSCF(1956,F158_1956,(Current));
			tb1 = F737_5746(RTCV(arg1), tr1);
			if (tb1) {
				F540_4474(Current);
			} else {
				tr1 = RTOSCF(1957,F158_1957,(Current));
				tb1 = F737_5746(RTCV(arg1), tr1);
				if (tb1) {
					F540_4476(Current);
				} else {
					tr1 = RTOSCF(1951,F158_1951,(Current));
					tb1 = F737_5746(RTCV(arg1), tr1);
					if (tb1) {
						F540_4480(Current);
					} else {
						tr1 = RTOSCF(1954,F158_1954,(Current));
						tb1 = F737_5746(RTCV(arg1), tr1);
						if (tb1) {
							F540_4478(Current);
						} else {
							tr1 = RTOSCF(1953,F158_1953,(Current));
							tb1 = F737_5746(RTCV(arg1), tr1);
							if (tb1) {
								F540_4482(Current);
							} else {
								tr1 = RTOSCF(1958,F158_1958,(Current));
								tb1 = F737_5746(RTCV(arg1), tr1);
								if (tb1) {
									F540_4484(Current);
								} else {
									tr1 = RTOSCF(1959,F158_1959,(Current));
									tb1 = F737_5746(RTCV(arg1), tr1);
									if (tb1) {
										F540_4486(Current);
									} else {
										F540_4488(Current, arg1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
}

void EIF_Minit283 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
