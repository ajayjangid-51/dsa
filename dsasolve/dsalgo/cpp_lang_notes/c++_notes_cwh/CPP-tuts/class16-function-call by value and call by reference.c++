// YAHA pe apn Call-by-value and Call-by-Reference k bareh meh dekhenge:
#include <iostream>
using namespace std;

void swapfn(int p1, int p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
void swappointerfn(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void swapreferencevar(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
int main()
{
    int a = 3, b = 5;
    // int &nu1 = a, &nu2 = b;
    // this function-calling is known as call-by-value function-calling.
    swapfn(a, b);
    // swapfn(*nu1, *nu2);
    cout << "the value of a is " << a << " and the value of  b is " << b << endl;

    // as toh now changing the the Actual-paramters-values apn call by refernce ka use krenge mtlb apn function ko call by reference banyenge. as toh function ko call by refernce krne k liyeh apnko phle uss function ki overloading krni hogi ya phir koi orr function banana hoga jo ki arguments-ka-reference(mtlb address) leta ho.
    // thus toh call-by-refernce ka mtlb function-input meh agruments ka address pass krna , takki jisseh simply boleh toh Actual-paramters and Formal-parmeters same ho jateh hai mtlb esa lgta hai.
    // as call-by-reference mtlb calling by inputing the address of agruments.
    cout << "using swap fn" << endl;
    // swappointerfn(&a,&b);
    // as yaha pe address input huaa hai toh mtlb function meh address ki copy jayegi and address ki copy mtlb toh vohi address huaa na , mtlb apn uss address-copy ko derefrence krteh hai then apnko uss address meh jo value hai voh value hi milegi na.
    cout << "the value of a is " << a << " and the value of  b is " << b << endl;

    // call-by-reference:
    // as call-by-reference two types k hoteh hai , mtlb apn 2-tarike se function ko by referencing-call kr skteh hai.
    // 🌟 1. Call-by-pointer-reference. 🌟
    //
    // swapreferencevar(a, b);
    // swapfn(*(&a), *(&b));
    swapreferencevar(*(&a), *(&b));

    cout << "the value of a is " << a << " and the value of  b is " << b << endl;

    // 🌟 2. Call-by-REference-Variable. 🌟
    /// int a, &b; // as apn ek-saat same-datatype-variable ko hi define kr skteh hai. where yaha &b(reference-of-b toh reference datatype hai thus toh esiliy apnko error show hota hai.)
    // int a, b;
    int a;
    a = 50;
    int &b = a;
    // 📓note-point: reference-datatype-variable ko apnko initialize krna hi hota hai mtlb apn reference-datatype-varialbe ko sirf declare krke nhi chod skteh.
    // b = a;
    // b = *(&a);

    b++;
    b++;
    cout << &b << endl;
    // 📓note-point: AS varialbe and its-reference-variable ka address same hi hota hai , thus mtlb simply bolteh toh apn reference-variabling se apn ek hi memory-container ko multiple identifier(mtlb multiple names ) de skteh hai.
    b++;
    cout << &a << endl;
    // thus As yahi Concept function-argument-inputing meh hota hai , mtlb parameters meh yeh arguments assign ho jateh hai mtlb assign kr diyeh jateh hai. , thus toh phir apnko formal-paramter and actual paramter ka dyhn itna phir nhi hai.
    // as voh parameter-meh-datatype-conversion meh esseh ess tarah hota hai. => int p1 = int(a);

    // 🌟 // return-by-reference. 🌟

    return 0;
}