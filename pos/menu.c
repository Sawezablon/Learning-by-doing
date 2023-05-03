#include "main.h"

/**
  *
  */
int menu()
{
	int option;

	system("clear");
	printf("	***************WELCOME*************** \n");
	printf("              How can we help you today       \n");
	printf("              1. Enter new data               \n");
	printf("              2. Update data                  \n");
	printf("              3. Print report                 \n");
	printf("              4. Quit                         \n");
	printf("              Enter your choice: ");

	scanf("%d", &option);

	return (option);
}

char *table()
{
	int option;

	while (1)
	{
		system("clear");
        	printf("        ***************WELCOME*************** \n");
        	printf("              Which product? \n");
        	printf("              1. Milk\n");
        	printf("              2. Salad\n");
        	printf("              3. Mala\n");
        	printf("              Enter your choice: ");

        	scanf("%d", &option);

		if (option == 1)
			return ("milk");
		else if (option == 2)
			return ("salad");
		else if (option == 3)
			return ("mala");
		else
			printf("Invalid choice. Please try again.\n");
	}
}
