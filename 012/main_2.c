#include <stdio.h>
#include "other.c"

int main()
{
	extern int a;

	printf("%d", a);

	return 0;
}
