#include <stdio.h>

/* NOTE:
 * 3 rows → 5 columns
 * 4 rows → 7 columns
 * 5 rows → 9 columns
 * 6 rows → 11 columns
 *
 * n rows → columns = n rows * 2 - 1
 *                  = 2n-1
 */

int main()
{
	int n, i, j;

	printf("How many rows you want in your pyramid? ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) { // rows
		for (j = 1; j <= (2*n-1); j++) { // columns
			if ((j >= n-(i-1)) && (j <= n+(i-1))) { // fill in
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
