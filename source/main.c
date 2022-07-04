
#include <phymac_algorithms/debug.h>
#include <phymac_algorithms/assert.h>
#include <phymac_algorithms/sorting.h>

int main(int argc, char** argv)
{
	debug_log_info("PhyMac Algorithms Repository!");

	u32 array[10] = { 1, 1, 4, 100, 3, 5, 6, 3, 2, 1 };

	palg_bubble_sort_u32(array, array + 10);

	return 0;
}
