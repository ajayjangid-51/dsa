int Solution::candy(vector<int> &A)
{
    int n = A.size();
    vector<int> ans(n, 1);
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i + 1] > A[i] and ans[i + 1] <= ans[i])
        {
            ans[i + 1] = ans[i] + 1;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (A[i - 1] > A[i] and ans[i - 1] <= ans[i])
        {
            ans[i - 1] = ans[i] + 1;
        }
    }
    int res = 0;
    for (auto x : ans)
    {
        res += x;
    }
    return res;
}
