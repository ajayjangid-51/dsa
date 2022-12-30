/* 🌟 As now apn Function meh paramter-passing k bareh meh dekhenge.. mtlb Function banateh time apn jo paramters pass krteh hai uss paramter-passing k bareh meh dekhenge ki apn kis-kis tarike se parameter-passing kr skteh hai.🌟 */
// as apn paramter-passing 3-tariko se ho skti hai:
// 1.pass by value
// 2.pass by address
// 3.pass by refrence

//📓1-note-point: as C-programming meh apn sirf upar-wale 2-tarike se hi paramter-passing kr skteh hai. 1st is pass-by-value and 2nd- is pass-by-address.

//🎆 -implementation:
//🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗
#include <iostream>
using namespace std;

// 🎆 call by value-function 🎆
// void swap(int p1, int p2)
// {
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;
// }
// 1.pass by value meh actual-parameters change nhi hoteh...
// As toh apn call - by - value ka use tab krteh hai jb apbko actual - parameters pe koi effect nhi rkhna ho.

// 🎆 call by address-function 🎆
// as call by address ka mtlb apn input meh address- pass krvayene.. and address pass krvayenge mtlb phir voh address parameters meh assign honge.. thus toh mtlb address assign hone k liyeh mtlb address store krne k liyeh pointer-variable-container chahiyeh hoga, thus toh mtlb pointer-parameters banane honge as like this:
// void swap(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// 1. Call by address meh fn-call meh input meh address-pass hota hai... And thus eske vajah se call-by-address meh  actual-parameters bhi change hoteh as mtlb actully meh formal and actual-parameters esmeh dono same hi hoteh hai..

// 🎆 call by reference-function 🎆
void swap(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
// as "references" sirf cpp ka hi feature hai..
//📓-note-point: As toh "reference-fn" apne-fn-call ki jagah fetch ho jata hai.. thus toh mtlb voh apne called-parent-fn ka hi part ban jata hai.... As mtlb eska use krne se apna program monolithic-program ban jata hai, naki modular or procedural-program bcoz call-by-refrence ka yahi idea hai..
// Thus toh call-by-refrence-fn ko apnko frequently use nhi krna chahiyeh, mtlb call-by-refrence-fn ko use krna recommended nhi hai for complex-fns as bcoz esseh phir main()-fn or any other calling-parent-fn ka workload badhta hai...

// As apn Functions other Functions ka content directly use nhi kr skteh , but apn Function meh not any other function but only uske calling-fn ka content as a input-parameter pass kr skteh hai.. and now aab called-fn only uske calling-fn k content access kr skta hai only if it is call-by-address-fn...
// Note - as koi bhi Function only uske calling - fn k content ko hi access kr skta hai and voh bhi sirf indirectly and in one of sirf directly in call - by - refernce...

// 🎆 as esseh mixed-call function bhi ho skteh hai.. mtlb esseh mixec-call functions bhi apn use kr skteh hai:🎆

void swap(int p1, int *p2);
void swap(int *p1, int &p2);
void swap(int &p1, int p2); // or etc..etc..
int main()
{
    int a = 10, b = 15;
    cout << " the value of a and b is before swaping " << a << " and " << b << endl;
    // 🎆 call by value: 🎆
    // swap(a, b);
    // cout << " the value of a and b is after swaping means after using swap-call-by-value fn is " << a << " and " << b << endl;

    // 🎆 call by address: 🎆
    // swap(&a, &b);
    //👿📓-note-point: as call-by-address-fn meh apnko specifically-variable ka address pass krne ki jarurat nhi hai , as q ki voh apne aap hi address le leta hai..  👿📓
    // swap(a, b);

    // 🎆 call by refrence: 🎆
    swap(a, b);
    //👿📓-note-point: as actally function meh inputed-value parameters copy nhi hoti, mtlb voh "assign" hoti hai. 👿📓
    cout << " the value of a and b is after using call-by-address value is  " << a << " and " << b << endl;

    //👿📓-note-point: 1.As toh hamesa apnko mainly and mostly call-by-value hi use krna hota hai.. until and unless apnko actual-parameters change nhi krne ho ya as like Function-inlining nhi krni ho..
    // 2.As call-by-refrence meh compiler uss Function ko Inline-function bana bhi skta hai orr ya phir usseh as pointers ki tarah bhi treat kr skta hai... But mostly voh call-by-refrence-fn ko Inline-function hi banata hai...👿📓

    return 0;
}
