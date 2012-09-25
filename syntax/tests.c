#include <stdio.h>
#include "experiments.h"

void enum_test (void)
{
	printf("Enumeration syntax:\n");
	printf("For boolean values, we have TRUE = %d and FALSE = %d.\n", TRUE, FALSE);
	printf("Month enumerations: JANUARY...DECEMBER = %d...%d\n", JANUARY, DECEMBER);
	printf("To further demonstrate enum syntax: two = %d, six = %d\n\n", two, six);
}

void extern_test (void)
{
	int temp = external;
	increment_external();
	printf("Test for the extern keyword.\n");
	printf("before: %d, after: %d\n\n", temp, external);
}

void static_test (void)
{
	int i;

	printf("Staticly defined variables local to a function are persistant.\n");

	printf("next: %d", next());
	for (i = 1; i < 8; i++)
		printf(", %d", next());
	printf("\n\n");
}

void types_and_sizes (void)
{
	printf("Basic data types and their respective sizes in bytes:\n");
	printf("char: %d, short int: %d, int: %d, long int: %d\n", sizeof(char), sizeof(short int), sizeof(int), sizeof(long int));
	printf("float: %d, double: %d, long double: %d\n\n", sizeof(float), sizeof(double), sizeof(long double));
}

int main (int argc, char ** argv)
{
	int i, j;

	types_and_sizes();
	static_test();
	enum_test();
	extern_test();

	return 0;
}
