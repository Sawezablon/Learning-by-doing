#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Always 0
  */
int main(void)
{
	int num1, num2;
	int sum;

	printf("Enter two numbers\n");
	printf("1. ");
	scanf("%d", &num1);
	printf("2. ");
	scanf("%d", &num2);

	sum = num1 + num2;
	printf("Sum of %d and %d is %d\n", num1, num2, sum);

	return (0);
}
