/*
 * Class CONTAINER [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_255 [] = {213,254,177,0xFFFF};
static EIF_TYPE_INDEX gen_type1_255 [] = {254,177,0xFFFF};
static EIF_TYPE_INDEX gen_type2_255 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_255 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_255 [] = {254,177,0xFFFF};
static EIF_TYPE_INDEX gen_type5_255 [] = {254,177,0xFFFF};
static EIF_TYPE_INDEX gen_type6_255 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_255 [] = {254,177,0xFFFF};
static EIF_TYPE_INDEX gen_type8_255 [] = {254,177,0xFFFF};
static EIF_TYPE_INDEX gen_type9_255 [] = {255,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_255 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_255[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_255},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 254, gen_type1_255},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_255},
	{14, (BODY_INDEX)-1, 0, gen_type3_255},
	{15, (BODY_INDEX)-1, 254, gen_type4_255},
	{16, (BODY_INDEX)-1, 254, gen_type5_255},
	{17, (BODY_INDEX)-1, 0, gen_type6_255},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 12, NULL},
	{21, (BODY_INDEX)-1, 196, NULL},
	{22, (BODY_INDEX)-1, 196, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 13, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 254, gen_type7_255},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 254, gen_type8_255},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1345, (BODY_INDEX)-1, 180, NULL},
	{1346, 0, 180, NULL},
	{1347, (BODY_INDEX)-1, 180, NULL},
	{1348, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1349, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 255, gen_type9_255},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_255},
};

extern void Init255(void);
void Init255(void)
{
	IDSC(desc_255, 0, 254);
	IDSC(desc_255 + 1, 2, 254);
	IDSC(desc_255 + 32, 199, 254);
}


#ifdef __cplusplus
}
#endif
