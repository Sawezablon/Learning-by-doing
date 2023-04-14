#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	int num1, num2;
	int quot;
	int rem;

	printf("Enter 2 to be divided\n1. ");
	scanf("%d", &num1);
	printf("2. ");
	scanf("%d", &num2);
	quot = num1 / num2;
	rem = num1 % num2;

	printf("%d / %d = %d\n", num1, num2, quot);
	printf("%d %% %d = %d\n", num1, num2, rem);

	return (0);
}

