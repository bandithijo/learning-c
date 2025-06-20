#include <stdio.h>
// #include "other.c" // error redefinition of a if enabled

extern int a = 9;

int main()
{
	printf("%d", a);

	return 0;
}
