#include <stdio.h>

/*
 * Program to add two numbers without a plus operator with Half Adder Method
 */

int main()
{
	int a, b, sum, carry;

	printf("Enter the two numbers you want to add.\n");
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);

	while (b != 0) {
		sum = a^b;
		carry = (a&b) << 1;
		a = sum;
		b = carry;
	}

	printf("Sum of two values is %d", a);

	return 0;
}
