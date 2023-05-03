#include "main.h"

/**
  *
  */
int main(void)
{
	sqlite3 *db;
	int option = 0;
	char *sql;

	sqlite3_open("wizard.db", &db);

	sql = "CREATE TABLE data (date TEXT, buying_price REAL, selling_price REAL, profit REAL);";
	sqlite3_exec(db, sql, 0, 0, 0);
	while (option != 4)
	{
		option = menu();

		system("clear");
		switch (option)
		{
			case 1:
				data();
				break;
			case 2:
				update();
				break;
			case 3:
				report();
				break;
			case 4:
				printf("Goodbye!\n");
				break;
			default:
				printf("Invalid option. Please try again.\n");
		}
	}
	sqlite3_close(db);
	return (0);
}
