/* 🌟 Now YAHA pe apn Pointers k bareh meh dekhenge: 🌟 */
// AS Pointers bhi simply containers(mtlb sub-memory-parts mtlb nodes ) hoteh hai jo ki sirf or sirf other nodes(mtlb parent-memory-parts or sub-memory-parts) k address store krteh hai. as apn kisi orr variable-container or mtlb node meh node-address store nhi kr skteh.. but yeh address apn pointer-container meh store kr skteh hai. as esliy pionters ko simply address-variable or address-container bhi bol diya jata hai.
// 🎆 As thus toh YAHA apn pointers ko declare krna , intialize krna , pointers ki derefrencing krna and pointers ki madad se dymnamically memory allocate into heap krna bhi dekhenge: 🎆
//📓Tip-note-point: As C++ meh apn Pointers ki madad mtlb pointers with new and delete-keyword se apn heap meh dynamic-allocation and dynamic-disallocation kr skteh hai, jo ki ek mastam baat hai, as C-language meh toh yeh kaam apn malloc and calloc functions ki madad se krteh hai, but CPP meh yeh kaam pointers+ new and delete-keyword se hota hai and essehi kiya jata hai.

/* 🌟1.why pointers: 🌟 */
// as pointers ka use apn nodes-address store krne k liyeh krteh hai , and as toh apn pointers meh memory-container's(mtlb node's-)-address store kr skteh hai, thus toh essi vajah se pointers ka most and main use banta hai ki apn pointers meh heap-memory k addresses store kr skteh hai, harddisk-memory k addresses store kr skteh hai, kisi-website-cloud k memory k addresses store kr skteh hai.. and thus toh mtlb phir apn ennke datas ko access kr skteh hai. thus toh overall pointers ka yahi ek main and best use hai ki pointers ki madad se mtlb pointers se apn stack-memory , heap-memory , harddisk memory , website-cloud etc.. koi bhi outside memories ko access kr skteh hai.
//📓2-as Pointers ka use formal-paramter-passing meh hota hai. as takki apn kisi function se uss function-outside variables ko change kr sake.
// 🎆 as asseh simply boleh toh main-memory(mtlb ram-memory) k 3-sub parts hoteh hai:
// 1. code-section+global-section
// 2. heap
// 3. stack 🎆
// as apna program mtlb instructions+data main-memory k code-section and stack-section meh load hoteh hai, and apne program k instructions sirf-or-sirf stack-memory k sub-memory-parts(mtlb containers mtlb nodes) ko hi access kr skteh hai(access krne ka mtlb memory-part k andar jana). and thus toh esiiliy apn phir pointers ka use krteh hai for accessing the heap-memory or any other outside-memories::
//📓-note-point: as pointer-container bhi stack-memory meh allocate(exist krta krta) hota hai.

/* 🌟2. declaring the pointers 🌟 */
// int *pontr;
// pointer 's-datatype(mtlb pointer kaise type-k-continer ka address store karega) * pointer' s - identifier(mtlb pointer - container - ka - naam);
/* 🌟3. Intializing the pointers 🌟 📓👉 */
// pontr = &a;
// pointer's-name = &var(mtlb address of a container jisko apn store krna chahteh hai.)

// 🎆 Simultaneous declaration and intialization: 🎆
// int *pontr = &a;

/* 🌟4. allocating memory in the heap-memory: (note-point: As yeh malloc-fn or new-keyword jo heap-allocation hota hai voh dynamic allocation hota hai thus toh apn simply esseh bhi bol skteh hai ki dynamic-allocation-of-memory-in-heap-memory) 🌟 */
// as C-language meh apn yeh kaam malloc()-fn ki madad se krteh hai, as yeh malloc()-fn "stdlib.h"-module file ka hai thus toh mtlb esko use krne k liyeh apnko phle ess "stdlib.h"-file ko apni file meh fetch krna hoga, and then yeh malloc()-fn k paramter size-of-memory hai, thus toh mtlb ess malloc()-fn ka input memory-size-in-bytes hai. and ess malloc()-fn allocated-memory ka address return krta hai mtlb pointer return krta hai, thus toh apn phir ess pointer ko apne kisi pointer banake store kr leteh hai. as but yeh return-pointer void-pointer hota hai toh apnko phle esko type-cast krna hota hai. as like this;

// and C++ meh apn yeh yahi kaam new-keyword se krteh hai simply as like this:
// int *p;
// p = new arr[5];
// int* p = new arr[5];

//🎆 Pointer-implementation:
//🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    // int b = &a; // as yeh apna "b" container pointer-container nhi hai thus toh mtlb apn esmeh address assign mtlb store nhi kr skteh hai.
    // int *bb = &a;  // as yeh "bb"-container(memory-part or node) pointer-container hai thus toh mtlb esmeh address store mtlb assign kr skteh hai..
    //👿📓-note-point: and yeh address-assigning wala cpu apne app se krta hai, mtlb konsa address pe mtlb konse node allocate krna hai etc..etc as address-contants hoteh hai , fixed hoteh hai. 👿📓

    int *p;
    p = &a;
    cout << " the value at address-p is  " << *p << endl;
    cout << p << " " << &a << endl;

    int *pontr1;
    pontr1 = &a;

    int *p2, p3, *p4;
    p2 = (int *)malloc(5 * sizeof(int));
    // p2 = new (int) a;

    // p3 = 10;
    // p3 = new int[5];
    //📓-note-point: as yaha pe yeh p3-pointer-container nhi hai. as yeh simple value-container hai.
    p4 = new int[5];

    // 🎆 Pointer to array 🎆
    // 🎆 Pointers to Structure 🎆

    int *intpntr;
    cout << " the size of int-pointer is " << sizeof(intpntr) << endl;
    // as pointer bhi ek variable hi hai, jismeh address store hota hai. thus toh address-store krne k liyeh maximum-8 bytes required hai. and sabhi pointer-type-containers ki size same hi hoti hai, as vaha jis container ka address store ho raha hai , uss container k datatype se uske address pe koi nhi pdta mtlb koi sense wali baat hi nhi hai. thus toh mtlb sabhi-types k pointer-container ki size ki size same hi hoti hai. and overall yeh baat obvios hai as q ki pointers simply containers(memory-parts) hi hota hai jismeh apn addresses store hoteh hai and sabhi memory-addresses ki size same hi hoti hai. thus isiliy diff-pointers ki size bhi same hi hoti hai.

    float *floatpntr;
    char *charpntr;
    long *longpntr;
    short *shortpntr;
    cout << " the size of float-pointer is " << sizeof(floatpntr) << endl;
    cout << " the size of char-pointer is " << sizeof(charpntr) << endl;
    cout << " the size of long-pointer is " << sizeof(longpntr) << endl;
    cout << " the size of short-pointer is " << sizeof(shortpntr) << endl;

    return 0;
}
