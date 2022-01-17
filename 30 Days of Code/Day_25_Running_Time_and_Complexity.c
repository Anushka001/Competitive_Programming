/* Task
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number,n , determine and print whether it is Prime or Not prime.

Input Format
The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines contains an integer, n, to be tested for primality.

Output Format
For each test case, print whether n is Prime or Not prime on a new line.  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int number, check = 0;
        scanf("%d", &number);

        if (number < 2)
        {
            printf("Not prime\n");
        }
        else
        {
            for (int i = 2; i * i <= number; i++)
            {
                if (number % i == 0)
                {
                    check = 1;
                    break;
                }
            }
            if (check == 1)
            {
                printf("Not prime\n");
            }
            else
            {
                printf("Prime\n");
            }
        }
    }

    return 0;
}
