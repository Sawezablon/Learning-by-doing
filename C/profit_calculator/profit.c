#include <stdio.h>

/**
  * main - calculate profit from input
  * Return: Always 0
  */
int main(void)
{
	int i, j, k, l;
	int table[31][3];
	double profit;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 3)
		{
			if (j == 0)
			{
				printf("Enter Buying Price: ");
				scanf("%d", &table[i][j]);
			}
			else if (j == 1)
			{
				printf("Enter Selling Price: ");
				scanf("%d", &table[i][j]);
			}
			else
				table[i][j] = table[i][1] - table[i][0];
			j++;
		}
		i++;
	}

	while (k < 2)
	{
		l = 0;
		while (j < 3)
		{
			printf("%d \n", table[k][l]);
			l++;
		}
		k++;
	}

	return (0);
}
