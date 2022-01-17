/* Task
Given a Book class and a Solution class, write a MyBook class that does the following
Inherits from Book
Has a parameterized constructor taking these 3 parameters:
string title
string author
int price
Implements the Book class' abstract display() method so it prints these 3 lines:
Title:, a space, and then the current instance's title.
Author:, a space, and then the current instance's author.
Price:, a space, and then the current instance's price.

Input Format
The Solution class creates a Book object and calls the MyBook class constructor (passing it the necessary arguments). It then calls the display method on the Book object.

Output Format
The void display() method should print and label the respective title, author, and price of the MyBook object's instance (with each value on its own line) like so:

Title: $title
Author: $author
Price: $price  */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book
{
protected:
    string title;
    string author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }
    virtual void display() = 0;
};

// Write your MyBook class here
class MyBook : Book
{

    string author;
    string title;
    int price;

public:
    MyBook(string title, string author, int price) : Book(title, author), price(price) {}

    virtual void display()
    {
        cout << "Title: " << Book::title << "\nAuthor: " << Book::author << "\nPrice: " << price << endl;
    }
};

int main()
{
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
