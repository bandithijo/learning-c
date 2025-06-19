#include <stdio.h>
#include <limits.h>

/* NOTE:
 * short unsigned integer
 * 0 to (2^n-1)
 * n = 2 bytes = 16 bit
 * unsigned integer range from 0 to (2^16-1)
 * */

int main()
{
	unsigned short int var1 = 0;
	unsigned short int var2 = USHRT_MAX;

	printf("range of short unsigned integer is from: %u to %u", var1, var2);

	return 0;
}
