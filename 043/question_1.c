#include <stdio.h>

int main()
{
	int i;

	for (i = 0; i < 20; i++) {
		switch(i) {
			case 0: i += 5;
			case 1: i += 2;
			case 5: i += 5;
			default: i += 4;
		}

		printf("%d ", i);
	}
}

/*
0 + 5 = 5
6 + 2 = 7
7 + 5 = 12
12 + 4 = 16

17 + 4 = 21

output: 16 21
*/
