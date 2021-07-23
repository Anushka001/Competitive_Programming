// Task

// Given a five digit integer, print the sum of its digits.

// Input Format
// The input contains a single five digit number, n.

// Output Format
// Print the sum of the digits of the five digit number.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum = 0, m;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while (n>0){
        m = n%10;
        sum = sum+m;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
