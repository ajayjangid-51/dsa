// p8-string:
// 🎆 As Now YAHA pe apn Strings k bareh meh dekhenge: 🎆

// p-link : https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a); // as apn pura sentence as a input lene k liyeh apn getline()-fn use krteh hai.
    getline(cin, b);

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << endl;

    return 0;
}