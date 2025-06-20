#include <stdio.h>
#include <limits.h>

/* NOTE:
 * signed integer
 * -(2^(n-1)) to (2^(n-1)-1)
 * n = 4 bytes = 32 bit
 * signed integer range from -(2^(32-1)) to (2^(32-1)-1)
 * */

int main()
{
	int var1 = INT_MIN;
	int var2 = INT_MAX;

	printf("range of signed interger is from: %d to %d", var1, var2);

	return 0;
}
