/* 🌟 AS YAHA pe refrencing k bareh meh dekhenge ki mtlb refrencing kya hoti hai mtlb kis cheez ko apn refrencing khteh hai. and then apn referencing krna bhi dekhenge mtlb referencing kaise ki jati hai.. 🌟 */

//🎆 -implementation:
//🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗

#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    cout << " the value of a or the value-stored in a-container is " << a << endl;
    int &r = a;
    cout << " the value of r or mtlb the value-stored in a r-container which is actually is a-container only " << r << endl;
    int b = 10;
    r = b; //
    //👿📓-note-point: as apnne r = b kiya hai mtlb apnne actually a = b kiya hai. and eska mtlb yeh nhi hai ki apnne r ko b se assign kr diya mtlb esee nhi hai ki "b" ka alias "r" hai. as reference ka intialization or assination ek baar hi hota hai, phir baad meh toh voh phir hamesa a ki tarah hi act krta hai.. mtlb phir hamesa k liyeh "r" "a" hi hai mtlb uss container k 2-names hai: {"a" and "b"} , as isiliy apnko reference ko simultaneously declare and intialize krna hota hai. 👿📓
    //👿📓-note-point: as toh mtlb reference memory consume nhi krta hai, and yeh obvious hai q ki reference mtlb container ka alias-name. mtlb apn referecing se conatiner ko multipel name de skteh hai.  👿📓

    cout << a << endl;
    cout << r << endl;
    r++;
    cout << "a is " << a << endl;
    cout << "r is " << r << endl;
    a++;
    cout << "r is " << r << endl;
    return 0;
}