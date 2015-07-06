/*
 * Class LINEAR [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_256 [] = {213,255,177,0xFFFF};
static EIF_TYPE_INDEX gen_type1_256 [] = {255,177,0xFFFF};
static EIF_TYPE_INDEX gen_type2_256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_256 [] = {255,177,0xFFFF};
static EIF_TYPE_INDEX gen_type5_256 [] = {255,177,0xFFFF};
static EIF_TYPE_INDEX gen_type6_256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_256 [] = {255,177,0xFFFF};
static EIF_TYPE_INDEX gen_type8_256 [] = {255,177,0xFFFF};
static EIF_TYPE_INDEX gen_type9_256 [] = {255,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_256 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_256 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_256 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_256[] = {
	{(BODY_INDEX) 1485, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_256},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 255, gen_type1_256},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_256},
	{14, (BODY_INDEX)-1, 0, gen_type3_256},
	{15, (BODY_INDEX)-1, 255, gen_type4_256},
	{16, (BODY_INDEX)-1, 255, gen_type5_256},
	{17, (BODY_INDEX)-1, 0, gen_type6_256},
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
	{28, (BODY_INDEX)-1, 255, gen_type7_256},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 255, gen_type8_256},
	{1473, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1345, (BODY_INDEX)-1, 180, NULL},
	{1346, 0, 180, NULL},
	{1347, (BODY_INDEX)-1, 180, NULL},
	{1348, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1349, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1484, (BODY_INDEX)-1, 255, gen_type9_256},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_256},
	{1474, (BODY_INDEX)-1, 147, NULL},
	{1475, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
	{1476, (BODY_INDEX)-1, 147, NULL},
	{1477, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_256},
	{1478, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_256},
	{1479, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1480, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1481, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1482, (BODY_INDEX)-1, 180, NULL},
	{1483, (BODY_INDEX)-1, 180, NULL},
};

extern void Init256(void);
void Init256(void)
{
	IDSC(desc_256, 0, 255);
	IDSC(desc_256 + 1, 2, 255);
	IDSC(desc_256 + 32, 199, 255);
	IDSC(desc_256 + 41, 43, 255);
	IDSC(desc_256 + 50, 131, 255);
}


#ifdef __cplusplus
}
#endif
