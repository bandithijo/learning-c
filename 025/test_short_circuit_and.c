#include <stdio.h>

/* NOTE:
 * Short circuit in case of &&: simply means if there is a condition any where
 * in the expression that returns false, then the rest of the conditions after
 * that will not be evaluated.
 * */

int main()
{
	int a = 5, b = 3;
	int incr;

	incr = (a < b) && (b++);

	printf("%d\n", incr); // 0
	printf("%d\n", b);    // 3

	return 0;
}
