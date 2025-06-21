#include <stdio.h>

/* NOTE:
 * if put 0 infront of any value it become octal value
 * */

int main()
{
	int var = 052; // octal value

	printf("%d\n", var); // 42
	printf("%o\n", var); // 52

	return 0;
}
