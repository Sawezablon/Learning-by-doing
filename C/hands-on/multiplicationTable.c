#include <stdio.h>

/**
  * main - multiplication table
  *
  * Return: Always 0
  */
int main(void)
{
	int i;
	int num;
	int tableSize;
	int mul;

	printf("Enter number: ");
	scanf("%d", &num);
	printf("Enter the size: ");
	scanf("%d", &tableSize);
	i = 1;
	while (i <= tableSize)
	{
		mul = num * i;
		printf("%d x %d = %d \n", num, i, mul);
		i++;
	}

	return (0);
}
