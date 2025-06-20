#include <stdio.h>

/* NOTE:
 * float only able to represent fractional value up to 7 digits precisely
 * double able to represent fractional value up to 16 digits precisely
 * long double able to represent fractional value up to 19 digits precisely
 * */

int main()
{
	float var1 = 3.1415926535897932;
	double var2 = 3.1415926535897932;
	long double var3 = 3.141592653589793213456;

	printf("%d bytes\n", sizeof(float));
	printf("%d bytes\n", sizeof(double));
	printf("%d bytes\n", sizeof(long double));

	printf("\n");

	printf("%.16f\n", var1);
	printf("%.16lf\n", var2);
	printf("%.21Lf\n", var3);

	return 0;
}
