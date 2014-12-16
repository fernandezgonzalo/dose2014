/*
 * Code for class WSF_PRECONDITION_FAILED_MESSAGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws245.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_PRECONDITION_FAILED_MESSAGE}.make */
void F489_3249 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLE;
}

/* {WSF_PRECONDITION_FAILED_MESSAGE}.header */
EIF_REFERENCE F489_3250 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_PRECONDITION_FAILED_MESSAGE}.request */
EIF_REFERENCE F489_3251 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_PRECONDITION_FAILED_MESSAGE}.body */
EIF_REFERENCE F489_3252 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_PRECONDITION_FAILED_MESSAGE}.send_to */
void F489_3254 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,loc3);
	RTLR(8,loc4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current);
	F94_1320(RTCV(arg1), ((EIF_INTEGER_32) 412L));
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
		tr1 = RTMS_EX_H("Error 412 (Precondition Failed)",31,1430408489);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</title>\012",9,1683473674);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H(
			"<style type=\"text/css\">\012div#header {color: #fff; background-color: #000; padding: 20px; text-align: center; font-size: 2em; font-weight: bold;}\012div#message { margin: 40px; text-align: center; font-size: 1.5em; }\012div#footer {color: #999; background-color: #eee; padding: 10px; text-align: center; }\012div#logo { float: right; margin: 20px; width: 60px height: auto; font-size: 0.8em; text-align: center; }\012div#logo div.outter { padding: 6px; width: 60px; border: solid 3px #500; background-color: #b00;}\012div#logo di"
			"v.outter div.inner1 { display: block; margin: 10px 15px;  width: 30px; height: 50px; color: #fff; background-color: #fff; border: solid 2px #900; }\012div#logo div.outter div.inner2 { margin: 10px 15px; width: 30px; height: 15px; color: #fff; background-color: #fff; border: solid 2px #900; }\012</style>\012</head>\012<body>\012<div id=\"header\">Error 412 (Precondition Failed)</div>",880,2083920702);
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
		tr1 = RTMS_EX_H("Error 412 (Precondition Failed)</div>",37,1991334718);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div id=\"message\">Error 412 (Precondition Failed): <code>",57,800113982);
		tr2 = RTOSCF(2806,F436_2806,(Current));
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = F749_6245(RTCV(tr3));
		tr3 = F733_5612(RTCV(tr3));
		tr2 = F464_3051(RTCV(tr2), tr3);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("</code></div>",13,1968312126);
		tr1 = F741_5940(RTCV(tr1), tr2);
		F741_5938(RTCV(loc1), tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tr1 = RTMS_EX_H("<div>",5,1685093950);
			F741_5938(RTCV(loc1), tr1);
			F741_5938(RTCV(loc1), loc3);
			tr1 = RTMS_EX_H("</div>\012",7,1996802058);
			F741_5938(RTCV(loc1), tr1);
		}
		tr1 = RTMS_EX_H("<div id=\"footer\"></div>",23,968522558);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</body>\012",8,1926616330);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</html>\012",8,2088594186);
		F741_5938(RTCV(loc1), tr1);
		F541_4527(RTCV(loc2));
	} else {
		loc1 = RTMS_EX_H("Error 412 (Precondition Failed): ",33,1462171168);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F749_6245(RTCV(tr1));
		F741_5938(RTCV(loc1), tr1);
		F741_5952(RTCV(loc1), (EIF_CHARACTER_8) '\012');
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tr1 = RTMS_EX_H("\012",1,10);
			F741_5938(RTCV(loc1), tr1);
			F741_5938(RTCV(loc1), loc4);
			tr1 = RTMS_EX_H("\012",1,10);
			F741_5938(RTCV(loc1), tr1);
		}
		F541_4530(RTCV(loc2));
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	F541_4517(RTCV(loc2), ti4_1);
	tr1 = F681_5151(RTCV(loc2));
	F94_1330(RTCV(arg1), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg1)-93])(RTCV(arg1), loc1);
	F94_1344(RTCV(arg1));
	RTLE;
}

void EIF_Minit245 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
