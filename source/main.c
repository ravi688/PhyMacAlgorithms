
#include <phymac_algorithms/debug.h>
#include <phymac_algorithms/assert.h>
#include <phymac_algorithms/sorting.h>
#include <phymac_algorithms/common.h>

#include <string.h>

#define N 10


int main(int argc, char** argv)
{
	print("PhyMac Algorithms Repository!");

	s32 array[N] = { -103, 7, 4, 100, -100, 5, 6, 100, 2, 1 };

	print("Give Array: ");
	palg_print_array_s32(array, array + N);

	print("Buble Sort: ");
	s32 copy[N]; 
	memcpy(copy, array, sizeof(s32) * N);
	palg_bubble_sort_s32(copy, copy + N);
	palg_print_array_s32(copy, copy + N);

	print("Selection Sort: ");
	memcpy(copy, array, sizeof(s32) * N);
	palg_selection_sort_s32(copy, copy + N);
	palg_print_array_s32(copy, copy + N);

	print("Quick Sort: ");
	memcpy(copy, array, sizeof(s32) * N);
	palg_quick_sort_s32(copy, copy + N);
	palg_print_array_s32(copy, copy + N);


	return 0;
}
