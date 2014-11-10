/*
 * Code for class HTTP_SERVER_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F6_64(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_65(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_66(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_67(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_68(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_69(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_70(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_71(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_72(EIF_REFERENCE);
extern EIF_TYPED_VALUE F6_73(EIF_REFERENCE);
extern void F6_74(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F6_75(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F6_76(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F6_77(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F6_78(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F6_79(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F6_80(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F6_81(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit6(void);

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

/* {HTTP_SERVER_CONFIGURATION}.make */
void F6_64 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 5, Current, 0, 0, 69);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(5, Current, 69);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 69, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(69, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 70, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(70, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 71, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(71, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 72, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(72, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5000L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 67, 0xF800013A, 0); /* document_root */
	
	tr1 = RTMS_EX_H("htdocs",6,1890384755);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(67, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 73, 0x04000000, 1); /* force_single_threaded */
	
	*(EIF_BOOLEAN *)(Current + RTWA(73, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION}.server_details */
RTOID (F6_65)


EIF_TYPED_VALUE F6_65 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F6_65,71,RTMS_EX_H("Server : NINO Eiffel Server",27,1169312370));
}

/* {HTTP_SERVER_CONFIGURATION}.document_root */
EIF_TYPED_VALUE F6_66 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(67,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_name */
EIF_TYPED_VALUE F6_67 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(68,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_port */
EIF_TYPED_VALUE F6_68 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(69,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.max_tcp_clients */
EIF_TYPED_VALUE F6_69 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(70,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.socket_accept_timeout */
EIF_TYPED_VALUE F6_70 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(71,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.socket_connect_timeout */
EIF_TYPED_VALUE F6_71 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(72,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.force_single_threaded */
EIF_TYPED_VALUE F6_72 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(73,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.is_verbose */
EIF_TYPED_VALUE F6_73 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(74,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.set_http_server_name */
void F6_74 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_name";
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
	
	RTEAA(l_feature_name, 5, Current, 0, 1, 79);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(5, Current, 79);
	RTCC(arg1, 5, l_feature_name, 1, RTWCT(68, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 68, 0xF800013A, 0); /* http_server_name */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(68, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {HTTP_SERVER_CONFIGURATION}.set_http_server_port */
void F6_75 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_port";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 5, Current, 0, 1, 80);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(5, Current, 80);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 69, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(69, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_document_root */
void F6_76 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_document_root";
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
	
	RTEAA(l_feature_name, 5, Current, 0, 1, 81);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(5, Current, 81);
	RTCC(arg1, 5, l_feature_name, 1, RTWCT(67, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 67, 0xF800013A, 0); /* document_root */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(67, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {HTTP_SERVER_CONFIGURATION}.set_max_tcp_clients */
void F6_77 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_max_tcp_clients";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 5, Current, 0, 1, 82);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(5, Current, 82);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 70, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(70, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_socket_accept_timeout */
void F6_78 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_socket_accept_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 5, Current, 0, 1, 83);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(5, Current, 83);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 71, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(71, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_socket_connect_timeout */
void F6_79 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_socket_connect_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 5, Current, 0, 1, 84);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(5, Current, 84);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 72, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(72, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_force_single_threaded */
void F6_80 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_force_single_threaded";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 5, Current, 0, 1, 85);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(5, Current, 85);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 73, 0x04000000, 1); /* force_single_threaded */
	
	*(EIF_BOOLEAN *)(Current + RTWA(73, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {HTTP_SERVER_CONFIGURATION}.set_is_verbose */
void F6_81 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_verbose";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 5, Current, 0, 1, 86);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(5, Current, 86);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 74, 0x04000000, 1); /* is_verbose */
	
	*(EIF_BOOLEAN *)(Current + RTWA(74, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

void EIF_Minit6 (void)
{
	GTCX
	RTOTS (65,F6_65)
}


#ifdef __cplusplus
}
#endif
