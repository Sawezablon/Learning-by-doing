#!/usr/bin/python3
import os

#Simple to-do list manager
def main():
    while True:
        choice = home_info()
        print_choice(choice)


def home_info():
    os.system("clear")
    print("""
To-Do List Manager
------------------

1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Delete Task
5. Filter Tasks
6. Exit
        """)
    choice = int(input("Enter your choice: "))
    return choice

def print_choice(choice):
    os.system('clear')
    if choice == 1:
        print("Input New Task here: ")
    elif choice == 2:
        print()
      

if __name__ == "__main__":
    main()
