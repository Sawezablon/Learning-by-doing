#include "main.h"

/**
  *
  */
void report(char *table_name)
{
    sqlite3 *db;
    char *err_msg = 0;
    char cap[10];

    strcpy(cap, table_name);
    cap[0] = toupper(cap[0]);

    sqlite3_open("wizard.db", &db);

    printf("\t\t\t\t\t\t\t\t%s REPORT \n\n", cap);
    printf("\tDate\t\t\t\tBuying Price\t\tSelling Price\t\tTarget Price\t\tProfit\n");
    printf("\t---------------------------------------------------------------------------------------------------------------\n");

    // Modify the SQL query to use the specified table name and fields
    char *sql = malloc(strlen("SELECT Date, Buying_Price, Selling_Price, Target_Price, Profit FROM ") + strlen(table_name) + 1);
    sprintf(sql, "SELECT Date, Buying_Price, Selling_Price, Target_Price, Profit FROM %s", table_name);

    sqlite3_exec(db, sql, callback, 0, &err_msg);
    free(sql);

    sleep(10);
    sqlite3_close(db);
}

static int callback(void *data, int argc, char **argv, char **az_col_name)
{
    for (int i = 0; i < argc; i++)
    {
        printf("\t%s\t\t", argv[i]);
    }

    printf("\n");
    return 0;
}
