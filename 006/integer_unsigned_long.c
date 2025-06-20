#include <stdio.h>
#include <limits.h>

/* NOTE:
 * long unsigned integer
 * 0 to (2^n-1)
 * n = 8 bytes = 64 bit
 * unsigned integer range from 0 to (2^64-1)
 * */

int main()
{
	unsigned long int var1 = 0;
	unsigned long int var2 = ULONG_MAX;

	printf("range of long unsigned integer is from: %lu to %lu", var1, var2);

	return 0;
}
