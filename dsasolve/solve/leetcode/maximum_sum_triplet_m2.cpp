int solve(vector<int> &A)
{
    int ans = 0;
    int n = A.size();

    for (int i = 1; i < n - 1; ++i)
    {
        int max1 = 0, max2 = 0;

        // find maximum value(less than A[i])
        // from 0 to i-1
        for (int j = 0; j < i; ++j)
            if (A[j] < A[i])
                max1 = max(max1, A[j]);

        // find maximum value(greater than A[i])
        // from i+1 to n-1
        for (int j = i + 1; j < n; ++j)
            if (A[j] > A[i])
                max2 = max(max2, A[j]);

        // store maximum answer
        if (max1 && max2)
            ans = max(ans, max1 + A[i] + max2);
    }

    return ans;
}
