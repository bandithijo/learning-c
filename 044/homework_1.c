#include <stdio.h>

int main()
{
	int i = 0;

	for (printf("one\n"); i < 3 && printf(""); i++) {
		printf("Hi!\n");
	}
	
	return 0;
}

/*
 * What is the output of the folowing C program fragment?
 *
 * output:
 * one
 */
