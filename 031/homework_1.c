#include <stdio.h>

int main()
{
	int var = 75, var2 = 56, num;

	num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;

	printf("%d\n", num); // 65
	printf("%c\n", num); // A

	return 0;
}

/* ALGORITHM:
 * (var == 75) ? 'A' : 0 // 'A'
 * (var2 > 23) ? 'A' : 0 // 'A'
 * num = sizeof(var) ? 'A' : 0 // 'A'
 * num = A
 * %d for A equals to 65
 * */
