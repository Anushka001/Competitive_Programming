'''
Task

You are given two integer arrays of size N X P and M X P (N & M are rows, and P is the column). Your task is to concatenate the arrays along axis 0.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy

n, m, p = map(int, input().split())
nxp = [list(map(int, input().split())) for i in range(n)]
mxp = [list(map(int, input().split())) for i in range(m)]
print(numpy.concatenate((nxp, mxp), axis=0))
