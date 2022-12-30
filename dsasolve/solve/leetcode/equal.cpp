vector<int> Solution::equal(vector<int> &A)
{
    vector<int> ans;
    for (int i = 0; i < A.size() - 3; i++)
    {
        for (int j = i + 1; j < A.size() - 2; j++)
        {
            int sum = A[i] + A[j];
            // vector<int> v(A.begin()+j+1,A.end());
            unordered_map<int, int> mp;
            for (int ii = j + 1; ii < A.size() - 1; ii++)
            {
                if (mp.find(sum - A[ii]) != mp.end())
                {
                    ans = {i, j, mp[sum - A[ii]], ii};
                    return ans;
                }
                if (mp.find(A[ii]) == mp.end())
                    mp[A[ii]] = ii;
            }
            // int l = j + 1;
            // int r = A.size()-1;
            // int X = A[i]+A[j];
            // while (l < r)
            // {
            //     if(  A[l] + A[r] == X)
            //     {
            //         vector<int> vv = {i ,j , l ,r};
            //         // ans.insert(vv);
            //         return vv;
            //         // l++; r--;
            //     }
            //     else if ( Asol[l] + A[r] > X)
            //         l++;
            //     else
            //         r--;
            // }
        }
    }
    return ans;
}
