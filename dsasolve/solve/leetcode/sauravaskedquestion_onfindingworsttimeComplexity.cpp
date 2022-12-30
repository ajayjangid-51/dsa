#include <bits/stdc++.h>
using namespace std;
#define deb(c) cout << #c << " = " << c << endl

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int call = 0;

int fn(vector<vector<int>> &v, int r, int c)
{
    call++;
    cout << "r and c = " << r << " " << c << endl;
    int R = v.size();
    // deb(R);
    int C = v[0].size();
    // deb(C);
    if (r >= R or c >= C)
        return 1000000000; // means infinity..
    if (r == R - 1 and c == C - 1)
        return 0;
    int a = fn(v, r + 1, c);
    int b = fn(v, r, c + 1);

    // int sum = v[r][c] + min(fn(v, r + 1, c), fn(v, r, c + 1));
    int sum = v[r][c] + min(a, b);
    // deb(r);
    // deb(c);
    cout << "v[" << r << "][" << c << "] = " << sum << endl;
    return sum;
}
int main()
{
    file();
    vector<vector<int>> v = {{2, 4, 5, 10, 9}, {3, 8, 1, 2, 3}, {0, 6, 11, 8, 1}, {10, 1, 3, 5, 6}};
    for (auto x : v)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << fn(v, 0, 0) << endl;
    deb(call);

    return 0;
}