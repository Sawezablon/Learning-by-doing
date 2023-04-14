#include <stdio.h>

/**
  *
  *
  *
  */
int main(void)
{
	int a;
	long int b;
	long long c;
	double d;
	long double e;

	printf("Size of int = %zu bytes\n", sizeof(a));
	printf("Size of long int = %zu bytes\n", sizeof(b));
	printf("Size of long long = %zu bytes\n", sizeof(c));
	printf("Size of double = %zu bytes\n", sizeof(d));
	printf("Size of long double = %zu bytes\n", sizeof(e));

	return (0);
}
