#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

int main()
{
    auto start = high_resolution_clock::now();
    int z;
    cin >> z;
    int arr[z];
    for (int i = 0; i < z; i++)
    {
        cin >> arr[i];
    }

    // = {1, 2, 3, 4, 5, 6, 7};
    int n = z;
    int d;
    cin >> d;
    // n->0, n - 1->1,
    int A[d];
    for (int i = 0; i < d; i++)
    {
        A[i] = arr[i];
    }
    int B[n - d];
    for (int i = 0; i < (n - d); i++)
    {
        B[i] = arr[i + d];
    }
    int Ar[d];
    for (int i = 0; i < d; i++)
    {
        // Ar[i] = arr[d - (1 + i)];
        Ar[i] = A[d - (i + 1)];
    }
    int Br[n - d];
    for (int i = 0; i < n - d; i++)
    {
        // Ar[3 + i] = arr[n - (1 + i)];
        Br[i] = B[(n - d) - (1 + i)];
    }
    int ArBr[n];
    for (int i = 0; i < n; i++)
    {
        if (i < d)
        {
            ArBr[i] = Ar[i];
        }
        else
        {
            ArBr[i] = Br[i - d];
        }
    }
    int BA[n];
    for (int i = 0; i < n; i++)
    {
        BA[i] = ArBr[n - (i + 1)];
    }
    cout << "the roated-array is this ";
    for (int i = 0; i < n; i++)
    // for (int i = 0; i < n - d; i++)
    {
        cout << BA[i] << " "; //  ✔️
        // cout << ArBr[i] << " "; // ✔️
        // cout << Br[i] << " "; // ✔️
        // cout << Ar[i] << " "; // ✔️
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << endl
         << duration.count() << "microseconds" << endl;
    //  13271490 mircoseconds.
    return 0;
}
