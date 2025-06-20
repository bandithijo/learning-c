#include <stdio.h>

/* NOTE:
 * character only hold 1 byte = 8 bits
 * it means the range is 2^8-1 = 255
 * it means c is exceed the range.
 * */

int main()
{
	char c = 255;
	c = c + 10;

	printf("%d\n", c);
	printf("%c\n", c);

	return 0;
}
