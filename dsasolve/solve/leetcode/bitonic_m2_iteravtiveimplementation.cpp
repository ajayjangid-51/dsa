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
#define range(arr) arr.begin(), arr.end()
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
vi lis(vi &arr)
{
    int n = arr.size();
    vi lis(n);
    for (int k = 0; k < n; k++)
    {
        lis[k] = 1;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] < arr[k])
            {
                lis[k] = max(lis[k], lis[i] + 1);
            }
        }
    }
    return lis;
}
// vi lds(vi &arr)
// {
//     int n = arr.size();
//     int j = 0;
//     vi lds(n);
//     for (int k = 0; k < n; k++)
//     {
//         lds[k] = 1;
//         for (int i = j; i < k; i++)
//         {
//             if (arr[i] > arr[k])
//             {
//                 lds[k] = max(lds[k], lds[i] + 1);
//             }
//         }
//         j++;
//     }
//     return lds;
// }
vi lds(vi &arr)
{
    int n = arr.size();
    // int j = 0;
    vi lds(n);
    for (int k = n - 1; k >= 0; k--)
    // for (int k = 0; k < n; k++)
    {
        lds[k] = 1;
        for (int i = k + 1; i < n; i++)
        {
            if (arr[i] < arr[k])
            {
                // print("😀");
                // deb(k);
                // deb(i);
                // deb(arr[k]);
                // deb(arr[i]);
                lds[k] = max(lds[k], lds[i] + 1);
            }
        }
        // j++;
    }
    return lds;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        // vi arr = {1, 11, 2, 10, 4, 5, 2, 1};
        // vi arr = {1, 1, 1, 1, 1};
        // vi arr = {1, 1, 2, 1, 1};
        vi arr = {148, 333, 306, 200, 397, 361, 458, 209, 4, 436, 282, 221, 358, 126, 235, 489, 444, 134, 42, 257, 240, 305, 480, 195, 102, 175, 44, 345, 224, 452, 249, 49, 173, 200, 241, 285, 438, -9, 132, 80, 238, 428, 463, 334, 399, 449, 242, 39, 56, 453, 108, 95, 492, 277, 109, 188, 376, 400, 265, 212, 304, 223, 321, 338, 120, 380, 74, 459, 277, 423, 176, 309, 465, 135, 170, 88, 11, 242, 305, 11, 19, 486, -7, 414, 442, 419, 3, 49, 201, 150, 127, 285, -5, 166, 320, 371, 12, 312, 267, 202, 360, 418, 481, 360, 409, 347, 139, 356, 277, 389, 212, 491, 272, 31, 206, 154, 265, 291, 174, 255, 398, 30, 360, 450, 432, 405, 244, 118, 320, 147, 277, 437, 495, 459, 273, 218, 197, 111, 449, 96, 236, 341, 496, 186, 61, 384, 123, 428, 492, 200, 389, 248, 95, 248, 74, 244, 300, 295, 264, 18, 278, 283, 51, 204, 0, 78, 333, 430, 168, 384, 402, 347, 406, 130, 64, 186, 339, 385, 458, 425, 120, 151, 402};
        bool flag = 0;
        // for (int i = 0; i < arr.size() - 1; i++)
        // {
        //     deb(arr[i]);
        //     deb(arr[i + 1]);
        //     if (arr[i] == arr[i + 1])
        //         flag = 1;
        //     else
        //     {

        //         break;
        //     }
        // }
        // deb(flag);
        // if (flag)
        // {
        //     debline("1");
        // }
        // vi arr = {1, 2, 1};
        vi liss, ldss;
        liss = lis(arr);
        ldss = lds(arr);
        trav(liss) print(x);
        linebreak;
        trav(ldss) print(x);
        linebreak;
        int maxi = INT_MIN;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            // deb(liss[i]);
            // deb(ldss[i + 1]);
            maxi = max(maxi, (liss[i] + ldss[i + 1]));
        }
        maxi = max(maxi, liss[arr.size() - 1] + ldss[0]);
        debline(maxi);
    }
    return 0;
}