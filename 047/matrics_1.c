#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 2; i++) { // this represent number or rows
		for (j = 1; j <= 2; j++) { // this represent number of columns
			printf("*");
		}
		printf("\n");
	}
}
