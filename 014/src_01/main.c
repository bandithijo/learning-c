#include <stdio.h>
#include "add.c"

int main()
{
	int value;

	value = increment();
	value = increment();
	value = increment();

	printf("%d", value);

	return 0;
}
