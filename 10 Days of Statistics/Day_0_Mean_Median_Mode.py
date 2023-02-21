'''
Task
Given an array, X, of N integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.
'''

import statistics

n = int(input())
arr = list(map(float, input().split()))
mean = statistics.mean(arr)
median = statistics.median(arr)
mode = statistics.mode(sorted(arr))
print(mean)
print(median)
print(mode)
