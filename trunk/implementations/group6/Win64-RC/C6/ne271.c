/*
 * Code for class NETWORK_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ne271.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NETWORK_SOCKET}.exists */
EIF_BOOLEAN F515_3904 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	
	
	Result = *(EIF_BOOLEAN *)(Current + O3423[dtype-512]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3439[dtype-514]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3440[dtype-514]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))));
	return Result;
}

/* {NETWORK_SOCKET}.close_socket */
void F515_3905 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3451[dtype-514])) {
		if (*(EIF_BOOLEAN *)(Current + O3427[dtype-514])) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O3439[dtype-514]);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + O3440[dtype-514]);
			en_socket_close(ti4_1, ti4_2);
		}
		*(EIF_BOOLEAN *)(Current + O3451[dtype-514]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	*(EIF_BOOLEAN *)(Current + O3423[dtype-512]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O3421[dtype-512]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O3422[dtype-512]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {NETWORK_SOCKET}.descriptor */
EIF_INTEGER_32 F515_3906 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3439[Dtype(Current)-514]);
}

/* {NETWORK_SOCKET}.bind */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F515_3908 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTCDT;
	RTXD;
	
	RTXI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		F516_3968(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_));
		*(EIF_BOOLEAN *)(Current + O3421[dtype-512]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current + O3429[dtype-514]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTE_E
	RTXS(2);
	if ((EIF_BOOLEAN) !F165_2093(Current)) {
		*(EIF_BOOLEAN *)(Current + O3429[dtype-514]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O3421[dtype-512]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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

/* {NETWORK_SOCKET}.address_type */
EIF_REFERENCE F515_3909 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
		RTCF0;
	RTEC (EN_POST);
	return (EIF_REFERENCE) 0;
}

/* {NETWORK_SOCKET}.is_closed */
EIF_BOOLEAN F515_3910 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3451[Dtype(Current) - 514]);
}


/* {NETWORK_SOCKET}.port */
EIF_INTEGER_32 F515_3914 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3429[dtype-514])) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTLE;
		return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3442[dtype-514]);
	}/* NOTREACHED */
	
}

/* {NETWORK_SOCKET}.set_reuse_address */
void F515_3922 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F515_3906(Current);
	ti4_2 = (EIF_INTEGER_32) level_sol_socket();
	ti4_3 = (EIF_INTEGER_32) so_reuse_addr();
	c_set_sock_opt_int(ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {NETWORK_SOCKET}.set_non_blocking */
void F515_3925 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3439[dtype-514]);
	c_set_non_blocking(ti4_1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3440[dtype-514]) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3440[dtype-514]);
		c_set_non_blocking(ti4_1);
	}
	*(EIF_BOOLEAN *)(Current + O3395[dtype-512]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {NETWORK_SOCKET}.set_blocking */
void F515_3926 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3439[dtype-514]);
	c_set_blocking(ti4_1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3440[dtype-514]) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3440[dtype-514]);
		c_set_blocking(ti4_1);
	}
	*(EIF_BOOLEAN *)(Current + O3395[dtype-512]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {NETWORK_SOCKET}.make_socket */
void F515_3927 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F516_3969(Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3439[dtype-514]) > ((EIF_INTEGER_32) -1L))) {
		*(EIF_BOOLEAN *)(Current + O3451[dtype-514]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O3423[dtype-512]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		F515_3926(Current);
	}
	RTLE;
}

/* {NETWORK_SOCKET}.shutdown */
void F515_3928 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3439[dtype-514]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3440[dtype-514]);
	en_socket_shutdown(ti4_1, ti4_2);
}

/* {NETWORK_SOCKET}.c_close */
void F515_3937 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	en_socket_close(arg1, arg2);
	
}

/* {NETWORK_SOCKET}.c_select_poll_with_timeout */
EIF_INTEGER_32 F515_3938 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_select_poll_with_timeout(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {NETWORK_SOCKET}.c_shutdown */
void F515_3940 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	EIF_ENTER_C;en_socket_shutdown(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
}

void EIF_Minit271 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
