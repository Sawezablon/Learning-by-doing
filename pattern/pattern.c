#include <stdio.h>

/**
  * main - Entry point
  * Description: Print a pattern of numbers from 1 to n
  * Return: Always 0
  */
int main(void)
{
	int i;
	int j;
	int k;
	int r;
	int s;
	int u;
	int z;

	printf("Enter number: ");
	scanf("%d", &k);
	i = 0;
	r = k + k -1;
	while (i < r)
	{
		j = 0;
		s = 0;
		u = 0;
		z = 0;

		while (j < r)
		{
			if (k - i < k - j && i < k)
				printf("%d ", k - j);
			else if (r - i <= j && i < k)
			{
				s = s + 1;
				printf("%d ", k - i + s);
			}
			else if (i + 1 - k < k - j && i >= k)
			{
				printf("%d ", k - u);
				u = u + 1;
			}
			else if (j > i && i >= k)
			{
				z = z + 1;
				printf("%d ", i - k + 2 + z);
			}
			else if ( i >= k)
			{
				printf("%d ", i - k + 2);
			}
			else
				printf("%d ", k - i);
			j++;
		}
		printf("\n");
		i++;
	}
}
