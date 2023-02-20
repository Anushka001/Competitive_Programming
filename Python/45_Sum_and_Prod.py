'''
Task

You are given a 2-D array with dimensions N X M.
Your task is to perform the sum tool over axis 0 and then find the product of that result.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
n, m = map(int, input().split())
arr = [list(map(int, input().split())) for i in range(n)]

print(numpy.prod(numpy.sum(arr, axis=0)))
