#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)
#define range(arr) arr.begin(), arr.end()
typedef vector<int> vi;
vector<vi> ans;

vi arr;
void Reach(int a, int b, int c, int d, int left)
{
    if (left == 0)
    {
        if (a == c)
        {
            ans.push_back(arr);
            // copy that array.
            // return;
        }
        return;
    }

    arr.push_back(a - b);
    Reach(a - b, b, c, d, left - 1);
    arr.pop_back();

    arr.push_back(a + b);
    Reach(a + b, b, c, d, left - 1);
    arr.pop_back();
    // return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        Reach(a, b, c, d, d);

        trav(ans)
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