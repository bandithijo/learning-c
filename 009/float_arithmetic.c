#include <stdio.h>

/* NOTE:
 * integer devision will possible lose precise value
 * */

int main()
{
	int var = 4/9;
	printf("%d\n", var);

	float var1 = 4/9;
	printf("%.2f\n", var1);

	double var2 = 4.0/9.0;
	printf("%.2lf\n", var2);

	float var3 = 4.0f/9.0f;
	printf("%.2f\n", var3);

	return 0;
}
