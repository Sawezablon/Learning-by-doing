#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	printf("Size of int is %lu bytes\n", sizeof(int));
	printf("Size of float is %lu bytes\n", sizeof(float));
	printf("Size of double is %lu bytes\n", sizeof(double));
	printf("Size of char is %lu bytes\n", sizeof(char));

	return (0);
}
