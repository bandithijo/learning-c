#include <stdio.h>

int main()
{
	int var = 3; // LOCAL for this scope

	{
		int var = 4; // LOCAL for this scope

		printf("%d\n", var);
	}

	printf("%d\n", var);

	return 0;
}
