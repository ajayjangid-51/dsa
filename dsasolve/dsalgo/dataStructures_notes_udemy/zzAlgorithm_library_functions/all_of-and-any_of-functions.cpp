#include <iostream>
#include <algorithm>
#include <vector>

#define pb push_back
#define popb pop_back
using namespace std;
#define fo(i, start, end) for (int i = start; i < end; i++)
#define debug(x) cout << #x << " = " << x << endl;

typedef vector<int> vi;

// visit this:-https://www.geeksforgeeks.org/algorithms-library-c-stl/

void Printvec(vi vec)
{
    // fo(i, vec.begin(), vec.end()) cout << vec[i] << " ";
    int size = vec.size();
    fo(i, 0, size)
    {

        cout << vec[i] << " ";
    }
    cout << endl;
}
int main()
{
    vi varr = {4, 6, 3, 8, 32, 21, 32, 3, 32};

    //👿📔imp-Note-point:-Manupilating-function mtlb voh functions jo ki input data ko actual meh change kr rhe hai mtlb uss data meh kuch updation , upgradation kr rhe hai, then that functions are called "manipulating-functions" .

    // And voh "non-manipulating-fn" mtlb voh data meh kuch manipulation nhi krta hai..bas simply ussko jaach k apni kaam ki value return kr detehh hai..
    // As manipulating-fn ko apn modifying-fn or updating-fn etc bhi bol sktehh hai.. 👿📔

    //🔥💲🍕 1. NON-modifying-Sequencial-functions or NON-manupulating-function:- (where Sequencial-function mtlb yeh sequence meh chltehh hai mtlb jo apn lower and higher value pass krtehh hai then yeh uss lower ko +1 krke krke higher-value pe puchta hai, thus toh simply khne ka mtlb hai ki yeh Functions sirf array, sub-array pe hi kaam krtehh hai.) 🍕💲🔥

    //💲🍕 1. all_of()-function:- 🍕💲
    // as ess function ka apn tab krteh hai , jab apnko sare elements k liyeh koi kuch conditions-check krni ho, ki kya voh sare elements enn conditiosn ko follow kr rahe hai ya nhi. then vaha pe simply "all_of"-function ka use krenge.. as q ki yeh function yehi kaam krta hai.
    cout << "all_of()-function" << endl;
    bool a = all_of(varr.begin(), varr.end(), [](int i) { return i > 1; }); // (sare k sare )
    // bool a = all_of( staring-address , ending-address , [](typeof-data-in-addresed-container i) { return condtion-to-check; });
    // as "cpp" meh parameter meh function-defination pass hone defination essehi likhi jati hai. mtlb voh as same as actual-function-defination ki tarah hi likha jata hai, but bas vaha apn uss function ka naam nhi likhteh and uski return-value specify nhi krtehh mtlb nhi ki jati hai, mtlb as simply uski jagah "[]" open-close-square-brackets lagayeh jatehh hai.

    a ? cout << "good" : cout << "no soorry";
    bool b = all_of(varr.begin(), varr.end(), [](int i) { i+= 2;  return i > 1; });
    b ? cout << " b is good" : cout << "b is no soorry";

    //💲🍕 2.any_of()-function:- 🍕💲
    // as ess function ka use apn tab krtehh hai jab apnko array-elements meh se yeh check krna ho ki kya koi kam-kam ek-element hai jo ess condition ko follow krta ho. as then vaha pe apn simply any_of()-fn ka use krenge...
    cout << "any_of()-function" << endl;
    bool c = any_of(varr.begin(), varr.end(), [](int i) { return i > 10; }); // (koi toh ek )
    c ? cout << endl
             << "okay all good atleast-one of the element is greater than 10 "
      : cout << "no atleast one-element is also not greater than 10";

    //💲🍕 3.none_of()-function:- 🍕💲
    // as none_of()-function ka use apn tab krenge.. jab apnko kisi condition k liyeh confirm krna ho ki koi bhi array-elements ess condition ko follow toh nhi krtehh na.
    cout << "none_of()-function" << endl;
    bool d = none_of(varr.begin(), varr.end(), [](int i) { return i > 100; }); //( koi bhi nhi)
    d ? cout << "ohhoo this means ki varr meh koi bhi element 100 se greater nhi hai" << endl : cout << "no sorry this means ki varr meh koi kaam se kaam toh ek element hai jo ki 100 se greater hai." << endl;

    //💲🍕 4.count()-function:- 🍕💲
    cout << "the count of 32 in the varr-array is = " << count(varr.begin(), varr.end(), 32) << endl;
    cout << "the count of 21 in the varr-array is = " << count(varr.begin(), varr.end(), 21) << endl;
    cout << "the count of 3 in the varr-array is = " << count(varr.begin(), varr.end(), 3) << endl;
    //📔📔Note-point:- as apn enn sabhi sequence-functions ko sequence-containers pe use kr sktehh hai mtlb apn enko array , string and vectors pe use kr sktehh hai.

    //💲🍕 5.find()-function:- 🍕💲
    // as yeh function "sequence" meh jo value match hoti hai, uska address(mtlb iterator mtlb pointer) return krta hai, thus toh apn jab esski return-value ko dereference then tab toh apnko mtlb uss address pe value voh milegi , mtlb simply vohi milegi jo apnne search ki hai , and mtlb voh obvious hi hai. now agr apnko uss element ki index ko find out krna hai , then voh apn simply pointer-arithematic krke find-out krlenge....
    // vi::iterator itof10 = find(varr.begin(), varr.end(), 6);
    // or
    auto itof10 = find(varr.begin(), varr.end(), 6);
    debug(itof10 - varr.begin());
    // auto itof10 = find(varr.begin(), varr.end(), 66);
    // and agr voh element present nhi hai. then yeh "find()"-fn simply last-element ka address return krta hai.

    //🔥💲🍕 3.Partition-Operation-Functions:- 🍕💲🔥

    //🔥💲🍕 5. Merge-Functions and Merge-SET-Function 🍕💲🔥
    // (means that SEt-functions are done by Merging-techinques):- (for using these functions we should have sorted-list mtlb these funcitons are operable on "Sorted-list"):-

    //🔥💲🍕 6.Heap-Operation-functions:- 🍕💲🔥

    //🔥💲🍕 7.Other-Operation: 🍕💲🔥

    //🔥💲🍕 8.Some-General-Functions:- 🍕💲🔥
    // 🔔🔔Non-Sequencial-functions:🔔🔔
    //💲🍕 1.find-Max in the two-numbers 🍕💲
    //🔔🔔 Sequencial-functions: 🔔🔔
    //💲🍕 1.FindingMax in array. 🍕💲
    //💲🍕 2.FindingMin in array. 🍕💲

    return 0;
}
