/* Task
To print the sum of all elements in the array

Input Format
The first line contains an integer, n.
The next line contains n space-separated integers.

Output Format
Print the sum of the integers in the array.  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n=0, i=0, a=0, sum=0;
    
    scanf("%d", &n);
    int* ptr = (int*) malloc(n*sizeof(int));
    while(a<n){
        scanf("%d", &ptr[a]);
    sum = sum + ptr[a];
    a++;
    }
    free(ptr);
    printf("%d", sum);
       
    return 0;
}
