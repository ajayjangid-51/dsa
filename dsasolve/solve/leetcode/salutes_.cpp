long countSalutes(string A)
{
    // long cnt = 0;
    // vector<long> v(A.size(),0);
    // for(int i= 0;i<A.size();i++){
    //     if(A[i] == '<'){
    //         cnt++;
    //         v[i] = cnt;
    //     }
    //     else v[i] = cnt;
    // }
    // long ans = 0;
    // int n = A.size();
    // for(int i= 0;i<A.size();i++){
    //     if(A[i]== '>'){
    //         ans+= v[n-1]-v[i];

    //     }

    // }
    // return ans;
    long cnt = 0;
    long sltues = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] == '<')
            cnt++;
        else
            sltues += cnt;
    }

    return sltues;
}
