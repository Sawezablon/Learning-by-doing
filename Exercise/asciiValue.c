#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	char c;
	printf("Enter any character: ");
	scanf("%c", &c);
	printf("The ASCII value of %c is %d\n", c, c);

	return (0);
}
