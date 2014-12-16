/*
 * Code for class NETWORK_SOCKET_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ne187.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NETWORK_SOCKET_ADDRESS}.make_from_address_and_port */
void F209_2361 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1402[Dtype(arg1)-113])(RTCV(arg1), arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {NETWORK_SOCKET_ADDRESS}.port */
EIF_INTEGER_32 F209_2366 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) en_sockaddr_get_port(tp1);
	RTLE;
	return Result;
}

/* {NETWORK_SOCKET_ADDRESS}.host_address */
EIF_REFERENCE F209_2367 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	RTCT0("has_address", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	tr1 = F208_2345(Current, tp1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {NETWORK_SOCKET_ADDRESS}.get_sock_family */
EIF_INTEGER_32 F209_2374 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_sockaddr_get_family(arg1);
	
	return Result;
}

/* {NETWORK_SOCKET_ADDRESS}.get_sock_port */
EIF_INTEGER_32 F209_2376 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_sockaddr_get_port(arg1);
	
	return Result;
}

void EIF_Minit187 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
