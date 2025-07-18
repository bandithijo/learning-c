#include <stdio.h>

/*
 * Program to add two numbers without a plus operator
 */

int main()
{
	int x, y;
	printf("Enter the two numbers you want to add.\n");
	printf("Enter the 1st number: ");
	scanf("%d", &x);
	printf("Enter the 2nd number: ");
	scanf("%d", &y);

	while (y != 0) {
		x++;
		y--;
	}

	printf("Sum of two values is %d", x);

	return 0;
}
