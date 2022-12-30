// p15: inheritance-introduction:
// 🎆 link:  https://www.hackerrank.com/challenges/inheritance-introduction/problem 🎆
// as Object-oriented-programming ka "inheritance" ek kafi accha , mast and important topic hai bcoz esseh code-resuebility kafi acche se badhti hai.

#include <iostream>
using namespace std;

class Triangle
{
public:
    void triangle()
    {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle
{
public:
    void isosceles()
    {
        cout << "I am an isosceles triangle\n";
    }
    void description()
    {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
    //Write your code here.
};

int main()
{
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}