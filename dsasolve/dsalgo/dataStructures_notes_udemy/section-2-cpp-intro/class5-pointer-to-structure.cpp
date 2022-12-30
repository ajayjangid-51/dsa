/* 🌟 As NOW YAHA pe apn pointer-to-structure k bareh meh dekhenge: 🌟 */
// pointer-to-structure mtlb structure-container ka address store krne wala pointer. thus mtlb apn strcture-pointer banayenge and then uss structure-pointer se structure members ko access krenge.. and syad as mostly probably apn arrow-operator se yeh kaam kreenge.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct student
{
    int rollno;
    string name;
    long long phno;
    // } st1, st2; // as apn yaha global-scope meh structure ko declare nhi krenge, as bcoz yeh sahi nhi , recommended nhi hai q ki then yeh structure program-life-time tk memory meh allocated rhega.
};

int main()
{
    int a = 10;
    struct student st1, st2;
    struct student *p1;
    // p1 = &a;  // as esseh apn nhi kr skteh q ki yeh p1 toh struct-type-pointer hai isiliy. (note-point: as sabhi pointer ki size toh same hoti hai, but unki allocatioin diff-jagah hoti hai, mtlb sabhi int-pointers kisi ek jagah allocate hoteh and same vasehi float-pointers , struct-pointers etc .. sabhi apni apni jagah(mtlb ek parent-memory-part) meh allocate hoteh hai. thus toh voh apn jo phle pointer ka type specify krteh hai voh actually apn eske liyeh hi krteh hai takki pata chal sake ki ess pointer ko memory meh kaha allocate krke. )
    p1 = &st1;
    // now using arrow-pointer(->)...............  continue it from heree..... without anything soching....
    // now just continuing at 5:15pm
    p1->name = "ajay";
    // thus toh memory-container ko access krne k doo tarike hoteh hai:
    // 1.by its name (as name agr apn container ko access kr rahe then vaha pe apnko .(dot-operator) use krna hota for accessing its members( mtlb inside members))
    // 2.by its address. ( as toh address k liyeh apnko arrow-operator ka use krna hota hai for accessing the members inside that container)
    p1->phno = 78779347587;
    p1->rollno = 57;

    cout << " the name is  " << p1->name << endl;
    cout << " the ph no is  " << p1->phno << endl;
    cout << " the roll no is  " << p1->rollno << endl;

    // now kuch bateh about pointer-to-structure ..voh apn abhi batayenge..

    // cout << " using derefrencing: " << (*p1).name << endl;
    // cout << " using derefrencing: " << (*(p1 + 1)).name << endl;
    // as *p1 meh * ka mtlb p1-address pointing container meh jana. and simply name ka mtlb bhi mtlb uss name-container meh jana.
    //📓-note-point: as yaha apnko yeh (*p1) likhna hoga mtlb *p1 ko bracket meh likhna hoga bcoz dot(.) and *-operator meh (dot)-operator precedence first hoti hai. thus toh apnko error mil skta hai..

    // 🎆 as now apn ek "object" ko memory meh dynamically allocate krenge.. 🎆
    // as apn dynamcially allocation toh pointers se hi hota hai and voh allocation heap-memory-meh hi hota hai. and isiliy pointer se krteh hai..and as like this apn Object-ko dynamically allocate krenge...(krna dekhenge:)
    // malloc-fn void-pointer return krta hai jo ki as like as ek generic(general)-pointer ki tarah hi hota hai.

    struct student *p2;
    // p2 = (struct student *)malloc(sizeof(struct student));
    // p2 = new struct student;
    // as as just like this treat krna hai esko
    // p2 = new sizeof(struct student);
    // as toh now jo bhi apn datatype ka naam likhenge uski size.. and uske-type ka container allocate ho jayega.
    // and for array-allocation we have to do as like this:
    // p2 = new sizeof(struct student[5]);
    p2 = new struct student[5];
    // p2 = new student;
    p2->name = "aju";
    p2->phno = 388837;
    p2->rollno = 31;
    cout << " the p2 name is " << p2->name << endl;
    cout << " the p2 rollno is  " << p2->rollno << endl;
    cout << " the p2 phno is " << p2->phno << endl;

    //🎆 some more -implementation:
    //🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗
    struct Rectangle
    //👿📓-note-point: as yeh convention hai ki apnko hamesa structure , union , enum , class  k naam(identifier) ka first-letter capital(upper-case) hi rkhna chahiyeh. 👿📓
    {
        int length;
        int breadth;
    } R1 = {10, 4}, R2 = {5, 2};

    // struct Rectangle R3 = {2, 4};
    Rectangle R3 = {2, 4}; //👿📓-note-point: as C++ meh struct likhna mandatory nhi hai. apn likh bhi skteh hai or nhi bhi likhe toh bhi mastam-chalega but C-language-coding meh "struct"-likhna mandartory otherwise anpnko error milta hai.   👿📓

    cout << " the R3.length is " << R3.length << endl;
    cout << " the R3.breadth is " << R3.breadth << endl;

    // taking-pointer to structure
    Rectangle *pntr = &R3;
    cout << " the R3's length using pointer is  " << pntr->length << endl;
    cout << " the R3's length using pointer is  " << pntr->breadth << endl;

    Rectangle *pp1;
    pp1 = new Rectangle[4]; // thus toh esse krne se apnko ek array-return hota hai, mtlb array k first-node ka pointer return hota hai. thus toh phir apn uss allocated-array k aage wale nodes 2-tarah access kr skteh hai. 1: pp1[1] or 2:(pp1+1) as bcoz dono ka mtlb ek hi hota hai.
    pp1[0].breadth = 32;    // as yaha yeh pp1 ek-dam same it is array ki tarh hi hota hai.
    pp1[1].breadth = 02;    // yehh
    (pp1 + 1)->breadth = 300;
    pp1[6].breadth = 12;
    cout << " the pp1[0].breath is " << pp1[0].breadth << endl;
    cout << " the pp1[1].breath is " << pp1[1].breadth << endl;
    cout << " the pp1[6].breath is " << pp1[6].breadth << endl;
    // cout << " the pp1[6] is " << pp1[6] << endl;
    return 0;
}