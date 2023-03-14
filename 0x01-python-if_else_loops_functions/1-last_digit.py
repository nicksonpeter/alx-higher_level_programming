#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last = 0

if number >= 0:
    last = number % 10
else:
    last = (-number % 10) * -1

note = f"Last digit of {number} is {last}"

if last == 0:
    print("{} and is 0".format(note))
elif last > 5 and last % 10 != 0:
    print("{} and is greater than 5".format(note))
else:
    print("{} and is less than 6 and not 0".format(note))
