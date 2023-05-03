#include "main.h"

/**
  *
  */
void report()
{
    sqlite3 *db;
    char *err_msg = 0;
    
    sqlite3_open("wizard.db", &db);

    printf("\tDate\t\t\t\tBuying Price\t\tSelling Price\t\tProfit\n");
    printf("\t--------------------------------------------------------------------------------------\n");

    sqlite3_exec(db, "SELECT date, buying_price, selling_price, profit FROM data", callback, 0, &err_msg);

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

