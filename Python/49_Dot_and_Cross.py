'''
Task

You are given two arrays A and B. Both have dimensions of N X N.
Your task is to compute their matrix product.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy

n = int(input())
a = numpy.array([list(map(int, input().split()))for i in range(n)])
b = numpy.array([list(map(int, input().split()))for i in range(n)])

print(numpy.dot(a, b))
