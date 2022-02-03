/* Task
Given a positive integer denoting n, do the following:

- If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
- If n > 9, print Greater than 9.

Input Format
The first line contains a single integer, n.

Output Format
If 1 <= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9 instead.   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

    const char *str[] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    int main(){
        int n;
        scanf("%d", &n);
        if(n < 1)
        return 1;
        
        if(n >= 1 && n <= 9)
        {
            printf("%s", str[n-1]);
        }
        else {
        printf("Greater than 9");
        }
        
    return 0;
}

