#include "main.h"

/**
  *
  */
void report(char *table_name)
{
    sqlite3 *db;
    char *err_msg = 0;
    char cap[10];
    int columns = 80;
    int back;

    strcpy(cap, table_name);
    cap[0] = toupper(cap[0]);

    sqlite3_open("wizard.db", &db);

    printf("\033[%dC%s%s\n", columns, cap, " REPORT\n");
    printf("\033[%dC%s\n", columns-40, "Date\t\tBuying Price\t\tSelling Price\t\tTarget Price\t\tProfit");
    printf("\033[%dC%s\n", columns-40, "-----------------------------------------------------------------------------------------------");

    // Modify the SQL query to use the specified table name and fields
    char *sql = malloc(strlen("SELECT Date, Buying_Price, Selling_Price, Target_Price, Profit FROM ") + strlen(table_name) + 1);
    sprintf(sql, "SELECT Date, Buying_Price, Selling_Price, Target_Price, Profit FROM %s", table_name);

    sqlite3_exec(db, sql, callback, 0, &err_msg);
    free(sql);

    sqlite3_close(db);
    printf("\033[%dC%s", columns, "Enter 0 to go back home: ");
    scanf("%d", &back);
    system("clear");
    printf("\033[%dC%s", columns, "Please wait...!\n");
    sleep(1);

}

static int callback(void *data, int argc, char **argv, char **az_col_name)
{
    int columns = 80;

    printf("\033[%dC", columns-40);
    for (int i = 0; i < argc; i++)
    {
        printf("%s", argv[i]);
	if (i > 0)
		printf("\t\t\t");
	else
		printf("\t");
    }

    printf("\n");
    return 0;
}
