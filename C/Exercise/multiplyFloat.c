#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	float num1, num2;
	float mul;

	printf("Enter two number\n1. ");
	scanf("%f", &num1);
	printf("2. ");
	scanf("%f", &num2);

	mul = num1 * num2;
	printf("Multiplication of %f and %f is %f\n", num1, num2, mul);

	return (0);
}
