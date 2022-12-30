/* #include <bits/stdc++.h>
using namespace std;
#define deb(c) cout << #c << " = " << c << endl;
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int coverPoints(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    int ans = 0;
    pair<int, int> start(A[0], B[0]);
    for (int i = 1; i < n; i++)
    {
        pair<int, int> end(A[i], B[i]);
        while (start != end)
        {
            int diffa = end.first - start.first, diffb = end.second - start.second;
            deb(diffa);
            deb(diffb);

            if (diffa == diffb)
            {
                int times = diffa;
                if (diffa < 0)
                    times = (-1 * diffa);

                for (int j = 0; j < times; j++)
                {
                    if (diffa < 0)
                    {
                        // cout << " hello " << endl;
                        start.first = start.first - 1;
                    }
                    else
                        start.first = start.first + 1;
                    if (diffb < 0)
                        start.second = start.second - 1;
                    else
                        start.second = start.second - 1;
                    ans++;
                }
                cout << start.first << " " << start.second << endl;
            }
            else
            {
                int smallest = min(diffa, diffb);
                if (smallest < 0)
                    smallest *= -1;
                for (int j = 0; j < smallest; j++)
                {
                    if (diffa < 0)
                        start.first--;
                    else
                        start.first++;
                    if (diffb < 0)
                        start.second--;
                    else
                        start.second++;
                    ans++;
                }
                // continue;
            }
        }
    }
    return ans;
}

int main()
{
    file();
    vector<int> a = {4, 8, -7, -5, -13, 9, -7, 8};
    vector<int> b = {4, -15, -10, -3, -13, 12, 8, -8};
    cout << coverPoints(a, b);
    return 0;
} */

// dont' follow process // think out of logic // or think out of pre-known or pre-existing Algorithm:-
//
#include <bits/stdc++.h>
using namespace std;
#define deb(c) cout << #c << " = " << c << endl;
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int coverPoints(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    int ans = 0;
    pair<int, int> start(A[0], B[0]);
    for (int i = 1; i < n; i++)
    {
        pair<int, int> end(A[i], B[i]);
        int diffa = abs(end.first - start.first), diffb = abs(end.second - start.second);
        // deb(diffa);
        // deb(diffb);
        int maxi = max(diffa, diffb);

        deb(maxi);
        ans += maxi;
        start = end;
    }
    return ans;
}
int coverPointsfastest(vector<int> &A, vector<int> &B)
{
    int n, a, b, distance = 0;
    for (n = 1; n < A.size(); n++)
    {
        a = (A[n] > A[n - 1]) ? A[n] - A[n - 1] : A[n - 1] - A[n];
        b = (B[n] > B[n - 1]) ? B[n] - B[n - 1] : B[n - 1] - B[n];
        if (a > b)
            distance += a;
        else
            distance += b;
    }
    return distance;
}

int main()
{
    file();
    vector<int> a = {-7, -13};
    vector<int> b = {1, -5};
    // vector<int> a = {4, 8, -7, -5, -13, 9, -7, 8};
    // vector<int> b = {4, -15, -10, -3, -13, 12, 8, -8};
    // cout << coverPoints(a, b);
    cout << coverPointsfastest(a, b);

    return 0;
}