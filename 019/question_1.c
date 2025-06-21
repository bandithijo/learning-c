#include <stdio.h>

/* NOTE:
 * if you put prefix 0x into any value it become hexa value
 * 0x or 0X is able to use
 * */

int main()
{
	int var = 0x43FF; // hexa value

	printf("%x\n", var); // 43ff
	printf("%X\n", var); // 43FF
	printf("%d\n", var); // 17407

	return 0;
}
