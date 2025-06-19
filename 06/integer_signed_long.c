#include <stdio.h>
#include <limits.h>

/* NOTE:
 * long signed integer
 * -(2^(n-1)) to (2^(n-1)-1)
 * n = 8 bytes = 64 bit
 * signed integer range from -(2^(64-1)) to (2^(64-1)-1)
 * */

int main()
{
	long int var1 = LONG_MIN;
	long int var2 = LONG_MAX;

	printf("range of long signed integer is from: %ld to %ld", var1, var2);

	return 0;
}
