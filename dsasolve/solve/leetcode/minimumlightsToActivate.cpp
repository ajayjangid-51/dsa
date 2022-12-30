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
int solve(vector<int> &A, int B)
{
    deb(A.size());
    int unitdistance = ((2 * B) - 2);
    if (unitdistance < 1)
        return -1;
    int minimumbulbs;
    if (unitdistance <= A.size())
        minimumbulbs = ceil(float(A.size()) / (unitdistance));
    else
        minimumbulbs = 1;
    deb(minimumbulbs);
    int oneinarray = count(A.begin(), A.end(), 1);
    if (oneinarray < minimumbulbs)
        return -1;
    vector<pair<int, int>> minimumbulbsrange;

    deb(oneinarray);
    int left = (B + 1), right = (B - 1);
    // deb(left + right);
    // int dist = B + 1 +
    int lf = 0;
    for (int i = 0; i < minimumbulbs; i++)
    {
        minimumbulbsrange.push_back(make_pair(lf, left + right));
        lf = left + right;
    }
    cout << "hello " << endl;
    for (auto x : minimumbulbsrange)
    {
        int ans = 1;
        for (int i = x.first; i < x.second and i < A.size(); i++)
        {
            if (A[i] == 1)
                ans = 1;
        }
        if (!ans)
            return -1;
    }
    deb(minimumbulbs);
    return minimumbulbs;
}

int main()
{
    file();
    // vector<int> a = {0, 0, 1, 1, 1, 0, 0, 1};
    // // vector<int> a = {1, 1, 0, 0, 1, 1};
    vector<int> a = {0, 0, 1, 1};
    // vector<int> a = {0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0};
    for (auto x : a)
        cout << x << " ";
    cout << endl;
    cout << solve(a, 2);
    return 0;
}