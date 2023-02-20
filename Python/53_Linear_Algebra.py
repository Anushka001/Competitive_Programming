'''
Task

You are given a square matrix A with dimensions N X N. Your task is to find the determinant. 
Note: Round the answer to 2 places after the decimal.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy

n = int(input())
arr = numpy.array([list(map(float, input().split())) for i in range(n)])

print(round(numpy.linalg.det(arr), 2))
