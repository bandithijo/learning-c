#include <stdio.h>
#include "other.c"

/* NOTE:
 *
 * example:
 * int var; => declaration and definition
 * extern int var; => declaration
 *
 * - Extern is short name for external
 * - Used when a particular file needs to access a variable from another file
 * - Provide reused ability to using variable
 * */

extern int a;
extern int a;
extern int a;

int main()
{
	printf("%d", a);

	return 0;
}
