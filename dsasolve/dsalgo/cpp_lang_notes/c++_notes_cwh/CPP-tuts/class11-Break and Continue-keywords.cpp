//YAHA pe apn Break and Continue "execution-cursor-dedicated-Keywords" k bareh meh dekhenge as mtlb yeh dekhenge ki execution-cursor enn keywords ko dekh kr kaise behave krta hai:

// "Execution-cursor" Concept:- (Execution-cursor ek imamaginary-concept jo ki coding krne meh apni bohat helpful , bcoz esseh apn yeh samaj jateh hai ki apna written code-kaise execute hoga mtlb kaise flow.)
// 🌟 thus "execution-cusor" 🌟 as same like as jaise apna-writing-cursor hota hai mtlb jaise jaha yeh hota hai vaha se hi type hona chalu ho jata hai , as same like this jaha pe execution-cursor hota hai vahi sehi code execute hona chaulu ho jata hai. 🌟

// 🌟 Break-Keyword:
// As Break-Keyword ka use sirf and only switch-case-blocks and Loop-Blocks meh hota hai. thus toh as "Break" keyword ko dekh kr execution-cursor apni jagah se directly switch-case-Block , Loop-Block k bahar jump kr jata hai respectively. thus toh mtlb phir voh switch-case-block or Loop execute nhi hoteh hai and unke blocks k aage wala code execute ho jata hai.
// as now apn "Break-keyword" ka use tab krteh hai jab apnko kisi reason ki vajah se ya koi kisi condition pe Switch-case-Block or LOOp-block ko aage execute hone se stop krna ho.

// 🌟 Continue-Keyword:
// AS Continue-Keyword ka mostly use sirf Loop-block meh hota hai , thus as "Continue" keyword ko dekh kr execution-cursor apni current-position se Loop-block-k-starting meh jump kr jata hai thus , mtlb Loop-block vapis se execute hona chalu ho jata hai , mtlb jaise loop-condition check hoke work-box exeucute hona chalu ho jata hai.
// as now apn "Continue-keyword" ka use tab krteh hai jab apnko apnko kisi reason or kisi-Condition pe Loop ko direct vapis starting-se run krvana ho mtlb LOOP-Block k baki niche wale code ko execute nhi krvana ho tab.

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    // 1.Break-Keyword: and
    // 2.Continue-Keyword:

    // switch (int b = 21)
    switch (a)
    {
    case 5:
        cout << "the value of a is 5" << endl;
        cout << "good brother " << endl;
        // break;
        // as apnne yaha "break"-keyword ek reson ki vajah se use kiya hai q ki switch-case meh firstly koi bhi case true hone k baad baki niche wale sare case execute ho jateh hai, thus ess reason ki vajah se apn phir break-keyword ka use kr leteh hai.
    case 6:
        cout << "the value of a  is 6" << endl;
        // continue; as continue-keyword sirf and only Loop- meh use krteh hai.

    case 7:
        cout << "the value of a is 7" << endl;
    }

    for (int c = 2; c < 10; c++)
    {
        cout << c << endl;
        if (c == 5)
        {
            cout << c;
            continue; // as toh aab yeh niche wala code-execute nhi hoga kabi bhi , agr yeh c==5 wali condition true hoke ess condition ka work-box execute hoga tab.
            cout << " sorry the value of c is now became 5 , so we are exiting the Loop-exeuction; means further 6 , 7 , 8 , etcc .. will not be printed or executed";
            break;
        }
        if (c == 6)
        {
            cout << c << endl;
            cout << "good boy " << c << endl;
            continue;
            cout << "bad boy" << endl;
        }
        if (c == 7)
        {
            cout << c << endl;
            cout << "good boy " << c << endl;
            // continue;
            cout << "bad boy" << endl;
        }
        if (c == 8)
        {
            cout << c << endl;
            cout << "good boy" << c << endl;
            continue;
            cout << "bad boy" << endl;
        }
    }
    return 0;
}
// thus now aab apn acche-acche C++ -programs banyenge.