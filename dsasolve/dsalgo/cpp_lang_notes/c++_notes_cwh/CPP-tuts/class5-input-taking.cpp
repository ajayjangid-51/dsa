// YAHA pe apn i/o k bareh meh dekhenge mtlb user se input lena and user ko output dena dekhenge:
// AS thus C++ language meh apn basic i/o C++ ki library's module(or header-file) named "iostream" se krteh hai mtlb ess header-file k functions ka use krteh hai.

// 🔔🔔"iostream (mtlb input output stream where yaha Stream ka mtlb "sequence of bytes" for input and output")
// thus eske according two-types ki streams hoti hai:
// 1.input-stream (mtlb sequence of bytes mtlb ek line of memory-parts hoti hai from inputing-device to ram-memory mtlb phle data inputing-device ki kuch koi memory meh store hota hai and phir kisi or memory meh transfer hoke store hota and then atlast main-memory meh transfer hoke store ho jata hai , thus ess sequence or line of memory-parts ko simply stream-bolteh hai.)

// 2.Output-stream (as yeh stream mtlb line-of-memory-parts meh data store hone ka flow from main-memory toh outputing-device(jaise monitor) hota hai. thus esi line-of-memory-parts mtlb stream jismeh data store hone ka flow from main-memory toh outputing-device hota hai uss line-of-memory-parts for storing data mtlb Stream ko "output stream" bolteh hai.)

// Thus now aab apn Program banayenge(mtlb likhenge) in which user kuch input dega and phir in the return usseh output bhi milega.
#include <iostream>
using namespace std;

int num1, num2, num3;
int main()
{

    cout << "enter the num1";
    // 📓notice: as yaha cout k aage "<<" is an operator in C++ programming jiska naam hai "insertion(<<)"-operator and kuch operation krta hai , kuch kaam krta hai and voh kaam hai ki apne right-operand ko apne left-operand meh insert kr deta hai.
    cin >> num1;
    // 📓notice: as yaha cin k aage ">>" is an operator in C++ programming jiska naam hai "extraction(>>) mtlb khichlena "-operator and kuch operation krta hai , kuch kaam krta hai and voh kaam hai ki apne right-side operand meh left-side operand ki value khich leta hai mtlb right-side-operand meh left-side wali value store kr deta hai.

    //as thus toh aab apnko yeh clear hogya ki apn insertion and extraction -Operators ka kya use hai.
    // 2 >> num3;
    // cout << num3;

    cout
        << "enter the num2";
    cin >> num2;

    cout << "the addition of num1 and num2 is " << num1 + num2 << "meters";

    return 0;
}