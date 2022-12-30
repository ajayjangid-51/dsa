// day5:
// 🎆 link:  https://www.hackerrank.com/challenges/30-loops/problem🎆

#include <iostream>
using namespace std;

int main()
{
    short int n;
    cin >> n;
    for (int i = 1; i < 11; i++)
    {
        // "type here to repeat"
        cout << n << " x " << i << " = " << (n * i) << endl;
    };
    return 0;
}