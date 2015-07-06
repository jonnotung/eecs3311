/*
 * Class COLLECTION [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_386 [] = {213,385,168,0xFFFF};
static EIF_TYPE_INDEX gen_type1_386 [] = {385,168,0xFFFF};
static EIF_TYPE_INDEX gen_type2_386 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_386 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_386 [] = {385,168,0xFFFF};
static EIF_TYPE_INDEX gen_type5_386 [] = {385,168,0xFFFF};
static EIF_TYPE_INDEX gen_type6_386 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_386 [] = {385,168,0xFFFF};
static EIF_TYPE_INDEX gen_type8_386 [] = {385,168,0xFFFF};
static EIF_TYPE_INDEX gen_type9_386 [] = {379,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_386 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_386[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_386},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 385, gen_type1_386},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_386},
	{14, (BODY_INDEX)-1, 0, gen_type3_386},
	{15, (BODY_INDEX)-1, 385, gen_type4_386},
	{16, (BODY_INDEX)-1, 385, gen_type5_386},
	{17, (BODY_INDEX)-1, 0, gen_type6_386},
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
	{28, (BODY_INDEX)-1, 385, gen_type7_386},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 385, gen_type8_386},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1365, (BODY_INDEX)-1, 180, NULL},
	{1366, 0, 180, NULL},
	{1367, (BODY_INDEX)-1, 180, NULL},
	{1368, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1369, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 379, gen_type9_386},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_386},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1790, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1791, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1792, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init386(void);
void Init386(void)
{
	IDSC(desc_386, 0, 385);
	IDSC(desc_386 + 1, 2, 385);
	IDSC(desc_386 + 32, 199, 385);
	IDSC(desc_386 + 41, 196, 385);
}


#ifdef __cplusplus
}
#endif
