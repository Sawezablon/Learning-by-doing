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
