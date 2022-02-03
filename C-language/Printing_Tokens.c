/* Task
Given a sentence, s, print each word of the sentence in a new line.

Input Format
The first and only line contains a sentence, s.

Output Format
Print each word of the sentence in a new line.   */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s, *found;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.

    while ((found = strsep(&s, " ")) != NULL)
        printf("%s\n", found);
    return 0;
}

