//🔥💲🍕 YAHA pe apn array-list ko reverse-krna , left-shift right-shift krna and left-rotate right-rotate krna dekhenge.. 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

//💲🍕 1.Reversing the array-list 🍕💲
//as array-Reversing ka mtlb ki array ko Reverse-krna, mtlb as like this:-
// Arr = [2 ,3 ,5 ,6 ,8]
// reverse of Arr = [8 , 6 , 5, 3, 2]

// thus toh okay now apn array-list ko reverse krna dekhenge... mtlb yeh ess kaam ko krne ki approach dekhenge...
// as toh Reversing krne k 2-methods hai:-

// 🔥Method1:- using Auxilary-array..
// as mtlb apn simply ek dusra other array-lelenge of the same-size-of-actual-array and uss auxilary-array meh actual-array k ko assign krenge from the rear-side. and after that all uss auxilary-array ko vapis as it is actual-array meh copy krdenge...

// Implementing-this-approach:-
// void Reverse(int *arr, int size) // as or apn esseh bhi likh stkhehh hai..
void Reverse(int arr[], int size)
{
    int auxi[size];
    for (int i = size - 1, j = 0; i >= 0; i--, j++)
    {
        auxi[j] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = auxi[i];
    }
}

//📔📔Note-point:- as Method1- ki time-complexity hai O(n) and space-complexity is also O(n)

// 🔥Method2:-as ess method meh apn simply first-element and last-element ko swap krenge , then second-element and second-last-element ko swap krdenge.. and soo on.. upto nth-element and nth-last-element swaping tk.
// as or apn simple programing ki bhasa meh boleh toh yeh kaam apn jab i<j  rhega tab tk krenge.......

void M2Reverse(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++, j--;
    }
}

//📔📔Note-point:- as Mehthod-2 ki time-complexity hogi O(n) and space-complexity will be O(1)-mtlb constant, toh mtlb method2- jada sahi hai as compare to metho1.

//💲🍕 2.Left-Shifting or and Right-shitfing: 🍕💲
// as array-Left-Shifting ka mtlb ki array k har elements from the left-most-side se by-one-place left-side meh shift krna and right-shifting ka bhi yehi mtlb hai ki array k har elements from the rightmost-side se by-one-place right-side meh shift krna.
// as yeh left-shifting from the leftmost-side se krni chahiyeh and right-shifting from the rightmost-side se krni chahiyehh. as q ki agr apn enseh oppositely side se krteh hai,,, toh mtlb apni shifting hogi nhi.. isiliy yeh very important precusion hai for the "Shifting":-
// jaise as like this:-
//  Arr = [2 ,3 ,5 ,6 ,8]
// left-shift-of Arr = [3,5,6,8,-]
// right-shift-of Arr = [- ,2 , 3 , 5, 6]

void LeftShift(int arr[], int size)
{
    // this function Left-shift the array-elements:-
    for (int i = 0; i < (size - 1); i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;
}

void RightShift(int arr[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = 0;
}

//🔔🔔 as toh yaha "Shifting" meh apn ek baat notice kr rahe hai ki "shifting" meh array meh ek-element loss ho raha hai and array meh ek-blank space rheri hai. thus toh shifting meh esseh  hi hota hai...  🔔🔔

//💲🍕 3.Left-rotaion or and Right-rotation: 🍕💲
// as rotation same like as shifting ki tarah hi hai , but bas farak itna hai ki rotation meh elements loss nhi hoteh , as voh loss hone wala element uss array meh jo blank-space rheri hai usmeh aa jata hai. as toh as like rotation ki tarah hai , mtlb loss hone wala element rotate hoke last-space meh aajata hai. thus toh mtlb yeh ess cheez ko apn rotation hi boltehh hai as mtlb simply ki array-k-elements rotate ho rhe hai.
// 🔗 see audio1. for more:- 🔗
void LeftRotation(int arr[], int size, int cycle)
{
    while (cycle--)
    {
        int leftmost = arr[0];
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = leftmost;
    }
}

void RightRotation(int arr[], int size, int cycle)
{
    while (cycle--)
    {
        int rightmost = arr[size - 1];
        for (int i = size - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = rightmost;
    }
}
// as left-rotation mtlb anit-clockwise-rotaion and right-rotation mtlb clockwise-rotation:-

void PrintArr(int arr[], int size);

int main()
{
    int arr[6] = {3, 5, 8, 21, 43, 7};
    PrintArr(arr, 6);

    //💲🍕 1.Reversing the array:- 🍕💲
    // 🔥Method1:-
    // Reverse(arr, 6);    // ✔️
    // 🔥Mehthod2:-
    // M2Reverse(arr, 6);  // ✔️

    //💲🍕 2.Shifting of the array:- 🍕💲
    // LeftShift(arr, 6);   // ✔️
    // RightShift(arr, 6);  // ✔️

    //💲🍕 3.Roatation of the array:- 🍕💲
    // LeftRotation(arr, 6, 1);  // leftrotation-by-1 ✔️
    // LeftRotation(arr, 6, 2);  // leftrotation-by-2 ✔️

    // RightRotation(arr, 6, 2);  // rightrotation-by-2 ✔️
    PrintArr(arr, 6);
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

// 🌷 as aab apnko har operational-program essi format meh likhna hai... takki apna programm easy ko understand and easy to operatable ho.🌷