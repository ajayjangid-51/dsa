// day4: yaha pe apn Class vs. Instance dekhenge , mtlb class and instance k bich meh difference dekhenge:
// as instance toh simply class-members ko hi khteh hai.
// 🎆 link: https://www.hackerrank.com/challenges/30-class-vs-instance/problem 🎆

#include <iostream>
using namespace std;

class Person
{
    int age;

public:
    Person(int initialAgi)
    {
        if (initialAgi < 0)
        {
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
        }
        else
        {

            age = initialAgi;
        }
    }
    void yearPasses(void)
    {
        age++;
    };
    void amIOld()
    {
        if (age < 13)
        {
            cout << "You are young." << endl;
        }
        else if (age >= 13 && age < 18)
        {
            cout << "You are a teenager." << endl;
        }
        else
        {
            cout << "You are old." << endl;
        }
    }
};

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