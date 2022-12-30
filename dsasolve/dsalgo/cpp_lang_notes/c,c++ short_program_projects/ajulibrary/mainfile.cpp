#include "../ajulibrary/arithematic.h"
//👿📓-note-point: as C++ meh "Importing"-file aseh ess tarah hi hoti hai.. yeh upar wali line and and niche wali cheez in multi-line comment meh dono cheeze sameh hi hai, and actually boeh toh mtlb yeh upar-wali line ess tarah resolve hoti hai..at the compilation time.. 👿📓
/*
    #include <iostream>
using namespace std;

int sum(int p1, int p2)
{
    return p1 + p2;
}
int sub(int p1, int p2)
{
    return p1 + p2;
}

*/
//📓-note-point: As javascript meh Importing kuch alg concept se , alg idea se hoti hai.

// .(dot)lagane se apna apna current-file k current- folder meh nhi aateh,
// ..(double - dot) lagane se apne apni current - file k back - folder meh chale jateh hai.
// as .(dot) and without-dots se apn  c/Mingw/inclue folder meh hoteh hai , by default se or ya c/Mingw/lib/gcc/include folder meh hoteh hai.. or basically bolteh toh simply Mingw-folder meh hoteh hai.. by-default se mtlb apnko kuch . , .. or "" nahi lagana hota hai..

// #include <../ajulibrary/iamaju>
// mtlb exactly same it imported file's-content fetch ho jata hai..

// #include <../ajulibrary/iam>   // this will show error..
//👿📓-note-point: as toh C++ meh apn sirf .h-extensions Ya .cpp wali files ko hi include kr skteh hai.. and one-more ki apn no-null-extensions wali file ko hi include kr skteh hai but only at one-condition ki voh null-extension-file mingw-folder meh present honi chahiyeh. tab apn usseh use kr skteh hai.. and baki sab  extension-wali files ko bhi apn essi condition pe use mtlb include kr sktehh... 👿📓
//📓-note-point: as include and import meh thoda farak hai.. jaise include-krne ka mtlb ki puri-file ka as-it-is fetch hona and import ka mtlb hota hai ki apn file ko nhi file-k-andar exported cheezo ko kisi-container meh get kr rahe hai.. toh esseh including and importing diff tarah se behave krta hai..

// #include <iamaju>
// #include <iamajumm> // as this null-extension file is not present in at default-Mingw-folder.
// #include <header.aju>
// #include <../ajulibrary/dheader.aju> // not -present in default-folder => Mingw-folder
#include <dheader.aju> // yes-working or includable bcoz it is present in at default-folder => Mingw-folder

int main()
{
    cout << " the sum of 4 and 5 is " << sum(4, 1) << endl;
    // sumi()
    // cout << sumi(2, 4);
    cout << " the value of sexy-boy is " << sexyboy << endl;
    return 0;
}