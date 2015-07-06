/*
 * Class DATE_MEASUREMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_875 [] = {0xFF11,236,0xFF12,874,0xFFFF};
static EIF_TYPE_INDEX gen_type2_875 [] = {0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type3_875 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_875 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_875 [] = {0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type6_875 [] = {0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type7_875 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_875 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_875 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_875 [] = {0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type13_875 [] = {0xFF11,862,0xFFFF};
static EIF_TYPE_INDEX gen_type14_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type16_875 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_875 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_875 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type19_875 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_875 [] = {0xFF11,296,205,0xFFFF};


static struct desc_info desc_875[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_875},
	{1, (BODY_INDEX)-1, 236, gen_type1_875},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 874, gen_type2_875},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_875},
	{14, (BODY_INDEX)-1, 0, gen_type4_875},
	{15, (BODY_INDEX)-1, 874, gen_type5_875},
	{16, (BODY_INDEX)-1, 874, gen_type6_875},
	{17, (BODY_INDEX)-1, 0, gen_type7_875},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_875},
	{21, (BODY_INDEX)-1, 219, gen_type9_875},
	{22, (BODY_INDEX)-1, 219, gen_type10_875},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_875},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 874, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 874, gen_type12_875},
	{12686, (BODY_INDEX)-1, 205, NULL},
	{12687, (BODY_INDEX)-1, 205, NULL},
	{12688, (BODY_INDEX)-1, 862, gen_type13_875},
	{12689, (BODY_INDEX)-1, 219, gen_type14_875},
	{12715, (BODY_INDEX)-1, 205, NULL},
	{12716, (BODY_INDEX)-1, 205, NULL},
	{12717, (BODY_INDEX)-1, 205, NULL},
	{12718, (BODY_INDEX)-1, 205, NULL},
	{12719, (BODY_INDEX)-1, 205, NULL},
	{12720, (BODY_INDEX)-1, 205, NULL},
	{12721, (BODY_INDEX)-1, 219, gen_type15_875},
	{12722, (BODY_INDEX)-1, 249, gen_type16_875},
	{12723, (BODY_INDEX)-1, 249, gen_type17_875},
	{12724, (BODY_INDEX)-1, 249, gen_type18_875},
	{12725, (BODY_INDEX)-1, 249, gen_type19_875},
	{12726, (BODY_INDEX)-1, 190, NULL},
	{12727, (BODY_INDEX)-1, 190, NULL},
	{12728, (BODY_INDEX)-1, 296, gen_type20_875},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12740, (BODY_INDEX)-1, 205, NULL},
};

extern void Init875(void);
void Init875(void)
{
	IDSC(desc_875, 0, 874);
	IDSC(desc_875 + 1, 1, 874);
	IDSC(desc_875 + 32, 376, 874);
	IDSC(desc_875 + 36, 364, 874);
	IDSC(desc_875 + 50, 372, 874);
}


#ifdef __cplusplus
}
#endif
