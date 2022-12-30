// p5:
/*
The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.
Print the  integers of the array in the reverse order, space-separated on a single line.

visit: https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n for number of integers" << endl;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "the reverse of array is " << endl;
    for (int i = (n - 1); i >= 0; i--)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
