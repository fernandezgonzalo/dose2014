/*
 * Code for class WSF_METHOD_NOT_ALLOWED_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws244.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.make */
void F488_3233 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTLNSMART(eif_non_attached_type(680));
	F681_5142(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(539));
	F540_4449(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {665,0xFFF9,3,684,736,732,732,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.header */
EIF_REFERENCE F488_3234 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.request */
EIF_REFERENCE F488_3235 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.suggested_methods */
EIF_REFERENCE F488_3236 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.suggested_items */
EIF_REFERENCE F488_3237 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.body */
EIF_REFERENCE F488_3238 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.recognized_methods */
EIF_REFERENCE F488_3239 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.set_suggested_methods */
void F488_3242 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.add_suggested_text */
void F488_3244 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,65534,732,732,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+2)->it_r = arg1;
	RTAR(tr2,arg1);
	((EIF_TYPED_VALUE *)tr2+3)->it_r = arg2;
	RTAR(tr2,arg2);
	F666_5047(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.send_to */
void F488_3246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTLD;
	
	RTLI(24);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,loc5);
	RTLR(3,Current);
	RTLR(4,loc7);
	RTLR(5,arg1);
	RTLR(6,loc8);
	RTLR(7,loc9);
	RTLR(8,loc1);
	RTLR(9,loc2);
	RTLR(10,tr2);
	RTLR(11,tr3);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc12);
	RTLR(15,loc3);
	RTLR(16,loc4);
	RTLR(17,loc13);
	RTLR(18,loc14);
	RTLR(19,loc15);
	RTLR(20,loc16);
	RTLR(21,loc17);
	RTLR(22,loc18);
	RTLR(23,loc19);
	
	RTGC;
	tr1 = RTLNS(159, 159, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc6 = (EIF_REFERENCE) tr1;
	loc5 = *(EIF_REFERENCE *)(Current);
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc7 = tr1;
	if (!((EIF_BOOLEAN) !EIF_TEST(loc7))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_9_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4639[Dtype(tr1)-735])(RTCV(tr1));
		tb2 = F540_4455(RTCV(loc7), tr1);
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = ((EIF_INTEGER_32) 405L);
		F94_1320(RTCV(arg1), ti4_1);
	} else {
		ti4_1 = ((EIF_INTEGER_32) 501L);
		F94_1320(RTCV(arg1), ti4_1);
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc8 = tr1;
	if (EIF_TEST(loc8)) {
		tb2 = F540_4454(RTCV(loc8));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		F541_4555(RTCV(loc5), loc8);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O1260[Dtype(arg1)-93]);
	tr1 = F160_2022(RTCV(loc6), ti4_1);
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		loc1 = (EIF_REFERENCE) loc9;
	} else {
		loc1 = RTMS_EX_H("Bug in server",13,70089842);
	}
	tr1 = F488_3248(Current, loc6, (EIF_BOOLEAN) 1);
	loc2 = F733_5610(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTOSCF(2074,F162_2074,(Current));
	tb1 = F749_6181(RTCV(tr1), tr2);
	if (tb1) {
		loc1 = RTMS_EX_H("<html lang=\"en\"><head>",22,617498686);
		tr1 = RTMS_EX_H("<title>",7,168924222);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTOSCF(2806,F436_2806,(Current));
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = F749_6245(RTCV(tr2));
		tr2 = F733_5612(RTCV(tr2));
		tr1 = F464_3051(RTCV(tr1), tr2);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("!!",2,8481);
		tr1 = F741_5940(RTCV(loc2), tr1);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</title>\012",9,1683473674);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H(
			"<style type=\"text/css\">\012div#header {color: #fff; background-color: #000; padding: 20px; text-align: center; font-size: 2em; font-weight: bold;}\012div#message { margin: 40px; text-align: center; font-size: 1.5em; }\012div#suggestions { margin: auto; width: 60%;}\012div#suggestions ul { }\012div#footer {color: #999; background-color: #eee; padding: 10px; text-align: center; }\012div#logo { float: right; margin: 20px; width: 60px height: auto; font-size: 0.8em; text-align: center; }\012div#logo div.outter { padding: 6px; width"
			": 60px; border: solid 3px #500; background-color: #b00;}\012div#logo div.outter div.inner1 { display: block; margin: 10px 15px;  width: 30px; height: 50px; color: #fff; background-color: #fff; border: solid 2px #900; }\012div#logo div.outter div.inner2 { margin: 10px 15px; width: 30px; height: 15px; color: #fff; background-color: #fff; border: solid 2px #900; }\012</style>\012</head>\012<body>\012<div id=\"header\">",911,373595710);
		F741_5938(RTCV(loc1), tr1);
		F741_5938(RTCV(loc1), loc2);
		tr1 = RTMS_EX_H("!!</div>",8,1240167486);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div id=\"logo\">",15,1146794046);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div class=\"outter\"> ",21,1378045216);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div class=\"inner1\"></div>",26,1346320446);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div class=\"inner2\"></div>",26,1405302846);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</div>",6,1802958910);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</div>",6,1802958910);
		tr1 = F741_5940(RTCV(loc2), tr1);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div id=\"message\">",18,1441208638);
		tr1 = F741_5940(RTCV(tr1), loc2);
		tr2 = RTMS_EX_H(": the request method <code>",27,5361470);
		tr1 = F741_5940(RTCV(tr1), tr2);
		F741_5938(RTCV(loc1), tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_9_);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</code> is inappropriate for the URL for <code>",47,950211390);
		tr2 = RTOSCF(2806,F436_2806,(Current));
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = F749_6245(RTCV(tr3));
		tr3 = F733_5612(RTCV(tr3));
		tr2 = F464_3051(RTCV(tr2), tr3);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("</code>.</div>",14,714066238);
		tr1 = F741_5940(RTCV(tr1), tr2);
		F741_5938(RTCV(loc1), tr1);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc10 = tr1;
		if (EIF_TEST(loc10)) {
			tb2 = F540_4454(RTCV(loc10));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tr1 = RTMS_EX_H("<div id=\"suggestions\"><strong>Allowed methods:</strong>",55,336199998);
			F741_5938(RTCV(loc1), tr1);
			loc11 = F540_4467(RTCV(loc10));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc11)-537])(RTCV(loc11));
				if (tb1) break;
				tr1 = RTMS_EX_H(" ",1,32);
				F741_5938(RTCV(loc1), tr1);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc11)-537])(RTCV(loc11));
				F741_5938(RTCV(loc1), tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc11)-537])(RTCV(loc11));
			}
			tr1 = RTMS_EX_H("\012",1,10);
			F741_5938(RTCV(loc1), tr1);
		}
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc12 = tr1;
		if (EIF_TEST(loc12)) {
			tb3 = F281_2518(RTCV(loc12));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = RTMS_EX_H("<div id=\"suggestions\"><strong>Perhaps your are looking for:</strong><ul>",72,1987395390);
			F741_5938(RTCV(loc1), tr1);
			F666_5038(RTCV(loc12));
			for (;;) {
				tb2 = F637_4919(RTCV(loc12));
				if (tb2) break;
				loc3 = F666_5012(RTCV(loc12));
				loc3 = eif_boxed_item(loc3,2);
				loc4 = F666_5012(RTCV(loc12));
				loc4 = eif_boxed_item(loc4,1);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					if ((EIF_BOOLEAN)(loc3 == NULL)) {
						loc3 = (EIF_REFERENCE) loc4;
					}
					tr1 = RTMS_EX_H("<li>",4,1013737790);
					F741_5938(RTCV(loc1), tr1);
					tr1 = RTMS_EX_H("<a href=\"",9,99169058);
					tr1 = F741_5940(RTCV(tr1), loc4);
					tr2 = RTMS_EX_H("\">",2,8766);
					tr1 = F741_5940(RTCV(tr1), tr2);
					tr2 = RTOSCF(2806,F436_2806,(Current));
					tr3 = F733_5614(RTCV(loc3));
					tr2 = F464_3051(RTCV(tr2), tr3);
					tr1 = F741_5940(RTCV(tr1), tr2);
					tr2 = RTMS_EX_H("</a>",4,1009738046);
					tr1 = F741_5940(RTCV(tr1), tr2);
					F741_5938(RTCV(loc1), tr1);
				} else {
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						tr1 = RTMS_EX_H("<li>",4,1013737790);
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTOSCF(2806,F436_2806,(Current));
						tr2 = F733_5614(RTCV(loc3));
						tr1 = F464_3051(RTCV(tr1), tr2);
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTMS_EX_H("</li>\012",6,1937162250);
						F741_5938(RTCV(loc1), tr1);
					}
				}
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 != NULL) || (EIF_BOOLEAN)(loc3 != NULL))) {
					tr1 = F666_5012(RTCV(loc12));
					tr1 = eif_boxed_item(tr1,3);
					loc13 = tr1;
					if (EIF_TEST(loc13)) {
						tr1 = RTMS_EX_H("<br/> - ",8,1213593632);
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTOSCF(2806,F436_2806,(Current));
						tr2 = F733_5614(RTCV(loc13));
						tr1 = F464_3051(RTCV(tr1), tr2);
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTMS_EX_H("\012",1,10);
						F741_5938(RTCV(loc1), tr1);
					}
					tr1 = RTMS_EX_H("</li>\012",6,1937162250);
					F741_5938(RTCV(loc1), tr1);
				}
				F666_5040(RTCV(loc12));
			}
			tr1 = RTMS_EX_H("</ul></div>\012",12,322903050);
			F741_5938(RTCV(loc1), tr1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc14 = tr1;
		if (EIF_TEST(loc14)) {
			tr1 = RTMS_EX_H("<div>",5,1685093950);
			F741_5938(RTCV(loc1), tr1);
			F741_5938(RTCV(loc1), loc14);
			tr1 = RTMS_EX_H("</div>\012",7,1996802058);
			F741_5938(RTCV(loc1), tr1);
		}
		tr1 = RTMS_EX_H("<div id=\"footer\"></div>",23,968522558);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</body>\012",8,1926616330);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</html>\012",8,2088594186);
		F741_5938(RTCV(loc1), tr1);
		F541_4527(RTCV(loc5));
	} else {
		tr1 = RTMS_EX_H(": the request method ",21,1382922016);
		loc1 = F741_5940(RTCV(loc2), tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_9_);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H(" is inappropriate for the URL for \'",35,2088989479);
		tr2 = RTOSCF(2806,F436_2806,(Current));
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = F749_6245(RTCV(tr3));
		tr3 = F733_5612(RTCV(tr3));
		tr2 = F464_3051(RTCV(tr2), tr3);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("\'.\012",3,2567690);
		tr1 = F741_5940(RTCV(tr1), tr2);
		F741_5938(RTCV(loc1), tr1);
		tb3 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc15 = tr1;
		if (EIF_TEST(loc15)) {
			tb4 = F540_4454(RTCV(loc15));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tr1 = RTMS_EX_H("Allowed methods:",16,257008954);
			F741_5938(RTCV(loc1), tr1);
			loc16 = F540_4467(RTCV(loc15));
			for (;;) {
				tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2622[Dtype(loc16)-537])(RTCV(loc16));
				if (tb3) break;
				tr1 = RTMS_EX_H(" ",1,32);
				F741_5938(RTCV(loc1), tr1);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2621[Dtype(loc16)-537])(RTCV(loc16));
				F741_5938(RTCV(loc1), tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2623[Dtype(loc16)-537])(RTCV(loc16));
			}
			tr1 = RTMS_EX_H("\012",1,10);
			F741_5938(RTCV(loc1), tr1);
		}
		tb4 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc17 = tr1;
		if (EIF_TEST(loc17)) {
			tb5 = F281_2518(RTCV(loc17));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			tr1 = RTMS_EX_H("\012Perhaps your are looking for:\012",31,234322954);
			F741_5938(RTCV(loc1), tr1);
			F666_5038(RTCV(loc17));
			for (;;) {
				tb4 = F637_4919(RTCV(loc17));
				if (tb4) break;
				loc3 = F666_5012(RTCV(loc17));
				loc3 = eif_boxed_item(loc3,2);
				loc4 = F666_5012(RTCV(loc17));
				loc4 = eif_boxed_item(loc4,1);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					tr1 = RTMS_EX_H(" - ",3,2108704);
					F741_5938(RTCV(loc1), tr1);
					if ((EIF_BOOLEAN)(loc3 == NULL)) {
						F741_5938(RTCV(loc1), loc4);
					} else {
						tr1 = RTMS_EX_H(" : ",3,2112032);
						F741_5938(RTCV(loc1), tr1);
						tr1 = F733_5607(RTCV(loc3));
						F741_5938(RTCV(loc1), tr1);
					}
				} else {
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						tr1 = RTMS_EX_H(" - ",3,2108704);
						F741_5938(RTCV(loc1), tr1);
						tr1 = F733_5607(RTCV(loc3));
						F741_5938(RTCV(loc1), tr1);
					}
				}
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 != NULL) || (EIF_BOOLEAN)(loc3 != NULL))) {
					tr1 = RTMS_EX_H("\012",1,10);
					F741_5938(RTCV(loc1), tr1);
					tr1 = F666_5012(RTCV(loc17));
					tr1 = eif_boxed_item(tr1,3);
					loc18 = tr1;
					if (EIF_TEST(loc18)) {
						tr1 = RTMS_EX_H("   ",3,2105376);
						F741_5938(RTCV(loc1), tr1);
						tr1 = F733_5607(RTCV(loc18));
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTMS_EX_H("\012",1,10);
						F741_5938(RTCV(loc1), tr1);
					}
				}
				F666_5040(RTCV(loc17));
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc19 = tr1;
		if (EIF_TEST(loc19)) {
			tr1 = RTMS_EX_H("\012",1,10);
			F741_5938(RTCV(loc1), tr1);
			F741_5938(RTCV(loc1), loc19);
			tr1 = RTMS_EX_H("\012",1,10);
			F741_5938(RTCV(loc1), tr1);
		}
		F541_4530(RTCV(loc5));
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	F541_4517(RTCV(loc5), ti4_1);
	tr1 = F681_5151(RTCV(loc5));
	F94_1330(RTCV(arg1), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg1)-93])(RTCV(arg1), loc1);
	F94_1344(RTCV(arg1));
	RTLE;
}

/* {WSF_METHOD_NOT_ALLOWED_RESPONSE}.html_error_code_text */
EIF_REFERENCE F488_3248 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	if (arg2) {
		loc1 = ((EIF_INTEGER_32) 405L);
	} else {
		loc1 = ((EIF_INTEGER_32) 501L);
	}
	tr1 = F160_2022(RTCV(arg1), loc1);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = RTMS_EX_H("Error ",6,2056441376);
		tr2 = c_outi(loc1);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H(" (",2,8232);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr1 = F741_5940(RTCV(tr1), loc2);
		tr2 = RTMS_EX_H(")",1,41);
		Result = F741_5940(RTCV(tr1), tr2);
	} else {
		Result = RTMS_EX_H("Bug in server",13,70089842);
	}
	RTLE;
	return Result;
}

void EIF_Minit244 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
