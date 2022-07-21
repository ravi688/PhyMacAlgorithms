
#include <phymac_algorithms/sorting.h>
#include <phymac_algorithms/common.h>

/* bubble sort */
#define palg_bubble_sort_def(type) \
palg_bubble_sort_proto(type) \
{ \
	u32 n = CAST_TO(u32, (end - start));\
	for(u32 i = 0; i < n; i++)\
	{\
		u32 k = (n - i);\
		for(u32 j = 0; j < k; j++)\
			if((start[j] > start[j + 1]))\
				palg_swap(type)(&start[j], &start[j + 1]);\
	}\
}

palg_bubble_sort_def(u8);
palg_bubble_sort_def(u16);
palg_bubble_sort_def(u32);
palg_bubble_sort_def(u64);
palg_bubble_sort_def(s8);
palg_bubble_sort_def(s16);
palg_bubble_sort_def(s32);
palg_bubble_sort_def(s64);
palg_bubble_sort_def(f32);
palg_bubble_sort_def(f64);

/* selection sort */
#define palg_selection_sort_def(type) \
palg_selection_sort_proto(type) \
{ \
}

palg_selection_sort_def(u8);
palg_selection_sort_def(u16);
palg_selection_sort_def(u32);
palg_selection_sort_def(u64);
palg_selection_sort_def(s8);
palg_selection_sort_def(s16);
palg_selection_sort_def(s32);
palg_selection_sort_def(s64);
palg_selection_sort_def(f32);
palg_selection_sort_def(f64);

/* quick sort */
#define palg_quick_sort_def(type) \
palg_quick_sort_proto(type) \
{ \
}

palg_quick_sort_def(u8);
palg_quick_sort_def(u16);
palg_quick_sort_def(u32);
palg_quick_sort_def(u64);
palg_quick_sort_def(s8);
palg_quick_sort_def(s16);
palg_quick_sort_def(s32);
palg_quick_sort_def(s64);
palg_quick_sort_def(f32);
palg_quick_sort_def(f64);

/* merge sort */
#define palg_merge_sort_def(type) \
palg_merge_sort_proto(type) \
{ \
}

palg_merge_sort_def(u8);
palg_merge_sort_def(u16);
palg_merge_sort_def(u32);
palg_merge_sort_def(u64);
palg_merge_sort_def(s8);
palg_merge_sort_def(s16);
palg_merge_sort_def(s32);
palg_merge_sort_def(s64);
palg_merge_sort_def(f32);
palg_merge_sort_def(f64);

/* optimized sort for particular cases */

#define palg_sort_def(type) \
palg_sort_proto(type) \
{ \
}

palg_sort_def(u8);
palg_sort_def(u16);
palg_sort_def(u32);
palg_sort_def(u64);
palg_sort_def(s8);
palg_sort_def(s16);
palg_sort_def(s32);
palg_sort_def(s64);
palg_sort_def(f32);
palg_sort_def(f64);
