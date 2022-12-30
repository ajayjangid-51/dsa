/* 🌟 As Now YAHA pe apn Structures k bareh meh dekhenge: 🌟 */
// AS initially phle toh structure simply ek keyword hi hai. as mtlb jisseh apn ya ki madad se user-defined-datatype(user-defined type of data(mtlb datums)) mtlb apne khud k data-type mtlb apni khud ka memroy-structure bana skteh hai. and thus after all uss overall memory-structure ko apn simply "structure" bolteh hai, thus toh aabse apnko Structure ka mtlb directly yahi samajna hai.

// 🎆 As now aab apn Structure ko define krna mtlb design krna dekhenge: , then structure-memory-structure ki size findout krna , and then defined-structure ko declare krna mtlb memory meh allocate krna dekhenge and then uss structure-memory-structure k member mtlb nodes ko access krna dekhenge:  🎆

// and physically comman-language meh structure ko simply collection of dissimilar data-items under one name bolteh. but jo actual meh structure ka mtlb hota hai voh apnne yaha upar meh dekha hai. as but apnko comman-language meh eska meaning dhyn rkhna hai, bcoz idea , approach toh hamesa common-language meh hi aati hai , lgti hai.

// 🎆1. Defining Structure: 🎆
// As ess tarah "struct" keyword se memory-structure define mtlb design kiya jata hai.
// struct Rectangle
// {
//     int length;
//     int breadth;
// };
//📓-note-point: as defination of strucuture or any thing memory-consume nhi krti hai.

// 🎆2. knowing the size of structure 🎆
// as apn structure-memory-structure ki size uske nodes-size ka sumation hi hota hai. and or ya apn simply and directly sizeof()-opeator ka use krke bhi findout- kr skteh hai. as but apn janteh hai ki structure ki size kya, kisseh hoti hai.

// 🎆3. declaring the defined-structure: 🎆
// struct Rectangle r1; // as toh esseh apnne memory meh ek memory-structure allocate kr diya hai, and ess allocated-memory-structure or mtlb ess overall-parent-container ka naam hai "r1".

// struct Rectangle r2 = {3, 5} // as apn ess tarah structure ko declare and initialize simultaneously kr skteh hai.

//👿📓-note-point: As apn directly structure ka array bhi declare kr skteh hai, jaise agr apnko vase bohat sare data chahiyeh toh jaise students k liyeh, employess k liyeh etcc.etcc as like this: 👿📓
// strut Rectangle r[10];

// 🎆4. Accessing the structure-memorystructure's node: 🎆
//   r2.length;  // as toh apn kisi bhi memory-structure k member-nodes ko access krne k liyeh dot(.)-operator ka use krteh hai.
//   r2.breadth;

// 🎆 NOw apn Structures ka use dekhenge in real-life jaise: 🎆
// for complex-numbers:
// struct Complex
// {
//     int real;
//     int img;
// };
// as toh apn aab apn apne complex-numbers easily bana skteh hai.

// struct Student
// {
//     int roll;
//     char name[25];
//     char dept[10];
//     char addrs[50];
// }
// as toh aab apn har particular-student ki information ek name k under mtlb ek container k andar store kr skteh hai.

// employ-structure
// book-structure ( useful for e-commerce-websites)
//👿📓-note-point: As toh Strucuture ka use mostly and mainly ek parent-category banane k liyeh hota hai. 👿📓

// playing-card:
/*
    a Card is defined by 3-properties:
    face, shape , color

*/
// struct PlayingCard
// {
//     int face;
//     int shape;
//     int color;
// }

// struct PlayingCard c[52];
// c[0].face = 0;  // ace(ekka)
// c[0].shape = 3; // heart
// c[0].color = 1; // mtlb red

// or as ya apn simultaneously declare and initialize kr skteh hai.
//c[0] = {0, 3, 1}; //📓-note-point: as apnko yeh dhyn rkhna hai esseh simultaneously meh value serial-wise assign hoti hai.

// as as apn structure-array ko bhi simultaneously declare and initialize kr skteh hai as like this:
//struct PlayingCard c[52] = {{0, 3, 1}, {4, 2, 0}, {2, 1, 1}....} //

// pointer to structure and paramter-as structure ko apn aage dekhenge::

//🎆 structure-implementation with examples:
//🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗
#include <iostream>
using namespace std;

struct Rectangle
{
    int length; // esseh toh 4-bytes consume hogi mtlb 4-bytes allocate hogi. or mtlb starting meh jo jitni memory allocate hoti hai phir baad meh 2-nd time utni hi memory allocate hoti hai, and and jab tk voh memory consume nhi hoti tab tk vohi utni memory hi allocated rhti hai, and baad meh 3rd-time bhi utni memory hi allocate hoti hai..as jitni first-time meh huyeh thi mtlb ki gayi thi. or jitni maximum-number of memory-node allocate hota utni hi memory har baar allocate hoti hai. and later-on phir yeh extra memory discard ho jati hai disallocate ho jati hai.
    //👿📓-note-point: AS ess memory-allotment or memory-arrangement ko padding-arragemnt or padding-allocation bolteh hai. 👿📓
    long long breadth; // and then continuely eske liyeh bhi 4-bytes allocate hogi but usmeh se consume toh ek hi hogi. but yeh remaining space by only other "char" se hi full-fill ho jati hai.
    // char c;
    // char d;
    // char e;
    // char f;
    // char g;
    // };
} r1 = {32, 1}, r2 = {5, 3}, r3; //📓-note-point: as agr apnko structure ko as a global meh declare krna hai then voh easily and direclty structure-defination k saat meh bhi kr skteh hai ya alg se bhi kr skteh hai.. and for declaring structure in the local then toh vaha toh apnko structure ko alg se declare krna hoga as like this:
// struct Rectangle r11 , r22;
//📓2-note-point: as kisi bhi variable ko or mtlb memory-structure ko globally mtlb global-part meh allocate krna recommned nhi hai until and unless it is very important as bcoz esseh time complexity kafi impact hoti hai, as q ki global-variables through the program memory meh allocated rhteh hai.
int main()
{
    struct Rectangle rect1, rect2 = {43, 41}; // simultaneous declaration and initialization
    r1.breadth;
    // memory-part.uske-andar-sub-memory-part // ko kisi bhi ko hamesa apn esseh ess tarah se access kr skteh hai and hamesa esseh hi krrteh hai mtlb simply by using (dot)-operator.
    r1.length;
    rect1 = {3, 5};
    cout << " the value rect1's length and breadth respectively is " << rect1.length << rect1.breadth << endl;
    cout << " the value rect2's length and breadth respectively is " << rect2.length << rect2.breadth << endl;
    cout << " the size is " << sizeof(rect1) << endl;
    cout << " the size is " << sizeof(rect2) << endl;
    cout << " the size of r3 is " << sizeof(r3) << endl;
    cout << " the size of long long is " << sizeof(long long) << endl;

    return 0;
}
