#include <stdio.h>

/* QUESTION:
 * Write a program to check if annual turnover of your company is greater than or equal to the annual turnover of your competitor.
 * */

int main()
{
	int our_annual_turnover, competitor_annual_turnover;

	our_annual_turnover = 300000000;
	competitor_annual_turnover = 500000000;

	if (our_annual_turnover >= competitor_annual_turnover)
		printf("Yes");
	else
		printf("No");

	return 0;
}
