#include <stdio.h>

int main()
{
	int n;

	do
	{
		printf("Enter an integer: ");
		scanf("%d", &n);
	} while (n != 0);

	printf("You are out of the loop");

	return 0;
}
