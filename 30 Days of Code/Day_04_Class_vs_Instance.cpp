/* Task
Write a Person class with an instance variable, age, and a constructor that takes an integer, initialAge, as a parameter. The constructor must assign initialAge to age after confirming the argument passed as initialAge is not negative; if a negative argument is passed as initialAge, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:

1. yearPasses() should increase the age instance variable by 1.
2. amIOld() should perform the following conditional actions:
    If age < 13, print You are young..
    If age >= 13 and age < 18, print You are a teenager..
    Otherwise, print You are old..

Input Format
The first line contains an integer, T (the number of test cases), and the T subsequent lines each contain an integer oting the age of a Person instance.

Output Format
If your methods are implemented correctly, each test case will print 2 or 3 lines (depending on whether or not a valid initialAge was passed to the constructor).        */

#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge)
{
    // Add some more code to run some checks on initialAge
    if (initialAge < 0)
    {

        age = 0;
        cout << "Age is not valid, setting age to 0." << endl;
    }
    else
    {

        age = initialAge;
    }
}

void Person::amIOld()
{
    // Do some computations in here and print out the correct statement to the console
    if (age < 13)
        cout << "You are young." << endl;

    else if (age < 18)
        cout << "You are a teenager." << endl;

    else
        cout << "You are old." << endl;
}
void Person::yearPasses()
{
    // Increment the age of the person in here
    age++;
}

int main()
{
    int t;
    int age;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> age;
        Person p(age);
        p.amIOld();
        for (int j = 0; j < 3; j++)
        {
            p.yearPasses();
        }
        p.amIOld();

        cout << '\n';
    }

    return 0;
}