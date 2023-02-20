'''
Task

You are given a string S.
Your task is to find out whether S is a valid regex or not.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
n = int(input())
for i in range(n):
    try:
        regex = re.compile(input())
        print(True)
    except:
        print(False)
