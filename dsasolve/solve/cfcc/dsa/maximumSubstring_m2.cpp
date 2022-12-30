/* int fn(int i , int j , string A){
    if(j>=A.size()) j= A.size()-1;

int cnt = 0;
    for(int k = i;k<=j;k++){
        if(A[k] == 'a') cnt++;
    }
    return cnt;
}
int Solution::solve(string A, int B) {
    int i= 0 , j = B-1;
int ans = 0;
ans= max(ans , fn(i , j,A));
    // int acnt = 0;
    // for(;i<=j;i++){
    //     if(A[i] == 'a') acnt++;
    // }
    // i = 0;
    // int ans = 0;

    while(j<A.size()){
        i+=B;
        j+=B;
        ans= max(ans , fn(i,j, A));


    }
    // ans = max(ans , fn(i , j , A))
    return ans;
}
 */