'''
Task

You are given a N X M integer array matrix with space separated elements (N = rows and M = columns).
Your task is to print the transpose and flatten results.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
n, m = map(int, input().split())
arr = numpy.array([list(map(int, input().split())) for i in range(n)])

print(numpy.transpose(arr))
print(arr.flatten())
