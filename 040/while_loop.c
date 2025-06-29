#include <stdio.h>

int main()
{
	int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

	while (n != 0)
	{
		printf("Enter an integer: ");
		scanf("%d", &n);
	}

	printf("You are out of the loop");

	return 0;
}
