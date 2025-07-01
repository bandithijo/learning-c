#include <stdio.h>

int main()
{
	unsigned int i = 500;

	/* range of unsigned int (4 bytes) 0 to 4294967295 */

	while (i++ != 0);

	printf("%d", i);

	return 0;
}

/*
 * output: 1 but wait until while condition not satisfied
 */
