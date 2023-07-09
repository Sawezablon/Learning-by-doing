#!/usr/bin/python3
import random
import os
import time

sides = ['1', '2', '3', '4', '5', '6']

def clear_screen():
    os.system("clear")

while True:
    try:
        user_choice = input("Enter a number between 1 and 6: ")
        if int(user_choice) in range(1, 7):
            break
        else:
            print("Number must be between 1 and 6")
    except ValueError:
        print("It must be a number")

for _ in range(6):
    clear_screen()
    side = random.choice(sides)
    print('[{}]'.format(side.center(3)))
    time.sleep(0.5)

print(f'DICE NUMBER  [{side.center(3)}]  YOUR CHOICE [{user_choice.center(3)}]')
if user_choice == side:
    print("CONGRAGULATION, YOU WON!")
else:
    print("OOPS, YOU LOST!")


