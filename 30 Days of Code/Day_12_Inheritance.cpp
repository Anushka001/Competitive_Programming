/* Task
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

A Student class constructor, which has 4 parameters:
A string, firstName.
A string, lastName.
An integer, idNumber.
An integer array (or vector) of test scores, scores.
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:

Letter  Average
O       90 <= a <= 100
E       80 <= a <=  90
A       70 <= a <=  80
P       55 <= a <=  70
D       40 <= a <=  55
T       a < 40

Sample Input
Heraldo Memelli 8135627
2
100 80

Sample Output
Name: Memelli, Heraldo
ID: 8135627
Grade: O   */

#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    /*
     *   Class Constructor
     *
     *   Parameters:
     *   firstName - A string denoting the Person's first name.
     *   lastName - A string denoting the Person's last name.
     *   id - An integer denoting the Person's ID number.
     *   scores - An array of integers denoting the Person's test scores.
     */
    // Write your constructor here

    /*
     *   Function Name: calculate
     *   Return: A character denoting the grade.
     */
    // Write your function here
    Student(string firstname, string lastname, int identification, vector<int> score) : Person(firstname, lastname, identification), testScores(score) {}

    char calculate()
    {
        int avg = 0;
        for (int i = 0; i < testScores.size(); i++)
        {
            avg += testScores[i];
        }

        avg = avg / testScores.size();

        if (avg >= 90)
            return 'O';

        else if (avg >= 80)
            return 'E';

        else if (avg >= 70)
            return 'A';

        else if (avg >= 55)
            return 'P';

        else if (avg >= 40)
            return 'D';

        else
            return 'T';
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}