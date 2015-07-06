/*
 * Class BAG [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_385 [] = {213,384,168,0xFFFF};
static EIF_TYPE_INDEX gen_type1_385 [] = {384,168,0xFFFF};
static EIF_TYPE_INDEX gen_type2_385 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_385 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_385 [] = {384,168,0xFFFF};
static EIF_TYPE_INDEX gen_type5_385 [] = {384,168,0xFFFF};
static EIF_TYPE_INDEX gen_type6_385 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_385 [] = {384,168,0xFFFF};
static EIF_TYPE_INDEX gen_type8_385 [] = {384,168,0xFFFF};
static EIF_TYPE_INDEX gen_type9_385 [] = {379,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_385 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_385[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_385},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 384, gen_type1_385},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_385},
	{14, (BODY_INDEX)-1, 0, gen_type3_385},
	{15, (BODY_INDEX)-1, 384, gen_type4_385},
	{16, (BODY_INDEX)-1, 384, gen_type5_385},
	{17, (BODY_INDEX)-1, 0, gen_type6_385},
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
	{28, (BODY_INDEX)-1, 384, gen_type7_385},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 384, gen_type8_385},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1365, (BODY_INDEX)-1, 180, NULL},
	{1366, 0, 180, NULL},
	{1367, (BODY_INDEX)-1, 180, NULL},
	{1368, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1369, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 379, gen_type9_385},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_385},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 180, NULL},
	{1790, (BODY_INDEX)-1, 180, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1791, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1792, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 147, NULL},
};

extern void Init385(void);
void Init385(void)
{
	IDSC(desc_385, 0, 384);
	IDSC(desc_385 + 1, 2, 384);
	IDSC(desc_385 + 32, 199, 384);
	IDSC(desc_385 + 41, 196, 384);
	IDSC(desc_385 + 50, 203, 384);
}


#ifdef __cplusplus
}
#endif
