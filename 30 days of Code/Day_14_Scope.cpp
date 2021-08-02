// Task
// Complete the Difference class by writing the following:

// A class constructor that takes an array of integers as a parameter and saves it to the __elements instance variable.
// A computeDifference method that finds the maximum absolute difference between any 2 numbers in __elements and stores it in the maximumDifference instance variable.

// Input Format
// The first line contains N, the size of the elements array. The second line has N space-separated integers that describe the __elements array.

// Output Format
// The Solution class will print the value of the maximumDifference instance variable.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    // Add your code here
    Difference(vector<int> arr)
    {
        elements = arr;
    }

    void computeDifference()
    {
        maximumDifference = 0;
        for (int i = 0; i < elements.size(); i++)
        {
            for (int j = i + 1; j < elements.size(); j++)
            {
                if (abs(elements[i] - elements[j]) > maximumDifference)
                {
                    maximumDifference = abs(elements[i] - elements[j]);
                }
            }
        }
    }
}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}