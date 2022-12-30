// M2:reversal-algorithm:
// as ess algorithm ka yeh idea yeh hai ki apn phle given-array k 2-parts kr leteh hai of the indexes: (0 to (d-1)) and (d to (n-1)) , and then phir uss phle part-1 ko reverse kr dene ka and then part-2 ko reverse kr dena and atlast uss pure-array ko hi reverse- kr dene ka. (note-point: rotate krna and reverse krna dono alag hai.)
// for-eg: jaise:
/*
arr = {1,2 ,3 ,4  ,5 ,6 , 7 }   // d = 3 and n=7
part-A = {1 ,2 , 3}
part-B = {4 , 5,6 , 7}
ArB = {3,2,1 , 4 , 5, , 6, 7}
ArBr = {3,2, 1, 7, 6 ,5, 4}
(ArBr)r = {4 , 5 ,6 , 7 , 1 , 2, 3}  // as yahi apna roatated-array hai.
*/

// Time-Complexity of this algorithm is ==> O(n)
// Now-implementing this idea: (mtlb making code of it)
#include <iostream>
using namespace std;

int main()
{
    /* M1-for doing reversal-approach.
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
*/
    // M2-for reversal-algorithm..

    return 0;
}
// Understanding the concept of time-complexity , space-complexity , best-case , average-case and worst-case.
