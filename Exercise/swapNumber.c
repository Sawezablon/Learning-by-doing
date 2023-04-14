#include <stdio.h>

/**
  *
  *
  *
  */
int main(void)
{
	int num1, num2, new;
	
	printf("Enter 2 numbers \n1. First: ");
	scanf("%d", &num1);
	printf("2. Second: ");
	scanf("%d", &num2);

	new = num1;
	num1 = num2;
	num2 = new;
	printf("First is now %d\nSecond is now %d\n", num1, num2);

	return (0);
}
