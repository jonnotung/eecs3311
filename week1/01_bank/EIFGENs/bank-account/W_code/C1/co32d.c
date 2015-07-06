/*
 * Class CODE_VALIDITY_CHECKER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_32 [] = {213,31,0xFFFF};
static EIF_TYPE_INDEX gen_type1_32 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_32 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_32 [] = {0,0xFFFF};


static struct desc_info desc_32[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 196, NULL},
	{1, (BODY_INDEX)-1, 213, gen_type0_32},
	{2, (BODY_INDEX)-1, 180, NULL},
	{3, (BODY_INDEX)-1, 180, NULL},
	{4, (BODY_INDEX)-1, 180, NULL},
	{5, (BODY_INDEX)-1, 180, NULL},
	{6, (BODY_INDEX)-1, 180, NULL},
	{7, (BODY_INDEX)-1, 180, NULL},
	{8, (BODY_INDEX)-1, 180, NULL},
	{9, (BODY_INDEX)-1, 180, NULL},
	{10, (BODY_INDEX)-1, 31, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_32},
	{14, (BODY_INDEX)-1, 0, gen_type2_32},
	{15, (BODY_INDEX)-1, 31, NULL},
	{16, (BODY_INDEX)-1, 31, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_32},
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
	{28, (BODY_INDEX)-1, 31, NULL},
	{29, (BODY_INDEX)-1, 186, NULL},
	{30, (BODY_INDEX)-1, 31, NULL},
	{772, (BODY_INDEX)-1, 180, NULL},
	{773, (BODY_INDEX)-1, 180, NULL},
	{774, (BODY_INDEX)-1, 180, NULL},
	{775, (BODY_INDEX)-1, 180, NULL},
	{776, (BODY_INDEX)-1, 180, NULL},
	{777, (BODY_INDEX)-1, 180, NULL},
	{778, (BODY_INDEX)-1, 180, NULL},
	{779, (BODY_INDEX)-1, 180, NULL},
	{780, (BODY_INDEX)-1, 180, NULL},
	{781, (BODY_INDEX)-1, 180, NULL},
	{782, (BODY_INDEX)-1, 180, NULL},
	{783, (BODY_INDEX)-1, 180, NULL},
	{784, (BODY_INDEX)-1, 180, NULL},
	{785, (BODY_INDEX)-1, 180, NULL},
	{786, (BODY_INDEX)-1, 180, NULL},
	{787, (BODY_INDEX)-1, 180, NULL},
	{788, (BODY_INDEX)-1, 180, NULL},
	{789, (BODY_INDEX)-1, 180, NULL},
	{790, (BODY_INDEX)-1, 180, NULL},
	{791, (BODY_INDEX)-1, 180, NULL},
	{792, (BODY_INDEX)-1, 180, NULL},
	{767, (BODY_INDEX)-1, 180, NULL},
	{768, (BODY_INDEX)-1, 180, NULL},
	{769, (BODY_INDEX)-1, 180, NULL},
	{770, (BODY_INDEX)-1, 180, NULL},
	{771, (BODY_INDEX)-1, 180, NULL},
};

extern void Init32(void);
void Init32(void)
{
	IDSC(desc_32, 0, 31);
	IDSC(desc_32 + 1, 2, 31);
	IDSC(desc_32 + 32, 242, 31);
}


#ifdef __cplusplus
}
#endif
