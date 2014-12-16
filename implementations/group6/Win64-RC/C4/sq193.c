/*
 * Code for class SQLITE_BIND_ARG_MARSHALLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sq193.h"
#include "eif_built_in.h"
#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_BIND_ARG_MARSHALLER}.default_bind_arg */
static EIF_REFERENCE F215_2454_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (2454);
#define Result RTOSR(2454)
	RTOC_NEW(Result);
	tr1 = RTLNS(943, 943, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("\?1",2,16177);
	F944_8226(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2454);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F215_2454 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2454,F215_2454_body,(Current));
}

/* {SQLITE_BIND_ARG_MARSHALLER}.new_binding_argument_array */
EIF_REFERENCE F215_2456 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,loc6);
	RTLR(6,loc3);
	RTLR(7,loc7);
	RTLR(8,loc4);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) SQLITE_LIMIT_VARIABLE_NUMBER;
	loc1 = F214_2451(Current, arg1, ti4_1);
	{
		static EIF_TYPE_INDEX typarr0[] = {600,939,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 600, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = RTOSCF(2454,F215_2454,(Current));
	F601_4814(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L), loc1);
	Result = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3695[Dtype(arg1)-535])(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc6)-537])(RTCV(loc6));
		if (tb1) break;
		if ((EIF_BOOLEAN) (loc2 > loc1)) break;
		loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc6)-537])(RTCV(loc6));
		loc7 = RTCCL(loc3);
		{
			static EIF_TYPE_INDEX typarr0[] = {939,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc7 = RTRV(eif_non_attached_type(typres0),loc7);
		}
		if (EIF_TEST(loc7)) {
			F601_4839(RTCV(Result), loc7, loc2);
		} else {
			tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F737_5723(RTCV(tr1), ((EIF_INTEGER_32) 3L));
			loc4 = (EIF_REFERENCE) tr1;
			F741_5952(RTCV(loc4), (EIF_CHARACTER_8) '\?');
			F741_5942(RTCV(loc4), loc2);
			tr1 = RTCCL(loc3);
			tr1 = F215_2457(Current, tr1, loc4);
			F601_4839(RTCV(Result), tr1, loc2);
		}
		loc2++;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc6)-537])(RTCV(loc6));
	}
	RTLE;
	return Result;
}

/* {SQLITE_BIND_ARG_MARSHALLER}.new_binding_argument */
EIF_REFERENCE F215_2457 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(22);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,arg2);
	RTLR(6,Result);
	RTLR(7,loc5);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc7);
	RTLR(11,loc1);
	RTLR(12,loc8);
	RTLR(13,loc9);
	RTLR(14,loc10);
	RTLR(15,loc11);
	RTLR(16,loc12);
	RTLR(17,loc13);
	RTLR(18,loc14);
	RTLR(19,loc15);
	RTLR(20,loc16);
	RTLR(21,loc17);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc3 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {939,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc3 = RTRV(eif_non_attached_type(typres0),loc3);
		}
		if (EIF_TEST(loc3)) {
			RTLE;
			return (EIF_REFERENCE) loc3;
		} else {
			loc4 = RTCCL(arg1);
			loc4 = RTRV(eif_non_attached_type(736),loc4);
			if (EIF_TEST(loc4)) {
				tr1 = RTLNS(948, 948, _OBJSIZ_2_0_0_0_0_0_0_0_);
				F940_8219(RTCV(tr1), arg2, loc4);
				Result = (EIF_REFERENCE) tr1;
			} else {
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_non_attached_type(734),loc5);
				if (EIF_TEST(loc5)) {
					tb1 = F735_5681(RTCV(loc5));
					if (tb1) {
						tr1 = RTLNS(948, 948, _OBJSIZ_2_0_0_0_0_0_0_0_);
						tr2 = F733_5610(RTCV(loc5));
						F940_8219(RTCV(tr1), arg2, tr2);
						Result = (EIF_REFERENCE) tr1;
					} else {
						tr1 = RTLNS(943, 943, _OBJSIZ_2_0_0_0_0_0_0_0_);
						F944_8226(RTCV(tr1), arg2);
						Result = (EIF_REFERENCE) tr1;
					}
				} else {
					loc6 = RTCCL(arg1);
					loc6 = RTRV(eif_non_attached_type(506),loc6);
					if (EIF_TEST(loc6)) {
						tr1 = RTLNS(947, 947, _OBJSIZ_2_0_0_0_0_0_0_0_);
						F940_8219(RTCV(tr1), arg2, loc6);
						RTLE;
						return (EIF_REFERENCE) tr1;
					} else {
						tr1 = F1_5(RTCV(arg1));
						loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5167[Dtype(tr1)-749])(tr1);
						tr1 = RTLNTY(839);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
							loc7 = RTCCL(arg1);
							loc7 = RTRV(eif_non_attached_type(837),loc7);
							if (EIF_TEST(loc7)) {
								tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
								ti1_1 = *(EIF_INTEGER_8 *)(RTCV(loc7)+ _CHROFF_0_0_);
								ti8_1 = (EIF_INTEGER_64) ti1_1;
								F942_8219(RTCV(tr1), arg2, ti8_1);
								loc1 = (EIF_REFERENCE) tr1;
							}
						} else {
							tr1 = RTLNTY(836);
							ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
							if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
								loc8 = RTCCL(arg1);
								loc8 = RTRV(eif_non_attached_type(834),loc8);
								if (EIF_TEST(loc8)) {
									tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
									ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc8)+ _I16OFF_0_0_0_);
									ti8_1 = (EIF_INTEGER_64) ti2_1;
									F942_8219(RTCV(tr1), arg2, ti8_1);
									loc1 = (EIF_REFERENCE) tr1;
								}
							} else {
								tr1 = RTLNTY(833);
								ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
								if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
									loc9 = RTCCL(arg1);
									loc9 = RTRV(eif_non_attached_type(831),loc9);
									if (EIF_TEST(loc9)) {
										tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
										ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc9)+ _LNGOFF_0_0_0_0_);
										ti8_1 = (EIF_INTEGER_64) ti4_1;
										F942_8219(RTCV(tr1), arg2, ti8_1);
										loc1 = (EIF_REFERENCE) tr1;
									}
								} else {
									tr1 = RTLNTY(830);
									ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
									if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
										loc10 = RTCCL(arg1);
										loc10 = RTRV(eif_non_attached_type(828),loc10);
										if (EIF_TEST(loc10)) {
											tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
											ti8_1 = *(EIF_INTEGER_64 *)(RTCV(loc10)+ _I64OFF_0_0_0_0_0_0_0_);
											F942_8219(RTCV(tr1), arg2, ti8_1);
											loc1 = (EIF_REFERENCE) tr1;
										}
									} else {
										tr1 = RTLNTY(851);
										ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
										if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
											loc11 = RTCCL(arg1);
											loc11 = RTRV(eif_non_attached_type(849),loc11);
											if (EIF_TEST(loc11)) {
												tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
												tu1_1 = *(EIF_NATURAL_8 *)(RTCV(loc11)+ _CHROFF_0_0_);
												ti4_1 = (EIF_INTEGER_32) tu1_1;
												ti8_1 = (EIF_INTEGER_64) ti4_1;
												F942_8219(RTCV(tr1), arg2, ti8_1);
												loc1 = (EIF_REFERENCE) tr1;
											}
										} else {
											tr1 = RTLNTY(848);
											ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
											if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
												loc12 = RTCCL(arg1);
												loc12 = RTRV(eif_non_attached_type(846),loc12);
												if (EIF_TEST(loc12)) {
													tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
													tu2_1 = *(EIF_NATURAL_16 *)(RTCV(loc12)+ _I16OFF_0_0_0_);
													ti4_1 = (EIF_INTEGER_32) tu2_1;
													ti8_1 = (EIF_INTEGER_64) ti4_1;
													F942_8219(RTCV(tr1), arg2, ti8_1);
													loc1 = (EIF_REFERENCE) tr1;
												}
											} else {
												tr1 = RTLNTY(845);
												ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
												if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
													loc13 = RTCCL(arg1);
													loc13 = RTRV(eif_non_attached_type(843),loc13);
													if (EIF_TEST(loc13)) {
														tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2147483647L);
														tr1 = RTLNS(845, 845, _OBJSIZ_0_0_0_1_0_0_0_0_);
														*(EIF_NATURAL_32 *)tr1 = tu4_1;
														tb1 = F445_2983(RTCV(loc13), tr1);
														if (tb1) {
															tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
															tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc13)+ _LNGOFF_0_0_0_0_);
															ti4_1 = (EIF_INTEGER_32) tu4_1;
															ti8_1 = (EIF_INTEGER_64) ti4_1;
															F942_8219(RTCV(tr1), arg2, ti8_1);
															loc1 = (EIF_REFERENCE) tr1;
														} else {
															tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
															tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc13)+ _LNGOFF_0_0_0_0_);
															ti8_1 = (EIF_INTEGER_64) tu4_1;
															F942_8219(RTCV(tr1), arg2, ti8_1);
															loc1 = (EIF_REFERENCE) tr1;
														}
													}
												} else {
													tr1 = RTLNTY(842);
													ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
													if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
														loc14 = RTCCL(arg1);
														loc14 = RTRV(eif_non_attached_type(840),loc14);
														if (EIF_TEST(loc14)) {
															tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
															tr1 = RTLNS(842, 842, _OBJSIZ_0_0_0_0_0_0_1_0_);
															*(EIF_NATURAL_64 *)tr1 = tu8_1;
															tb1 = F445_2983(RTCV(loc14), tr1);
															if (tb1) {
																tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
																tu8_1 = *(EIF_NATURAL_64 *)(RTCV(loc14)+ _I64OFF_0_0_0_0_0_0_0_);
																ti4_1 = (EIF_INTEGER_32) tu8_1;
																ti8_1 = (EIF_INTEGER_64) ti4_1;
																F942_8219(RTCV(tr1), arg2, ti8_1);
																loc1 = (EIF_REFERENCE) tr1;
															} else {
																tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(9223372036854775807));
																tr1 = RTLNS(842, 842, _OBJSIZ_0_0_0_0_0_0_1_0_);
																*(EIF_NATURAL_64 *)tr1 = tu8_1;
																tb1 = F445_2983(RTCV(loc14), tr1);
																if (tb1) {
																	tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
																	tu8_1 = *(EIF_NATURAL_64 *)(RTCV(loc14)+ _I64OFF_0_0_0_0_0_0_0_);
																	ti8_1 = (EIF_INTEGER_64) tu8_1;
																	F942_8219(RTCV(tr1), arg2, ti8_1);
																	loc1 = (EIF_REFERENCE) tr1;
																} else {
																	tr1 = RTLNS(946, 946, _OBJSIZ_1_0_0_0_0_0_2_0_);
																	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
																	F942_8219(RTCV(tr1), arg2, ti8_1);
																	Result = (EIF_REFERENCE) tr1;
																}
															}
														}
													} else {
														tr1 = RTLNTY(854);
														ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
														if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
															loc15 = RTCCL(arg1);
															loc15 = RTRV(eif_non_attached_type(852),loc15);
															if (EIF_TEST(loc15)) {
																tr1 = RTLNS(945, 945, _OBJSIZ_1_0_0_0_0_0_0_2_);
																tr4_1 = *(EIF_REAL_32 *)(RTCV(loc15)+ _R32OFF_0_0_0_0_0_);
																tr8_1 = (EIF_REAL_64) (tr4_1);
																F943_8219(RTCV(tr1), arg2, tr8_1);
																loc1 = (EIF_REFERENCE) tr1;
															}
														} else {
															tr1 = RTLNTY(857);
															ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
															if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
																loc16 = RTCCL(arg1);
																loc16 = RTRV(eif_non_attached_type(855),loc16);
																if (EIF_TEST(loc16)) {
																	tr1 = RTLNS(945, 945, _OBJSIZ_1_0_0_0_0_0_0_2_);
																	tr8_1 = *(EIF_REAL_64 *)(RTCV(loc16)+ _R64OFF_0_0_0_0_0_0_0_0_);
																	F943_8219(RTCV(tr1), arg2, tr8_1);
																	loc1 = (EIF_REFERENCE) tr1;
																}
															} else {
																tr1 = RTLNTY(693);
																ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
																if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
																	loc17 = RTCCL(arg1);
																	loc17 = RTRV(eif_non_attached_type(691),loc17);
																	if (EIF_TEST(loc17)) {
																		tr1 = RTLNS(944, 944, _OBJSIZ_1_2_0_0_0_0_0_0_);
																		tb1 = *(EIF_BOOLEAN *)(RTCV(loc17)+ _CHROFF_0_0_);
																		F941_8219(RTCV(tr1), arg2, tb1);
																		loc1 = (EIF_REFERENCE) tr1;
																	}
																} else {
																	tr1 = RTLNS(943, 943, _OBJSIZ_2_0_0_0_0_0_0_0_);
																	F944_8226(RTCV(tr1), arg2);
																	Result = (EIF_REFERENCE) tr1;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						RTCT0("l_scalar_result_attached", EX_CHECK);
						if ((EIF_BOOLEAN)(loc1 != NULL)) {
							RTCK0;
						} else {
							RTCF0;
						}
						Result = (EIF_REFERENCE) loc1;
					}
				}
			}
		}
	} else {
		tr1 = RTLNS(943, 943, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F944_8226(RTCV(tr1), arg2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

void EIF_Minit193 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
