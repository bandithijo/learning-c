#include <stdio.h>

int main()
{
	int i = 1024;

	for (; i; i >>= 1)
		printf("Hello, World! (%d)\n", i);

	return 0;
}

/* ANSWER:
i >>= 1
i = i >> 1
i = 1024

   0100 0000 0000 = 1024
>> 0010 0000 0000 = 512
>> 0001 0000 0000 = 256
>> 0000 1000 0000 = 128
>> 0000 0100 0000 = 64
>> 0000 0010 0000 = 32
>> 0000 0001 0000 = 16
>> 0000 0000 1000 = 8
>> 0000 0000 0100 = 4
>> 0000 0000 0010 = 2
>> 0000 0000 0001 = 1
>> 0000 0000 0000 = 0

output:
Hello, World! (1024)
Hello, World! (512)
Hello, World! (256)
Hello, World! (128)
Hello, World! (64)
Hello, World! (32)
Hello, World! (16)
Hello, World! (8)
Hello, World! (4)
Hello, World! (2)
Hello, World! (1)
*/
