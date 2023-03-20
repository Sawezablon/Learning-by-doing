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
	int sPrice;
	char choice;
	double mlPrice;
	double priceMl;

	ml = 1000;
	printf("Hey, what can i do for you today? choose A or B\n");
	printf("A. Print all prices with Millimeters equivalent\n");
	printf("B. Print how many millimeter is equivalent to entered amount\n:");
	scanf("%c", &choice);
	printf("Enter price per litre: ");
	scanf("%d", &price);

	if (choice == 'A')
	{
		for (i = 100; i <= ml; i += 50)
		{
			mlPrice = i * price / ml;
			printf("%d ML => %5.2f/= \n", i, mlPrice);
		}
	}
	else if (choice == 'B')
	{
		printf("Now enter the price to be converted: ");
		scanf("%d", &sPrice);
		priceMl = sPrice * ml / price;
		printf("\nKsh %d is equivalent to %5.0f ML\n", sPrice, priceMl);
	}

	return (0);
}
