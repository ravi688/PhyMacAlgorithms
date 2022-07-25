
#include <phymac_algorithms/common.h>

#include <string.h> 	// for memcpy
#include <stdio.h> 		// for printf

palg_print_array_proto(u8)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%u ", start[i]);
	puts("");
}
palg_print_array_proto(u16)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%u ", start[i]);
	puts("");
}
palg_print_array_proto(u32)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%u ", start[i]);
	puts("");
}
palg_print_array_proto(u64)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%llu ", start[i]);
	puts("");
}

palg_print_array_proto(s8)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%d ", start[i]);
	puts("");
}
palg_print_array_proto(s16)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%d ", start[i]);
	puts("");
}
palg_print_array_proto(s32)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%d ", start[i]);
	puts("");
}
palg_print_array_proto(s64)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%lld ", start[i]);
	puts("");
}

palg_print_array_proto(f32)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%f ", start[i]);
	puts("");
}
palg_print_array_proto(f64)
{
	u32 n = CAST_TO(u32, end - start);
	for(u32 i = 0; i < n; i++)
		printf("%lf ", start[i]);
	puts("");
}

#define palg_swap_def(type) \
palg_swap_proto(type) \
{\
	type vcopy1;\
	type vcopy2;\
	memcpy(&vcopy1, v1, sizeof(type));\
	memcpy(&vcopy2, v2, sizeof(type));\
	memcpy(v1, &vcopy2, sizeof(type));\
	memcpy(v2, &vcopy1, sizeof(type));\
}

palg_swap_def(u8);
palg_swap_def(u16);
palg_swap_def(u32);
palg_swap_def(u64);
palg_swap_def(s8);
palg_swap_def(s16);
palg_swap_def(s32);
palg_swap_def(s64);
palg_swap_def(f32);
palg_swap_def(f64);

#define palg_find_max_def(type,  MIN) \
palg_find_max_proto(type) \
{ \
	u32 n = CAST_TO(u32, end - start);\
	type maxValue = MIN;\
	u32 maxIndex = 0;\
	for(u32 i = 0; i < n; i++)\
		if(maxValue < start[i])\
		{\
			maxValue = start[i];\
			maxIndex = i;\
		}\
	return maxIndex;\
}

palg_find_max_def(u8, U8_MIN);
palg_find_max_def(u16, U16_MIN);
palg_find_max_def(u32, U32_MIN);
palg_find_max_def(u64, U64_MIN);

palg_find_max_def(s8, S8_MIN);
palg_find_max_def(s16, S16_MIN);
palg_find_max_def(s32, S32_MIN);
palg_find_max_def(s64, S64_MIN);

palg_find_max_def(f32, F32_MIN);
palg_find_max_def(f64, F64_MIN);



#define palg_find_min_def(type,  MAX) \
palg_find_min_proto(type) \
{ \
	u32 n = CAST_TO(u32, end - start);\
	type minValue = MAX;\
	u32 minIndex = 0;\
	for(u32 i = 0; i < n; i++)\
		if(minValue > start[i])\
		{\
			minValue = start[i];\
			minIndex = i;\
		}\
	return minIndex;\
}

palg_find_min_def(u8, U8_MAX);
palg_find_min_def(u16, U16_MAX);
palg_find_min_def(u32, U32_MAX);
palg_find_min_def(u64, U64_MAX);

palg_find_min_def(s8, S8_MAX);
palg_find_min_def(s16, S16_MAX);
palg_find_min_def(s32, S32_MAX);
palg_find_min_def(s64, S64_MAX);

palg_find_min_def(f32, F32_MAX);
palg_find_min_def(f64, F64_MAX);
