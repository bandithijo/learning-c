#include <stdio.h>

/* What is the output of the following C program fragment?
 * Assume size of integer is 4 bytes.
 * */

int main()
{
	int i = 5;
	int var = sizeof(i++);

	printf("%d %d", i, var); // 5 4
							 // Therefore, i++ inside sizeof is not evaluated

	return 0;
}

/* NOTE:
 * According to C99 standard:
 *
 * The sizeof operator yields the size (in bytes) of its operand, which mya be an expression or a parenthesized name of a type. The size is determined from the type of the operand. If the type of the operand is a variable length array type, the the operand is evaluated, otherwise, the operand is not evaluated and the result is an integer constant.
 * */
