'''
Task

You are given two arrays: A and B.
Your task is to compute their inner and outer product.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy

a = numpy.array(list(map(int, input().split())))
b = numpy.array(list(map(int, input().split())))

print(numpy.inner(a, b))
print(numpy.outer(a, b))
