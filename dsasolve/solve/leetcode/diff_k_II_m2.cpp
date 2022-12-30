// "unordered_map" and "unordered_set" dono hi hashing hi hai.
int diffPossible(const vector<int> &A, int B)
{
    unordered_set<int> st;
    for (int i = 0; i < A.size(); i++)
    {
        int t1 = A[i] + B;
        int t2 = A[i] - B;
        if (st.find(t1) != st.end() or st.find(t2) != st.end())
            return 1;
        st.insert(A[i]);
    }
    return 0;
}
