int fn(int i, int s, int arr[], int N, int &tsum)
{
    if (i == N - 1)
    {
        // mini  = min(mini , abs(s -(tsum-s)));
        return abs(s - (tsum - s));
    }
    return min(fn(i + 1, s + arr[i], arr, N, tsum), fn(i + 1, s, arr, N, tsum));
}

int minDifference(int arr[], int n)
{
    int tsum = 0;
    for (int i = 0; i < n; i++)
        tsum += arr[i];
    return fn(0, 0, arr, n, tsum);
    // Your code goes here
}