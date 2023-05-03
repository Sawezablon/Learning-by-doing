#include "main.h"

/**
  *
  */
void data()
{
    sqlite3 *db;
    sqlite3_stmt *stmt;
    char date_str[11];
    const char *insert_sql = "INSERT INTO data (date, buying_price, selling_price, profit) VALUES (?, ?, ?, ?)";
    double buying_price, selling_price, profit;

    sqlite3_open("wizard.db", &db);

    printf("Enter date (yyyy-mm-dd): ");
    scanf("%s", date_str);
    printf("Enter Buying Price: ");
    scanf("%lf", &buying_price);
    printf("Enter Selling Price: ");
    scanf("%lf", &selling_price);

    profit = selling_price - buying_price;

    sqlite3_prepare_v2(db, insert_sql, -1, &stmt, NULL);

    sqlite3_bind_text(stmt, 1, date_str, -1, SQLITE_STATIC);
    sqlite3_bind_double(stmt, 2, buying_price);
    sqlite3_bind_double(stmt, 3, selling_price);
    sqlite3_bind_double(stmt, 4, profit);

    sqlite3_step(stmt);

    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

void update()
{
    sqlite3 *db;
    char *err_msg = 0;
    char date_str[11];
    double new_price;
    int choice;

    printf("Enter date (yyyy-mm-dd): ");
    scanf("%10s", date_str);

    printf("Which price do you want to update?\n");
    printf("1. Buying price\n");
    printf("2. Selling price\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter new buying price: ");
            scanf("%lf", &new_price);

            char sql_buying[100];
            sprintf(sql_buying, "UPDATE data SET buying_price=%.2f WHERE date='%s'", new_price, date_str);

            sqlite3_open("wizard.db", &db);
            sqlite3_exec(db, sql_buying, 0, 0, &err_msg);
            sqlite3_close(db);

            printf("Buying price updated successfully.\n");
            break;
        case 2:
            printf("Enter new selling price: ");
            scanf("%lf", &new_price);

            char sql_selling[100];
            sprintf(sql_selling, "UPDATE data SET selling_price= selling_price+%.2f WHERE date='%s'", new_price, date_str);

            sqlite3_open("wizard.db", &db);
            sqlite3_exec(db, sql_selling, 0, 0, &err_msg);
            sqlite3_close(db);

            printf("Selling price updated successfully.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}

