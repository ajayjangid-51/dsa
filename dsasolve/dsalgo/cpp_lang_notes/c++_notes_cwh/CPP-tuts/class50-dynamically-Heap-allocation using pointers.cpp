// YAHA pe apn Pointers k bareh meh aab orr acche se Detail meh dekhenge::
// NOw YAHA pe apn "Heap" meh dynamically memory allocate krna dekhenge with the use of Pointers. and yeh kaam apn "new" and "delete" keyword ka use krke krteh hai. thus toh apn "new" and "delete" keywords k bareh meh dekhenge mtlb enko syntax-k-accordingly kaise use krteh hai and yeh kaise kaam krteh hai ya krvateh hai.

#include <iostream>
using namespace std;

int main()
{
    int a = 32;
    int *ptr_to_a_or_addres_of_a = &a; // this means ki apnne "a"-named-container ka address kiya hai ess ptr-varialbe meh. and ess "a"-container meh 32-value store hai. thus apn  dereferencing-operator(*) ka use krke ess address-pe jo value store hai mtlb ess address-wale-container meh jo value store hai , voh apn findout kr skteh hai.

    cout << "the value at ptr-address or the value-of-container which this ptr-pointer is pointing is " << *(ptr_to_a_or_addres_of_a) << endl;
    // 📓note1: as toh pointer hamesa kisi container ko hi point krta hai. mtlb pointer kisi container ka addresss hi contain krta hai.

    // 🔥 "new"-keyword: as new-keyword se apn dynamically koi interger bana skteh hai and uske container ka address bhi dynmically store kr skteh hai ; as like this :
    int *ptr1 = new int(20);
    // pointer-datatype* identifier = new datatype-of-value(value);
    // as toh yaha pe apnne dynamically ek address allocate kiya mtlb ek container allocate kiya and usmeh int-datatype value assign krdi mtlb daaldi.
    cout << "the value at container's-address ptr1 is " << *(ptr1) << endl;

    char *ptr2 = new char('r');
    delete ptr2;
    cout << "the value at ptr2 is " << *(ptr2) << endl; // thus toh agr allocate memory agr disallocate hogayi then toh phir apnko garbage-value hi milti hai.
    // cout << *(ptrxx2) << endl;

    // 📓: As apn esseh dynmically(mtlb at run-time pe allocation hota hai in the heap memory) with the help pointer arrays bhi allocate kr stkeh hai: as like this;
    char *ptrarr = new char[4]; // 📓; as yaha pe apnne array-ki size bataee hai , na ki array meh values dali hai, as array ko allocate krteh time apn ussmeh as like int , float.. ki tarah directly value nhi daall skteh. thus toh allocated-array meh values dallne k liyeh apn ess tarah krteh hai.
    // 📔: as apnn janteh hi hai ki apn jab bhi apn array-allocate krteh hai , then vaha uss array k naam se hi uss array ka pointer hota hai, thus yaha pe apnko vohi baat dhyn rkhni hai agr "ptrarr"-koi array ka address store kr raha hai mtlb voh khud hi apne aap meh array hi hai. thus toh ess baat ko dhyn meh rkhteh huyeeh apnko pointer-se-allocated-array ki values ko assign krna hota hai.
    // thus toh from above-discussion apn esseh bol stkeh hai haiki ptrarr-naam se koi array hai , toh apn uss array meh simply values ko assign kr deteh hai.
    ptrarr[0] = 'g';
    ptrarr[1] = 't';
    *(ptrarr + 1) = 't';
    ptrarr[2] = 'u';
    ptrarr[3] = 'p';
    // delete[] ptrarr; // or apn essehi without-use of [](square-brakets) kr skteh hai.
    delete ptrarr;
    ptrarr[2] = 'c';
    ptrarr[3] = 'z';

    // delete (ptrarr + 1);

    cout << "the value of ptrarr[0] is " << ptrarr[0] << endl;
    cout << "the value of ptrarr[1] is " << ptrarr[1] << endl;
    cout << "the value of ptrarr[2] is " << ptrarr[2] << endl;
    cout << "the value of ptrarr[3] is " << ptrarr[3] << endl;

    // 🔥 "delete"-keyword:
    // as apn "delete"-keyword se jo apnne heap meh dynmically-containers(mtlb memory-parts) allocate kiyeh the unko delete krna mtlb disallocate nhi balki unmeh stored data ko delete kr skteh hai.
    // 📓: as dynamically-array ko delete mtlb usmeh stored-values ko delete krne k liyeh "delete[]"-keyword ka use krna hota hai.

    // 🔥
    // as apn dynamically-Heap meh bhi "new"-keyword se pointer allocate kr skteh hai as like this:
    // class-name *ptrr1 = new class-name;

    return 0;
}

// now aab aage apn pointers ko claasses k and unke objects k saat use krna dekhenge.