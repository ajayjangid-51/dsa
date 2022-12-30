#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m = 0, j = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[m] % arr[j] == 0)
            {
            }
            else if (arr[j] % arr[m] == 0)
        }
    }
    return 0;
}