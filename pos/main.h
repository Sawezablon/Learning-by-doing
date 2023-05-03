#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <unistd.h>

void update();
void data();
int menu();
void report();
static int callback(void *data, int argc, char **argv, char **az_col_name);

#endif
