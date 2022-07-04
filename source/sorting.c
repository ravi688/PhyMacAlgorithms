
#include <phymac_algorithms/sorting.h>

/* bubble sort */
#define palg_bubble_sort(type) \
palg_bubble_sort_proto(type) \
{ \
}

palg_bubble_sort(u8);
palg_bubble_sort(u16);
palg_bubble_sort(u32);
palg_bubble_sort(u64);
palg_bubble_sort(s8);
palg_bubble_sort(s16);
palg_bubble_sort(s32);
palg_bubble_sort(s64);
palg_bubble_sort(f32);
palg_bubble_sort(f64);

/* selection sort */
#define palg_selection_sort(type) \
palg_selection_sort_proto(type) \
{ \
}

palg_selection_sort(u8);
palg_selection_sort(u16);
palg_selection_sort(u32);
palg_selection_sort(u64);
palg_selection_sort(s8);
palg_selection_sort(s16);
palg_selection_sort(s32);
palg_selection_sort(s64);
palg_selection_sort(f32);
palg_selection_sort(f64);

/* quick sort */
#define palg_quick_sort(type) \
palg_quick_sort_proto(type) \
{ \
}

palg_quick_sort(u8);
palg_quick_sort(u16);
palg_quick_sort(u32);
palg_quick_sort(u64);
palg_quick_sort(s8);
palg_quick_sort(s16);
palg_quick_sort(s32);
palg_quick_sort(s64);
palg_quick_sort(f32);
palg_quick_sort(f64);

/* merge sort */
#define palg_merge_sort(type) \
palg_merge_sort_proto(type) \
{ \
}

palg_merge_sort(u8);
palg_merge_sort(u16);
palg_merge_sort(u32);
palg_merge_sort(u64);
palg_merge_sort(s8);
palg_merge_sort(s16);
palg_merge_sort(s32);
palg_merge_sort(s64);
palg_merge_sort(f32);
palg_merge_sort(f64);

/* optimized sort for particular cases */

#define palg_sort(type) \
palg_sort_proto(type) \
{ \
}

palg_sort(u8);
palg_sort(u16);
palg_sort(u32);
palg_sort(u64);
palg_sort(s8);
palg_sort(s16);
palg_sort(s32);
palg_sort(s64);
palg_sort(f32);
palg_sort(f64);
