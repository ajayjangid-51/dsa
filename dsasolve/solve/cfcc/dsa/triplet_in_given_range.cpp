#include <bits/stdc++.h>
using namespace std;

#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()

#define ll long long
#define pint unsigned int
#define pb push_back
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vi>
#define vvb vector<vb>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
#define forn(i, start, n) for (auto i = start; i < n; i++)
#define io_faster                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const int MOD = 1000000007;
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
double min_element(vector<double> A)
{
    double mini = A[0];
    for (auto x : A)
        mini = min(x, mini);
    return mini;
}
void solve()
{

    vector<string> a = {"0.6", "0.7", "0.8", "1.2", "0.4"};
    // our 3 buckets: A , B , C;
    vector<double> A, B, C;

    // just pushing the elements in their respective buckets.
    for (int i = 0; i < a.size(); i++)
    {
        char b[20];
        for (int j = 0; j < a[i].length(); j++)
        {
            b[j] = a[i][j];
        }
        if (0.0 < atof(b) &&
            atof(b) < ((double)2.0 / (double)3.0)) // atof converts string to double
        {
            A.push_back(atof(b));
        }
        else if ((double)2.0 / (double)3.0 <= atof(b) && atof(b) <= 1.0)
        {
            B.push_back(atof(b));
        }
        else if (1.0 < atof(b) && atof(b) < 2.0)
        {
            C.push_back(atof(b));
        }
    }

    // now tackling cases:-

    // case-1 (AAA)
    int res = 0;

    if (A.size() >= 3)
    {
        priority_queue<double> q(
            A.begin(),
            A.end()); // priority queue used to get max 3 elements in O(logn) time
        double m = 0;
        for (int i = 0; i <= 2; i++)
        {
            m += q.top();
            q.pop();
        }

        if (m > 1.0)
        {
            res = 1;
            debline(res);
            return;
        }
    }
    // 2(AAB)
    if (A.size() >= 2 && B.size() >= 1)
    {
        priority_queue<double> q1(
            A.begin(),
            A.end()); // priority queue used to get max 2 elements in O(logn) time

        double m1 = 0;
        for (int i = 0; i <= 1; i++)
        {
            m1 += q1.top();
            q1.pop();
        }

        for (int i = 0; i < B.size(); i++)
        {
            if (1 - m1 < B[i] && B[i] < 2 - m1)
            {
                res = 1;
                debline(res);
                return;
            }
        }
    }

    // 3
    if (A.size() >= 2 && C.size() >= 1)
    {
        priority_queue<double, std::vector<double>, std::greater<double>> q2(
            A.begin(),
            A.end()); // priority queue used to get min 2 elements in O(logn) time
        double m2 = 0;
        for (int i = 0; i <= 1; i++)
        {
            m2 += q2.top();
            q2.pop();
        }

        double min = min_element(C);

        if (m2 + min < 2.0)
        {
            res = 1;
            debline(res);
            return;
        }
    }

    // 4
    if (B.size() >= 2 && A.size() >= 1)
    {
        priority_queue<double, std::vector<double>, std::greater<double>> q3(
            B.begin(),
            B.end()); // priority queue used to get min 2 elements in O(logn) time

        double m3 = 0;
        for (int i = 0; i <= 1; i++)
        {
            m3 += q3.top();
            q3.pop();
        }

        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] < 2 - m3)
            {
                res = 1;
                debline(res);
                return;
            }
        }
    }

    // 5
    if (A.size() >= 1 && B.size() >= 1 && C.size() >= 1)
    {
        int res3 = 0;
        double min1 = min_element(A);
        double min2 = min_element(B);
        double min3 = min_element(C);
        if (min1 + min2 + min3 < 2 && min1 + min2 + min3 > 1)
        {
            res = 1;

            debline(res);
            return;
        }
    }

    // return res;
    debline(res);
    // Time complexity =O(logn)+O(n)
    // hence,Time complexity=O(n)
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}