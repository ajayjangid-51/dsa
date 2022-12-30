//

// https://www.geeksforgeeks.org/templates-cpp/
#include <iostream>
using namespace std;

template <typename T>

T fntemp1(T p1, T p2)
{
    return 32;
}
// AS toh aab esseh Compilation k time ess function()-meh provided datatype se yeh T replace ho jata hai and mtlb alag-alag jagah alag functions apne datatype k according-ban jateh hai. hi ban jateh hai thus toh template ka use krke apn all-datatypes k liyeh ek single function or class bana skteh hai. jo ki ek mastam ho jati hai as q ki esseh apna code-reapeat nhi hota thus mtlb repeat nhi hota mtlb apna code clean hoga , readable hoga thus toh easy to understable hoga.
// As tabhi badi badi companies bolti hai ki we want programmers that write clean-code mtlb where clean-code meh yahi cheeze aati jaise use of clasess , use of templates for functions and classes , use of namespace and etc..etc..
// X fntempx(T p1, int p2)
template <typename X>
X fntempx(X p1, int p2)
{
    return p1;
}
int main()
{
    cout << fntemp1<int>(3, 5) << endl;
    // 📔note-point: as yaha apnko function()-fn k call-syntax meh <>(angle-bracket) dikh rahe hai then mtlb ki sure yeh function() template-fn hai. and essehi same baat classes k liyeh hoti hai. mtlb voh sure template-class hogi. and enn angle-brackets meh datatype-keyword input hota hai and thus jo bhi apn enn angle-brackets(<>) meh datatype input krteh hai, then compilation k time typename uss inputed datatyep se replace ho jata hai. thus mtlb comilation k time yeh esseh functions in the global define ho jateh hai. thus toh apnko esseh har functions ko define nhi krna pdta and yahi "template" most and sexy use hai. as mtlb sirf apnko function ya class ki template-define krni hai , and then compilation k time no.-of-inputed-datatypes k according voh utneh no.-of-functions or class defination ban jati hai. thus toh esseh krne se apna bohat sara time bachta hai.
    // 💡💡: as apn ennka function-overloading meh kr skteh hai , jinmeh apn sirf parameters ka datatype-diff rkhteh hai na ki no.of parameters diff rkhteh hai.
    cout << fntempx<float>(3, 5) << endl;
    // 📔: as apn template-specialization ka use krke particular datatype k liyeh diff-code bhi define kr skteh hai.
    // polymorphism mtlb ek naam alag-alag cheeze hona. na ki ek cheeze ka alag-alag naam hona.

    return 0;
}