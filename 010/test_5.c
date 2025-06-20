#include <stdio.h>

/* NOTE:
 * -3 in 2s complement representation:
 *  Step 1: Take 1s complement of 3
 *		3 = 00000000 00000000 00000000 00000011
 *		1s complement of 3 = 11111111 11111111 11111111 11111100
 *	Step 2: Add 1 to the result. It will give
 *		11111111 11111111 11111111 11111101 = 4294967293 (unsigned integer of -3)
 * */

int main()
{
	unsigned i = 1;
	int j = -4;

	printf("%u", i+j);
	printf("\n");
	printf("%d", i+j);

	return 0;
}
