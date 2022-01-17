/* Task
Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.

Input Format
The first line contains an integer, N (the size of our array).
The second line contains N space-separated integers that describe array A's elements.

Output Format
Print the elements of array A in reverse order as a single line of space-separated numbers.  */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, i;
    int *arr;
    scanf("%d", &n);
    arr = (int *)malloc(n * (sizeof(int)));
    for (i = 0; i <= n; i++)
        scanf("%d", arr + i);

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
