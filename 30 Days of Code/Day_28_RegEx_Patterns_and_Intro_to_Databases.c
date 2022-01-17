/* Task
Consider a database table, Emails, which has the attributes First Name and Email ID. Given N rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.

Input Format
The first line contains an integer, N, total number of rows in the table.
Each of the N subsequent lines contains 2 space-separated strings denoting a persons first name and email ID, respectively.

Output Format
Print an alphabetically-ordered list of first names for every user with a gmail account. Each name must be printed on a new line  */

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, index = 0;
    scanf("%d", &n);

    char names[30][20];

    for (int i = 0; i < n; i++)
    {
        char firstName[20], email[50], id[11] = "@gmail.com";
        scanf("%s %s", firstName, email);

        if (strstr(email, id) != NULL)
        {
            strcpy(names[index], firstName);
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                char temp[20];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}