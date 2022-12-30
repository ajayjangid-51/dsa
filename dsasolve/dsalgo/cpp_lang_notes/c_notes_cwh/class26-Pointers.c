// YAHA pe apn Pointers k bareh meh dekhenge:

// Pointers simply ek container hi hoteh hai jo ki other-Variable-Container k address ko store krta hai.
// jaise: int* pointer1 = &num1;
// thus now yeh pointer jis type-k-container ka address store kr rha hai, uss type ka yeh pointer khelata hai: jaise:      int num1 = 3;
//          int* pointer = &num1;
//  thus this means ya simply apn ase bolteh hai ki p points to num1 , mtlb p num1 ko point kr rha hai, thus mtlb yeh p num1 ka address kr rha hai.
// thus toh apn koi bhi input pointer se kisi Container meh store kiya ja skta hai.

// types of pointer:
/* 1.int-pointer
    2.float-pointer
    3.char-pointer --mtlb yeh kisi char ka address store kr rha hai
    4-function-pointer --mtlb yeh kisi function k address ko store kr rha hai
    5.Pointer-pointer -- mtlb yeh kisi pointer k address ko store krta hai.
    6.NULL-pointer -- mtlb yeh pointer kuch bhi address contain nhi krta. thus toh mtlb yeh pointer kisi bhi container ko point nhi krta mtlb yeh pointer-container khali hai, empty hai. 
    // THUS toh mtlb agr apn ne pointer meh kuch assigned nhi kiya hai toh apn usmeh NULL assigned kr dete hai thus , esa krne se apn apne pointer meh garbage-store hone se bacha skteh hai.
    jaise:   int* pointer_name = NULL;
    
    */


    // ek pointer meh ek address store hota hai: and 1 pointer ki size 2bytes hoti hai, in 32-bit architecture.
// pointer ko apn *(asterik symbol) se declare krteh hai.

// note-point: programming meh containers ka address hexa-decimal number meh hota hai.

// & is a operator jo address return krta hai.
// thus jaise: &a mtlb address of a.

// *(asterik ) is a operator also called indirection-operator and dereference-operator jo ki used to get the value jiske liyeh apnko address provided kiya gaya hai.
// thus toh jaise: *poin1 mtlb poin1-pointer meh jiska address store hai uski value. thus toh kabhi bhi apnko kisi pointer ki value chahiyeh then toh apn *pointer-name ka use krteh hai bcoz yeh * operator apnko given container-address ki value return krta hai.
// and thus yeh *-operator apn pointer pr hi use krteh hai bcoz apn pointer meh addresess store krteh hai.


// thus toh pointer ka simply mtlb hai kisi ko point krne wala mtlb apn pointer ki madad se kisi ko point kr skteh hai, 


// jaise agr apn kisi container meh value store nhi krteh toh thus usmeh by default ek garbage-value store ho jati hai.
#include<stdio.h>
int main()
{
    int a;
    int b = 42;
    int* pointer1 = &b;
    // esseh mtlb jo "b" container hai na uss container ka apne pass address hai and ess address se apn uss container ko point out kr skteh hai thus toh mtlb apn pointers ka mostly cheezo ko point-out krne k liyeh hi hota hai. 
    int* pointer2 = &pointer1;
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);

    // same meaning:
    printf("the value of b is %d\n",b);
    printf("the value stored in b is shown by using *-operaotor with the pointer is %d\n",*pointer1);

    // same meaning:
    printf(" the memory-address of container-b is %x\n",&b);
    printf(" the memory-address of container-b is %x\n",pointer1);
    printf(" the value of container-pointer1 by taking address is %x\n",*pointer2); // ese pointer dereferecing khteh hai.

    // same meaning:
    printf(" the memory-address of POINTER-pointer1 is %p\n",&pointer1);
    printf(" the memory-address of POINTER-pointer1 is %p\n",pointer2);


    int* nullpointer1;
    int* nullpointer2 = NULL;
    printf("the value(means the stored address) of nullpointer1 is %p\n ",nullpointer1);
    printf("the value(means the stored address) of nullpointer2 is %p \n",nullpointer2);
    return 0;
}
// thus toh pointer voh container hai jinmeh kisi other container kaa "address" store hota hai. mtlb pointer voh container hoteh hai jinmeh address hota hai.

// linked-list, stack-que , binary-trees , binary-search-trees where we will traverse the tress and we will also see serching and login etc meh yeh pointer-related sari cheeze kafi matter krti hai.

/* USES OF POINTER:
        1. Dynamic Memory allocation (program running meh memory ko allocate krna mtlb memory ko free krna and memory ko bharna as per program tasks like task1 , task2 , task3)
        2. Arrys , function and strucutures
        3. return multiple values from a function.
        4. pointer reduces the code-lines and toh esse apna program fast run ho jata hai mtlb accha perform krta hai, thus toh esse apne program ki performance baad ti hai.
        5. as ki apn pointers se memory ko manage kr skteh hai bcoz pointers se memory apne haat meh aa jati hai and mtlb apn pointers se kafi acche se memory ka management kr skteh hai.

        imp 6: thus toh apn pointer se memory k kisi bhi sub-part ko point kr skteh hai, bcoz apne pass uska sub-part of memory address thus toh apn directly sidhe usi sub-memory part ko hi point out krenge. thus toh pointers ka kafi use memory allocation meh hota hai, thus esseh apn dynamic memory allocation and memory management meh kafi jada hota hai bcoz apn pointers se memory ko point krke usseh dynamcially fill-up and free-up krteh hai.
*/

// VISUAL-STUDIO IDE: meh apn as according to us apn apne code-lines ka snippet bana skteh hai.


// POINTERS container hi hoteh hai and simply enmeh address store kiyeh jateh hai. toh thus yeh Pointers store address of container ko phir point krteh hai.