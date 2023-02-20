'''
Task
You are given two integer arrays, A and B of dimensions NXM.
Your task is to perform the following operations:

Add (A + B)
Subtract (A - B)
Multiply (A * B)
Integer Division (A / B)
Mod (A % B)
Power (A ** B)
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
n, m = map(int, input().split())

a = numpy.array([input().split() for i in range(n)], int)
b = numpy.array([input().split() for i in range(n)], int)

print(a + b, a - b, a * b, a // b, a % b, a ** b, sep='\n')
