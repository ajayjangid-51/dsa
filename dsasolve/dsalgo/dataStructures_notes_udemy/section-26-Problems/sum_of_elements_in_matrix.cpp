#include <bits/stdc++.h>
#define Fo (i, j, k, in) for (int i = j; i < k; i += in)
using namespace std;

// User function template for C++

class Solution
{
public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid)
    {
        int sum = 0;
        // for(int i = 0;i<N;i++){
        Fo(0, N, 1)
        {
            Fo(0, M, 1)
            {
                sum += Grid[i][j];
            }
        }
        return sum;
    }
};
int main()
{

    return 0;
}