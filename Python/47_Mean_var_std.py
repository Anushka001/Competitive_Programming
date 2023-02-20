'''
Task

You are given a 2-D array of size N X M.
Your task is to find:

The mean along axis 0
The var along axis 1
The std along axis None
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
n, m = map(int, input().split())
arr = [list(map(int, input().split())) for i in range(n)]

print(numpy.mean(arr, axis=1))
print(numpy.var(arr, axis=0))
print(round(numpy.std(arr, axis=None), 11))
