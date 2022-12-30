// day11:
// 🎆 link:https://www.hackerrank.com/challenges/30-2d-arrays/problem  🎆
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    short int A[6][6];
    for (int i = 0; i < 6; i++)
    {
        // "type here to repeat"
        for (int j = 0; j < 6; j++)
        {
            // "repeat this"
            cin >> A[i][j];
        };
    };
    // cout << " all good " << endl;
    // calculating sum of hour-glasses...
    int hourglasess[16];
    int m = 0;
    while (m < 16)
    {
        for (int i = 0; i < 4; i++)
        {
            // "type here to repeat"
            //  A[i] , A[i+1] , A[i+2] , A[i+3]
            for (int j = 0; j < 4; j++)
            {
                // "type here to repeat"
                hourglasess[m] = 0;
                hourglasess[m] += A[i][j] + A[i][j + 1] + A[i][j + 2];
                hourglasess[m] += A[i + 1][j + 1];
                hourglasess[m] += A[i + 2][j] + A[i + 2][j + 1] + A[i + 2][j + 2];
                // cout << "the value of" << m << "th index is " << hourglasess[m] << endl;
                m++;
            };
        };
    };
    // cout << " hello brother " << endl;
    // cout << "the max-value is" << *(max_element(hourglasess, hourglasess + 15)) << endl;
    cout << *(max_element(hourglasess, hourglasess + 16)) << endl;
    // this max_element-fn is from stack-overflow: https://stackoverflow.com/questions/34315002/max-in-a-c-array
    // and gfg also is: https://www.geeksforgeeks.org/how-to-find-the-maximum-element-of-an-array-using-stl-in-c/
    // cout << " the value " << hourglasess[0] << endl;
    // cout << " the value " << hourglasess[1] << endl;
    // cout << " the value " << hourglasess[2] << endl;
    // cout << " the value " << hourglasess[5] << endl;
    // cout << " the value " << hourglasess[6] << endl;
    // cout << " the value " << hourglasess[3] << endl;

    return 0;
}