#!/usr/bin/python3

from db_operations import create_table, delete_table, insert_data

def create_tab():
    columns = [
        ('Task', 'VARCHAR(255)'),
        ('DueDate', 'DATE'),
        ('Priority', 'VARCHAR(50)'),
        ('Repeat', 'VARCHAR(50)'),
        ('StartTime', 'TIME'),
        ('Notes', 'TEXT')
    ]
    table_name = input("Enter table name: ")
    create_table(table_name, columns)

def delete_tab():
    table_name = input("Enter table name: ")
    delete_table(table_name)

def insert_new_data():
    table_name = input("Enter table name: ")

    values = []
    while True:
        value = input("Enter a value (or 'q' to finish): ")

        if value.lower() == 'q':
            break

        # Split the value into individual column values
        column_values = value.split(',')
        values.append(column_values)

    insert_data(table_name, values)

def main():
    print("""\
hello, How can I help you?
1. Create table
2. Delete table
3. Insert Data""")
    res = input("Enter your choice: ")
    _choice(res)

def _choice(choice):
    if choice == '1':
        create_tab()
    elif choice == '2':
        delete_tab()
    elif choice == '3':
        insert_new_data()
    else:
        print("Invalid choice!")

if __name__ == "__main__":
    main()
