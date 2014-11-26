/*
 * Code for class JSON_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F72_1196(EIF_REFERENCE);
extern EIF_TYPED_VALUE F72_1197(EIF_REFERENCE);
extern EIF_TYPED_VALUE F72_1198(EIF_REFERENCE);
extern EIF_TYPED_VALUE F72_1199(EIF_REFERENCE);
extern EIF_TYPED_VALUE F72_1200(EIF_REFERENCE);
extern EIF_TYPED_VALUE F72_1201(EIF_REFERENCE);
extern EIF_TYPED_VALUE F72_1202(EIF_REFERENCE);
extern EIF_TYPED_VALUE F72_1203(EIF_REFERENCE);
extern EIF_TYPED_VALUE F72_1204(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F72_1205(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F72_1206(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F72_1207(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit72(void);

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

/* {JSON_TOKENS}.j_object_open */
EIF_TYPED_VALUE F72_1196 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '{';
	return r;
}

/* {JSON_TOKENS}.j_array_open */
EIF_TYPED_VALUE F72_1197 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '[';
	return r;
}

/* {JSON_TOKENS}.j_object_close */
EIF_TYPED_VALUE F72_1198 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '}';
	return r;
}

/* {JSON_TOKENS}.j_array_close */
EIF_TYPED_VALUE F72_1199 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ']';
	return r;
}

/* {JSON_TOKENS}.j_string */
EIF_TYPED_VALUE F72_1200 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\"';
	return r;
}

/* {JSON_TOKENS}.j_plus */
EIF_TYPED_VALUE F72_1201 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '+';
	return r;
}

/* {JSON_TOKENS}.j_minus */
EIF_TYPED_VALUE F72_1202 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '-';
	return r;
}

/* {JSON_TOKENS}.j_dot */
EIF_TYPED_VALUE F72_1203 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	return r;
}

/* {JSON_TOKENS}.is_open_token */
EIF_TYPED_VALUE F72_1204 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_open_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 71, Current, 0, 1, 1205);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(71, Current, 1205);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
		case (EIF_CHARACTER_8) '.':
		case (EIF_CHARACTER_8) '[':
		case (EIF_CHARACTER_8) '{':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_close_token */
EIF_TYPED_VALUE F72_1205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_close_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 71, Current, 0, 1, 1206);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(71, Current, 1206);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) ']':
		case (EIF_CHARACTER_8) '}':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_special_character */
EIF_TYPED_VALUE F72_1206 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_special_character";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 71, Current, 0, 1, 1207);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(71, Current, 1207);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\010':
		case (EIF_CHARACTER_8) '\011':
		case (EIF_CHARACTER_8) '\012':
		case (EIF_CHARACTER_8) '\014':
		case (EIF_CHARACTER_8) '\015':
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) '\\':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_special_control */
EIF_TYPED_VALUE F72_1207 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_special_control";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 71, Current, 0, 1, 1208);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(71, Current, 1208);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) 'b':
		case (EIF_CHARACTER_8) 'f':
		case (EIF_CHARACTER_8) 'n':
		case (EIF_CHARACTER_8) 'r':
		case (EIF_CHARACTER_8) 't':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit72 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
