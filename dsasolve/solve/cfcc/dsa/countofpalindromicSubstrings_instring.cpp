bool ispalindrom(int i, int j, string &s)
{
    int i1 = i, j1 = j;
    while (i1 < j1)
    {
        if (s[i1++] != s[j1--])
            return 0;
    }
    return 1;
}
int Solution::solve(string A)
{
    int n = A.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int j = 0; j < n; j++)
    {
        dp[j][j] = 1;
        for (int i = j - 1; i >= 0; i--)
        {
            if (ispalindrom(i, j, A))
            {
                dp[i][j] = 1 + (dp[i][j - 1] + dp[i + 1][j]) - dp[i + 1][j - 1];
            }
            else
            {
                dp[i][j] = (dp[i][j - 1] + dp[i + 1][j]) - dp[i + 1][j - 1];
            }
        }
    }
    return dp[0][n - 1];
}

//  by ajayjangid.svnit

/*
yeh  if(i,j) is palindrome then  1+fn(i+1 ,j) +fn(i,j-1)-fn(i+1 , j-1) is ek rule hai aur ya mtlb yeh ek observe ki huyi cheez hai bcoz q ki palindrome hamesa 1st ya last-letter se hi bnta hai, so toh isiliy apn ne (i+1 to j) and (i to j-1) wali strings choose krli...

// and second-approach bhi bohat sahi hai ki ek 2d-dp banalo which denotes ki (i to j) substring palindrome hai k nhi , so toh ess dp-matrix se apnko string ki sari substrings ki bareh meh pta lg jayega, so toh  apn simply dp-matrix jitne boxes ki value one hai voh count krlenge. */

/* *-------------------------------------------------------------------------------* */
// method2:-

int Solution::solve(string A)
{
    int n = A.size();
    vector<vector<bool>> dp(n, vector<bool>(n, 0));
    int ans = 0;
    for (int j = 0; j < n; j++)
    {
        dp[j][j] = 1;
        ans++;
        for (int i = j - 1; i >= 0; i--)
        {
            if (abs(i - j) == 1)
                dp[i][j] = (A[i] == A[j]);
            else
                dp[i][j] = dp[i + 1][j - 1] and (A[i] == A[j]);
            if (dp[i][j])
                ans++;
        }
    }
    return ans;
}

//  by ajayjangid.svnit
