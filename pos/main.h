#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

void update(char *table_name);
void data(char* table_name);
char *table();
int menu();
void report(char *table_name);
static int callback(void *data, int argc, char **argv, char **az_col_name);

#endif
