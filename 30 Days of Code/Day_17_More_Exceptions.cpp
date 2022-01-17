/* Task
Write a Calculator class with a single method: int power(int,int). The power method takes two integers, n and p, as parameters and returns the integer result of n^p. If either n or p is negative, then the method must throw an exception with the message: n and p should be non-negative.

Input Format
Input from stdin is handled for you by the locked stub code in your editor. The first line contains an integer, T, the number of test cases. Each of the T subsequent lines describes a test case in 2 space-separated integers that denote n and p, respectively.

Output Format
There are T lines of output, where each line contains the result of n^p as calculated by your Calculator class' power method.  */

#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

// Write your code here
class Calculator
{
public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0)
            throw runtime_error("n and p should be non-negative");

        return pow(n, p);
    }
};

int main()
{
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while (T-- > 0)
    {
        if (scanf("%d %d", &n, &p) == 2)
        {
            try
            {
                int ans = myCalculator.power(n, p);
                cout << ans << endl;
            }
            catch (exception &e)
            {
                cout << e.what() << endl;
            }
        }
    }
}