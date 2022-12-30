// 📦📦 Problem-link:-  📦📦
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define umap unordered_map
#define ps(x) printf("\n%s", x)
#define pi(x) printf("\n%d", x)
#define si(x) scanf("%d", &x)
#define ss(x) scanf("%s", &x)
#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)
#define range(arr) arr.begin(), arr.end()
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vi2d;
typedef set<int> si;
typedef unordered_map<int, int> umapii;
typedef unordered_map<char, int> umapci;
typedef unordered_map<ll, ll> umapll;
typedef unordered_map<string, int> umapsi;
typedef map<int, int> mpii;

int lcs(int x, int y, string s1, string s2)
{

    // your code here
    string big, small;
    if (x != y)
    {
        if (x > y)
        {
            big = s1;
            small = s2;
        }
        else
        {
            big = s2;
            small = s1;
        }
    }
    else
    {
        big = s2;
        small = s1;
    }

    int max = 0;
    int len = 0, j = -1, lastj = -1;
    for (int m = 0; m < small.length(); m++)
    {

        for (int i = m; i < small.length(); i++)
        //  for (int i = 0; i < s2.length(); i++)
        {
            deb(small[i]);
            j = lastj + 1;
            // while (big[j] != '\0')
            while (j < big.length())
            {
                deb(big[j]);
                if (small[i] == big[j])
                {
                    len++;
                    lastj = j;
                    break;
                }
                j++;
            }
            // deb(len);
        }
        // deb(max);
        // deb(len);
        if (max < len)
        {
            max = len;
        }
        len = 0, j = -1, lastj = -1;
    }
    len = 0, j = -1, lastj = -1;
    for (int m = 0; m < big.length(); m++)
    {

        for (int i = m; i < big.length(); i++)
        //  for (int i = 0; i < s2.length(); i++)
        {
            deb(big[i]);
            j = lastj + 1;
            // while (big[j] != '\0')
            while (j < small.length())
            {
                deb(small[j]);
                if (big[i] == small[j])
                {
                    len++;
                    lastj = j;
                    break;
                }
                j++;
            }
            // deb(len);
        }
        // deb(max);
        // deb(len);
        if (max < len)
        {
            max = len;
        }
        len = 0, j = -1, lastj = -1;
    }
    return max;
}
int main()
{

    // cout << lcs(20, 21, "LSDBOFDMXJJYYFKROILT", "UIEVCFFIGZRTRVUHCAUCL") << endl;
    // cout << lcs(15, 25, "SFABIGFGMXBGRYQ", "USUZIEFOJIBCNPVJHCJKLPSTC") << endl;
    cout << lcs(16, 33, "ILQEELSSTFMKDTAT", "KAOBFORCTUQBJYKTMAYQNQKHXYTARWVDY") << endl;

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨
//🌟🌟🌟  as toh overall importanly apn yeh conclude krenge ki "LCS" fundamental-problem hai, and apnko eske liyeh jo predefined tarika hai usseh hi krna hai... :- 🌟🌟🌟
// ✳️✳️✳️✳️✳️✳️

int lcs(int x, int y, string s1, string s2)
{

    // your code here
    string big, small;
    if (x != y)
    {
        if (x > y)
        {
            big = s1;
            small = s2;
        }
        else
        {
            big = s2;
            small = s1;
        }
    }
    else
    {
        big = s2;
        small = s1;
    }

    int max = 0;
    int len = 0, j = -1, lastj = -1;
    for (int m = 0; m < small.length(); m++)
    {

        for (int i = m; i < small.length(); i++)
        //  for (int i = 0; i < s2.length(); i++)
        {
            // deb(small[i]);
            j = lastj + 1;
            // while (big[j] != '\0')
            while (j < big.length())
            {
                // deb(big[j]);
                if (small[i] == big[j])
                {
                    len++;
                    lastj = j;
                    break;
                }
                j++;
            }
            // deb(len);
        }
        // deb(max);
        // deb(len);
        if (max < len)
        {
            max = len;
        }
        len = 0, j = -1, lastj = -1;
    }
    len = 0, j = -1, lastj = -1;
    for (int m = 0; m < big.length(); m++)
    {

        for (int i = m; i < big.length(); i++)
        //  for (int i = 0; i < s2.length(); i++)
        {
            // deb(big[i]);
            j = lastj + 1;
            // while (big[j] != '\0')
            while (j < small.length())
            {
                // deb(small[j]);
                if (big[i] == small[j])
                {
                    len++;
                    lastj = j;
                    break;
                }
                j++;
            }
            // deb(len);
        }
        // deb(max);
        // deb(len);
        if (max < len)
        {
            max = len;
        }
        len = 0, j = -1, lastj = -1;
    }
    return max;
}