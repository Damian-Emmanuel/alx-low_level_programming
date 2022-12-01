#!/usr/bin/python3
# Author - Emmanuel Damian

for digit1 in range(0, 10):
    for digit2 in range(digit1 + 1, 10):
        if digit1 == 8 and digit1 == 9:
            print("{}{}".format(digit1, digit2))
        else:
            print("{}{}".format(digit1, digit2), end=", ")
