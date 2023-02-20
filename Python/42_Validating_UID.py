'''
Task

ABCXYZ company has up to 100 employees.
The company decides to create a unique identification number (UID) for each of its employees.
The company has assigned you the task of validating all the randomly generated UIDs.

A valid UID must follow the rules below:

It must contain at least 2 uppercase English alphabet characters.
It must contain at least 3 digits (0 - 9).
It should only contain alphanumeric characters (a - z, A - Z & 0 - 9).
No character should repeat.
There must be exactly  characters in a valid UID.
'''


import re
n = int(input())
for i in range(n):
    s = input()
    if len(re.findall(r'[A-Z]', s)) >= 2:
        if len(re.findall(r'[0-9]', s)) >= 3:
            if re.match(r'^[A-Za-z0-9]+$', s):
                if len(re.findall(r'(.).*\1', s)) == 0:
                    if len(s) == 10:
                        print('Valid')
                        continue
    print('Invalid')
