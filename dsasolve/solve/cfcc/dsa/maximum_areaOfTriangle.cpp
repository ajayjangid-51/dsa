#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
void solve()
{
    vector<string> v2 = {"rrrrrg", "grgbbb", "brbggr", "rgbrrr", "gbrbbb"};
    // vector<string> v2 = {"rrrrr", "rrrrr", "rrrrr", "rrrrr"};
    // vector<string> v2 = {"rrrrr", "rrrrg", "rrrrr", "bbbbb"};
    // vector<string> v2 = {"bbrbbb", "brgrbb", "rbbggb", "rggggr", "rrggrb", "grrbrg", "gbbrrg", "grgrbb", "bbbrgr", "bbrrgg", "rggrbg", "rrgggg", "ggbbgb", "grggbb", "rrrbrr", "rrrbrb", "bbbbbb", "rbbbrg", "ggbbbg", "ggbggr", "bggrgb", "bbrrrb", "rbrrbb", "brbgrg", "rbrrrg", "bbrrgg", "rbgrgg"};

    // vector<string> v2 = {"000001", "101222", "202110", "012000", "120222"};

    int N = v2.size();
    int M = v2[0].length();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (v2[i][j] == 'r')
                v2[i][j] = '0';
            if (v2[i][j] == 'g')
                v2[i][j] = '1';
            if (v2[i][j] == 'b')
                v2[i][j] = '2';
        }
    }
    deb(N);
    deb(M);
    // trav(v2) print(x), nline;
    // pair<int[3], int[3]> arr[M];
    int ans = 0;
    for (int i = 0; i < M; i++)
    {
        int first[3] = {0, 0, 0};
        int last[3] = {0, 0, 0};
        for (int j = 0; j < N; j++)
        {
            int index = v2[j][i] - 48;
            deb(index);
            if (first[index] == 0)
                first[index] = j + 1;
        }
        for (int j = N - 1; j >= 0; j--)
        {
            int index = v2[j][i] - 48;
            debline(index);
            if (last[index] == 0)
                last[index] = j + 1;
        }
        print(first[0]);
        print(first[1]);
        print(first[2]);
        nline;
        print(last[0]);
        print(last[1]);
        print(last[2]);
        int maxi[3] = {0, 0, 0};
        for (int j = i + 1; j < M; j++)
        {
            for (int k = 0; k < N; k++)
            {
                int index = v2[k][j] - 48;
                maxi[index] = max(maxi[index], ((j - i) + 1));
            }
        }
        for (int j = i - 1; j >= 0; j--)
        {
            for (int k = 0; k < N; k++)
            {
                int index = v2[k][j] - 48;
                maxi[index] = max(maxi[index], ((i - j) + 1));
            }
        }
        nline;
        print(maxi[0]);
        print(maxi[1]);
        print(maxi[2]);
        linebreak;

        int brr[6] = {2, 1, 2, 0, 1, 0};
        int bi = 0;

        // currently we are on ith-column.
        int left[3] = {0, 0, 0};
        int right[3] = {0, 0, 0};
        for (int j = i - 1; j >= 0; j--)
        {
            for (int k = 0; k < N; k++)
            {
                int index = v2[k][j] - 48;
                left[index] = max(left[index], (abs(i - j) + 1));
            }
        }
        for (int j = i + 1; j < M; j++)
        {
            for (int k = 0; k < N; k++)
            {
                int index = v2[k][j] - 48;
                right[index] = max(right[index], (abs(i - j) + 1));
            }
        }

        linebreak;
        print("left and rights are:-");
        nline;
        print(left[0]);
        print(left[1]);
        print(left[2]);
        nline;
        print(right[0]);
        print(right[1]);
        print(right[2]);
        linebreak;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (j != k)
                {

                    int x = abs(last[k] - first[i]) + 1;
                    int y = x;
                    x *= left[brr[bi]];
                    x /= 2;
                    x = ceil(x);

                    y *= right[brr[bi]];
                    y /= 2;
                    y = ceil(y);

                    ans = max(ans, max(x, y));

                    bi++;
                }
            }
        }
    }
    debline(ans);
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