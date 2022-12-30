//🔥💲🍕 As NOW YAHA pe apn 3-cheeze dekhenge:
// 1.inserting-the-element in sorted array at its correct-sorted-position
// 2.Checking the array that it is sorted or not
// 3.placing all -negatives-elements on the left-side and and all the positive-elements on the right-side 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

//💲🍕 1.Inserting-the element in sorted array at its correct-sorted-position:- 🍕💲
// thus toh now ess kaam ko krne ki esseh simply approach toh hai ki phle apn simply element ki correct-sorted-position find krlenge and then uss position pe element ko insert krdenge, and baki uske aage wale elements ko aage by one right-shift krdenge..
// but programmtacilly apn esseh nhi krenge.. mtlb apn simply array-list k pichse elements ko shift-krna chalu krenge on the condition ki inserting-element array-element se chota hai.

// okay.. toh now aab apn ess approach ko implement krenge...
// as yeh kaam apn static-array pe nhi kr sktehh. mtlb q ki static-array ki toh size static(mtlb "fixed") hoti hai, and apnko toh ek-more element insert krna hai. thus toh eske liyeh phir apn esseh kr sktehh hai ki apn ek new-array return kr sktehh hai.
// As agr apnko "dynamic-array" meh yeh operation krna ho toh voh toh kr skteh hai.
// thus toh apn dono condition k liyeh code-likhenge..

// 1st-condition: if static-array is given:-
int *InsertAtSortPosition(int arr[], int size, int element)
{
    int *rtn = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        rtn[i] = arr[i];
    }
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     if (rtn[i] > element)
    //     {

    //         rtn[i + 1] = rtn[i];
    //     }
    //     else
    //     {
    //         rtn[i + 1] = element;
    //         break;
    //     }
    // }
    // or as like this:-
    int i = size - 1;
    while (i >= 0 && rtn[i] > element)
    {
        rtn[i + 1] = rtn[i];
        i--;
    }
    rtn[i + 1] = element;
    return rtn;
}

// 2nd-condition:- is dynamic-array (means vector is given and in vector we want to insert the element):-
void M2InsertAtSortPosition(vector<int> &arr, int element)
{
    arr.push_back(0);
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] > element)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = element;
            break;
        }
    }
}

//💲🍕 2.Checking that given-array ki sorted or not:- 🍕💲
// as ess kaam ko krne ki apni approach yeh rhegi ki:-
bool CheckForSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {

        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

// 🌷 as yeh wala ooperation tab use kr sktehh hai jab apnko sorting krne ko bola ho, but apn esko apply krke yeh confirm kr sktehh hai ki kahi "list" already sorted toh nhi hai na. as agr already sorted hai toh mtlb apn "Sort-operation" ko run hi nhi krenge.. and as directly given array hi as it is return krdenge..

void Swap(int &a, int &b);

//💲🍕 3.placing the all -ive-elements on the left-side of the all +ive-elements of the array in the array. 🍕💲
// as ess kaam ko krne ki apni approach yeh rhegi ki:-
void Arrange(int arr[], int size)
{
    int i = 0, j = size - 1;
    // while (arr[i] > 0 && arr[j] < 0)
    // {
    //     if (arr[i] > 0)
    //     {
    //         if (arr[j] < 0)
    //         {

    //             Swap(arr[i], arr[j]);
    //             j--;
    //             i++;
    //         }
    //         else
    //         {
    //             j--;
    //         }
    //     }
    // } // ❌ this is wrong , so do in this way...
    while (i < j)
    {

        while (arr[i] < 0)
            i++;
        while (arr[j] >= 0)
            j--; // as eske khatam hone se mtlb apnne -ive number find krliya hai.
        if (i < j)
            Swap(arr[i], arr[j]);
    }
}
// cross-check this ..also with actual defualt-implementation...
void PrintArr(int arr[], int size);
void PrintVec(vector<int> vec);

int main()
{
    int arr[6] = {3, 5, 32, 8, 21, 43};
    PrintArr(arr, 6);

    //💲🍕 1.Inserting the element in Sorted-array at it sorted-position: 🍕💲
    // 🔥Condition1:- if static-array is given:-
    // int *rtn = InsertAtSortPosition(arr, 6, 12);  //✔️
    // PrintArr(rtn, 7);

    // 🔥Condition2:- if dynamic-array(vector) is given:-
    // vector<int> varr = {3, 5, 7, 8, 21, 43};
    // PrintVec(varr);
    // M2InsertAtSortPosition(varr, 12);  // ✔️
    // PrintVec(varr);

    //💲🍕 2.Checking the array whether it is sorted or not.... 🍕💲
    // cout << CheckForSort(arr, 6) << endl;  // ✔️

    //💲🍕 3.Placing all -ive-elements on the left-side of all +ive-elements:- 🍕💲
    int arrr[6] = {3, 5, -7, 8, -21, 43};
    PrintArr(arrr, 6);
    Arrange(arrr, 6);
    PrintArr(arrr, 6);

    return 0;
}

void PrintArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void PrintVec(vector<int> vec)
{
    // for (auto it = vec.begin(); it != vec.end(); ++it)
    // {
    //     cout << *it << " ";
    // }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}