#include <stdio.h>

int main()
{
	int x, a = 5;

	x = a++;

	printf("%d\n", x); // 5
	printf("%d\n", a); // 6

	return 0;
}
