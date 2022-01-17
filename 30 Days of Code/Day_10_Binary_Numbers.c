/* Task
Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation. When working with different bases, it is common to show the base as a subscript.

Example
125
The binary representation of 125 base10 is 1111101 base2. In base 10, there are 5 and 1 consecutive ones in two groups. Print the maximum, 5.

Input Format
A single integer, n.

Output Format
Print a single base-10 integer that denotes the maximum number of consecutive 1's in the binary representation of n. */

#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);

    // here, we are using the logic of doing bitwise-AND operation between number and its left shift form. Eg; we take number 5, its binary is 101. So when we convert it into its left shift form, we get 1010, and when we convert 101 to four bits, we will get 0101. So 1010 & 0101 will give output 0000. So here, n = 0, so while loop won't execute, and value of count will be 0.

    while (n != 0)
    {
        n = n & (n << 1);
        count++;
    }

    printf("%d", count);

    return 0;
}
