/* Task
Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4   
4 4 4 4 4 4 4   

Sample Input 1
5
    
Sample Output 1
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5    */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    // here we will find the horizontal and vertical distance of a given point from the first row/ column and whatever will be the min distance, that value will be printed.
    int n = 5;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int len = 2 * n - 1;
    int min, min1, min2; //min1 for vertical distance, min2 for horizontal distance, and the min distance from these two will be stored in var min.

    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <= len; j++)
        {

            //min difference between vertical sides
            min1 = i <= len - i ? i - 1 : len - i;
 
            //min difference between horizontal sides
            min2 = j <= len - j ? j - 1 : len - j;

            //min difference between vertical and horizontal lines
            min = min1 <= min2 ? min1 : min2;

            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}
