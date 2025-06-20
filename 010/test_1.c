#include <stdio.h>

/* NOTE:
 * %s is used to print "string of characters"
 * printf() not only prints the content of the screen. It also returns the
 * number of characters that it successfully prints on the screen.
 * */

int main()
{
	printf("%d", printf("%s", "Hello World!"));

	return 0;
}
