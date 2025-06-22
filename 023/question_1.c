#include <stdio.h>

/* NOTE:
 * Post increment/decrement in context of equation:
 * => First use the value in the equation and then increment the value.
 *
 * Pre increment/decrement in context of equation:
 * => First increment the value and then use in the equation after completion of
 * the equation.
 * */

int main()
{
	int a = 4, b = 3;

	printf("%d\n", a+++b); // 4 + 3 = 7
	printf("%d\n", a+++b); // 5 + 3 = 8

	return 0;
}
