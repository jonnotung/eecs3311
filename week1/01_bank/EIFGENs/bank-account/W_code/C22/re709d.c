/*
 * Class RESIZABLE [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_709 [] = {213,708,177,0xFFFF};
static EIF_TYPE_INDEX gen_type1_709 [] = {708,177,0xFFFF};
static EIF_TYPE_INDEX gen_type2_709 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_709 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_709 [] = {708,177,0xFFFF};
static EIF_TYPE_INDEX gen_type5_709 [] = {708,177,0xFFFF};
static EIF_TYPE_INDEX gen_type6_709 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_709 [] = {708,177,0xFFFF};
static EIF_TYPE_INDEX gen_type8_709 [] = {708,177,0xFFFF};
static EIF_TYPE_INDEX gen_type9_709 [] = {255,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_709 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_709[] = {
	{(BODY_INDEX) 1774, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_709},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 708, gen_type1_709},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_709},
	{14, (BODY_INDEX)-1, 0, gen_type3_709},
	{15, (BODY_INDEX)-1, 708, gen_type4_709},
	{16, (BODY_INDEX)-1, 708, gen_type5_709},
	{17, (BODY_INDEX)-1, 0, gen_type6_709},
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
	{28, (BODY_INDEX)-1, 708, gen_type7_709},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 708, gen_type8_709},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1657, (BODY_INDEX)-1, 180, NULL},
	{1345, (BODY_INDEX)-1, 180, NULL},
	{1346, 0, 180, NULL},
	{1347, (BODY_INDEX)-1, 180, NULL},
	{1348, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1349, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 255, gen_type9_709},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_709},
	{1701, (BODY_INDEX)-1, 180, NULL},
	{1769, (BODY_INDEX)-1, 147, NULL},
	{1770, (BODY_INDEX)-1, 147, NULL},
	{1771, (BODY_INDEX)-1, 147, NULL},
	{1773, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
	{1772, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
};

extern void Init709(void);
void Init709(void)
{
	IDSC(desc_709, 0, 708);
	IDSC(desc_709 + 1, 2, 708);
	IDSC(desc_709 + 32, 199, 708);
	IDSC(desc_709 + 41, 235, 708);
	IDSC(desc_709 + 42, 45, 708);
	IDSC(desc_709 + 48, 135, 708);
	IDSC(desc_709 + 50, 201, 708);
}


#ifdef __cplusplus
}
#endif
