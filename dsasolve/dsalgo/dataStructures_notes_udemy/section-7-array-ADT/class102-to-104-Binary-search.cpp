//🔥💲 As NOW aab apn "Binary-Searching" k bareh meh dekhenge (mtlb sab kuch dekhenge...) 💲🔥
// as for "Binary-Searching" k liyeh apni list already "Sorted" honi chahiyehh bcoz apn only "sorted-list" pe hi Binary-Search kr sktehh hai.

//💲🍕 Binary-Search:- 🍕💲
// and as Binary-Searching meh apn phle kya krteh hai ki mtlb apn phle array ko sort kr leteh hai in ascending and then phir middle-point mtlb middle-element find krtehh hai. and phir inputed-value-for-search ko uss middle-element se check(mtlb compare) krvateh hai ki inputed-value ess midlle-value k "equal" hai ya "badi" hai ya "choti" hai. and agr voh equal hoti toh mtlb ki searched-element vohi hai and toh apn simply voh m-index return kr detehh hai with the message ki "haan element is present". and agr voh inputed-key middle-element se choti hoti hai toh apn left-part meh shift ho jateh hai and right-part ko chod deteh hai, as q ki vaha after checking apnko conformation ho jati hai ki haan inputed-value ess left-part meh hi hai, thus toh simply boleh toh apne half-part skip kr diya for searching mtlb apna half-time bach gaya. and same as like this apn phir yahi kaam uss new-half-sub-list k liyeh krenge mtlb uss sub-list meh bhi apn phir l,h and m ki value find-out krenge mtlb l,h and m ki value update kr denge for next-loop-cycle.
// Thus toh "Binary-seaching" as compare to Linear-Searching kafi less-costly hai mtlb kafi less-time-consuming hai. as aage apn ess approach , ess tarike ki time-complexity bhi nikalenge... then tab vaha apnko actual and exact difference pata chal jayega..

// AS toh Now aab apn "Binary-Search" ko implement krenge...
#include <iostream>
using namespace std;

struct array
{
    int p[10];
    int length;
    int size;
};

int IterativeBinarySearch(array arr, int key)
{
    //👿📔imp-Note-point:-Algorithm likh lena chahiyehh ya phir samaj lena chahiyeh.. mtlb samajteh samajteh accordingly likh lena chahiyeh...

    // As assuming that ki provided-array sort kr diya hai ya already sorted hai:-
    // thus:-
    // for binary search just apnko simply 3-cheez chahiyeh: l , m , h , where m = (l+h/2)-floorvalue
    // if key is greater then means it is on right-side mtlb then l = mid+1 and h will remain same
    // and then if key is lower then mtlb it is on left-side as toh h = mid-1 and l will remain same.
    // and apn ess kaam ko tab tk repeat krenge jab tk "l" is less than or equal to "h" hai. as mtlb q ki "l" "h " se greater ho gaya toh mtlb paka voh element present hai hi nhi.
    // and when l>h , then it means search is unsuccessful..
    int l = 0, h = (arr.length - 1), m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (arr.p[m] == key)
        {
            return m;
        }
        else if (arr.p[m] < key)
        {
            h = h;
            l = m + 1;
        }
        else
        {
            l = l;
            h = m - 1;
        }
    }
    return -1;
}

//💲🍕 Recursive-version of Binary-Search: 🍕💲
// AS mtlb now apn Binary-Search ko Recursively krna dekhenge...
int RecursiveBinarySearch(int arr[], int l, int h, int key)
{
    // work-to-done-in ascending-stage-of-recursion:- (or main-kaam)
    // base-condition:-
    // if (l <= h)
    // {
    //     // recursive-call // as apn recursive-call apn esliy krtehh hai takki apn function meh jo kaam ho raha hai usko vapis se krvane k liyeh krtehh hai. thus toh recursive-approach meh apnko only and mainly jo main kaam hai voh simply likh lena hota hai and phir according uss kaam ko jitne baar krna hai uske according apn function ko recursively call krlenge...
    // }

    // work-to-be-done- in decending-stage-of-recursion:-
    if (l <= h)
    {
        int m = (l + h) / 2;
        if (key == arr[m])
            return m;
        else if (key > arr[m])
        {
            return RecursiveBinarySearch(arr, m + 1, h, key); // as toh apnne return meh recursive-call kr diya toh mtlb apni function-call simpy ess recursive-call se simpy replace ho jayegi. toh apne array update huaa hai. voh toh ek dam acchi baat hai and apnko actual hi esseh hi chahiyehh. and apn esseh return-value meh recucsive-call krtehh hai then voh same deto as it is loop hi hai. and esseh return-value meh recursive-call krne se apne stack-k-upar stack bhi nhi banenge mtlb ek stack banega and phir uss stack ki jagah dusra stack banjayega. toh mtlb esmeh descending-stage wali koi baat nhi hai.
        }
        else
        {
            return RecursiveBinarySearch(arr, l, m - 1, key);
        }
    }

    return -1;

    //👿📔imp-Note-point:-as yeh Recursion tail-recursion hai, toh mtlb apnko pata hai ki apn tail-recursion ki jagah simply for-loop or while-loop use kr sktehh hai, and for-loop or while-loop and tail-recursion meh toh for-loop hi sahi and easy hota hai, thus toh apnko hamesa tail-recursion ki jagah for-loop hi use krna chahiyeh..
    // and apn ek baat or note-krenge ki apn koi kaam for-loop se kr rahe hai , and apnko bola jayeh ki we hava to do this work by recursion , then apnko phir pata hai ki apn yeh kaam recursion meh tail-recursion se kr sktehh hai.

    //👿📔imp-Note-point:-As Recursions toh vaha mostly-important hai jaha apnko ascending-stage and decending-stage mtlb dono stages meh kaam krvana ho, then tab vaha Recursions most important hotehh hai , q ki voh kaam apn loop se nhi kr sktehh hai, mtlb apn descending-stage wala kaam loop se nhi kr sktehh hai.
}

int main()
{
    struct array arr1;
    // BinarySearch();

    array arr = {{10, 20, 30, 40, 50, 60, 70}, 7, 10};
    // cout << "hello ji" << endl;
    int x;
    cout << "enter the key want to search" << endl;
    cin >> x;
    cout << IterativeBinarySearch(arr, x) << endl;
    // cout << "bye bye ji"  << endl;

    cout << RecursiveBinarySearch(arr.p, 0, arr.length - 1, x);

    return 0;
}
