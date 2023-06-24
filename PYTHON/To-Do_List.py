#!/usr/bin/python3
import os
from db_operations import *

#Simple to-do list manager
def main():
    choice = home_info()
    os.system("clear")
    print(choice)


def home_info():
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
      

if __name__ == "__main__":
    main()
