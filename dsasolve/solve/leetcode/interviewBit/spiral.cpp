#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
vector<int> spiralOrder(const vector<vector<int>> &A)
{
    int m = 3, n = 3;
    int i = 0, j = 0;
    vector<int> v;
    int visited = 0;
    int a = m, b = n, c = -1, d = -1;

    while (visited <= m * n)
    {
        while (j < b)
        {
            v.push_back(A[i][j]);
            visited++;
            if (visited > m * n)
                break;
            j++;
        }
        b--;
        j--;
        while (i < a)
        {
            v.push_back(A[i][j]);
            visited++;
            if (visited > m * n)
                break;
            i++;
        }
        a--;
        i--;
        while (j > c)
        {
            v.push_back(A[i][j]);
            visited++;
            if (visited > m * n)
                break;
            j--;
        }
        j++;
        c++;
        while (i > d)
        {
            v.push_back(A[i][j]);
            visited++;
            if (visited > m * n)
                break;
            i--;
        }
        i++;
        d++;
    }
}
int main()
{
    file();

    return 0;
}