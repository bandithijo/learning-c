#include <stdio.h>

int main()
{
	char var = 3;

	printf("%d\n", var<<1); // 3 x 2^1 = 6
	printf("%d\n", var<<4); // 3 x 2^4 = 48

	return 0;
}
