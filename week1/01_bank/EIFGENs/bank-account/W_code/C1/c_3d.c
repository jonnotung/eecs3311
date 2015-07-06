/*
 * Class C_DATE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_3 [] = {213,2,0xFFFF};
static EIF_TYPE_INDEX gen_type1_3 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_3 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_3 [] = {0,0xFFFF};


static struct desc_info desc_3[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_3},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 2, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_3},
	{14, (BODY_INDEX)-1, 0, gen_type2_3},
	{15, (BODY_INDEX)-1, 2, NULL},
	{16, (BODY_INDEX)-1, 2, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_3},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 12, NULL},
	{21, (BODY_INDEX)-1, 196, NULL},
	{22, (BODY_INDEX)-1, 196, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 13, NULL},
	{35, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 2, NULL},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 2, NULL},
	{36, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{37, 8, 180, NULL},
	{38, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{39, (BODY_INDEX)-1, 147, NULL},
	{40, (BODY_INDEX)-1, 147, NULL},
	{41, (BODY_INDEX)-1, 147, NULL},
	{42, (BODY_INDEX)-1, 147, NULL},
	{43, (BODY_INDEX)-1, 147, NULL},
	{44, (BODY_INDEX)-1, 147, NULL},
	{45, 12, 147, NULL},
	{46, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{47, (BODY_INDEX)-1, 147, NULL},
	{48, (BODY_INDEX)-1, 147, NULL},
	{49, (BODY_INDEX)-1, 147, NULL},
	{50, (BODY_INDEX)-1, 147, NULL},
	{51, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{52, 0, 41, NULL},
	{53, (BODY_INDEX)-1, 186, NULL},
	{54, (BODY_INDEX)-1, 186, NULL},
	{55, (BODY_INDEX)-1, 147, NULL},
	{56, (BODY_INDEX)-1, 147, NULL},
	{57, (BODY_INDEX)-1, 147, NULL},
	{58, (BODY_INDEX)-1, 147, NULL},
	{59, (BODY_INDEX)-1, 147, NULL},
	{60, (BODY_INDEX)-1, 147, NULL},
};

extern void Init3(void);
void Init3(void)
{
	IDSC(desc_3, 0, 2);
	IDSC(desc_3 + 1, 2, 2);
	IDSC(desc_3 + 32, 178, 2);
}


#ifdef __cplusplus
}
#endif
