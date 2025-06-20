#include <stdio.h>

int fun(); // prototype of a function fun()

int var = 10; // GLOBAL variable

int main()
{
	int var = 3; // LOCAL variable

	printf("%d\n", var);
	
	fun();

	return 0;
}

int fun()
{
	printf("%d", var);
}
