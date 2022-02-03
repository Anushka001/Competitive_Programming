/* Task
Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format
The first line contains a string, num which is the given number.

Output Format
Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.    */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    char s[1000];
    char m[10];
    scanf("%s", s);
    int len = strlen(s);
    
    for(int i = 0; i <= 9; i++)
        m[i] = 0;
    for(int i = 0; i < len; i++){
        int x = s[i] - '0';
        if(x >=0 && x <=9)
        m[x]++;
    }
    for(int i=0; i<10; i++)
        printf("%d ", m[i]); 
    return 0;
}
