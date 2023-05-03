#include "main.h"

/**
  *
  */
int menu()
{
	int option;
	int columns = 80;

	system("clear");
	printf("\033[%dC%s\n", columns, "WELCOME HOME");
	printf("\033[%dC%s\n", columns, "How can we help you today");
	printf("\033[%dC%s\n", columns, "1. Enter new data");
	printf("\033[%dC%s\n", columns, "2. Update data");
	printf("\033[%dC%s\n", columns, "3. Print report");
	printf("\033[%dC%s\n", columns, "4. Quit");
	printf("\033[%dC%s", columns, "Enter your choice: ");

	scanf("%d", &option);

	return (option);
}

char *table()
{
	int option;
	int columns = 80;

	while (1)
	{
		system("clear");
        	printf("\033[%dC%s\n", columns, "CHOOSE THE PRODUCT");
        	printf("\033[%dC%s\n", columns, "1. Milk");
        	printf("\033[%dC%s\n", columns, "2. Salad");
        	printf("\033[%dC%s\n", columns, "3. Mala");
        	printf("\033[%dC%s", columns, "Enter your choice: ");

        	scanf("%d", &option);

		if (option == 1)
			return ("milk");
		else if (option == 2)
			return ("salad");
		else if (option == 3)
			return ("mala");
		else
		{
			printf("\033[%dC%s\n", columns, "Invalid choice. Please try again.");
			sleep(2);

		}
	}
}
