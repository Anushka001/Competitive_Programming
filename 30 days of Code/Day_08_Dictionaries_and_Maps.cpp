// Task
// Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for. For each name queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for name is not found, print Not found instead.

// Input Format

// The first line contains an integer, n, denoting the number of entries in the phone book.
// Each of the n subsequent lines describes an entry in the form of 2 space-separated values on a single line. The first value is a friend's name, and the second value is an 8-digit phone number.

// After the n lines of phone book entries, there are an unknown number of lines of queries. Each line (query) contains a name to look up, and you must continue reading lines until there is no more input.

// Output Format

// On a new line for each query, print Not found if the name has no corresponding entry in the phone book; otherwise, print the full name and phoneNumber in the format name=phoneNumber.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;                    //number of entries in phonebook
    string name, number, key; //key = queries
    cin >> n;
    map<string, string> phonebook; //syntax for map

    for (int i = 0; i < n; i++)
    {
        cin >> name >> number;
        phonebook[name] = number; //syntax for storing number in phonebook
    }

    while (cin >> key)
    {
        if (phonebook.find(key) != phonebook.end())    // if the key doesn't reach to the end, it means it is present in the phonebook
        {

            cout << key << "=" << phonebook.find(key)->second << endl;   // here, the phone number associated with the key, present in the phonebook will be printed
        }

        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}