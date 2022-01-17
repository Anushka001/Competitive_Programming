/* Task
Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).

Input Format
The first line contains an integer, T (the number of test cases).
Each line i of the T subsequent lines contain a string, S.

Output Format
For each String Sj (where 0 <= j <= T-1), print Sj's even-indexed characters, followed by a space, followed by Sj's odd-indexed characters. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    char str[10000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        for (int i = 0; i < strlen(str); i++)
        {
            if (i % 2 == 0)
            {
                printf("%c", str[i]);
            }
        }

        printf(" ");

        for (int i = 0; i < strlen(str); i++)
        {
            if (i % 2 != 0)
            {

                printf("%c", str[i]);
            }
        }

        printf("\n");
    }
}
