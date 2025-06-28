#include <stdio.h>

/* What is the output of the following C program fragment */

int main()
{
	int a = 1; // 1
	int b = 1; // 1
	int c = ++a || b++; // 2 || 1 => 1, b++ not evaluated because short circuit ||
	int d = b-- && --a; // 1 && 1 => 1, b = 0

	printf("%d %d %d %d", d, c, b, a); // 1 1 0 1

	return 0;
}
