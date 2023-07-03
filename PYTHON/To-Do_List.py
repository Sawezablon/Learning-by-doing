#!/usr/bin/python3
import os


#Simple to-do list manager
def centered(line):
    terminal_width = os.get_terminal_size().columns
    padding = (terminal_width - len(line)) // 2
    return padding

def home_info():
    os.system("clear")
    padding = centered("To-Do List Manager")
    print(' ' * padding + "To-Do List Manager")
    print(' ' * padding + "------------------")
    print(' ' * padding + "1. Add Task")
    print(' ' * padding + "2. View Tasks")
    print(' ' * padding + "3. Mark Task as Completed")
    print(' ' * padding + "4. Delete Task")
    print(' ' * padding + "5. Filter Tasks")
    print(' ' * padding + "6. Exit")
    choice = input(' ' * padding + "Enter your choice: ")
    return choice, padding

def insert_new_data(padding):
    task = input(' ' * padding + "Enter Task Name: ")

def print_choice(choice, padding):
    os.system("clear")
    if choice == 1:
        print("Input New To Do list here: ")
        insert_new_data(padding)
    elif choice == 2:
        print()

def main():
    while True:
        choice, padding = home_info()
        if choice == '6':
            break
        print_choice(choice, padding)      

if __name__ == "__main__":
    main()
