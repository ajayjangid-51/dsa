//🔥💲  💲🔥

#include <iostream>
// #include"zz-ajay-ADT.cpp"
using namespace std;

// for array "ADT" sbse phle array-implement krenge and array-properties define krenge.. jo ki actual meh operations meh kafi useful hoti hai and hogi.

struct Array
{
    int *p;
    // now properties:-
    int size;
    int length;
};

// 3rd- Inserting-opearation:-
void Insert(Array *p1, int p2_index, int p3_value)
{
    // as inserting k liyeh apnko inputed-index se length-of-array tk element ko by-one element aage shift krna hoga as like this:(in simple-general-language):- arr[i+1] = arr[i] upto index = inputed-index.

    if (p2_index > p1->length)
    {
        Append(p1, p3_value);
    }
    else if (p2_index >= 0 && p2_index < p1->length)
    {

        for (int i = p1->length; i > p2_index; i--)
        {
            // note-point: as for-loop meh 2nd-statement true hogi tabhi loop chalega otherwise nhi chalega. toh apnko ess baat dhyn rkhna haii..
            p1->p[i] = p1->p[i - 1];
        }
        p1->p[p2_index] = p3_value;
        p1->length++;
    }
    // cout << "hello bye" << endl;

    // Note-point: as ess function ki time-complexity exact nhi hai q ki eski working exact nhi mtlb esmeh best-case , worst-case and average-case sab possible hai thus toh apn yaha  bigO , theat , omega anything koi bhi ek ya actual meh sabhi working-complexities mention krni hoti hai, thus toh:
    // for maximum its working is n-times (as working mtlb running-of-one-statement as mtlb time-complexity meh statement matter nhi krti, as mtlb no.of-statements matter krti hai ki voh ek-statement kitne times execute hogi.)
    // thus toh yaha maximum(mtlb worst-case-condition) -n0.-of-execution of statement is n , so the time-complexity is bigO(n)
    // and minimum( mtlb best-case-condition ) no.-of-execution is 1-time so the time-compleixty is omega(1)

    // imp-Notepoint:- As apn hamesa worst-case-time hi mention krteh hai, bcoz yeh safe-decision-maker hai, mtlb esko dekh kr apn apna decision leteh hai then mtlb voh safe hai mtlb apnko dhokha nhi milega from this.
}

int main()
{
    struct Array arr1;
    arr1.p = new int[5];
    arr1.p[0] = 1;
    arr1.p[1] = 3;
    arr1.p[2] = 5;
    arr1.p[3] = 6;
    arr1.p[4] = 8;
    arr1.length = 5;

    // 3rd- Inserting-opearation (as mtlb apn at provided or inputed-index pe element-value insert krenge.. )
    // as inserting mtlb apnko extra se element insert krna hai, mtlb inserting and set alg-alg hai, as set mtlb toh ki element ki value ko update krna . and yaha inserting meh mtlb ek naya hi element insert krna.
    cout << "the length of array is " << arr1.length << " so input the index less the length of array or u can put greater than also that thing will not be inserting actually it will be appended" << endl;
    Insert(&arr1, 4, 100);
    Display(arr1);

    return 0;
}