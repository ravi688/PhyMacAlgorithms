
#include <phymac_algorithms/debug.h>
#include <phymac_algorithms/assert.h>
#include <phymac_algorithms/sorting.h>
#include <phymac_algorithms/common.h>

#include <string.h>

int main(int argc, char** argv)
{
	print("PhyMac Algorithms Repository!");

	s32 array[10] = { -19999, 1, 4, 100, 3, 5, 6, 3, 2, 1 };

	print("Give Array: ");
	palg_print_array_s32(array, array + 10);

	print("Buble Sort: ");
	s32 copy[10]; 
	memcpy(copy, array, sizeof(s32) * 10);
	palg_bubble_sort_s32(array, array + 10);
	palg_print_array_s32(copy, copy + 10);
	
	return 0;
}
