#include <stdio.h>

int main()
{
	int x = 3;

	if (x == 2); x = 0;
	if (x == 3) x++;
	else x += 2;

	printf("x = %d", x);

	return 0;
}

/*
 * What is the output of the following C program fragment?
 *
 * output: x = 2
*/
