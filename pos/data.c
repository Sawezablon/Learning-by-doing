#include "main.h"

/**
  *
  */
void data(char* table_name)
{
    sqlite3 *db;
    sqlite3_stmt *stmt;
    char date_str[11];
    const char *insert_sql = "INSERT INTO %s (Date, Buying_Price, Selling_Price, Target_Price, Profit) VALUES (?, ?, ?, ?, ?)";
    double buying_price, selling_price, target_price, profit;

    sqlite3_open("wizard.db", &db);

    printf("Enter date (yyyy-mm-dd): ");
    scanf("%s", date_str);
    printf("Enter Buying Price: ");
    scanf("%lf", &buying_price);
    printf("Enter Selling Price: ");
    scanf("%lf", &selling_price);
    printf("Enter Target Price: ");
    scanf("%lf", &target_price);

    profit = selling_price - buying_price;

    char *sql = malloc(strlen(insert_sql) + strlen(table_name));
    sprintf(sql, insert_sql, table_name);

    sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    sqlite3_bind_text(stmt, 1, date_str, -1, SQLITE_STATIC);
    sqlite3_bind_double(stmt, 2, buying_price);
    sqlite3_bind_double(stmt, 3, selling_price);
    sqlite3_bind_double(stmt, 4, target_price);
    sqlite3_bind_double(stmt, 5, profit);

    sqlite3_step(stmt);

    sqlite3_finalize(stmt);
    sqlite3_close(db);

    free(sql);
}

void update(char *table_name) {
    sqlite3 *db;
    char *err_msg = 0;
    char date_str[11];
    double new_price;
    int choice;
    char sql_profit[100];

    printf("Enter date (yyyy-mm-dd): ");
    scanf("%10s", date_str);

    printf("Which price do you want to update?\n");
    printf("1. Buying price\n");
    printf("2. Selling price\n");
    printf("3. Target price\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter new buying price: ");
            scanf("%lf", &new_price);

            char sql_buying[100];
            sprintf(sql_buying, "UPDATE %s SET Buying_Price=%.2f WHERE Date='%s'", table_name, new_price, date_str);

            sqlite3_open("wizard.db", &db);
            sqlite3_exec(db, sql_buying, 0, 0, &err_msg);

            // Update Profit column
            sprintf(sql_profit, "UPDATE %s SET Profit=Selling_Price-Buying_Price WHERE Date='%s'", table_name, date_str);
            sqlite3_exec(db, sql_profit, 0, 0, &err_msg);

            sqlite3_close(db);

            printf("Buying price updated successfully.\n");
            break;
        case 2:
            printf("Enter new selling price: ");
            scanf("%lf", &new_price);

            char sql_selling[100];
            sprintf(sql_selling, "UPDATE %s SET Selling_Price=Selling_Price+%.2f WHERE Date='%s'", table_name, new_price, date_str);

            sqlite3_open("wizard.db", &db);
            sqlite3_exec(db, sql_selling, 0, 0, &err_msg);

            // Update Profit column
            sprintf(sql_profit, "UPDATE %s SET Profit=Selling_Price-Buying_Price WHERE Date='%s'", table_name, date_str);
            sqlite3_exec(db, sql_profit, 0, 0, &err_msg);

            sqlite3_close(db);

            printf("Selling price updated successfully.\n");
            break;
        case 3:
            printf("Enter new target price: ");
            scanf("%lf", &new_price);

            char sql_target[100];
            sprintf(sql_target, "UPDATE %s SET Target_Price=%.2f WHERE Date='%s'", table_name, new_price, date_str);

            sqlite3_open("wizard.db", &db);
            sqlite3_exec(db, sql_target, 0, 0, &err_msg);
            sqlite3_close(db);

            printf("Target price updated successfully.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}

