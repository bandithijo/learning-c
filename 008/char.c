#include <stdio.h>

/* NOTE:
 * placeholder %c for print out character
 *
 * signed and unsigned
 * -126 == 130
 * -127 == 129
 * -128 == 128
 *
 *  128-(-unsigned int) + 128
 *
 *  summary
 *  1. size of character = 1 byte
 *  2. signed character range: -128 to +127
 *  3. unsigned character range: 0 to 255
 *  4. negative values won't buy you any additional powers
 *  5. in traditional ascii table, each character requires 7 bits
 *  6. in extended ascii table, each character utilize all 8 bits
 * */

int main()
{
	// char var = 'A';
	char var = 65;

	printf("%d\n", var);
	printf("%c\n", var);

	return 0;
}
