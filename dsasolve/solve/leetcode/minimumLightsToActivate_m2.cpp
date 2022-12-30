int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int cnt = 0;
    int i = 0;
    int lastbulb = i;
    // while(1){
    // if(i>n-1) break;
    bool flag = 0;
    while (i < n)
    {
        int j = i + (B - 1);
        // if(j>n-1){
        //     while(j!=n-1){
        //         j--;
        //     }
        // }
        while (((j >= (i - (B - 1))) and (j >= 0 and j <= n)))
        {
            if (A[j] == 1)
            {
                cnt++;
                flag = 1;
                i = j + B;
                break;
            }
            j--;
        }
        if (!flag)
            return -1;

        // while(A[j]!=1 and j>=0){
        //     j--;
        // }
        // if(A[j] == 1){
        //     cnt++;
        //     lastbulb = j;
        //     i = j+B;

        // }
        // else{
        //     return -1;
        // }
    }
    return cnt;
}

//
int i = 0, n = arr.size(), count = 0;
bool bulbFound = false;
while (i < n)
{
    int j = min(n - 1, i + a - 1);
    bulbFound = false;
    while (j >= i - a + 1 && j >= 0 && j < n)
    {
        if (arr[j] == 1)
        {
            bulbFound = true;
            count++;
            i = j + a;
            break;
        }
        j--;
    }
    if (!bulbFound)
        return -1;
}
return count;

int n = A.size();
int cnt = 0;
int i = 0;
bool flag = 0;
while (i < n)
{
    int j = min(i + B - 1, n - 1);
    while (((j >= (i - (B - 1))) and (j >= 0 and j <= n)))
    {
        if (A[j] == 1)
        {
            cnt++;
            flag = 1;
            i = j + B;
            break;
        }
        j--;
    }
    if (!flag)
        return -1;
}
return cnt;
