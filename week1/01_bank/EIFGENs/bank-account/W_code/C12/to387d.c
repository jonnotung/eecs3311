/*
 * Class TO_SPECIAL [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_387 [] = {213,386,168,0xFFFF};
static EIF_TYPE_INDEX gen_type1_387 [] = {386,168,0xFFFF};
static EIF_TYPE_INDEX gen_type2_387 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_387 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_387 [] = {386,168,0xFFFF};
static EIF_TYPE_INDEX gen_type5_387 [] = {386,168,0xFFFF};
static EIF_TYPE_INDEX gen_type6_387 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_387 [] = {386,168,0xFFFF};
static EIF_TYPE_INDEX gen_type8_387 [] = {386,168,0xFFFF};
static EIF_TYPE_INDEX gen_type9_387 [] = {387,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_387 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_387 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_387 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_387[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_387},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 386, gen_type1_387},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_387},
	{14, (BODY_INDEX)-1, 0, gen_type3_387},
	{15, (BODY_INDEX)-1, 386, gen_type4_387},
	{16, (BODY_INDEX)-1, 386, gen_type5_387},
	{17, (BODY_INDEX)-1, 0, gen_type6_387},
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
	{28, (BODY_INDEX)-1, 386, gen_type7_387},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 386, gen_type8_387},
	{2771, 0, 387, gen_type9_387},
	{2772, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2773, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2774, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_387},
	{2775, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_387},
	{2776, (BODY_INDEX)-1, 180, NULL},
	{2777, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2778, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_387},
};

extern void Init387(void);
void Init387(void)
{
	IDSC(desc_387, 0, 386);
	IDSC(desc_387 + 1, 2, 386);
	IDSC(desc_387 + 32, 47, 386);
}


#ifdef __cplusplus
}
#endif
