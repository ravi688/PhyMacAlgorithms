
#include <phymac_algorithms/sorting.h>
#include <phymac_algorithms/common.h>
#include <phymac_algorithms/debug.h>

#include <memory.h> 	// for memcpy

/* bubble sort */
#define palg_bubble_sort_def(type) \
palg_bubble_sort_proto(type) \
{ \
	u32 n = CAST_TO(u32, (end - start));\
	for(u32 i = 0; i < n; i++)\
	{\
		u32 k = (n - i - 1);\
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
	s64 n = CAST_TO(s64, end - start);\
	for(s64 i = 0; i < (n - 1); i++)\
		palg_swap(type)(&start[i], &start[palg_find_min(type)(&start[i], end) + i]);\
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

#define palg_partition_def(type) \
palg_partition_proto(type) \
{ \
	u32 n = CAST_TO(u32, end - start);\
	type pivot = start[0];\
	u32 h = n - 1;\
	u32 l = h;\
	while(h > 0)\
	{\
		if(start[h] > pivot)\
			palg_swap(type)(&start[h], &start[l--]);\
		h--;\
	}\
	palg_swap(type)(&start[0], &start[l]);\
	return l;\
}

palg_partition_def(u8);
palg_partition_def(u16);
palg_partition_def(u32);
palg_partition_def(u64);
palg_partition_def(s8);
palg_partition_def(s16);
palg_partition_def(s32);
palg_partition_def(s64);
palg_partition_def(f32);
palg_partition_def(f64);


/* quick sort */
#define palg_quick_sort_def(type) \
palg_quick_sort_proto(type) \
{ \
	if(start >= end) return;\
	u32 index = palg_partition(type)(start, end);\
	palg_quick_sort(type)(start, start + index);\
	palg_quick_sort(type)(start + index + 1, end);\
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
