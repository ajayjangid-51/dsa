int setBits(int N)
{
    vector<int> arr;
    for (int i = 0; N > 0; i++)
    {
        arr.push_back(N % 2);
        N = N / 2;
    }
}