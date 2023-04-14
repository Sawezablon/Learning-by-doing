#include <stdio.h>

/**
  * main - factorial of a number
  *
  * Return: Always 0
  */
int main(void)
{
	int input;
	int fact;
	int mul;

	printf("Enter a number: ");
	scanf("%d", &input);
	mul = 1;
	fact = input;
	while (input > 0)
	{
		mul *= input;
		input--;
	}
	printf("The factorial of %d! is %d\n", fact, mul);
	return (0);
}
