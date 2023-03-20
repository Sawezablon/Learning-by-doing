#include <stdio.h>

/**
  * main - Entry point
  * Description: You enter price for a litre of liquid.
  * Generate price for that liqiud cost per ml
  * Return: Always 0
  */
int main(void)
{
	int price;
	int ml;
	int i;

	ml = 1000;
	printf("Enter price per litre: ");
	scanf("%d", &price);
	for (i = 100; i <= ml; i += 50)
	{
		double mlPrice;

		mlPrice = i * price / ml;
		printf("%d ML => %5.2f/= \n", i, mlPrice);
	}

	return (0);
}
