#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)
#define range(arr) arr.begin(), arr.end()
typedef vector<int> vi;

bool isSafe(vector<vector<char>> &board, char c, string wrd)
{
}
bool Util(vector<vector<char>> &board, int i, int j, string word, string &wrd)
{

    for (int i = 0; i < word.size(); i++)
    {
        if (isSafe(board, word[i]))
        {
            board[][] = 0;
        }
    }
}
bool isWordExist(vector<vector<char>> &board, string word)
{
    // Code here
    // char first = word[0];
    string wrd;
    wrd.push_back(word[0]);

    Util(board, i, j, word, wrd);
}

int main()
{

    return 0;
}