// Task
// Given a 6x6 2D Array, A:

// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0

// We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:

// a b c
//   d
// e f g

// There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.

// Task
// Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

// Input Format
// There are 6 lines of input, where each line contains 6 space-separated integers that describe the 2D Array .

// Output Format
// Print the maximum hourglass sum in A.

#include <stdio.h>
int main()
{
    int i, j, a[6][6], max = 0, sum, flag = 1;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            sum = a[i][j] + a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i + 1][j - 1] +
                  a[i + 1][j] + a[i + 1][j + 1];

            if (flag == 1)
            {
                max = sum;
                flag = 0;
            }
            if (max < sum)
            {
                max = sum;
            }
        }
    }

    printf("%d", max);

    return 0;
}
