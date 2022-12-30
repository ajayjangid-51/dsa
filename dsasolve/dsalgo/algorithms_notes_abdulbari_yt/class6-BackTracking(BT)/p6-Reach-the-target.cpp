#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)
#define range(arr) arr.begin(), arr.end()
typedef vector<int> vi;

vector<vi> res;
vi vr;
// bool isSafe(int D, int rs, int B, int C, int optionvalue)
// {
//     int xm = 2;
//     if (rs != 0)
//     {

//         xm = (((D - rs) * B) + optionvalue) <= C;
//     }
//     if (xm)
//     {
//         deb(xm);
//         return true;
//     }
//     return false;
// }

bool Util(int a, int b, int c, int d, int rs)
{
    deb(rs);
    deb(d);
    if (rs == d + 1)
    {
        if (a == c)
        {

            res.push_back(vr);
            trav(vr)
            {
                cout << x << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }
    deb(rs);

    // if (isSafe(d, rs, b, c, a - b))
    // {
    //     vr.push_back(a - b);
    //     return Util(a - b, b, c, d, rs + 1);
    // }
    // if (isSafe(d, rs, b, c, a + b))
    // {
    //     vr.push_back(a + b);
    //     return Util(a + b, b, c, d, rs + 1);
    // }
    if (rs < d)
    {
        return Util(a + b, b, c, d, rs + 1);
    }
    if (rs < d)
    {
        return Util(a - b, b, c, d, rs + 1);
    }
    return false;
    // deb("bye bye ji");
    // return false;
}
bool Reach(int a, int b, int c, int d)
{
    if (Util(a, b, c, d, 0))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        Reach(a, b, c, d);
        trav(res)
        {
            trav(x)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}