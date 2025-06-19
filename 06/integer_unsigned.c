#include <stdio.h>
#include <limits.h>

/* NOTE:
 * unsigned integer
 * 0 to (2^n-1)
 * n = 4 bytes = 32 bit
 * unsigned integer range from 0 to (2^32-1)
 * */

int main()
{
	unsigned int var1 = 0;
	unsigned int var2 = UINT_MAX;

	printf("range of unsigned integer is from: %u to %u", var1, var2);

	return 0;
}
