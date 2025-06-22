#include <stdio.h>

int main()
{
	char var = 3;

	printf("%d\n", var>>1); // 3 / 2^1 = 1

	var = 32;

	printf("%d\n", var>>4); // 32 / 2^4 = 2

	return 0;
}
