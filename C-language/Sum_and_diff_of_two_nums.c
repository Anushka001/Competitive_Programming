// Task

// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

// Declare 4 variables: two of type int and two of type float.
// Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
// Use the + and - operator to perform the following operations:
// Print the sum and difference of two int variable on a new line.
// Print the sum and difference of two float variable rounded to one decimal place on a new line.

// Input Format
// The first line contains two integers.
// The second line contains two floating point numbers.

// Output Format
// Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to 1 decimal place) separated by a space on the second line.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a=14,b=6;
    float f1=6.0,f2=2.0;
    
    scanf("%d%d",&a, &b);
    scanf("%f%f", &f1, &f2);
    
    int sum = a+b;
    int diff = a-b;
    
    float s = f1+f2;
    float d = f1-f2;
    
    printf("%d %d\n", sum, diff);
    printf("%.1f %.1f", s, d);
    
    return 0;
}
