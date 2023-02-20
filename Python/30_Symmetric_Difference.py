'''
Task
Given 2 sets of integers, M and N, print their symmetric difference in ascending order. The term symmetric difference indicates those values that exist in either M or N but do not exist in both.
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
M = int(input())
m = set(map(int, input().split()))
N = int(input())
n = set(map(int, input().split()))

print(*sorted(m ^ n), sep='\n')
