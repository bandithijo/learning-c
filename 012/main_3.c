#include <stdio.h>
// #include "other.c" // it raise error redifinition of a if enabled

int a = 9;

int main()
{
	extern int a;

	printf("%d", a);

	return 0;
}
