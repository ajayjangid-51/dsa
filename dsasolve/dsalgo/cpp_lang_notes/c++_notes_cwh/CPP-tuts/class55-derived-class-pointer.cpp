/* 🌟 As now YAHA pe apn Derived-class-pointer k bareh meh dekhenge mtlb voh pointer jo ki derived-class k address ko store krta hai , mtlb derived-class k object k address ko store krta hai , mtlb derived-class k object k liyeh jo memory-block-allocated hota hai uske address ko store krta hai. 🌟 */

//📓-note-point: As agr kisi container meh koi kisi orr type-of-data ko container bhi fetch hai or mtlb present hai then apn uss type-of-data-k-pointer meh ess parent-container ka address assign kr skteh hai and usseh apnkko bhi nhi milti , as q ki in actual voh pointer uss parent-container ko nhi as voh toh uss parent-container meh present sub-contaienr ko hi point kr raha hota hai. mtlb actually uss pointer meh uss same-datatype-wale container ka address hi assign hota hai agr apn usske container k parent-container k address ko uss sub-present-container-k-datatype-pointer meh.
// Thus toh voh pointer uss andar wale object ko point krta hai naki uss parent-container ko point krta hai..
// // As toh apn esseh pointers ka use krke runtime k liyeh binding set kr skteh hai... And as mtlbsab kuch logically hi horaha hai...

#include <iostream>
using namespace std;

class Base
{
    int var1;

public:
    int var2_base = 21;
    virtual void display(void)
    //📓-note-point:  as toh apn
    // void display(void)
    {
        cout << " hello ji the value of var2_base is  " << var2_base << endl;
    };
};
class Derived : public Base
{

    int var1;

public:
    int var2_derived;
    int var3;
    void display(void)
    {
        cout << " the vlue of var2_base is " << var2_base << endl;
        cout << " the value of var2_derived is  " << var2_derived << endl;
    };
};
int main()
{
    Base *ptrtobaseobj_or_addressof_baseobj;
    Base obj1;
    Derived objd1;
    ptrtobaseobj_or_addressof_baseobj = &objd1; //📓-note-point: AS toh apnne esse krne ka mtlb bhi yahi hai ki yeh pointer uss base-class-object ko hi point karega as chaheh apnne esmeh derived-class-object assign kiya ho.
    // cout << " the baseobj address is " << ptrtobaseobj_or_addressof_baseobj << endl;
    // ptrtobaseobj_or_addressof_baseobj = &objd1;
    // cout << " the baseobj address is " << ptrtobaseobj_or_addressof_baseobj << endl;
    // as yeh dono base-class ka object and derived-class ka object k addressess alg-alag hoteh hai.

    ptrtobaseobj_or_addressof_baseobj->display();
    // ptrtobaseobj_or_addressof_baseobj->var2_base = 2000;
    // ptrtobaseobj_or_addressof_baseobj->var3 = 2000;
    // ptrtobaseobj_or_addressof_baseobj->var2_derived = 2000;
    // ptrtobaseobj_or_addressof_baseobj->display();

    // 🎆 Agr apn derived class pointer ko apn base-class-object se point krateh hai then kya hota hai...? AS toh yeh kaam apn kr hi nhi skteh hai. q ki base-logic k ansuarr hai hi nhi. 🎆
    Derived *dprt;
    // dprt = &obj1; // this will throw error as q ki apn derived-class-type-pointer meh base-class-object ka address store nhi kr skteh hai, as q ki yeh syntaxly and logically galat hai. as but jaise apn base-classtype-pointer meh derived-class-object ka address assign kr skteh hai , as yeh baat syntaxlly toh galat hai but logically sahi hai.
    dprt = &objd1; // as yeh toh sahi hi hai.
    //dprt->display(); // as agr apn derived-class-pointer meh derived-class-object hi assign krteh hai then ovevrridden-fns meh se uss derived-class wala hi override function hi call hota hai.

    return 0;
}