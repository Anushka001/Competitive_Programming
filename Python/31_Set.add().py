'''
Task
Rupal has a huge collection of country stamps. She decided to count the total number of distinct country stamps in her collection. She asked for your help. You pick the stamps one by one from a stack of N country stamps.
Find the total number of distinct country stamps.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT

N = int(input())
names = set(input() for i in range(N))
print(len(names))
