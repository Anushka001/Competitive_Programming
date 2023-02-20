'''
Task

You are given a 2-D array with dimensions N X M.
Your task is to perform the min function over axis 1 and then find the max of that.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
n, m = map(int, input().split())
arr = [list(map(int, input().split())) for i in range(n)]

print(numpy.max(numpy.min(arr, axis=1)))
