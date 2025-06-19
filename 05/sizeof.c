#include <stdio.h>

/* NOTE:
 * sizeof() is a unary operator and not a function */

int main()
{
	printf("%d\n", sizeof(short int));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long int));

	return 0;
}
