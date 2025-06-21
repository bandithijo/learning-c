#include <stdio.h>
#include "add.c"

int main()
{
	int value;

	value = incremental();
	value = incremental();
	value = incremental();

	printf("%d", value);

	return 0;
}
