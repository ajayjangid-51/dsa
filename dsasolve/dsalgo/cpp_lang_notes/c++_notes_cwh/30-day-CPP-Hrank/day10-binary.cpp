// day10- binary:
// 🎆 link: https://www.hackerrank.com/challenges/30-binary-numbers/problem🎆
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int i = 0;
    // int remainder[i];
    vector<int> remainder;
    while (n != 0)
    {
        // "type here to repeat"
        remainder.push_back(n % 2);
        n = n / 2;
        // i++;
    };
    // cout << " the value at index " << 0 << " is " << remainder[0] << endl;
    // cout << " the value at index " << 1 << " is " << remainder[1] << endl;
    // cout << " the value at index " << 2 << " is " << remainder[2] << endl;
    // cout << " the value at index " << 3 << " is " << remainder[3] << endl;
    // cout << " the value at index " << 3 << " is " << remainder[4] << endl;
    // cout << " the value at index " << 3 << " is " << remainder[5] << endl;
    // cout << " the value at index " << 3 << " is " << remainder[6] << endl;
    // cout << " the value at index " << 3 << " is " << remainder[7] << endl;
    // cout << " the value at index " << 3 << " is " << remainder[8] << endl;
    int x = 0;
    int y = 0;
    for (int i = 0; i < (remainder.size()); i++)
    {
        // "type here to repeat"
        if (remainder[i] == 1)
        {
            x++;
            continue;
            // cout << " 1 is " << x << endl;
        }
        else
        {
            // y++;
            break;
            // cout << " 0 is " << y << endl;
        }
    };
    cout << "the value of x is " << x << endl;

    return 0;
}

// problems to solve -half:
/*
day2:
day8: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/leaderboard
day10: https://www.hackerrank.com/challenges/30-binary-numbers/problem
*/