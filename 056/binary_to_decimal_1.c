#include <stdio.h>

int main()
{
	int inputBinary, binary, decimal, reminder, base;

	printf("Enter the binary number: ");
	scanf("%d", &inputBinary);

	binary = inputBinary;
	decimal = 0;
	base = 1;

	while (inputBinary != 0) {
		reminder = inputBinary % 10;
		decimal = decimal + reminder * base;
		inputBinary = inputBinary / 10;
		base = base * 2;
	}

	printf("Decimal equivalent of the binary number %d is: %d", binary, decimal);

	return 0;
}
