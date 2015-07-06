/*
 * Class DISPENSER [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_440 [] = {213,439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type1_440 [] = {439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_440 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_440 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_440 [] = {439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type5_440 [] = {439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_440 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_440 [] = {439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type8_440 [] = {439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type9_440 [] = {225,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_440 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_440 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_440[] = {
	{(BODY_INDEX) 1850, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_440},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 439, gen_type1_440},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_440},
	{14, (BODY_INDEX)-1, 0, gen_type3_440},
	{15, (BODY_INDEX)-1, 439, gen_type4_440},
	{16, (BODY_INDEX)-1, 439, gen_type5_440},
	{17, (BODY_INDEX)-1, 0, gen_type6_440},
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
	{28, (BODY_INDEX)-1, 439, gen_type7_440},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 439, gen_type8_440},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1655, (BODY_INDEX)-1, 180, NULL},
	{1340, (BODY_INDEX)-1, 180, NULL},
	{1341, 0, 180, NULL},
	{1342, (BODY_INDEX)-1, 180, NULL},
	{1343, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1344, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 225, gen_type9_440},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_440},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1775, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1776, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1777, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_440},
	{1851, (BODY_INDEX)-1, 180, NULL},
	{1852, (BODY_INDEX)-1, 180, NULL},
	{1827, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1853, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
};

extern void Init440(void);
void Init440(void)
{
	IDSC(desc_440, 0, 439);
	IDSC(desc_440 + 1, 2, 439);
	IDSC(desc_440 + 32, 199, 439);
	IDSC(desc_440 + 41, 196, 439);
	IDSC(desc_440 + 50, 198, 439);
	IDSC(desc_440 + 56, 249, 439);
	IDSC(desc_440 + 58, 203, 439);
	IDSC(desc_440 + 59, 201, 439);
	IDSC(desc_440 + 60, 235, 439);
}


#ifdef __cplusplus
}
#endif
