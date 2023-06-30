#!/usr/bin/python3
from db_operations import create_table, delete_table


def main():
    print("""\
hello, How can i help you?
1. Create table
2. Delete table""")
    res = input("Enter your choice:")
    _choice(res)

def create_tab():
    table_name = input("Enter table name: ")
    columns = []
    while True:
        column_name = input("Enter column name (or 'done' to finish): ")
        if column_name.lower() == 'done':
            break
        column_type = input(f"Enter data type for column '{column_name}': ")
        columns.append((column_name, column_type))
    create_table(table_name, columns)

def delete_tab():
    table_name = input("Enter table name: ")
    delete_table(table_name)

def _choice(choice):
    if choice == '1':
        create_tab()
    elif choice == '2':
        delete_tab()
    else:
        return

"""CREATE TABLE ToDoList (
    Task VARCHAR(255),
    DueDate DATE,
    Priority VARCHAR(50),
    Repeat VARCHAR(50),
    StartTime TIME,
    Notes TEXT
)"""


if __name__ == "__main__":
    main()
