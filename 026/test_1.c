#include <stdio.h>

int main()
{
	char x = 1, y = 2; // x = 1 (0000 0001), y = 2 (0000 0010)

	if (x & y) // 1 & 2 = 0 (0000 0000)
		printf("Result of x & y is 1");

	if (x && y) // 1 && 2 = True && True = True = 1
		printf("Result of x && y is 1");

	return 0;
}
