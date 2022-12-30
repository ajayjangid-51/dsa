// As YAHA pe apn Array-Rotations k bareh meh dekkhenge:
// 🌟 Array-Rotation mtlb Array mtlb array-memory-structure ko rotate krna, where rotate in-the-sense ki array-memory-structure k memory-parts ko anti-clockwise ghumke reset krna array-memory-structure meh hi, as thus esseh array-memory-parts ki indexing different hojayegi. mtlb jaise agr kisi 4-sized-array meh index-3 thi toh array-rotation-by-2 krne se uski index-1 hojayegi. thus toh yeh array-roatations krna hota hai, now aab apn actual meh Array-rotations krenge by doing some questions mtlb problems:

// { 🔗 Link: https://www.geeksforgeeks.org/array-rotation/ }
// p1: Write a function arrotate(ar[], d, n) that rotates "ar"-named-array of size 7 by 2 elements.
// given: ar[7] = {1 , 2, 3, 4, 5, 6 , 7};
// thus toh agr apn ess array ko by 2-elements se rotate krenge then apna array esa hojayega , mtlb apna array aseh dikhega.
// output-array = {3, 4, 5 , 6, 7, 1 , 2}
// 📓:-Note-point: Array-rotation meh apn Array-memory-structure k nodes(mtlb memory-parts) ko rotate nhi krteh hai , as apn toh simply nodes meh filled-values ko rotate krteh hai , and esseh hi krna hota hai. q ki allocated-nodes toh fixed hoteh hai thus unko rotate ya hila bhi nhi skteh.

/*
As now Yaha pe apn array-rotation k diff-diff Algorithms(mtlb tarika, ideas-ess task ko krne k ,ya mtlb approachs) dekhenge:
1.using-temp array
2.rotating one-by-one
3.juggling-algorithm
4-reversal-algorithm (as yeh array-ko-rotate krne wale 
Algorithms k naam hai )
5. Block-swap algorithm

Note-point: as enn sab algorithms ki time- complexity , space-complexity diff-diff hogi. Thus toh apnko situation k according, input-size k according appropriate Algorithm use and apply krna..hai..
Thus toh isiliy apnko Algorithms ki time-complexity and space-complexity , best-case, worst-case , average-case ki samaj honi chahiyeh. Tabhi apn ek accha Algorithm bana payenge or ek accha situation according ek appropriate Algorithm choose, select kr payenge..*/
//
#include <iostream>
using namespace std;
void traversearr(int p1[7])
{
    // for (int i = 0; i < (sizeof(p1) / sizeof(int)); i++)
    for (int i = 0; i < 7; i++)
    {
        cout << p1[i] << " ";
    }
}
void arrotate(int p1[], int n)
{
    // cout << p1[5];
    // p1[5] = 21;
    // int temp = p1[0];
    // p1[6] = temp;
    // p1[5] = p1[6];
    for (int j = 0; j < n; j++)
    {
        int temp = p1[0];

        for (int i = 0; i < 6; i++)
        {

            p1[i] = p1[i + 1];
        }
        p1[6] = temp;
    }
}
int main()
{
    int ar[7] = {1, 2, 3, 4, 5, 6, 7};
    // int n = 2;
    cout << "before rotations" << endl;
    traversearr(ar);
    arrotate(ar, 2);
    cout << "after rotations" << endl;
    // cout << ar[5];
    traversearr(ar);
    cout << "after rotations by 3" << endl;
    arrotate(ar, 3);
    traversearr(ar);
    cout << "after rotations by 4" << endl;
    arrotate(ar, 4);
    traversearr(ar);

    return 0;
}

// testing::
#include <iostream>
using namespace std;
void arrotate(int p1[], int n)
{
    for (int j = 0; j < n; j++)
    {
        int temp = p1[0];
        int size = (sizeof(p1) / sizeof(int));
        for (int i = 0; i < size; i++)
        {

            p1[i] = p1[i + 1];
        }
        p1[size] = temp;
    }
}
void traversearr(int p1[])
{
    // for (int i = 0; i < (sizeof(p1) / sizeof(int)); i++)
    int size = (sizeof(p1) / sizeof(int));
    for (int i = 0; i < size; i++)
    {
        cout << p1[i] << " ";
    }
}
int main()
{
    int T;
    cin >> T;
    // int arr[T][];
    for (int i = 0; i < T; i++)
    {
        int N, D;
        cin >> N >> D;
        int arr[T][N];
        for (int j = 0; j < N; j++)
        {
            // cin >> arr[i][j];
            cin >> arr[i][j];
        }
        arrotate(arr[i], D);
        traversearr(arr[i]);
        cout << endl;
    }
    // arr

    return 0;
}

// testing-2::  ()
#include <iostream>
using namespace std;
void leftRotate(int arr[], int n, int d)
{
    for (int j = 0; j < d; j++)
    {
        int temp = arr[0];

        for (int i = 0; i < n - 1; i++)
        {

            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
}
int main()
{
    int Arr[] = {1, 2, 3, 4};
    leftRotate(Arr, 4, 1);
    // leftRotate(Arr, 4, 2);

    for (int i = 0; i < 4; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}

// https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1#

// testing3::
#include <iostream>
using namespace std;
void arrotate(int p1[], int n)
{
    for (int j = 0; j < n; j++)
    {
        int temp = p1[2];
        int size = (sizeof(p1) / sizeof(int)) + 1;
        for (int i = 1; i < size; i++)
        {

            p1[i] = p1[i + 1];
        }
        p1[size] = temp;
    }
    cout << "all good";
}
void traversearr(int p1[])
{
    cout << "traverfn" << endl;
    // cout << "the si is " << si << endl;
    int size = (sizeof(p1) / sizeof(int)) + 1;
    for (int i = 1; i < size; i++)
    {
        cout << p1[i] << " ";
    }
}
int main()
{
    int T;
    cin >> T;
    // int N;
    // cin >> N;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        // int *ptr[] = new arr[T][N];
        int arr[T][N];
        for (int j = 0; j < N + 1; j++)
        {
            cin >> arr[i][j];
        }
        arrotate(arr[i], N);
        traversearr(arr[i]);
    }
    // arr

    // int N;
    // int arr[T][N];
    // N --> arr[0]
    // D --> arr[1]
    // cin >> arr[0] >> arr[1];
    // for (int i = 2; i < arr[0] + 2; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "roatating array " << endl;
    // cout << "..." << endl;
    // arrotate(arr[0], arr, arr[1]);
    // cout << "traversing array " << endl;
    // cout << "..." << endl;
    // traversearr(arr[0], arr);

    return 0;
}