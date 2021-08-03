// Task
// Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String.

// Note: You must use the String-to-Integer and exception handling constructs built into your submission language.

// Input Format
// A single string, S.

// Output Format
// Print the parsed integer value of S, or 'Bad String' if S cannot be converted to an integer.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    int num1 = 0;
    int num2;

    try
    {

        num2 = stoi(S);
        cout << num2;
    }

    catch (exception num2)
    {
        cout << "Bad String";
    }
    return 0;
}
