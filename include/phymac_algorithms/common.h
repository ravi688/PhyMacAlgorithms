
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

/* swap */
#define palg_swap(type) palg_swap_##type
#define palg_swap_proto(type) PALG_API void palg_swap_##type(const type* const RESTRICT v1, const type* const RESTRICT v2)

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

END_CPP_COMPATIBLE
