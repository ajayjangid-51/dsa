/* 🌟 NOw YAHA pe apn Array-as-parameter-of-the-function and Array-as-return-value-of-the-function k bareh  meh dekhenge mtlb apn function meh array-parameter lena dekhenge and array-return krna dekhenge. 🌟 */

// arr[] mtlb yeh pointer-to-array hai. as mtlb arr[] = *arr // as dono ka ek hi mtlb hai.
#include <iostream>
using namespace std;

// void fn(int p1arr, int p2size)
// void fn(int p1arr[], int p2size)
void fn(int *p1arr, int p2size)
//👿📓-note-point: as p1arr[] and *p1arr dono ka mtlb ek hi hai mtlb dono same hi hai. bas itna hai ki p1arr[]-likhne se ess baat ki asurity aajati hai ki yeh array-k-liyeh pointer hai. mtlb apn ess function meh kisi ko handle krengee..ya krne wale hai.👿📓
// and as apnko pura-array pass krna hai toh mtlb apnko pointer-hi use knra hoga.. and apn vahi krteh hai. and mtlb pura-array pass nhi hota as mtlb sirf array ka first-node pass hota hai and phir bakki apn baad meh pointer-arithematic pure array ko access kr leteh hai.
// as toh apn p1arr[] ya *p1arr dono meh se koi bhi use kr skteh hai.. voh apni marji hai dono ka mtlb exactly same hi hai.
{
    cout << " the size of A-named-Array-Container is  " << sizeof(p1arr) / sizeof(int) << endl;
    // p1arr[0] = 15;
    for (int i = 0; i < 6; i++)
    {
        // "type here to repeat"
        // p1arr[i]++;
        p1arr[i]++; // as p1arr[i] ka mtlb yeh hota yeh esmeh hi resolve hota hai => *(p1arr+i)
        // (*(p1arr + i))++;

        // but mostly perfbly apn p1arr[i] ka use hi krteh hai for the sake of simplicity , but apn esseh     (*(p1arr + i))++ bhi use krteh hai q ki esmeh thodi feel jada hai mtlb ek-level-of-abstraction kaam hai.
    };
    // for (int x : p1arr)
    //     cout << x << " ";
    //📓-note-point: as apn for-each-pointers pe use nhi kr sktehh....
    // p1arr[0]++;

    //👿📓very-imp-note-point: as apn CPP meh python ki tarah inplace of {}-curly-brackets we can use identation.. jo ki bohat acchi and mastam baat hai... 👿📓
}

/* 🌟 Function-Returing an Array:: 🌟 */
// int[] fnn(int n) // as yeh esseh wali C++ meh supported nhi hai..
int *fnn()
{
    // int p[] = {3, 6, 9, 12, 15};
    // return p;
    //👿📓1-note-point: as yeh wali baateh nhi ho skti q ki function-toh destroy hojayega , toh mtlb yeh variable-containers toh destroyed honge na.. toh mtlb esseh kuch return-krne se koi mtlb nhi, as yeh senseless wali baat hogayi.. 👿📓

    //👿📓2-note-point: as toh eske liyeh apnko heap-meh memory-allocate krni hogi and phir uss heap-memory ka pointer return krenge.. as toh essseh apna function-destory hone pr bhi voh heap meh allocated-memory destory nhi hoti. thus toh yeh ekdam mastam baat hai 👿📓.
    // int *heaptr = (int *)malloc(5 * sizeof(int));
    int *heaptr = new int[5];
    // heaptr = {1, 2, 3, 4, 5}; as apn esseh ek saat heap-array meh values-assign nhi kr skteh hai.. toh mtlb individually assignation krna hoga.
    // heaptr[0] = 5;
    // heaptr[1] = 10;
    // heaptr[2] = 15;
    // heaptr[3] = 20;
    // heaptr[4] = 25;
    // or
    for (int i = 0; i < 5; i++)
        heaptr[i] = i + 1;
    return heaptr;
}
int main()
{
    int arr[] = {2,
                 4,
                 6,
                 8,
                 10};
    cout << " before the function-call " << endl;
    cout << " the value of arr[0] " << arr[0] << endl;
    cout << " the value of arr[1] " << arr[1] << endl;
    cout << " the value of arr[2] " << arr[2] << endl;
    cout << " the value of arr[3] " << arr[3] << endl;
    cout << " the value of arr[4] " << arr[4] << endl;

    int a = 10;
    cout << " before value of a is  " << a << endl;
    // fn(&a, 5);
    cout << " after value of a is  " << a << endl;

    fn(arr, 5);
    //fn((*arr), 5); // here we are just passing a value at arr-pointer.. toh mtlb yaha pe koi pe actual-parameters pe koi farak nhi padega..
    //👿📓-note-point: where yaha pe "arr" ek pointer hi hai jo ki apn jantehh hi hai ,ki array-ka-naam ek pointer hi hota hai which is pointing to first-node(sub-container) of the array.. 👿📓
    cout << " after the function-call " << endl;
    cout << " the value of arr[0] " << arr[0] << endl;
    cout << " the value of arr[1] " << arr[1] << endl;
    cout << " the value of arr[2] " << arr[2] << endl;
    cout << " the value of arr[3] " << arr[3] << endl;
    cout << " the value of arr[4] " << arr[4] << endl;

    /* 🌟 Function-Returing an Array:: 🌟 */
    int *pp0 = fnn();
    cout << " the pp[0] is " << fnn() << endl;
    // cout << " the pp[1] is " << pp[1] << endl; // as yeh wali baateh nhi ho skti q ki function-toh destroy ho chuka hai , toh mtlb uske variable-containers bhi toh destroyed hai na.. toh mtlb unko access nhi kr sktehhh...
    // cout << " the pp[2] is " << pp[2] << endl;
    // 🎆 now executing the modified-version of the function: 🎆
    int *pp = fnn();
    cout << " the value of pp[0] is " << pp[0] << endl;
    cout << " the value of pp[1] is " << pp[1] << endl;
    cout << " the value of pp[2] is " << pp[2] << endl;
    cout << " the value of pp[3] is " << pp[3] << endl;
    cout << " the value of pp[4] is " << pp[4] << endl;

    //🎆 some-more-implementation:
    //🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗
    int A[] = {2, 4, 6, 8, 10};
    //👿📓-note-point: yaha pe (mtlb apne function-scope meh) yeh array-A as a A-pointer ki tarah kaam nhi krta.. mtlb yeh "A" uss-array-container ka naam hi hai. but jab apn esseh kisi function meh as input pass krenge then vaha pe phir yeh as  pointer-to-first-node-of-Array ki tarah kaam karega mtlb voh hoga.👿📓
    cout << " the size of A-named-Array-Container is  " << sizeof(A) / sizeof(int) << endl;
    int n = 5;
    for (int x : A) // mtlb for-each-int-x in A
        cout << " the value of x is  " << x << endl;
    // {
    // cout << " the value of x is  " << x << endl;
    // }

    int *ptr, size = 5;
    ptr = fnn();
    //📓-note-point:  as toh apnne yaha ess fnn() meh dynamically-heap meh ek array allocate kiya and uss array ka address krvaya and then aab apn uss heap-meh-allocated-array ko apne ess main()-fn meh use kr rahe hai , and as apn esseh kaam aage bhi bohat baar krenge.. and kafi sahi and useful cheeze hai.

    for (int i = 0; i < size; i++)
    {
        // "type here to repeat"
        cout << " the ptr[" << i << "] = " << ptr[i] << "  ";
    };

    return 0;
}