// YAHA pe apn Vectors k bareh meh dekhenge:
// 🔥Vectors🔥
// As sbse phle yeh dynamic-Array and Dynamically-allocated-array ko dekhenge:
// Dynamic-array mtlb voh array jiski size dynamically change ho skti hai ya mtlb hoti hai.

// Dynamically-allocated-array:
//  where dynamic mtlb at the program-run-time pe. Mtlb compilation time pe nahii , as program run-time pe . As compilation time pe toh pata hi nhi ki array ki size kitni krni hai. And array-ki size toh running-time pe hi input ki jayegi,thus mtlb phir run-time pe hi uss inputed-size ka array-allocate hoga mtlb array-type-memory-structure allocate hoga. thus isi cheez ko dynamic-allocation  bola jata hai. As dynamic-allocation se bas thoda run-time pe farak pdta hai. But dynamic-allocation se memory acche se manage hoti hai mtlb space-complexity acchi sahi hoti hai..

// 📓:note-point1: Dynamic-array and dynamically-allocated-array dono alg cheez hai.
// As dynamic-array mtlb voh array jiski size dynamically mtlb run-time pe increase or decrease ho jati hai as per insertion or deletion of element at run-time from that array.
// And dynamically-allocated-array mtlb voh array jo ki dynamically allocate huaa hai.

// 🎆 And voh dynamic-Array ko hi apnlog simply 🔥vector🔥 khteh hai..
// As Vector dynamic-Array hai toh mtlb eski construction regular array se toh thodi toh alg hoga hi na ya phir pura hi alag ho skti hai.
// As mtlb vector ki construction puri hi alag nhi hai from the regular-array , (construction boleh toh in the sense of memory-structure-design ):- jaise vector meh bhi contiguous-memory-parts mtlb line-wise-memory-parts hoteh hai jinmeh data store hota hai... As toh mtlb eski vajah se apn iterators se enn sab elements ko ek saat access and traverse kr skteh hai..
// As toh apnne phle dekha ki Vector ek dynamic-array jaisa hai, mtlb apn jab data add pr remove krenge then ess vector(array) ki size increase or decrease ho jayegi..
// Thus now apn kuch eske memory - structure - design and working k bareh meh dekhenge ki jab bhi apn vector(mtlb array hi jo bas dynamic hai) meh element(mtlb data) add krenge then voh element vector k last meh add hota hai mtlb vector - memory - strucuture - k last meh ek new memory - part add hota hai... Toh eski vajah ess kaam krne ki jo time - complexity hoti hai voh differential hoti hai..as q ki kabhi kabhar pura array bhi add krna ho skta hai..
//And last-element ko remove krne meh time-complexity constant hai mtlb ess kaam meh time-constant lgta hai.. As bcoz yaha resizing of memory-parts nhi kiya jata , mtlb jitne hai utne memory-parts rkhe jateh hai..

// And agr starting ya middle meh insert ya remove hove toh vaha phir linear-time lgta hai...
// Thus toh esko dekhteh toh phir inserting from end hi hona sahi rheta hai..and thus isiliy vector meh essehi hona decide kiya and esehi hota hai..

// 🔥Now aab apn Vector k liyeh dedicated jo Functions banayeh huee hai by-default se voh apn dekhenge...as q ki jab bhi apn Vector allocate krteh hai then vaha uss allocation meh yeh functions bhi allocate hoteh hai. thus toh apn enka use krenge and pura faaydaa uthayenge...👍🏻🤟🏼

/*
🔥Iterators-Functions🔥:
// As iterators apn Functions ko hi bolteh jo Functions traverse krteh hai, where traverse ka mtlb ghumna , phirna mtlb apn kisi Array , Vector k elements ko traverse mtlb  kr skteh hai.
And iterators-object voh hota hai jismeh Iterator-Functions hoteh hai.

👍1:begin() ( as ess Iterator-Functions se apn Vector k first element ko traverse kr skteh hai mtlb uspe ja skteh hai, uspe ghum skteh hai , usko dekh skteh hai. And mtlb coding ki terms meh boleh toh yeh function apnko Vector ka first-element ka pointer mtlb address return krta hai. mtlb uss element ka address mtlb uske conatainer-part ka address return karega..)

👍2: end() ( ess Function ki retutn-value hoti hai Vector ka current-last element)
👍3:rbegin()
👍4:rsend()
👍5:cbegin()
👍6:cend()
👍7:crbegin()
👍8:crend()
*/

/* 🔥Capacity-Functions 🔥
// Capacity-Functions voh unn functions ko bolteh hai jo Vector ya Array ki capacity batateh haii...

👍🏻1: size() ( as yeh function vector meh present no.of elements return krta hai.. 
👍🏻2: empty() ( yeh true or false return krta hai on the basis ki vector empty hai k nhi hai.

📔notepoint: as toh vector meh elements insertion and deletion from the Vector-End se hi hota hai.. As toh apnko ess baat ko acche se dhyn meh rkhna hai...
*/

/* 🔥Modifiers Function:🔥
As modifier-functions se apn vector ko modify kr skteh hai mtlb vector meh apn elements insert, delete and many more cheeze...
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // std::vector<int> vecarr;
    vector<int> varr;
    // as ess tarah vector declare kiya jata hai , mtlb esseh ess syntax se memory meh vector-memory-structure allocate ho jata hai.

    // Vector-dedicated-Functions:
    // 🌟 Iterator-functions 🌟
    for (int i = 1; i <= 5; ++i)
    {
        varr.push_back(i * 3);
        // as vector-class k functions apnko vs-suggestion meh hi show ho jateh hai.
    }
    cout << varr[2] + varr[1] << endl;
    cout << *(varr.begin()) << endl;
    cout << *(varr.end()) << endl; // (as yeh end()-fn apnko vector ki jo capacity-size hoti hai voh uske according end-element ki value k container ka address return krta hai.)
    // int a = varr.end();
    cout << varr.end() << endl;
    cout << "rbegin" << *(varr.rbegin()) << endl; // (as yeh rbegin()-fn vector ki filled size k first-element from last ka address return-krta hai.)
    cout << *(varr.rend()) << endl;               // (and yeh rend()-fn ka use apn vector ki capacity-size jo ki filled nhi hai from the left-side and right-side k element ko janne k liyeh use hota hai, mtlb yeh rend()-fn capacity-sized of vector k first-element k container ka address return krta hai.)

    cout << "cbegin-fn " << *(varr.cbegin() + 1) << endl;
    cout << "cbegin-fn " << *(varr.cbegin() + 2) << endl;

    for (auto i = varr.begin(); i != varr.end(); i++)
    // for (auto i = varr.begin(); i <= *(varr.rbegin()); i++)
    // for (int *i = varr.begin(); i <= &19; i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;
    // auto i = varr.begin();
    // cout << "the value of auto i is " << *(i);
    // 🌟 Capacity-functions 🌟
    cout << varr.size() << endl;
    cout << varr.capacity() << endl;
    cout << varr.max_size() << endl;
    cout << varr.empty() << endl;
    return 0;
}
// Links:
// https://www.geeksforgeeks.org/vector-in-cpp-stl/
// https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/