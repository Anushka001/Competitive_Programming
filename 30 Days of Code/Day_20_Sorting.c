/* Task
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following  lines:

1. Array is sorted in numSwaps swaps.
where numSwaps is the number of swaps that took place.
2. First Element: firstElement
where firstElement is the first element in the sorted array.
3. Last Element: lastElement
where lastElement is the last element in the sorted array.

Input Format
The first line contains an integer, n, the number of elements in array a.
The second line contains n space-separated integers that describe a[0], a[1], ....., a[n-1].

Output Format

Print the following three lines of output:

Array is sorted in numSwaps swaps.
where numSwaps is the number of swaps that took place.
First Element: firstElement
where firstElement is the first element in the sorted array.
Last Element: lastElement
where lastElement is the last element in the sorted array.  */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n, numSwap = 0;
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++)
    {
        scanf("%d", &a[a_i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                numSwap++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n", numSwap);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n - 1]);
}