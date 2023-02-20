'''
Task
Your task is to print an array of size NXM with its main diagonal elements as 1's and 0's everywhere else.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
numpy.set_printoptions(legacy='1.13')

n, m = map(int, input().split())
print(numpy.eye(n, m))
