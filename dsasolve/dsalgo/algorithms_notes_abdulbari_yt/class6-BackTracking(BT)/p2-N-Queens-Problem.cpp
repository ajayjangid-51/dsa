// https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1/?category[]=Backtracking&category[]=Backtracking&page=1&query=category[]Backtrackingpage1category[]Backtracking#
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)
#define range(arr) arr.begin(), arr.end()
typedef vector<int> vi;
#define N 4

int chessboard[N][N] = {};
int result[N] = {0};
vector<vi> res;

bool isSafe(int row, int col)
{
    for (int i = 0; i < N; i++)
    {
        if (chessboard[i][col])
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (chessboard[i][j])
            return false;
    }
    for (int i = row, j = col; i >= 0 && j < N; i--, j++)
        if (chessboard[i][j])
            return false;
    return true;
};
bool Util(int row)
{
    if (row == N)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (chessboard[i][j] == 1)
                {
                    result[j] = i;
                }
            }
        }
        vi vrr;
        trav(result)
        {
            vrr.push_back(x);
        };
        res.push_back(vrr);
        // cout << endl;
        return true;
    }
    else
    {

        for (int j = 0; j < N; j++)
        {
            if (isSafe(row, j) == true)
            {
                chessboard[row][j] = 1;
                Util(row + 1);
                chessboard[row][j] = 0;
            }
        }
        return false;
    }
};

vector<vi> Nqueen(int n = 4)
{
    if (Util(0) == false)
    {
        // cout << "sorry no such arrangement is possible" << endl;
        return {};
    }
    return res;
}

int main()
{
    // int N = 4;
    // cin >> N;
    Nqueen();

    return 0;
}

// aseh directly solution-fn ko dekhna nhi hota hai, mtlb agr dekhe toh bhi koi mtlb nhi hai(haan bas phle 2-3 questions meh dekhna hota hai kaise kya-kya cheeze basically chahiyehh hoti hai for implementing the backtracking-solution.) as toh allover mtlb apna jaise algo hai same usi way meh apnko same usi way meh step-by-step function ko banana hai.