
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
	type value;\
	memcpy(&value, (void*)v1, sizeof(type));\
	memcpy((void*)v1, (void*)v2, sizeof(type));\
	memcpy((void*)v2, &value, sizeof(type));\
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
