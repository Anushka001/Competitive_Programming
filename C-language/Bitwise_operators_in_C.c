/* Task
You will be given an integer n, and a threshold, k. For each number i from 1 through n, find the maximum value of the logical AND, OR, and XOR when compared against all integers through n that are greater than i. Consider value only if the comparison returns a result less than k. Print the results of the and, or and exclusive or comparisons on separate lines, in that order.

Example
n=3
k=3

The results of the comparisons are below:

a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1
For the and comparison, the maximum is 2. For the or comparison, none of the values is less than k, so the maximum is 0. For the xor comparison, the maximum value less than k is 2. The function should print:

2
0
2

Function Description
Complete the calculate_the_maximum function in the editor below.

calculate_the_maximum has the following parameters:

int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered

Prints
Print the maximum values for the and, or and xor comparisons, each on a separate line.

Input Format
The only line contains 2 space-separated integers, n and k.  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxAnd = 0, maxOr = 0, maxXor = 0;
  
  for(int i = 1; i <=n; i++)
  {
      for(int j = i+1; j<=n;j++)
      {
          if(((i&j) > maxAnd) && ((i&j) < k))
          maxAnd = i&j;
          if(((i|j) > maxOr) && ((i|j) < k))
          maxOr = i|j;
          if(((i^j)> maxXor) && ((i^j) < k))
          maxXor = i^j;
      }  
  }
  
  printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
