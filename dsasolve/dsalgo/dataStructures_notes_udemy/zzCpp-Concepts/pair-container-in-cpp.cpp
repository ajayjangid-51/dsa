//🔥💲🍕 Pair-container:- 🍕💲🔥
// visit this for reference to Pair-container:- https://www.geeksforgeeks.org/pair-in-cpp-stl/
#include <iostream>
#include <utility>

using namespace std;
#define mp make_pair
int main()
{
    //💲🍕 declaring the pair-container:- mtlb allocating the pair-continer or pair-memory-strucuture or pair-data-structure in the memory. 🍕💲
    // pair< first-element-container's-datatype , second-element-container's-datatype> pair-name;
    // as like this:-
    pair<int, int> p1;
    // and this type of pair can also be there..
    pair<pair<int, char>, pair<char, char>> p2;
    // as q ki mtlb apni marzi hoti hai na ki apn parent-container meh konse containers rkhna chahtehh hai. and toh haan mtlb yeh apni hi marzi hoti hai apn parent-container meh kaisa koisa type ka container assign kr sktehh hai.

    //💲🍕 Diffrent ways of the declarationa and initialization of "pair" 🍕💲
    // 🌟1st-way:- (by accesing the elements one by one or mtlb by accesing the child-containers of parent-container one by one as like this:-)
    p1.first = 10;
    p1.second = 32;

    p2.first.first = 10;
    p2.first.second = 'c';
    p2.second.first = 'd';
    p2.second.second = '#';

    // 🌟2nd-way:- (intialization with declaration only...)
    pair<int, int> p4(34, 53);
    cout << "the p4's first and second is = " << p4.first << " " << p4.second << endl;
    // pair p5(10, 32); // as apn esseh nhi kr payenge mtlb apnko pair-template meh template-arguments dene hi hotehh hai. as like this:-
    pair<char, int> p5('d', 100);

    cout
        << "the p5's first and second is = " << p5.first << " " << p5.second << endl;

    //📔📔Note-point:- as apn intialization directly esseh coping se bhi kr sktehh hai but type-of-data same hone chahiyehh:-
    pair<char, int> p6(p5);
    cout << "the p6's first and second is = " << p6.first << " " << p6.second << endl;

    //📔📔Note-point:- as pair by-default "0"-zero se initialized hotehh hai...
    pair<int, int> p7;
    cout << "the p7's first and second is = " << p7.first << " " << p7.second << endl;
    // 🌟3rd-way:-
    //📔📔Note-point:- oo okay toh mtlb apn pair ko declare krne k baad usko intialize kr sktehh without mentioning its elements , as by simply using make_pari()-fn as like this:-
    pair<int, int> p10;
    p10 = make_pair(10, 20);

    pair<pair<int, int>, pair<int, char>> p11;
    p11 = make_pair(make_pair(10, 100), make_pair(300, 'D'));

    // as now aab se apn "make_pair" k liyeh "mp"-macro use krenge... jo ki phir preprocessing meh mp se make_pair meh hi resolve hojayehga.
    // using mp-macro as like this:-
    pair<pair<char, char>, pair<float, int>> p12;
    p12 = mp(mp('c', 'a'), mp(34.22, 32));
    cout << "the p12 is " << p12.first.first << " " << p12.first.second << " " << p12.second.first << " " << p12.second.second << endl;

    //💲🍕 "Swaping" as apn pairs ko swap bhi kr sktehh hai, mtlb ek-pair ki values dusre pair meh and dusre pair ki values first-pair meh (as but dono container ek-dam deto same hone chahiyehh as otherwise toh apn jantehh hi hai ki particular-type ki value uske particular container meh hi jati hai na, and agr voh viasa koi container hai hi nhi then vaha phir error show hogi na..): as like this:- 🍕💲
    pair<int, int> p3(100, 500);
    cout
        << "Before swaping the p1 and p3 with each other , the p1 is =  " << p1.first << " " << p1.second << endl;
    cout << "Before swaping the p1 and p3 with each other , the p2 is =  " << p3.first << " " << p3.second << endl;
    p1.swap(p3);
    cout << "after swaping the p1 with p3 with each other , the p1 is =  " << p1.first << " " << p1.second << endl;
    cout << "after swaping the p1 with p3 with each other , the p3 is =  " << p3.first << " " << p3.second << endl;

    return 0;
}
