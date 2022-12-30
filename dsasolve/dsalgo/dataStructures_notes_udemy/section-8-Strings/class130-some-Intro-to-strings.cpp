//🔥💲🍕 AS Now YAHA pe apn "Strings" k bareh meh dekhenge.... 🍕💲🔥
// As toh String k Introductions meh apn yeh-yeh baateh dekhenge... jo ki aage Strings pe kaam krne k liyeh kafi important matter karegi jaise string k characters ko jo "ASCII"-code provided or mtlb pre-defaultly assigned hai voh kya-kya hai, then phir strings ko kaise declare krtehh hai mtlb string ko memory meh kaise allocated krtehh hai. and then strings ka intialization , and then strings ko kaise input-output krna hota hai. and some kuch orr other important baateh.

// As toh sbse phle apn :
//  1.character-set or ASCii-codes k bareh meh dekhnege.Phir then apn
//  2.character-array k bareh meh dekhenge.. Then
//  3.string k bareh meh dekhnege.And then
//  4.creating-string mtlb string ko kaise create(declare and intialize) krtehh hai..voh dekhnege...

// 🌟1. Where sbse phle bole toh character-set mtlb characters-ka-set mtlb voh sab characters (mtlb alfabets ,special-symbols/characters) jo ki  Programming meh supported hai, where suppoorted ka mtlb apn unko dekh skteh hai, unko kaam meh le sktehh hai..etc..etc
// 🌟 ASCii mtlb "American-standard-code-information-interchange" 🌟
// As yeh ascii-codes sirf english characters k liyeh hi hoteh hai...

// And jaise hindi , Chinese etc.etc mtlb sabhi-languages k liyeh phir "unicodes-codes" hoteh hai.. jo ki apn baad meh kabhi aage dekhenge..
// toh actual meh "ASCII"-codes are the sub-set of "Unicodes"

// Toh allover baat yeh hai ki jo apna computer hai usmeh information 0 - 1 form meh store hoti hai..mtlb jaise numbers 10, 15, 34 etc..yeh sab bhi binary - form meh mtlb 0 - 1 meh store hotehh hai..and enn decimal - numbers ko binary - form meh kisi formulae k according krke phir enko 0 - 1 form mtlb binary - form meh store kiya jata hai..thus toh same essi tarah characters bhi binary - form mtlb 0 - 1 form meh hi store hotehh hai..but characters ko binary - form meh convert krne ka koi tarika mtlb koi formula nhi hai..thus toh phir particular - character k liyeh ek particular binary - form set kr di gayi hai..and unn setted - binary - forms ko generally ASCii - form ko AScii - codes boltehh hai.

// Jaise for "A" k liyeh binary-code or ascii-code is 01000001 , as but ascii-code is actually meh decimal-form of that setted-binary-code hoti hai thus toh mtlb ascii-code of "A" is 65.

// And so on...baki sab characters ka ascii-code assigned hai mtlb default-setted hai... Jo ki niche mentioned-list meh hai...
// 🔗 class180-pic1 🔗

// As toh simply apn esseh bol sktehh hai ki apne keyboard meh jitne buttons hai kaam-kaam vohi apna character-set hai. And unn sbhi characters k liyeh unke sbke ascii-codes assigned hai , pre-setted hai.
// Thus toh inshort ascii-codes are from 0 to 127, mtlb there are total 128 ascii-codes are assigned mtlb there arr total 128-diff-characters are supported in Programming.. and 1-character ko store krne k liyeh apnko 7-bits chahiyeh toh mtlb 1-char k liyeh phir directly 1-byte space hi allocate hoti hai...
// 🔗 class180-pic2 🔗

//💲🍕 🔥2nd:- declaration and initialisation of "char" 🍕💲
// Now character-array:- means ki characters-ka-array mtlb array-of-characters

// Now suppose ki appne array-of-character of size 10 meh { j , o , h , n} store kiya toh mtlb yaha
//  {j, o,h,n ,0,0,0,0,0,0}  toh apna array hai and but yeh {j,o,h,n} string hai mtlb koi bhi word,phrase ,sentence is a string . Now toh apnko pata kaise lagega ki koi character-array actual meh string hai mtlb usmeh string hai . Thus toh eske liyeh c/c++ meh null-character ka use kiya jata hai for denoting that it is a string and for also denoting-ending-of-string...
// 🔗 pic3 🔗

// 🔥 Now declaration and initialisation of strings..
// 🔗 pic4 🔗

// 🔥 NOw scanning and printing the string...
// 🔗 pic5 🔗

// and 1-📔📔Note-point ki :- jab apn string ko as array-of-characters declare krtehh hai , then vaha apn "\0 (null-character)" ka use krtehh hai for denoting that this is termination of the string,as mtlb ki string yaha tk hi hai aage array meh kuch koi string nhi hai. as now ek question arise hota hai ki apn yeh "null-character" q use kr rahe hai for denoting the termination of the string, as apn directly bhi toh esseh denote kr sktehh hai ki where first-zero comes in the array that is the termination of the string, toh mtlb apnko koi other "null-character"  ki jarurat hi nhi hogi, as but actual meh string meh "zero" bhi toh ho sktaa hai na, thus toh agr apn "zer0" ko as termination-point maan lenge.. tab toh vaha phir galat hoga na, thus isiliy phir "null-character" ko introduce kiya gaya and "null-character" ko hi apn as a string-denotion bhi use kr sktehh hai. as mtlb ki kisi array meh "null-character" hai then surely voh usmeh string hi hai , mtlb surely voh "string" hi hai.

// thus toh allover simply boleh toh "string" is "character-array--with-null-character-at-the-ending-of string" , 🔔 and notice-point yeh hai ki yaha size-of-the-character-array koi matter nhi hai, mtlb phle as like vector ki tarah ek large vector<char> allocate hojayega and then usmeh sequence-of-characters mtlb string store hoti rhegi with the the "null-character" at the end-of-string.  and agr static-character-array k liyeh boleh toh vaha size matter karegi , as vase static-character-array meh toh "null-character" ki vase jarurat bhi nhi hai, as q ki voh toh vaha uske liyeh toh clear hi hai na ki size-of-character-array is only the size-of-string , As BUT yeh "null-character" ko apnne convention-priciple le liya hai , thus isiliy phir har jagah "null-character" ka use krtehh ki takki kahi koi confusion na rahe.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //💲🍕 1.Declaration and Initialization of string:- 🍕💲

    //💲🍕 2.taking string as a input and print the strings 🍕💲

    return 0;
}

//💲🍕 As apnne string ko declare,intialize , input , output and gets krna toh dekh hi liya... 🍕💲
// 🔥🔥okay toh now aab apn strings-pe diff-diff Common operations dekhenge... and as apn enheh sikh lenge .. then mtlb phir apn koi bhi complex-operations easily krlenge...  🔥🔥
