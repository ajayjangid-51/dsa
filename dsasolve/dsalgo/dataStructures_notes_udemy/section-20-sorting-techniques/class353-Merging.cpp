//🔥💲 AS NOW YAHA pe apn Merging k bareh meh dekhenge... 💲🔥
// as Merging is same as Combining as but Merging sorted-manner meh hoti hai and isiliy voh only sorted-list pe hi hoti hai.
// as Combining ka mtlb toh apn janteh hi hai ki 2 or more lists ko combine krna mtlb unn sab ki ek-single-list banana.

// As toh merging k liyeh apnko extra-array-of-size-m+n chahiyeh-hi-chahiyeh
//📔📔Note-point:-  Mtlb merging is not "in-place" mtlb it need extra-space, mtlb unhi array-space meh apn merging krke nhi de sktehh..

// n-way-merging mtlb apn n-sorted-lists ko merge kr rahe hai in the way ki apn ek-saat n-elements ko compare kr rhe hai, mtlb apn ek-saat meh hi sabhi lists ko merge krna chahteh hai..
// As orr apn 2-2 lists ko bhi merge kr sktehh hai... Simply Which will be called as 2-way-merging

// Noww aab apn Merge-sort dekhenge, as merge-sort meh 2-way-merging hi use hoti hai..
// As apn merge-sort ko iteratively bhi krenge and recursively bhi krenge....
// As toh mtlb apn yeh dono acche dekhenge se...

#include <iostream>
using namespace std;

int *Merge(int arr[], int brr[], int n, int m)
{
    int *res;
    res = new int[n + m];

    int r = 0, i = 0, j = 0;
    while (i <= n && j <= m)
    {
        if (arr[i] > brr[j])
        {
            res[r] = brr[j];
            j++;
            r++;
        }
        else if (arr[i] < brr[j])
        {
            res[r] = arr[i];
            i++;
            r++;
        }
    }
    return res;
}

void RecursiveMerge(int arr, int brr, int n, m, ) void Printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[5] = {3, 8, 9, 15, 20};
    int B[5] = {2, 5, 7, 17, 25};
    Printarr(A, 5);
    Printarr(B, 5);

    Printarr(Merge(A, B, 5, 5), 10);

    return 0;
}

//📔📔Note-point:- Kabhi bhi time-complexity O(n+m) meh de rkhi ho then it means ki yaha yeh kisi merging-kaam ki time-complexity hai..

// aS yeh thi Iterative-approach:

// as now apn Recursive-approach dekhenge, as kisi kaam ko recursively krne k liyeh apnko bas yeh dhyn rkhna hai ki main-actual-kaam kya ho raha hai, and usi main-actual-kaam ko apnko recursive-fn meh likhna hota hai and phir usi kaam ko vapis se krne k liyeh apnkko uss function ko vapis call kr lena hota hai...
// thus toh now  apn recursive-implementation krenge...