'''
Task
You are given a 1-D array, A. Your task is to print the floor, ceil and rint of all the elements of A.

'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
numpy.set_printoptions(legacy='1.13')
arr = numpy.array(list(map(float, input().split())))

print(numpy.floor(arr))
print(numpy.ceil(arr))
print(numpy.rint(arr))
