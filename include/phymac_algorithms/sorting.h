
#pragma once

#include <phymac_algorithms/defines.h>

BEGIN_CPP_COMPATIBLE

/* bubble sort */
#define palg_bubble_sort_proto(type) PALG_API void palg_bubble_sort_##type(type const* start, type const* end)
palg_bubble_sort_proto(u8);
palg_bubble_sort_proto(u16);
palg_bubble_sort_proto(u32);
palg_bubble_sort_proto(u64);
palg_bubble_sort_proto(s8);
palg_bubble_sort_proto(s16);
palg_bubble_sort_proto(s32);
palg_bubble_sort_proto(s64);
palg_bubble_sort_proto(f32);
palg_bubble_sort_proto(f64);

/* selection sort */
#define palg_selection_sort_proto(type) PALG_API void palg_selection_sort_##type(type const* start, type const* end)
palg_selection_sort_proto(u8);
palg_selection_sort_proto(u16);
palg_selection_sort_proto(u32);
palg_selection_sort_proto(u64);
palg_selection_sort_proto(s8);
palg_selection_sort_proto(s16);
palg_selection_sort_proto(s32);
palg_selection_sort_proto(s64);
palg_selection_sort_proto(f32);
palg_selection_sort_proto(f64);

/* quick sort */
#define palg_quick_sort_proto(type) PALG_API void palg_quick_sort_##type(type const* start, type const* end)
palg_quick_sort_proto(u8);
palg_quick_sort_proto(u16);
palg_quick_sort_proto(u32);
palg_quick_sort_proto(u64);
palg_quick_sort_proto(s8);
palg_quick_sort_proto(s16);
palg_quick_sort_proto(s32);
palg_quick_sort_proto(s64);
palg_quick_sort_proto(f32);
palg_quick_sort_proto(f64);

/* merge sort */
#define palg_merge_sort_proto(type) PALG_API void palg_merge_sort_##type(type const* start, type const* end)
palg_merge_sort_proto(u8);
palg_merge_sort_proto(u16);
palg_merge_sort_proto(u32);
palg_merge_sort_proto(u64);
palg_merge_sort_proto(s8);
palg_merge_sort_proto(s16);
palg_merge_sort_proto(s32);
palg_merge_sort_proto(s64);
palg_merge_sort_proto(f32);
palg_merge_sort_proto(f64);

/* optimized sort for particular cases */

/* flags for the particular case optimizations */
#define PALG_SMALL_ARRAY BIT32(0)
#define PALG_LARGE_ARRAY BIT32(1)
#define PALG_MOSTLY_SORTED BIT32(2)
#define PALG_UNSORTED BIT32(3)

#define palg_sort_proto(type) PALG_API void palg_sort_##type(type const* start, type const* end, u32 flags)

palg_sort_proto(u8);
palg_sort_proto(u16);
palg_sort_proto(u32);
palg_sort_proto(u64);
palg_sort_proto(s8);
palg_sort_proto(s16);
palg_sort_proto(s32);
palg_sort_proto(s64);
palg_sort_proto(f32);
palg_sort_proto(f64);

END_CPP_COMPATIBLE
