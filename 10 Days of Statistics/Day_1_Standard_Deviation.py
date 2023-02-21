'''
Task
Given an array, arr, of n integers, calculate and print the standard deviation. Your answer should be in decimal form, rounded to a scale of 1 decimal place. An error margin of +-0.1 will be tolerated for the standard deviation.
'''

import math
import os
import random
import re
import sys
import statistics
#
# Complete the 'stdDev' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#


def stdDev(arr):
    # Print your answers to 1 decimal place within this function
    Sum = 0
    mean = statistics.mean(arr)
    for i in arr:
        Sum += abs(i-mean)**2

    print(math.sqrt(Sum/len(arr)))


if __name__ == '__main__':
    n = int(input().strip())

    vals = list(map(int, input().rstrip().split()))

    stdDev(vals)
