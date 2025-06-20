#include <stdio.h>
#include <limits.h>

/* NOTE:
 * short signed integer
 * -(2^(n-1)) to (2^(n-1)-1)
 * n = 2 bytes = 16 bit
 * signed integer range from -(2^(16-1)) to (2^(16-1)-1)
 * */

int main()
{
	short int var1 = SHRT_MIN;
	short int var2 = SHRT_MAX;

	printf("range of short signed integer is from: %d to %d", var1, var2);

	return 0;
}
