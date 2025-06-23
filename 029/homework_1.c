#include <stdio.h>

int main()
{
	int a = 4, b =3;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After XOR, a = %d and b = %d", a, b);

	return 0;
}

/* NOTE:
 *
 * 0100
 * 0011
 * ---- ^
 * 0111 = 7 => a = 7
 * 
 * 0111
 * 0011
 * ---- ^
 * 0100 = 4 => b = 4
 * 
 * 0111
 * 0100
 * ---- ^
 * 0011 = 3 => a = 3
 *
 * a = 3, b = 4
 * */
