/* Task
Input consists of the following space-separated values: int, long, char, float, and double, respectively. Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places. */

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int n;
    long num;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &n, &num, &c, &f, &d);

    printf("%d\n%ld\n%c\n%f\n%lf\n", n, num, c, f, d);

    return 0;
}