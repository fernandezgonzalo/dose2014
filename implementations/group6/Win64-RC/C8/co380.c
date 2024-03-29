/*
 * Code for class CONSOLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co380.h"
#include "eif_helpers.h"
#include "eif_console.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CONSOLE}.make_open_stdin */
void F863_7528 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F518_3985(Current, arg1);
	tp1 = (EIF_POINTER) console_def(((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_) = (EIF_POINTER) tp1;
	F518_4203(Current);
	RTLE;
}

/* {CONSOLE}.make_open_stdout */
void F863_7529 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F518_3985(Current, arg1);
	tp1 = (EIF_POINTER) console_def(((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_) = (EIF_POINTER) tp1;
	F518_4204(Current);
	RTLE;
}

/* {CONSOLE}.make_open_stderr */
void F863_7530 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F518_3985(Current, arg1);
	tp1 = (EIF_POINTER) console_def(((EIF_INTEGER_32) 2L));
	*(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_) = (EIF_POINTER) tp1;
	F518_4204(Current);
	RTLE;
}

/* {CONSOLE}.end_of_file */
EIF_BOOLEAN F863_7531 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(console_eof((FILE*) tp1));
}

/* {CONSOLE}.exists */
EIF_BOOLEAN F863_7532 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {CONSOLE}.count */
EIF_INTEGER_32 F863_7533 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {CONSOLE}.dispose */
void F863_7534 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {CONSOLE}.back */
void F863_7535 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {CONSOLE}.read_line */
void F863_7540 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F863_7542(Current);
}

/* {CONSOLE}.read_line_thread_aware */
void F863_7542 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc7);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current);
	loc7 = RTOSCF(4146,F518_4146,(Current));
	F741_5966(RTCV(loc4));
	loc1 = F432_2752(RTCV(loc7));
	for (;;) {
		if (loc3) break;
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
		tp2 = F432_2750(RTCV(loc7));
		loc2 = (EIF_INTEGER_32) console_readline((FILE*) tp1, (char*) tp2, (EIF_INTEGER) loc1, (EIF_INTEGER) ((EIF_INTEGER_32) 0L));
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
		loc6 = eif_min_int32 (loc2,loc1);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc6);
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 <= loc1);
		F741_5970(RTCV(loc4), loc6);
		F741_5986(RTCV(loc4), loc6);
		ti4_1 = eif_min_int32 (loc2,loc1);
		F432_2745(RTCV(loc7), loc4, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)), ti4_1);
	}
	RTLE;
}

/* {CONSOLE}.read_stream */
void F863_7543 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F863_7545(Current, arg1);
}

/* {CONSOLE}.read_stream_thread_aware */
void F863_7545 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current);
	loc2 = RTOSCF(4146,F518_4146,(Current));
	F432_2758(RTCV(loc2), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	tp2 = F432_2750(RTCV(loc2));
	loc1 = (EIF_INTEGER_32) console_readstream((FILE*) tp1, (char*) tp2, (EIF_INTEGER) arg1);
	F432_2758(RTCV(loc2), loc1);
	F741_5970(RTCV(loc3), loc1);
	F741_5986(RTCV(loc3), loc1);
	F432_2747(RTCV(loc2), loc3);
	RTLE;
}

/* {CONSOLE}.read_character */
void F863_7549 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	tc1 = (EIF_CHARACTER_8) console_readchar((FILE*) tp1);
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_3_0_) = (EIF_CHARACTER_8) tc1;
	RTLE;
}

/* {CONSOLE}.put_character */
void F863_7552 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	console_pc((FILE*) tp1, (EIF_CHARACTER) arg1);
}

/* {CONSOLE}.put_string */
void F863_7554 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		console_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {CONSOLE}.put_new_line */
void F863_7562 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	console_tnwl((FILE*) tp1);
}

/* {CONSOLE}.is_empty */
EIF_BOOLEAN F863_7564 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {CONSOLE}.console_def */
EIF_POINTER F863_7569 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) console_def(arg1);
	
	return Result;
}

/* {CONSOLE}.console_eof */
EIF_BOOLEAN F863_7570 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(console_eof((FILE*) arg1));
	
	return Result;
}

/* {CONSOLE}.console_ps */
void F863_7572 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	console_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {CONSOLE}.console_pc */
void F863_7574 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	
	console_pc((FILE*) arg1, (EIF_CHARACTER) arg2);
	
}

/* {CONSOLE}.console_tnwl */
void F863_7577 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	console_tnwl((FILE*) arg1);
	
}

/* {CONSOLE}.console_readchar */
EIF_CHARACTER_8 F863_7579 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_CHARACTER_8) console_readchar((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {CONSOLE}.console_readline */
EIF_INTEGER_32 F863_7583 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) console_readline((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {CONSOLE}.console_readstream */
EIF_INTEGER_32 F863_7585 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) console_readstream((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {CONSOLE}.file_close */
void F863_7586 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	console_file_close((FILE*) arg1);
	
}

void EIF_Minit380 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
