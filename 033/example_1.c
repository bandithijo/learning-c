#include <stdio.h>

int fun1()
{
	printf("Neso"); // Neso

	return 1;
}

int fun2()
{
	printf("Academy"); // Academy

	return 1;
}

int main()
{
	int a;

	a = fun1() + fun2();

	printf("%d\n", a); // NesoAcademy2 or AcademyNeso2

	return 0;
}
