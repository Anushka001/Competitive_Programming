// Task
// To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. on a single line, and finally print the value of your variable on a second line.

// Input Format
// A single line of text denoting inputString(the variable whose contents must be printed).

// Output Format
// Print Hello, World. on the first line, and the contents of inputString on the second line.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char inputString[105];
    scanf("%[^\n]%*c", inputString);

    printf("Hello, World.\n");

    printf("%s\n", inputString);

    return 0;
}
