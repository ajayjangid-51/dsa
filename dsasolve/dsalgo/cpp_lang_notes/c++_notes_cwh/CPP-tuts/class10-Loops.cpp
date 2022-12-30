// YAHA pe apn Loops k bareh meh dekhenge:
// AS LOOPS ka concept in terms of syntax , memory-allotment , execution-cursor-concept k Respect meh ekdam deto same hi as like C -programming:  and AS Loops ka use apn kisi ek same kaam ko baar-baar with some updation liyeh krne k use krteh hai. thus mtlb voh kaam apnko manually baar code nhi krna pdta , as voh apn LOOP-functionality se automated kr deteh hai.

// 1.for-loop
// 2.while-loop ( as for-loop and while-loop dono ek jaise hi hai , bas thoda syntax alag hai mtlb for-loop meh apn ek saat variable , checking-condition , and updation-per-cycle de di jati hai and but while-loop meh sirf checking-condition hi di jati hai, thus toh yeh apne upar hai ki apn konsa loop use krna chahteh hai apne comfort k according mtlb agr apnko apne kisi bhi predefined variable pe sirf condition hi check krvani and koi upadation nhi dena ho(as esseh toh voh apn work-box meh kr hi skteh hai) then vaha apn directly and fastly while-loop ka use krteh hai. and jab apnko kisi predefined or newly defined varialbe pe condition check krvani ho , updation bhi krvana and then kuch work-box execute krvana hai then vaha apn direclty-while loop ka use krteh hai. 📓note-point: as apn while-loop ki jagah for-loop and vice-versa kr skteh hai. but bas thodi comfort hoti hai apnko enn dono ka syntax samajke phir apply krne meh. )

// 3.do-while-loop (as do-while ka use apn tab krteh hai jab apnko first-koi condition check nhi krvani, mtlb bas voh work-box execute krvana hai first-time toh. phir second-cycle mtlb second-iteration se conditions check hona start hoti hai. or bas condition hi check nhi hoti aur baki updation toh hota hai.)

#include <iostream>
using namespace std;
int j = 14;
int main()
{
    // 1.For-Loop:
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i << endl;
    // };
    // 👿note-point: as For-loop-Condition meh apn multiple variables define kr skteh hai , mutiple-conditions-laga skteh hai repective defined-variables pe and multiple-updation bhi laga skteh hai , respective varialbes pe.

    // 🌟 Infinite-For-LOOP:
    /*
    // for (__int8 i = 0; 1; i++)
    
    for (short int i = 0; 1; i++)
    // 👿📓:note-point: as infinite-loop meh datatype k range se data-value jada ho jati hai tab vaha voh cyclic-maanner meh hota hai , mtlb jaise 32,123++ mtlb -32,122 hota hai. thus mtlb datatype-size ki vajah se program crash nhi hota hai.
    {
        cout << i << endl;
    }
    */

    // while (j < 20)
    // {
    //     cout << j;
    // };

    // 🌟 Infinite-While-LOOP:
    /*
    while (1)
    {
        cout << 1 << endl;
        // cout<<
    }
    */

    // do
    // {
    //     cout << "the value of j is" << j << endl;
    //     cout << "hello i am do-while-LOOP and j is less than than 13";
    //     j -= 2;

    // } while (int i < 13) 📓🔔 as apn while-loop-condition mtlbl while-keyword mtlb while-loop ko follow krne wali condition meh variables ko define nhi kr skteh hai , but for-loop-keyword ko follow krne wali condition meh apn variable ko define kr skteh hai.
    // } while (j < 13);

    // ❓quiz❓ : write multiplication-table of 6 using  loop
    /*
    for (int i = 6, j = 1; j <= 10; j++)
    {
        cout << i << " * " << j << " = " << i * j << endl;
    }
*/

    return 0;
}
