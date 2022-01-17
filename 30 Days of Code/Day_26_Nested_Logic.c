/* Task
Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

1. If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine = 0).
2. If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, fine = 15 Hackos x (the number of days late).
3. If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500 Hackos x (the number of months late).
4. If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.

Example
d1, m1, y1 = 12312014 returned date
d2, m2, y2 = 112015 due date

The book is returned on time, so no fine is applied.

d1, m1, y1 = 112015 returned date
d2, m2, y2 = 12312014 due date

The book is returned in the following year, so the fine is a fixed 10000.

Input Format
The first line contains 3 space-separated integers denoting the respective day, month, and year on which the book was actually returned.
The second line contains 3 space-separated integers denoting the respective day, month, and year on which the book was expected to be returned (due date).

Output Format
Print a single integer denoting the library fine for the book received as input.  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int d, m, y, dued, duem, duey;
    scanf("%d %d %d", &d, &m, &y);
    scanf("%d %d %d", &dued, &duem, &duey);

    if (y == duey)
    {
        if (m == duem)
        {
            if (d == dued)
            {
                printf("0");
            }
            else
            {
                if (d > dued)
                {
                    int fine = 15 * (d - dued);
                    printf("%d", fine);
                }
                else
                {
                    printf("0");
                }
            }
        }
        else
        {
            if (m > duem)
            {
                int fine2 = 500 * (m - duem);
                printf("%d", fine2);
            }
            else
            {
                printf("0");
            }
        }
    }
    else
    {
        if (y > duey)
        {
            printf("10000");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}
