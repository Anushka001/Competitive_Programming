// Task

// For each integer n in the interval [a,b] (given as input) :
// If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
// Else if n>9 and it is an even number, then print "even".
// Else if n>9 and it is an odd number, then print "odd".

// Input Format
// The first line contains an integer, a.
// The seond line contains an integer, b.

// Output Format
// Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int n1, n2;
    const char *str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
    scanf("%d\n%d", &n1, &n2);
    
    for(int j = n1; j <=n2; j++)
    {
        if(j<=9)
        {
            printf("%s\n", str[j-1]);
        }
        else{
            
        j%2==0 ? printf("even\n"):printf("odd\n");
        }
    }
    
    return 0;
}

