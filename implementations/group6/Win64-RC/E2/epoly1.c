#include "epoly1.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R11[949])();
void R11_init () {
	R11[0] = (char *(*)()) F1_8;
	R11[1] = (char *(*)()) F2_42;
	{long i; for (i = 2; i < 48; i++) R11[i] = (char *(*)()) F1_8;}
	R11[48] = (char *(*)()) F49_704;
	{long i; for (i = 49; i < 208; i++) R11[i] = (char *(*)()) F1_8;}
	R11[208] = (char *(*)()) F49_704;
	{long i; for (i = 209; i < 439; i++) R11[i] = (char *(*)()) F1_8;}
	R11[439] = (char *(*)()) F440_2860;
	R11[440] = (char *(*)()) F1_8;
	R11[441] = (char *(*)()) F442_2912;
	R11[442] = (char *(*)()) F443_2942;
	R11[443] = (char *(*)()) F444_2964;
	{long i; for (i = 444; i < 446; i++) R11[i] = (char *(*)()) F445_2986;}
	{long i; for (i = 446; i < 493; i++) R11[i] = (char *(*)()) F1_8;}
	R11[493] = (char *(*)()) F494_3319;
	R11[494] = (char *(*)()) F1_8;
	{long i; for (i = 495; i < 497; i++) R11[i] = (char *(*)()) F496_3402;}
	{long i; for (i = 497; i < 506; i++) R11[i] = (char *(*)()) F1_8;}
	R11[506] = (char *(*)()) F507_3524;
	{long i; for (i = 507; i < 521; i++) R11[i] = (char *(*)()) F1_8;}
	R11[521] = (char *(*)()) F522_4307;
	{long i; for (i = 522; i < 578; i++) R11[i] = (char *(*)()) F1_8;}
	R11[578] = (char *(*)()) F579_4654;
	R11[579] = (char *(*)()) F580_4654;
	R11[580] = (char *(*)()) F581_4654;
	R11[581] = (char *(*)()) F582_4654;
	{long i; for (i = 582; i < 584; i++) R11[i] = (char *(*)()) F579_4654;}
	R11[584] = (char *(*)()) F585_4766;
	R11[585] = (char *(*)()) F586_4766;
	R11[586] = (char *(*)()) F585_4766;
	{long i; for (i = 587; i < 599; i++) R11[i] = (char *(*)()) F1_8;}
	R11[599] = (char *(*)()) F600_4786;
	R11[600] = (char *(*)()) F601_4829;
	R11[601] = (char *(*)()) F602_4829;
	R11[602] = (char *(*)()) F603_4829;
	R11[603] = (char *(*)()) F604_4829;
	R11[604] = (char *(*)()) F605_4829;
	R11[605] = (char *(*)()) F606_4829;
	R11[606] = (char *(*)()) F607_4829;
	R11[607] = (char *(*)()) F608_4829;
	R11[608] = (char *(*)()) F609_4829;
	R11[609] = (char *(*)()) F610_4829;
	R11[610] = (char *(*)()) F611_4829;
	R11[611] = (char *(*)()) F612_4829;
	{long i; for (i = 612; i < 636; i++) R11[i] = (char *(*)()) F1_8;}
	R11[636] = (char *(*)()) F637_4918;
	R11[637] = (char *(*)()) F638_4918;
	R11[638] = (char *(*)()) F639_4918;
	R11[639] = (char *(*)()) F640_4918;
	R11[640] = (char *(*)()) F641_4918;
	R11[641] = (char *(*)()) F642_4918;
	R11[642] = (char *(*)()) F643_4918;
	R11[643] = (char *(*)()) F644_4918;
	R11[644] = (char *(*)()) F645_4918;
	R11[645] = (char *(*)()) F646_4918;
	R11[646] = (char *(*)()) F647_4918;
	R11[647] = (char *(*)()) F648_4918;
	R11[648] = (char *(*)()) F637_4918;
	R11[649] = (char *(*)()) F638_4918;
	R11[650] = (char *(*)()) F639_4918;
	R11[651] = (char *(*)()) F640_4918;
	R11[652] = (char *(*)()) F641_4918;
	R11[653] = (char *(*)()) F642_4918;
	R11[654] = (char *(*)()) F643_4918;
	R11[655] = (char *(*)()) F644_4918;
	R11[656] = (char *(*)()) F645_4918;
	R11[657] = (char *(*)()) F646_4918;
	R11[658] = (char *(*)()) F647_4918;
	R11[659] = (char *(*)()) F648_4918;
	R11[660] = (char *(*)()) F637_4918;
	R11[661] = (char *(*)()) F640_4918;
	R11[662] = (char *(*)()) F638_4918;
	R11[663] = (char *(*)()) F640_4918;
	R11[664] = (char *(*)()) F637_4918;
	R11[665] = (char *(*)()) F666_5031;
	R11[666] = (char *(*)()) F667_5031;
	R11[667] = (char *(*)()) F668_5031;
	R11[668] = (char *(*)()) F669_5031;
	R11[669] = (char *(*)()) F670_5031;
	R11[670] = (char *(*)()) F671_5031;
	R11[671] = (char *(*)()) F672_5031;
	R11[672] = (char *(*)()) F673_5031;
	R11[673] = (char *(*)()) F674_5031;
	R11[674] = (char *(*)()) F675_5031;
	R11[675] = (char *(*)()) F676_5031;
	R11[676] = (char *(*)()) F677_5031;
	R11[677] = (char *(*)()) F669_5031;
	{long i; for (i = 678; i < 680; i++) R11[i] = (char *(*)()) F666_5031;}
	{long i; for (i = 680; i < 684; i++) R11[i] = (char *(*)()) F1_8;}
	R11[684] = (char *(*)()) F685_5212;
	{long i; for (i = 685; i < 688; i++) R11[i] = (char *(*)()) F686_5370;}
	{long i; for (i = 688; i < 691; i++) R11[i] = (char *(*)()) F689_5409;}
	{long i; for (i = 691; i < 694; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 694; i < 727; i++) R11[i] = (char *(*)()) F695_5472;}
	{long i; for (i = 727; i < 729; i++) R11[i] = (char *(*)()) F728_5509;}
	R11[729] = (char *(*)()) F730_5547;
	{long i; for (i = 730; i < 732; i++) R11[i] = (char *(*)()) F731_5547;}
	{long i; for (i = 732; i < 734; i++) R11[i] = (char *(*)()) F445_2986;}
	{long i; for (i = 734; i < 736; i++) R11[i] = (char *(*)()) F735_5673;}
	{long i; for (i = 736; i < 738; i++) R11[i] = (char *(*)()) F737_5745;}
	R11[738] = (char *(*)()) F445_2986;
	R11[739] = (char *(*)()) F735_5673;
	R11[740] = (char *(*)()) F737_5745;
	R11[741] = (char *(*)()) F1_8;
	R11[742] = (char *(*)()) F445_2986;
	{long i; for (i = 743; i < 746; i++) R11[i] = (char *(*)()) F1_8;}
	R11[746] = (char *(*)()) F747_6099;
	{long i; for (i = 747; i < 749; i++) R11[i] = (char *(*)()) F1_8;}
	R11[749] = (char *(*)()) F750_6306;
	R11[750] = (char *(*)()) F751_6306;
	R11[751] = (char *(*)()) F752_6306;
	R11[752] = (char *(*)()) F753_6306;
	R11[753] = (char *(*)()) F754_6306;
	R11[754] = (char *(*)()) F755_6306;
	R11[755] = (char *(*)()) F756_6306;
	R11[756] = (char *(*)()) F757_6306;
	R11[757] = (char *(*)()) F758_6306;
	R11[758] = (char *(*)()) F759_6306;
	R11[759] = (char *(*)()) F760_6306;
	R11[760] = (char *(*)()) F761_6306;
	R11[761] = (char *(*)()) F762_6306;
	R11[762] = (char *(*)()) F763_6306;
	R11[763] = (char *(*)()) F764_6306;
	R11[764] = (char *(*)()) F765_6306;
	R11[765] = (char *(*)()) F766_6306;
	R11[766] = (char *(*)()) F767_6306;
	R11[767] = (char *(*)()) F768_6306;
	R11[768] = (char *(*)()) F769_6306;
	R11[769] = (char *(*)()) F770_6306;
	R11[770] = (char *(*)()) F771_6306;
	R11[771] = (char *(*)()) F772_6306;
	R11[772] = (char *(*)()) F773_6306;
	R11[773] = (char *(*)()) F774_6306;
	R11[774] = (char *(*)()) F775_6306;
	R11[775] = (char *(*)()) F776_6306;
	R11[776] = (char *(*)()) F777_6306;
	R11[777] = (char *(*)()) F778_6306;
	R11[778] = (char *(*)()) F779_6306;
	R11[779] = (char *(*)()) F780_6306;
	R11[780] = (char *(*)()) F781_6306;
	R11[781] = (char *(*)()) F782_6306;
	R11[782] = (char *(*)()) F783_6306;
	R11[783] = (char *(*)()) F784_6306;
	R11[784] = (char *(*)()) F785_6306;
	R11[785] = (char *(*)()) F786_6306;
	R11[786] = (char *(*)()) F787_6306;
	R11[787] = (char *(*)()) F788_6306;
	R11[788] = (char *(*)()) F789_6306;
	R11[789] = (char *(*)()) F790_6306;
	R11[790] = (char *(*)()) F791_6306;
	R11[791] = (char *(*)()) F792_6306;
	R11[792] = (char *(*)()) F793_6306;
	R11[793] = (char *(*)()) F794_6306;
	R11[794] = (char *(*)()) F795_6306;
	{long i; for (i = 795; i < 824; i++) R11[i] = (char *(*)()) F1_8;}
	R11[824] = (char *(*)()) F825_6546;
	R11[825] = (char *(*)()) F1_8;
	R11[826] = (char *(*)()) F827_6567;
	R11[827] = (char *(*)()) F1_8;
	{long i; for (i = 828; i < 831; i++) R11[i] = (char *(*)()) F829_6594;}
	{long i; for (i = 831; i < 834; i++) R11[i] = (char *(*)()) F832_6688;}
	{long i; for (i = 834; i < 837; i++) R11[i] = (char *(*)()) F835_6783;}
	{long i; for (i = 837; i < 840; i++) R11[i] = (char *(*)()) F838_6878;}
	{long i; for (i = 840; i < 843; i++) R11[i] = (char *(*)()) F841_6973;}
	{long i; for (i = 843; i < 846; i++) R11[i] = (char *(*)()) F844_7063;}
	{long i; for (i = 846; i < 849; i++) R11[i] = (char *(*)()) F847_7153;}
	{long i; for (i = 849; i < 852; i++) R11[i] = (char *(*)()) F850_7244;}
	{long i; for (i = 852; i < 855; i++) R11[i] = (char *(*)()) F853_7339;}
	{long i; for (i = 855; i < 858; i++) R11[i] = (char *(*)()) F856_7398;}
	{long i; for (i = 858; i < 932; i++) R11[i] = (char *(*)()) F1_8;}
	R11[932] = (char *(*)()) F445_2986;
	R11[933] = (char *(*)()) F1_8;
	R11[934] = (char *(*)()) F445_2986;
	{long i; for (i = 935; i < 937; i++) R11[i] = (char *(*)()) F1_8;}
	R11[937] = (char *(*)()) F938_8192;
	{long i; for (i = 938; i < 949; i++) R11[i] = (char *(*)()) F1_8;}
}

char *(*R28[949])();
void R28_init () {
	{long i; for (i = 0; i < 165; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 165; i < 206; i++) R28[i] = (char *(*)()) F166_2138;}
	{long i; for (i = 206; i < 439; i++) R28[i] = (char *(*)()) F1_25;}
	R28[439] = (char *(*)()) F440_2885;
	{long i; for (i = 440; i < 583; i++) R28[i] = (char *(*)()) F1_25;}
	R28[583] = (char *(*)()) F584_4756;
	{long i; for (i = 584; i < 683; i++) R28[i] = (char *(*)()) F1_25;}
	R28[683] = (char *(*)()) F684_5185;
	R28[684] = (char *(*)()) F1_25;
	{long i; for (i = 685; i < 688; i++) R28[i] = (char *(*)()) F686_5377;}
	{long i; for (i = 688; i < 691; i++) R28[i] = (char *(*)()) F689_5416;}
	{long i; for (i = 691; i < 694; i++) R28[i] = (char *(*)()) F692_5461;}
	{long i; for (i = 694; i < 725; i++) R28[i] = (char *(*)()) F695_5487;}
	R28[725] = (char *(*)()) F726_5500;
	R28[726] = (char *(*)()) F727_5500;
	{long i; for (i = 727; i < 734; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 734; i < 736; i++) R28[i] = (char *(*)()) F735_5692;}
	{long i; for (i = 736; i < 738; i++) R28[i] = (char *(*)()) F737_5764;}
	R28[738] = (char *(*)()) F1_25;
	R28[739] = (char *(*)()) F735_5692;
	R28[740] = (char *(*)()) F737_5764;
	{long i; for (i = 741; i < 746; i++) R28[i] = (char *(*)()) F1_25;}
	R28[746] = (char *(*)()) F747_6103;
	{long i; for (i = 747; i < 749; i++) R28[i] = (char *(*)()) F1_25;}
	R28[749] = (char *(*)()) F750_6313;
	R28[750] = (char *(*)()) F751_6313;
	R28[751] = (char *(*)()) F752_6313;
	R28[752] = (char *(*)()) F753_6313;
	R28[753] = (char *(*)()) F754_6313;
	R28[754] = (char *(*)()) F755_6313;
	R28[755] = (char *(*)()) F756_6313;
	R28[756] = (char *(*)()) F757_6313;
	R28[757] = (char *(*)()) F758_6313;
	R28[758] = (char *(*)()) F759_6313;
	R28[759] = (char *(*)()) F760_6313;
	R28[760] = (char *(*)()) F761_6313;
	R28[761] = (char *(*)()) F762_6313;
	R28[762] = (char *(*)()) F763_6313;
	R28[763] = (char *(*)()) F764_6313;
	R28[764] = (char *(*)()) F765_6313;
	R28[765] = (char *(*)()) F766_6313;
	R28[766] = (char *(*)()) F767_6313;
	R28[767] = (char *(*)()) F768_6313;
	R28[768] = (char *(*)()) F769_6313;
	R28[769] = (char *(*)()) F770_6313;
	R28[770] = (char *(*)()) F771_6313;
	R28[771] = (char *(*)()) F772_6313;
	R28[772] = (char *(*)()) F773_6313;
	R28[773] = (char *(*)()) F774_6313;
	R28[774] = (char *(*)()) F775_6313;
	R28[775] = (char *(*)()) F776_6313;
	R28[776] = (char *(*)()) F777_6313;
	R28[777] = (char *(*)()) F778_6313;
	R28[778] = (char *(*)()) F779_6313;
	R28[779] = (char *(*)()) F780_6313;
	R28[780] = (char *(*)()) F781_6313;
	R28[781] = (char *(*)()) F782_6313;
	R28[782] = (char *(*)()) F783_6313;
	R28[783] = (char *(*)()) F784_6313;
	R28[784] = (char *(*)()) F785_6313;
	R28[785] = (char *(*)()) F786_6313;
	R28[786] = (char *(*)()) F787_6313;
	R28[787] = (char *(*)()) F788_6313;
	R28[788] = (char *(*)()) F789_6313;
	R28[789] = (char *(*)()) F790_6313;
	R28[790] = (char *(*)()) F791_6313;
	R28[791] = (char *(*)()) F792_6313;
	R28[792] = (char *(*)()) F793_6313;
	R28[793] = (char *(*)()) F794_6313;
	R28[794] = (char *(*)()) F795_6313;
	{long i; for (i = 795; i < 828; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 828; i < 831; i++) R28[i] = (char *(*)()) F829_6649;}
	{long i; for (i = 831; i < 834; i++) R28[i] = (char *(*)()) F832_6744;}
	{long i; for (i = 834; i < 837; i++) R28[i] = (char *(*)()) F835_6839;}
	{long i; for (i = 837; i < 840; i++) R28[i] = (char *(*)()) F838_6934;}
	{long i; for (i = 840; i < 843; i++) R28[i] = (char *(*)()) F841_7026;}
	{long i; for (i = 843; i < 846; i++) R28[i] = (char *(*)()) F844_7116;}
	{long i; for (i = 846; i < 849; i++) R28[i] = (char *(*)()) F847_7207;}
	{long i; for (i = 849; i < 852; i++) R28[i] = (char *(*)()) F850_7298;}
	R28[852] = (char *(*)()) F853_7366;
	R28[853] = (char *(*)()) F854_7384;
	R28[854] = (char *(*)()) F855_7384;
	R28[855] = (char *(*)()) F856_7425;
	R28[856] = (char *(*)()) F857_7443;
	R28[857] = (char *(*)()) F858_7443;
	{long i; for (i = 858; i < 932; i++) R28[i] = (char *(*)()) F1_25;}
	R28[932] = (char *(*)()) F933_8104;
	R28[933] = (char *(*)()) F1_25;
	R28[934] = (char *(*)()) F935_8137;
	{long i; for (i = 935; i < 937; i++) R28[i] = (char *(*)()) F1_25;}
	R28[937] = (char *(*)()) F938_8207;
	{long i; for (i = 938; i < 949; i++) R28[i] = (char *(*)()) F1_25;}
}

char *(*R709[161])();
void R709_init () {
	R709[0] = (char *(*)()) F49_710;
	R709[160] = (char *(*)()) F209_2374;
}

char *(*R840[2])();
void R840_init () {
	R840[0] = (char *(*)()) F58_854;
	R840[1] = (char *(*)()) F59_863;
}

char *(*R841[2])();
void R841_init () {
	R841[0] = (char *(*)()) F58_855;
	R841[1] = (char *(*)()) F59_864;
}

char *(*R842[2])();
void R842_init () {
	R842[0] = (char *(*)()) F58_856;
	R842[1] = (char *(*)()) F59_865;
}

char *(*R843[2])();
void R843_init () {
	R843[0] = (char *(*)()) F58_857;
	R843[1] = (char *(*)()) F59_866;
}

char *(*R1277[124])();
void R1277_init () {
	R1277[0] = (char *(*)()) F94_1339;
	R1277[123] = (char *(*)()) F217_2461;
}

char *(*R1279[124])();
void R1279_init () {
	R1279[0] = (char *(*)()) F94_1341;
	R1279[123] = (char *(*)()) F217_2463;
}

char *(*R1281[124])();
void R1281_init () {
	R1281[0] = (char *(*)()) F94_1343;
	R1281[123] = (char *(*)()) F217_2464;
}

char *(*R1288[2])();
void R1288_init () {
	R1288[0] = (char *(*)()) F95_1350;
	R1288[1] = (char *(*)()) F96_1361;
}

char *(*R1289[2])();
void R1289_init () {
	R1289[0] = (char *(*)()) F95_1351;
	R1289[1] = (char *(*)()) F96_1362;
}

char *(*R1295[2])();
void R1295_init () {
	R1295[0] = (char *(*)()) F95_1357;
	R1295[1] = (char *(*)()) F96_1368;
}

char *(*R1298[2])();
void R1298_init () {
	R1298[0] = (char *(*)()) F95_1360;
	R1298[1] = (char *(*)()) F96_1371;
}

char *(*R1348[8])();
void R1348_init () {
	R1348[0] = (char *(*)()) F98_1421;
	R1348[1] = (char *(*)()) F99_1421_1348;
	R1348[2] = (char *(*)()) F100_1421_1348;
	R1348[3] = (char *(*)()) F101_1421_1348;
	R1348[4] = (char *(*)()) F102_1421_1348;
	R1348[5] = (char *(*)()) F98_1421;
	R1348[6] = (char *(*)()) F99_1421_1348;
	R1348[7] = (char *(*)()) F102_1421_1348;
}
static EIF_REFERENCE F99_1421_1348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F99_1421(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(693, 693, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F100_1421_1348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F100_1421(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(842, 842, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F101_1421_1348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F101_1421(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(687, 687, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F102_1421_1348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F102_1421(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(833, 833, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R1349[8])();
void R1349_init () {
	R1349[0] = (char *(*)()) F98_1422;
	R1349[1] = (char *(*)()) F99_1422_1349;
	R1349[2] = (char *(*)()) F100_1422_1349;
	R1349[3] = (char *(*)()) F101_1422_1349;
	R1349[4] = (char *(*)()) F102_1422_1349;
	R1349[5] = (char *(*)()) F98_1422;
	R1349[6] = (char *(*)()) F99_1422_1349;
	R1349[7] = (char *(*)()) F102_1422_1349;
}
static void F99_1422_1349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F99_1422(Current, *(EIF_BOOLEAN *)arg1);
}
static void F100_1422_1349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F100_1422(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F101_1422_1349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F101_1422(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F102_1422_1349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F102_1422(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R1353[3])();
void R1353_init () {
	R1353[0] = (char *(*)()) F103_1425;
	R1353[1] = (char *(*)()) F104_1425;
	R1353[2] = (char *(*)()) F105_1425;
}

char *(*R1354[3])();
void R1354_init () {
	R1354[0] = (char *(*)()) F103_1426;
	R1354[1] = (char *(*)()) F104_1426;
	R1354[2] = (char *(*)()) F105_1426;
}

char *(*R1370[2])();
void R1370_init () {
	R1370[0] = (char *(*)()) F110_1445;
	R1370[1] = (char *(*)()) F111_1449;
}

char *(*R1371[2])();
void R1371_init () {
	R1371[0] = (char *(*)()) F110_1446;
	R1371[1] = (char *(*)()) F111_1450;
}

char *(*R1400[2])();
void R1400_init () {
	R1400[0] = (char *(*)()) F114_1488;
	R1400[1] = (char *(*)()) F115_1514;
}

char *(*R1401[2])();
void R1401_init () {
	R1401[0] = (char *(*)()) F114_1499;
	R1401[1] = (char *(*)()) F115_1525;
}

char *(*R1402[2])();
void R1402_init () {
	R1402[0] = (char *(*)()) F114_1500;
	R1402[1] = (char *(*)()) F115_1526;
}

char *(*R1473[818])();
void R1473_init () {
	R1473[0] = (char *(*)()) F121_1584;
	R1473[321] = (char *(*)()) F442_2906;
	{long i; for (i = 813; i < 817; i++) R1473[i] = (char *(*)()) F121_1584;}
	R1473[817] = (char *(*)()) F123_1622;
}

char *(*R1474[818])();
void R1474_init () {
	R1474[0] = (char *(*)()) F121_1585;
	R1474[321] = (char *(*)()) F442_2907;
	{long i; for (i = 813; i < 817; i++) R1474[i] = (char *(*)()) F121_1585;}
	R1474[817] = (char *(*)()) F123_1623;
}

char *(*R1475[818])();
void R1475_init () {
	R1475[0] = (char *(*)()) F121_1586;
	R1475[321] = (char *(*)()) F442_2908;
	{long i; for (i = 813; i < 817; i++) R1475[i] = (char *(*)()) F121_1586;}
	R1475[817] = (char *(*)()) F123_1624;
}

char *(*R1476[818])();
void R1476_init () {
	R1476[0] = (char *(*)()) F121_1589;
	R1476[321] = (char *(*)()) F442_2909;
	{long i; for (i = 813; i < 817; i++) R1476[i] = (char *(*)()) F121_1589;}
	R1476[817] = (char *(*)()) F123_1625;
}

char *(*R1506[815])();
void R1506_init () {
	R1506[0] = (char *(*)()) F124_1626;
	R1506[319] = (char *(*)()) F443_2935;
	R1506[814] = (char *(*)()) F938_8184;
}

char *(*R1507[815])();
void R1507_init () {
	R1507[0] = (char *(*)()) F124_1627;
	R1507[319] = (char *(*)()) F443_2936;
	R1507[814] = (char *(*)()) F938_8185;
}

char *(*R1518[495])();
void R1518_init () {
	R1518[0] = (char *(*)()) F444_2958;
	R1518[79] = (char *(*)()) F523_4335;
	{long i; for (i = 488; i < 490; i++) R1518[i] = (char *(*)()) F523_4335;}
	{long i; for (i = 492; i < 494; i++) R1518[i] = (char *(*)()) F523_4335;}
	R1518[494] = (char *(*)()) F123_1621;
}

char *(*R1519[495])();
void R1519_init () {
	R1519[0] = (char *(*)()) F444_2959;
	R1519[79] = (char *(*)()) F523_4336;
	{long i; for (i = 488; i < 490; i++) R1519[i] = (char *(*)()) F523_4336;}
	{long i; for (i = 492; i < 494; i++) R1519[i] = (char *(*)()) F523_4336;}
	R1519[494] = (char *(*)()) F123_1620;
}

char *(*R1520[495])();
void R1520_init () {
	R1520[0] = (char *(*)()) F444_2960;
	R1520[79] = (char *(*)()) F523_4337;
	{long i; for (i = 488; i < 490; i++) R1520[i] = (char *(*)()) F523_4337;}
	{long i; for (i = 492; i < 494; i++) R1520[i] = (char *(*)()) F523_4337;}
	R1520[494] = (char *(*)()) F123_1619;
}

char *(*R1563[5])();
void R1563_init () {
	R1563[0] = (char *(*)()) F131_1676;
	R1563[4] = (char *(*)()) F107_1435;
}

char *(*R1568[4])();
void R1568_init () {
	{long i; for (i = 0; i < 3; i++) R1568[i] = (char *(*)()) F132_1678;}
	R1568[3] = (char *(*)()) F135_1695;
}

static EIF_TYPE_INDEX Y1572_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1572_pgtype1[] = {69,0xFFFF};
static EIF_TYPE_INDEX Y1572_pgtype2[] = {69,0xFFFF};
EIF_TYPE_INDEX *Y1572_gen_type [3];
EIF_TYPE_INDEX Y1572 [3];
void Y1572_init (void)
{
	egc_routines_types [1572] = Y1572;
	egc_routines_gen_types [1572] = Y1572_gen_type;
	egc_routines_offset [1572] = 132;
	Y1572_gen_type [0] = Y1572_pgtype0;
	Y1572_gen_type [1] = Y1572_pgtype1;
	Y1572_gen_type [2] = Y1572_pgtype2;
	{long i; for (i = 1; i < 3; i++) Y1572[i] = 69;};
}

char *(*R1592[24])();
void R1592_init () {
	{long i; for (i = 0; i < 2; i++) R1592[i] = (char *(*)()) F414_2667;}
	R1592[2] = (char *(*)()) F416_2672;
	R1592[23] = (char *(*)()) F416_2672;
}

char *(*R1594[80])();
void R1594_init () {
	{long i; for (i = 0; i < 2; i++) R1594[i] = (char *(*)()) F139_1724;}
	R1594[2] = (char *(*)()) F141_1745;
	R1594[79] = (char *(*)()) F218_2468;
}

char *(*R1597[80])();
void R1597_init () {
	{long i; for (i = 0; i < 2; i++) R1597[i] = (char *(*)()) F139_1725;}
	R1597[2] = (char *(*)()) F141_1746;
	R1597[79] = (char *(*)()) F141_1746;
}

char *(*R1598[80])();
void R1598_init () {
	{long i; for (i = 0; i < 2; i++) R1598[i] = (char *(*)()) F139_1726;}
	R1598[2] = (char *(*)()) F141_1747;
	R1598[79] = (char *(*)()) F141_1747;
}

char *(*R1602[80])();
void R1602_init () {
	{long i; for (i = 0; i < 2; i++) R1602[i] = (char *(*)()) F139_1730;}
	R1602[2] = (char *(*)()) F141_1751;
	R1602[79] = (char *(*)()) F141_1751;
}

char *(*R1605[80])();
void R1605_init () {
	R1605[0] = (char *(*)()) F139_1733;
	R1605[1] = (char *(*)()) F140_1741;
	R1605[2] = (char *(*)()) F141_1754;
	R1605[79] = (char *(*)()) F141_1754;
}

char *(*R1607[80])();
void R1607_init () {
	{long i; for (i = 0; i < 2; i++) R1607[i] = (char *(*)()) F139_1735;}
	R1607[2] = (char *(*)()) F141_1756;
	R1607[79] = (char *(*)()) F218_2473;
}

char *(*R1609[80])();
void R1609_init () {
	{long i; for (i = 0; i < 2; i++) R1609[i] = (char *(*)()) F139_1737;}
	R1609[2] = (char *(*)()) F141_1758;
	R1609[79] = (char *(*)()) F218_2475;
}

char *(*R1610[80])();
void R1610_init () {
	{long i; for (i = 0; i < 2; i++) R1610[i] = (char *(*)()) F139_1738;}
	R1610[2] = (char *(*)()) F141_1759;
	R1610[79] = (char *(*)()) F141_1759;
}

char *(*R1622[2])();
void R1622_init () {
	R1622[0] = (char *(*)()) F143_1762;
	R1622[1] = (char *(*)()) F144_1765;
}

char *(*R1623[2])();
void R1623_init () {
	R1623[0] = (char *(*)()) F143_1763;
	R1623[1] = (char *(*)()) F144_1766;
}

char *(*R1767[2])();
void R1767_init () {
	R1767[0] = (char *(*)()) F156_1943;
	R1767[1] = (char *(*)()) F157_1947;
}

char *(*R1769[2])();
void R1769_init () {
	R1769[0] = (char *(*)()) F156_1944;
	R1769[1] = (char *(*)()) F157_1948;
}

char *(*R1946[41])();
void R1946_init () {
	R1946[0] = (char *(*)()) F166_2125;
	{long i; for (i = 1; i < 4; i++) R1946[i] = (char *(*)()) F167_2149;}
	R1946[6] = (char *(*)()) F172_2159;
	R1946[8] = (char *(*)()) F174_2163;
	R1946[9] = (char *(*)()) F175_2180;
	R1946[10] = (char *(*)()) F176_2184;
	R1946[12] = (char *(*)()) F178_2188;
	R1946[13] = (char *(*)()) F179_2190;
	R1946[14] = (char *(*)()) F180_2192;
	R1946[16] = (char *(*)()) F182_2194;
	R1946[17] = (char *(*)()) F183_2196;
	R1946[20] = (char *(*)()) F186_2200;
	R1946[21] = (char *(*)()) F187_2204;
	R1946[23] = (char *(*)()) F189_2206;
	R1946[24] = (char *(*)()) F190_2208;
	R1946[25] = (char *(*)()) F191_2210;
	R1946[27] = (char *(*)()) F193_2216;
	R1946[28] = (char *(*)()) F194_2220;
	R1946[29] = (char *(*)()) F195_2224;
	R1946[30] = (char *(*)()) F196_2226;
	R1946[32] = (char *(*)()) F198_2228;
	R1946[33] = (char *(*)()) F199_2230;
	R1946[35] = (char *(*)()) F201_2232;
	R1946[36] = (char *(*)()) F202_2234;
	R1946[37] = (char *(*)()) F203_2238;
	R1946[38] = (char *(*)()) F204_2240;
	R1946[39] = (char *(*)()) F205_2242;
	R1946[40] = (char *(*)()) F206_2244;
}

char *(*R2125[310])();
void R2125_init () {
	R2125[0] = (char *(*)()) F208_2360;
	R2125[1] = (char *(*)()) F209_2374;
	{long i; for (i = 308; i < 310; i++) R2125[i] = (char *(*)()) F208_2360;}
}

char *(*R2223[621])();
void R2223_init () {
	R2223[0] = (char *(*)()) F243_2491;
	R2223[1] = (char *(*)()) F244_2491_2223;
	R2223[2] = (char *(*)()) F245_2491_2223;
	R2223[3] = (char *(*)()) F246_2491_2223;
	R2223[4] = (char *(*)()) F247_2491_2223;
	R2223[5] = (char *(*)()) F248_2491_2223;
	R2223[6] = (char *(*)()) F249_2491_2223;
	R2223[7] = (char *(*)()) F250_2491_2223;
	R2223[8] = (char *(*)()) F251_2491_2223;
	R2223[9] = (char *(*)()) F252_2491_2223;
	R2223[10] = (char *(*)()) F253_2491_2223;
	R2223[11] = (char *(*)()) F254_2491_2223;
	R2223[12] = (char *(*)()) F243_2491;
	R2223[13] = (char *(*)()) F244_2491_2223;
	R2223[14] = (char *(*)()) F245_2491_2223;
	R2223[15] = (char *(*)()) F247_2491_2223;
	R2223[16] = (char *(*)()) F249_2491_2223;
	R2223[17] = (char *(*)()) F246_2491_2223;
	R2223[18] = (char *(*)()) F250_2491_2223;
	R2223[19] = (char *(*)()) F251_2491_2223;
	R2223[20] = (char *(*)()) F252_2491_2223;
	R2223[21] = (char *(*)()) F253_2491_2223;
	R2223[22] = (char *(*)()) F248_2491_2223;
	R2223[23] = (char *(*)()) F254_2491_2223;
	R2223[153] = (char *(*)()) F244_2491_2223;
	R2223[155] = (char *(*)()) F398_2616_2223;
	R2223[156] = (char *(*)()) F243_2491;
	R2223[157] = (char *(*)()) F244_2491_2223;
	R2223[158] = (char *(*)()) F245_2491_2223;
	R2223[159] = (char *(*)()) F247_2491_2223;
	R2223[160] = (char *(*)()) F249_2491_2223;
	R2223[161] = (char *(*)()) F246_2491_2223;
	R2223[162] = (char *(*)()) F250_2491_2223;
	R2223[163] = (char *(*)()) F251_2491_2223;
	R2223[164] = (char *(*)()) F252_2491_2223;
	R2223[165] = (char *(*)()) F253_2491_2223;
	R2223[166] = (char *(*)()) F248_2491_2223;
	R2223[167] = (char *(*)()) F254_2491_2223;
	{long i; for (i = 275; i < 278; i++) R2223[i] = (char *(*)()) F246_2491_2223;}
	R2223[336] = (char *(*)()) F579_4642;
	R2223[337] = (char *(*)()) F580_4642;
	R2223[338] = (char *(*)()) F581_4642_2223;
	R2223[339] = (char *(*)()) F582_4642_2223;
	{long i; for (i = 340; i < 343; i++) R2223[i] = (char *(*)()) F579_4642;}
	R2223[343] = (char *(*)()) F581_4642_2223;
	R2223[344] = (char *(*)()) F579_4642;
	R2223[370] = (char *(*)()) F613_4874;
	R2223[371] = (char *(*)()) F614_4874_2223;
	R2223[372] = (char *(*)()) F615_4874_2223;
	R2223[373] = (char *(*)()) F616_4874_2223;
	R2223[374] = (char *(*)()) F617_4874_2223;
	R2223[375] = (char *(*)()) F618_4874_2223;
	R2223[376] = (char *(*)()) F619_4874_2223;
	R2223[377] = (char *(*)()) F620_4874_2223;
	R2223[378] = (char *(*)()) F621_4874_2223;
	R2223[379] = (char *(*)()) F622_4874_2223;
	R2223[380] = (char *(*)()) F623_4874_2223;
	R2223[381] = (char *(*)()) F624_4874_2223;
	R2223[382] = (char *(*)()) F613_4874;
	R2223[383] = (char *(*)()) F614_4874_2223;
	R2223[384] = (char *(*)()) F615_4874_2223;
	R2223[385] = (char *(*)()) F616_4874_2223;
	R2223[386] = (char *(*)()) F617_4874_2223;
	R2223[387] = (char *(*)()) F618_4874_2223;
	R2223[388] = (char *(*)()) F619_4874_2223;
	R2223[389] = (char *(*)()) F620_4874_2223;
	R2223[390] = (char *(*)()) F621_4874_2223;
	R2223[391] = (char *(*)()) F622_4874_2223;
	R2223[392] = (char *(*)()) F623_4874_2223;
	R2223[393] = (char *(*)()) F624_4874_2223;
	R2223[394] = (char *(*)()) F613_4874;
	R2223[395] = (char *(*)()) F614_4874_2223;
	R2223[396] = (char *(*)()) F615_4874_2223;
	R2223[397] = (char *(*)()) F616_4874_2223;
	R2223[398] = (char *(*)()) F617_4874_2223;
	R2223[399] = (char *(*)()) F618_4874_2223;
	R2223[400] = (char *(*)()) F619_4874_2223;
	R2223[401] = (char *(*)()) F620_4874_2223;
	R2223[402] = (char *(*)()) F621_4874_2223;
	R2223[403] = (char *(*)()) F622_4874_2223;
	R2223[404] = (char *(*)()) F623_4874_2223;
	R2223[405] = (char *(*)()) F624_4874_2223;
	R2223[406] = (char *(*)()) F613_4874;
	R2223[407] = (char *(*)()) F614_4874_2223;
	R2223[408] = (char *(*)()) F615_4874_2223;
	R2223[409] = (char *(*)()) F616_4874_2223;
	R2223[410] = (char *(*)()) F617_4874_2223;
	R2223[411] = (char *(*)()) F618_4874_2223;
	R2223[412] = (char *(*)()) F619_4874_2223;
	R2223[413] = (char *(*)()) F620_4874_2223;
	R2223[414] = (char *(*)()) F621_4874_2223;
	R2223[415] = (char *(*)()) F622_4874_2223;
	R2223[416] = (char *(*)()) F623_4874_2223;
	R2223[417] = (char *(*)()) F624_4874_2223;
	R2223[418] = (char *(*)()) F613_4874;
	R2223[419] = (char *(*)()) F616_4874_2223;
	R2223[420] = (char *(*)()) F614_4874_2223;
	R2223[421] = (char *(*)()) F616_4874_2223;
	R2223[422] = (char *(*)()) F613_4874;
	R2223[423] = (char *(*)()) F666_5019;
	R2223[424] = (char *(*)()) F667_5019_2223;
	R2223[425] = (char *(*)()) F668_5019_2223;
	R2223[426] = (char *(*)()) F669_5019_2223;
	R2223[427] = (char *(*)()) F670_5019_2223;
	R2223[428] = (char *(*)()) F671_5019_2223;
	R2223[429] = (char *(*)()) F672_5019_2223;
	R2223[430] = (char *(*)()) F673_5019_2223;
	R2223[431] = (char *(*)()) F674_5019_2223;
	R2223[432] = (char *(*)()) F675_5019_2223;
	R2223[433] = (char *(*)()) F676_5019_2223;
	R2223[434] = (char *(*)()) F677_5019_2223;
	R2223[435] = (char *(*)()) F669_5019_2223;
	{long i; for (i = 436; i < 438; i++) R2223[i] = (char *(*)()) F666_5019;}
	R2223[498] = (char *(*)()) F737_5755_2223;
	R2223[620] = (char *(*)()) F246_2491_2223;
}
static EIF_BOOLEAN F244_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F244_2491(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F245_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F245_2491(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F246_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F246_2491(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F247_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F247_2491(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F248_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F248_2491(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F249_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F249_2491(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F250_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F250_2491(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F251_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F251_2491(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F252_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F252_2491(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F253_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F253_2491(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F254_2491_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F254_2491(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F398_2616_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F398_2616(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F581_4642_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F581_4642(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F582_4642_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F582_4642(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F614_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F614_4874(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F615_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F615_4874(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F616_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F616_4874(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F617_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F617_4874(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F618_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F618_4874(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F619_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F619_4874(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F620_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F620_4874(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F621_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F621_4874(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F622_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F622_4874(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F623_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F623_4874(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F624_4874_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F624_4874(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F667_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F667_5019(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F668_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F668_5019(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F669_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F669_5019(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F670_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F670_5019(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F671_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F671_5019(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F672_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F672_5019(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F673_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F673_5019(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F674_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F674_5019(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F675_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F675_5019(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F676_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F676_5019(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F677_5019_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F677_5019(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F737_5755_2223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F737_5755(Current, *(EIF_CHARACTER_8 *)arg1);
}


#ifdef __cplusplus
}
#endif
