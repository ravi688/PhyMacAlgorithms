
#pragma once

#include <phymac_algorithms/defines.h>

BEGIN_CPP_COMPATIBLE

/* print array */
#define palg_print_array(type) palg_print_array_##type
#define palg_print_array_proto(type) PALG_API void palg_print_array(type)(const type* const start, const type* const end)
palg_print_array_proto(u8);
palg_print_array_proto(u16);
palg_print_array_proto(u32);
palg_print_array_proto(u64);
palg_print_array_proto(s8);
palg_print_array_proto(s16);
palg_print_array_proto(s32);
palg_print_array_proto(s64);
palg_print_array_proto(f32);
palg_print_array_proto(f64);

/* max */
#define palg_max(type) palg_max_##type
#define palg_max_proto(type) PALG_API type palg_max(type)(const type v1, const type v2)

palg_max_proto(u8);
palg_max_proto(u16);
palg_max_proto(u32);
palg_max_proto(u64);
palg_max_proto(s8);
palg_max_proto(s16);
palg_max_proto(s32);
palg_max_proto(s64);
palg_max_proto(f32);
palg_max_proto(f64);

/* swap */
#define palg_swap(type) palg_swap_##type
#define palg_swap_proto(type) PALG_API void palg_swap_##type(type* const v1, type* const v2)

palg_swap_proto(u8);
palg_swap_proto(u16);
palg_swap_proto(u32);
palg_swap_proto(u64);
palg_swap_proto(s8);
palg_swap_proto(s16);
palg_swap_proto(s32);
palg_swap_proto(s64);
palg_swap_proto(f32);
palg_swap_proto(f64);

/* find_max */
#define palg_find_max(type) palg_find_max_##type
#define palg_find_max_proto(type) PALG_API u32 palg_find_max(type)(const type* const start, const type* const end)

palg_find_max_proto(u8);
palg_find_max_proto(u16);
palg_find_max_proto(u32);
palg_find_max_proto(u64);
palg_find_max_proto(s8);
palg_find_max_proto(s16);
palg_find_max_proto(s32);
palg_find_max_proto(s64);
palg_find_max_proto(f32);
palg_find_max_proto(f64);

#define palg_find_min(type) palg_find_min_##type
#define palg_find_min_proto(type) PALG_API u32 palg_find_min(type)(const type* const start, const type* const end)

palg_find_min_proto(u8);
palg_find_min_proto(u16);
palg_find_min_proto(u32);
palg_find_min_proto(u64);
palg_find_min_proto(s8);
palg_find_min_proto(s16);
palg_find_min_proto(s32);
palg_find_min_proto(s64);
palg_find_min_proto(f32);
palg_find_min_proto(f64);

END_CPP_COMPATIBLE
