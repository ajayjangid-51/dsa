// AS toh now aab apn array "ADT"-banana chalu krenge..
// thus toh YAHA pe apn intially phle array- implement krenge and array- ki kuch properties define krenge..
// as toh apn memory-structure-implementation and memory-structure-properties ko phle ek strcuture meh code krteh hai, define krteh hai. orr ya apn directly "class" bana rahe hai then tab apn unko privately define kr deteh hai..

#include <iostream>
using namespace std;

// for array "ADT" sbse phle array-implement krenge and array-properties define krenge.. jo ki actual meh operations meh kafi useful hoti hai and hogi.

struct Array
{
    int *p;
    // now properties:-
    int size;
    int length;
};

// 1st:- Display-operation:-
void Display(Array p1)
{
    cout << "the length or the array is " << p1.length << endl;
    for (int i = 0; i < p1.length; i++)
    {
        cout << p1.p[i] << "  ";
    }
}
// 2nd- add or append-Operation:-
void Append(Array *p1, int p2)
{
    if (p1->length < p1->size)
    {

        p1->p[p1->length] = p2;
        p1->length++;
        // or as apn directly esseh bhi kr sktehh hai...
        // p1->p[p1->length++] =p2; // as yaha pe phle assignation and then increment hoga , thus toh mtlb apne dono kaam ess ek-statement se hi hojayenge.. thus toh mtlb post-increment ka actual use yaha esseh es tarah hota hai...
    }
    else
    {
        cout << "sorry the array is full we cannot store more element into it" << endl;
    }
}

int main()
{

    struct Array arr1; // as toh now apnne yeh structure memory-meh allocate kr liya hai.. as yeh abhi tk apna array-memory-structure allocate nhi huaa hai, but as yeh structure bhi kafi important for making Operations on the actual array-memory-structure.

    int n;
    cout << "input the size of array want to be allocate in array" << endl;
    // setting the size of the array:-
    cin >> arr1.size;
    // as aab now apn array-memory-strcuture memory meh allocate krenge( mtlb heap-memory)
    arr1.p = new int[arr1.size];
    arr1.length = 0;

    // now intializing the array: by from the user:-
    cout << "now input the values for storing into array" << endl;
    cout << "press 00 for exit " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != 00)
        {
            // arr1.p[i] = int(x);
            // arr1.p[i] = (int)x;
            arr1.p[i] = x;
        }
        else
        {
            arr1.length = i;
            break;
        }
    }
    // arr1.length = n;

    // now toh apnne memory-structure ko implement kr diya hai , and uski define kr di hai and esko partially intialize bhi kr diya hai by some values.
    // and noww aab apn apne array-memory-strucuture pe Operations krenge mtlb Operation-fns banayenge jo ki Opearation krenge...

    // 1st:- Display-operation:-  ( on the line-no:17 )
    Display(arr1);
    // displaying is a traversing and "traversing" mtlb har element pe one-by-one visit krna.

    // 2nd- add or append-Operation:-
    // as n^0 mtlb 1 hi hota hai, as mtlb orderof(1) mtlb orderof(n^0)
    int m;
    cout << "enter the value to append to array" << endl;
    cin >> m;
    Append(&arr1, m); // as aage baad meh overall apn jab ADT-class define krenge then vaha pe apnko yeh esseh address-of-array or array input krne ki jarurat nhi hogi, mtlb sab simple and east hoga.
    // as esseh toh apna pura "array" set hai , thus toh now aab apnko only simply ess array pe Operations implement krenge.
    Display(arr1);
    return 0;
}