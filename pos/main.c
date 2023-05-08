#include "main.h"

/**
  *
  */
int main(void)
{
        sqlite3 *db;
        int option = 0;
        char *sql;
	char table_name[10];
	int columns = 80;

	sqlite3_open("wizard.db", &db);

        sql = "CREATE TABLE salad (id INTEGER PRIMARY KEY AUTOINCREMENT, Date DATE NOT NULL, Buying_Price REAL NOT NULL, Selling_Price REAL NOT NULL, Target_Price REAL NOT NULL, Profit REAL NOT NULL);";

	sqlite3_exec(db, sql, 0, 0, 0);

	sql = "CREATE TABLE milk (id INTEGER PRIMARY KEY AUTOINCREMENT, Date DATE NOT NULL, Buying_Price REAL NOT NULL, Selling_Price REAL NOT NULL, Target_Price REAL NOT NULL, Profit REAL NOT NULL);";

        sqlite3_exec(db, sql, 0, 0, 0);

	sql = "CREATE TABLE mala (id INTEGER PRIMARY KEY AUTOINCREMENT, Date DATE NOT NULL, Buying_Price REAL NOT NULL, Selling_Price REAL NOT NULL, Target_Price REAL NOT NULL, Profit REAL NOT NULL);";

        sqlite3_exec(db, sql, 0, 0, 0);
        
        while (option != 4)
        {
                option = menu();
		if (option == 1 || option == 2 || option == 3)
		{
			strcpy(table_name, table());
			if (strcmp(table_name, "0") == 0)
				option = 5;
		}

                system("clear");
                switch (option)
                {
                        case 1:
                                data(table_name);
                                break;
                        case 2:
                                update(table_name);
                                break;
                        case 3:
                                report(table_name);
                                break;
                        case 4:
                                printf("\033[%dC%s", columns, "Goodbye!\n");
                                break;
			case 5:
				break;
                        default:
                                printf("\033[12B\033[%dC%s", columns, "Invalid option. Please try again.\n");
				sleep(2);
                }
        }
        sqlite3_close(db);
        return (0);
}
