#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)
#define range(arr) arr.begin(), arr.end()
typedef vector<int> vi;
#define N 9
#define UNASSIGNED 0

int board[N][N] = {
    {3, 0, 6, 5, 0, 8, 4, 0, 0},
    {5, 2, 0, 0, 0, 0, 0, 0, 0},
    {0, 8, 7, 0, 0, 0, 0, 3, 1},
    {0, 0, 3, 0, 1, 0, 0, 8, 0},
    {9, 0, 0, 8, 6, 3, 0, 0, 5},
    {0, 5, 0, 0, 9, 0, 6, 0, 0},
    {1, 3, 0, 0, 0, 0, 2, 5, 0},
    {0, 0, 0, 0, 0, 0, 0, 7, 4},
    {0, 0, 5, 2, 0, 6, 3, 0, 0},
};
bool isSafe(int row, int col, int jj)
{
    // checking in that row
    for (int i = 0; i < N; i++)
    {
        if (board[i][col] == jj)
        {
            return false;
        }
    }
    // checking in its column
    for (int j = 0; j < N; j++)
    {
        if (board[row][j] == jj)
        {
            return false;
        }
    }
    // // chekcin in its lower left and lower right diagonal
    // for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    // {
    //     if (board[i][j] == jj)
    //     {
    //         return false;
    //     }
    // }
    // for (int i = row, j = col; i < N && j >= 0; i++, j--)
    // {
    //     if (board[i][j] == jj)
    //     {
    //         return false;
    //     }
    // }
    // for (int i = row, j = col; i < N && j < N; i++, j++)
    // {
    //     if (board[i][j] == jj)
    //     {
    //         return false;
    //     }
    // }
    // for (int i = row, j = col; i >= 0 && j < N; i--, j++)
    // {
    //     if (board[i][j] == jj)
    //     {
    //         return false;
    //     }
    // }
    // // cehcking in its upper left and upeer right diagonal.

    // sorry, we have to check in subgrids(of size 3*3) not diagonal.
    int startRow = row - row % 3,
        startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + startRow][j + startCol] == jj)
                return false;
    return true;
}
bool Util(int row, int col)
{
    if (col == N - 1 && row == N)
    {
        return true;
    }
    if (row == N)
    {
        col++;
        row = 0;
    }

    // if (row == N)
    // {
    // }

    // for (int j = 0; j < N; j++)
    // {
    // deb(row);
    // deb(j);
    // deb(board[row][j]);
    // if (board[row][col] != 0)
    if (board[row][col] > 0)
    {
        return Util(row + 1, col);
    }
    // bool resi = false;
    // for (int jj = 1; jj < N + 1; jj++)
    for (int jj = 1; jj <= 9; jj++)
    {

        // deb(jj);
        if (isSafe(row, col, jj))
        {
            // deb("hello");
            // deb("valid == ");
            // deb(jj);
            board[row][col] = jj;
            // cout << "valid jj == " << jj << " is ";
            // deb(board[row][j]);
            // resi = Util(row + 1) || resi;
            if (Util(row + 1, col))
                return true;
        }
        board[row][col] = 0;
    }
    return false;
    // }
};
// return true;
// // return false;
// }
bool SolveSudoku(int board[N][N])
{
    // Your code here
    if (Util(0, 0) == false)
    {
        return 0;
    }
    return 1;
}

void printGrid()
{
    // Your code here
    fo(i, 0, N)
    {
        fo(j, 0, N)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << SolveSudoku(board) << endl;
    printGrid();

    return 0;
}

//👿📔imp-Note-point:- "backtracking" meh apnko har problem ko line-wise solve krna hota hai, by taking all-possible-option at that place, and agr voh safe hota hai, then go to the next-step and agr kuch thoda safe nhi hota hai, then mark it again "zero". and vaha se apnko vapis piche jake next option try krna hota hai from remaining-options.

// 💡💡Tip-back-tracking meh ek word hai jiske upar apnko hamesa sochna hai and that word is "stand-on-one-thing-and-from-that-thing-see-for-the-possible-options" 💡💡