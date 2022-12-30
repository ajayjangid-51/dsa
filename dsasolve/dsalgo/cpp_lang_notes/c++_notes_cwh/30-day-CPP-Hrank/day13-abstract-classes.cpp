// day13:
// 🎆 link: https://www.hackerrank.com/challenges/30-abstract-classes/problem 🎆
#include <iostream>
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

// class MyBook :public Book
class MyBook : Book
{
public:
    int price;
    MyBook(string title, string author, int price) : Book(title, author)
    {
        this->price = price;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{

    return 0;
}