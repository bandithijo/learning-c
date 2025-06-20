#include <stdio.h>

/* NOTE:
 * If you won't initialize auto variable, by default it will be initialized with some garbage (random) value
 * */

int main()
{
	auto int var;

	printf("%d", var);

	return 0;
}
