/* Task
The first line of the input contains N, where N is the number of integers.The next line contains N space-separated integers.

Print the N integers of the array in the reverse order, space-separated on a single line. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    for (int i = n; i >= 1; i--)
        printf("%d ", arr[i]);

    return 0;
}
