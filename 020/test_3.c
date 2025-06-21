#include <stdio.h>

/* QUESTION:
 * Write a program to make a decision that if you have both chair and table then you start studying your favorite subject otherwise you simply go to sleep.
 * */

int main()
{
	int have_chair, have_table;

	have_chair = 1;
	have_table = 1;

	if (have_chair && have_table)
		printf("Go to study");
	else
		printf("Go to sleep");

	return 0;
}
