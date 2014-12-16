/*
 * Code for class NETWORK_STREAM_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ne272.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NETWORK_STREAM_SOCKET}.make */
void F516_3941 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	c_reset_error();
	ti4_1 = (EIF_INTEGER_32) af_inet();
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_3_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = (EIF_INTEGER_32) sock_stream();
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_5_) = (EIF_INTEGER_32) ti4_1;
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F733_5554(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	F515_3927(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	RTLE;
}

/* {NETWORK_STREAM_SOCKET}.make_server_by_port */
void F516_3943 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3452[Dtype(Current)-515])(Current);
	loc1 = F208_2340(Current);
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y3369,Y3369_gen_type,Dftype(Current),512)));
	F209_2361(RTCV(tr1), loc1, arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F515_3908(Current);
	RTLE;
}

/* {NETWORK_STREAM_SOCKET}.make_from_descriptor_and_address */
void F516_3946 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_7_) = (EIF_INTEGER_32) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	ti4_1 = F49_705(RTCV(arg2));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_3_) = (EIF_INTEGER_32) ti4_1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	tr1 = RTLNSMART(eif_non_attached_type(740));
	F733_5554(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {NETWORK_STREAM_SOCKET}.listen */
void F516_3952 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	RTCT0("address_attached", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_7_);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_8_);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	en_socket_stream_listen((EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2), tp1, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_7_) = (EIF_INTEGER_32) loc1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_8_) = (EIF_INTEGER_32) loc2;
	RTLE;
}

/* {NETWORK_STREAM_SOCKET}.accept */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F516_3953 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	RTCFDT;
	RTXD;
	
	RTXI(7);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc5);
	RTLR(5,tr2);
	RTLR(6,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
		RTCT0("address_attached", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc2 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc6);
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_9_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_7_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_8_);
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
		tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_12_);
		loc3 = (EIF_INTEGER_32) en_socket_stream_accept(ti4_1, ti4_2, (EIF_INTEGER_32 *) &(loc4), tp1, ti4_3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_9_) = (EIF_INTEGER_32) loc4;
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y3425,Y3425_gen_type,dftype,513)));
			tr2 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc6);
			F516_3946(RTCV(tr1), loc3, tr2);
			loc5 = (EIF_REFERENCE) tr1;
			F513_3796(RTCV(loc5), loc2);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_)) {
				F515_3926(RTCV(loc5));
			} else {
				F515_3925(RTCV(loc5));
			}
			RTAR(Current, loc5);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) loc5;
		}
	}
	RTE_E
	RTXS(7);
	if ((EIF_BOOLEAN) !F165_2093(Current)) {
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {NETWORK_STREAM_SOCKET}.do_bind */
void F516_3968 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_7_);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_8_);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_10_);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	en_socket_stream_bind((EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2), (EIF_INTEGER_32 *) &(loc3), tp1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_7_) = (EIF_INTEGER_32) loc1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_8_) = (EIF_INTEGER_32) loc2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_10_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {NETWORK_STREAM_SOCKET}.do_create */
void F516_3969 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_7_);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_8_);
	en_socket_stream_create((EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_7_) = (EIF_INTEGER_32) loc1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_12_2_8_) = (EIF_INTEGER_32) loc2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {NETWORK_STREAM_SOCKET}.c_create */
void F516_3970 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2)
{
	GTCX
	
	
	EIF_ENTER_C;en_socket_stream_create(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
}

/* {NETWORK_STREAM_SOCKET}.c_bind */
void F516_3972 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	EIF_ENTER_C;en_socket_stream_bind(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
}

/* {NETWORK_STREAM_SOCKET}.c_listen */
void F516_3973 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	EIF_ENTER_C;en_socket_stream_listen(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
}

/* {NETWORK_STREAM_SOCKET}.c_accept */
EIF_INTEGER_32 F516_3974 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32* arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) en_socket_stream_accept(arg1, arg2, arg3, arg4, arg5);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

void EIF_Minit272 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
