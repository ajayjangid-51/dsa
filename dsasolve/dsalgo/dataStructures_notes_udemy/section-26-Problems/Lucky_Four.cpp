#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, i = 0, x;
    cin >> size;
    x = size;
    int arr[size];
    while (size--)
    {
        cin >> arr[i++];
    }
    int max = arr[0];
    for (int i = 1; i < x; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}