//🔥💲🍕 Okay toh Now aab apn "Heap"-Tree ko starting se Create krenge... as jaise apnne "insertion"-krna toh dekh liya.. toh mtlb apn "insertion-function" se "Heap" ko create kr sktehh hai. 🍕💲🔥
// as toh mtlb apn "heap"-tree create krenge from the given set-of-elements, thus toh mtlb simply "insertion" k basis pe hi yeh enn elements se "Heap"-tree create krenge.. but note krne wali baat yeh hai ki apn yaha given array se "inplacing"-Heap banayenge mtlb koi other extra array use nhi krenge ( toh mtlb this is "inplace"-Creating-of-Heap).

// Okay toh ess kaam ko krne ka idea yeh hai ki apnko jo bhi set-of-elements de rkhe hai unko ek array-meh-store kr lena hai(ya mtlb given array ko hi consider krlena hai as our "heap-array"). and phir apnko uss array ko parts meh dekhna hai  ki one-part as "heap"-tree and other-part is simply a array. and then phir apnko simply
// as intially toh uss "array" meh koi "heap"-array present nhi hoga, but esseh nhi hai, mtlb ki jo first-element hoga voh intially starting meh as a "Heap"-array hi hoga, thus toh mtlb apnko yeh baat dhyn meh rkhni hai and intially staring meh hi apnko "heap"-array ki size as "1" consider krni hai, and then uss right-part-of-array meh se elements ko one-by-one from left-side left-part-of-array mtlb ("heap"-part) meh insertion-operation krna hai simply, and then according phir "heap"-array ki size increase krtehh rheni hai and "right-part-array" ki size decrease krtehh rheni and atlast voh "array" as "heap-array" hi hoga.

//🔔🔔 as toh ess procedure ki acchi and mast baat yeh hai ki apnko koi "extra-Array" nhi chahiyehh hoga for creating a "Heap" for the given "set-of-elements" in form of simple "array". 🔔🔔 and isiliy apn ess Creation-of-Heap ko apn "inplace-heap-Creation" boltehh hai as q ki jis array meh apnko set-of-elements diyeh gayeh hai usi "Array" meh apn yeh kaam kr le rhe hai.

//🖼️🖼️🖼️  see pic-1 :- for "creating-procedure" 🖼️🖼️🖼️

#include <bits/stdc++.h>
using namespace std;

// NOw implementing this idea(algo).
void CreateMaxHeap(int arr[], int size)
{
    for (int j = 2; j < size; j++)
    {
        // /*
        int i = j;
        while (i > 1 && (arr[i] > arr[i / 2]))
        {
            arr[i] = arr[i / 2];
            i = i / 2;
        }
        arr[i] = arr[j];
        // */
        // as or apn eski jagah uss apne "insertinHeap"-fn ko bhi call kr sktehh hai,
        // InsertinHeap(arr, j);
        // but esmeh phir function-call lgti hai, toh mtlb har-baar function-call parameters create honge and then initialize honge etc..etc toh jada sahi hai ki apn simpy procedure yehi likh le.
    }
}

//🔔🔔 Analysis-of this "CreateHeap"-fn , as ess function ki time-complexity is O(nlogn), as q ki esmeh "n"-elements k liyeh n-times "insert"-fn call ho rha hai, and insert-fn takes logn-time, thus toh total net-time is equal to n*logn . 🔔🔔

// Creating MinHeap:-
void CreateMinHeap(int arr[], int size)
{
    for (int j = 2; j < size; j++)
    {
        int i = j;
        while (i > 1 && (arr[i] < arr[i / 2]))
        {
            arr[i] = arr[i / 2];
            i = i / 2;
        }
        arr[i] = arr[j];
    }
}

int main()
{

    return 0;
}