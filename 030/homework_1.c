#include <stdio.h>

int main()
{
	char a = 7;
	a ^= 5;

	printf("%d", printf("%d", a+=3));

	return 0;
}

/* NOTE:
 *
 * 0111 → 7
 * 0101 → 5
 * ---- ^
 * 0010 → 2
 * */
