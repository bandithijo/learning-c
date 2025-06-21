#include <stdio.h>

int main()
{
	int x, a = 5;

	x = ++a;

	printf("%d\n", x); // 6
	printf("%d\n", a); // 6

	return 0;
}
