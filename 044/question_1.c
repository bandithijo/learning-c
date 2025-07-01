#include <stdio.h>

int main()
{
	int i = -5;

	while (i <= 5) {
		if (i >= 0) {
			break;
		}
		else {
			i++;
			continue;
		}
		printf("Neso");
	}
}

/*
 * Hoe many times will "Neso" be printed on the screen?
 * output: 0 times
*/
