'''
Task
You are given a space separated list of nine integers. Your task is to convert this list into a 3X3 NumPy array.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy

# arr = numpy.array(input().split(), int)
arr = list(map(int, input().split()))
print(numpy.reshape(arr, (3, 3)))
