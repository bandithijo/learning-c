#include <stdio.h>

int main()
{
	int a = 2, b = 3, c = 4, d = 5;

	printf("%d * %d / %d = %d\n", a, b, c, a*b/c); // 2 * 3 / 4 = 1
	printf("%d + %d - %d = %d\n", a, b, c, a+b-c); // 2 + 3 - 4 = 1
	printf("%d + %d * %d - %d %% %d = %d\n", a, b, d, c, a, a+b*d-c%a); // 2 + 3 * 5 - 4 % 2 = 17

	return 0;
}
