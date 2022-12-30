// Quiz-2 on Array:-
#include <iostream>
using namespace std;

int main()
{
cout << "hello hello ji" << endl;
    int a = 5;
    int *p = &a;
    // int *x = &p;
    int **x = &p; // whereas yaha int** mtlb int-pointer-container-ka-address ess x meh assign hoga.
    cout << x << endl;
    cout << *x << endl; // as esseh toh apnko x meh jo cheez store hai voh dikhegi. thus toh double-pointer ki actual-value k liyeh derefrecing krne k liyeh apnko double-derefrecing krni hoti hai.. as like this:

    // as simple x mtlb x-meh stored value.
    // as *x mtlb x- meh stored-addressed-container meh stored-addres.. and like for **x so..on...
    cout << **x << endl;
    cout << &p << endl;
    cout << &a << endl;


    int X[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout << *(X + 0) << endl;
    cout << X + 1 << endl;
    cout << *(X + 1) << endl; // ohhoo.. X -pointer( mtlb double-pointer hai as yeh X-2D-array hai na isiliy and double-pointer ki derefrencing krne k liyeh double-times-derefrencing krni hoti hai.. as like this example which is shown below----) hai , X+1 bhi ek pointer hai jismeh kisi container ka address hai.
    // cout << &(X + 1) << endl;
    cout << *(*(X + 1)) << endl;

    // as 2D-array meh exactly same method2- ki tarah hi memory-allocation hoti hai , as mtlb phle sbhi rows k liyeh pointer-array create ho jayega and phir particular no.-of-element in each-row k liyeh alg arrays create hojayenge and atlast voh-sbhi arrays ess pointer-array se 1-by-1 link hojayenge..
    cout << *(*(X+1)+2) << endl;
    cout << *(*(X+1)+3) << endl;
    cout << *(*(X+1)+4) << endl;
    cout << *(*(X+2)) << endl;
    cout << *(*(X+2)+1) << endl;
    // as toh from apn confirm kr skteh hai ki 2D-array meh sareh elements 1-single-array meh hi assign hoteh hai but bas additionally yeh bhi hota hai ki jo voh array-name hai voh phle unn 1-single-array k parts krke 
    // as actually hota hai yeh hai ki phle array of size-m create hota hai then uss m-array k har element meh array of size-n create hota hai. as toh overall apn dekhe toh jo allocation hai of all-element(mtlb sub-containers) voh contiguous hi hai(as isliy bcoz of this reason apn bolteh hai ki 2D-array actually meh 1d-single-array meh hi allocate hota hai but actual-genuiun reson toh yeh upar phle apnne jo mention kiya hai voh hota hai and apnko yahi dhyn meh rkhna hai bcoz.. for derefrecing of 2D-array apna yeh actual-concept hi kaam karega.. as toh abse apn yahi actual-genuin-concept dhyn meh rkhengee.. )

    cout << X+3 << endl;
    cout << *(X+3) << endl;
    // as yaha pe additionally ek-cheez orr hai.. that is ki X+3 = *(X+3)  , as apn janteh hi hai ki "X" yaha pr double-pointer hai , and apn as example:- X+3 likhteh haias ess double-pointer meh directly array-address (mtlb array-naam) se jo pointer hota hai voh assign kr diya gaya hai and then possible hai thus isiliy toh apnko X+3 and *(X+3) ki value same mil rahi hai..

    int arr[5]= {1,2,3,4,5};
    int** p1;
    //p1 = arr;  // as not convertable bata raha hai.. mtlb yeh sahi nhi hai.. and esko apn baad meh vapis dekhenge....
    cout << "the value of p is mtlb the stored-value in p is " << p1 << endl;
    cout << "the value of *p " << *p1 << endl;
    // cout << "the value of **P is " << **P << endl;
    
    


    // que3-answers:- as bcoz q ki no.-of-operations toh same hi honge..
    return 0;
}