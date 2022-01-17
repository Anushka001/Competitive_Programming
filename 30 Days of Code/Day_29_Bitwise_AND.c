/* Task
Given set S = {1,2,3,...N}. Find two integers, A and B (where A<B), from set S such that the value of A&B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.

Function Description
Complete the bitwiseAnd function in the editor below.

bitwiseAnd has the following paramter(s):
- int N: the maximum integer to consider
- int K: the limit of the result, inclusive

Returns
- int: the maximum value of A&B within the limit.

Input Format
The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines defines a test case as 2 space-separated integers, N and K, respectively.

Sample Input

STDIN   Function
-----   --------
3       T = 3
5 2     N = 5, K = 2
8 5     N = 8, K = 5
2 2     N = 8, K = 5

Sample Output
1
4
0   */

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t > 0)
    {
        int n, k, v[1000];
        scanf("%d %d", &n, &k);

        for (int i = 1; i <= n; i++)
        {
            v[i - 1] = i;
        }

        int max = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((v[i] & v[j]) < k && (v[i] & v[j]) > max)
                {
                    max = (v[i] & v[j]);
                }
            }
        }
        printf("%d\n", max);
        t--;
    }
}
