/* 🌟 Structures and functions: 🌟 */
// as yaha pe program-design dekhenge of structures and functions: and yahi program-design apne aage course meh use hoga.
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
void intializefn(Rectangle *p1, int p2, int p3)
{
    p1->length = p2;
    p1->breadth = p3;
}
int areafn(Rectangle p1)
{
    return ((p1.length) * (p1.breadth));
}
void changelengthfn(Rectangle *p1, int p2)
{
    p1->length = p2;
}
void displayfn(Rectangle p1)
{
    cout << " the length is " << p1.length << " and the breadth is " << p1.breadth << endl;
}
int main()
{
    Rectangle r1;
    intializefn(&r1, 10, 4);
    areafn(r1);
    displayfn(r1);
    changelengthfn(&r1, 20);
    displayfn(r1);
    //👿📓-note-point: As apnko hamesa main()-fn pe work-load hamesa kaam rkhna chahiyeh.. and as isiliy apnne yaha har kaam k liyeh alag-alag functions banyeh hai...👿📓

    //📓-note-point: as yaha pe apnne structures pe functions execute karana dekha..
    // as C-language meh apn yahi highest-level-of-programming apn krteh hai , kr skteh hai just by using structures and functions and phir essi vajah se object-orientation-programming krne ki baat aatti hai. and yeh kaam phir C++ k duvra kiya gaya.. mtlb phir C++ meh object-orientation instroduced ki gayii ,, toh jaise mtlb enn sbhi-related-functions ko ek class meh bind kr skteh hai , then phir main()-fn meh enn sbhi-function call ki jagah voh class-constrctor-call kr skteh hai.. as object-oriented-programming meh sirf ek yahi baat nhi hai , balki orr bhi bohat sari bateh hai... jaise inheritance , polymorphism and bohat-bohat mastam-mastam cheeze..

    //📓-note-point: as toh apn ess structure and its-related-functions k code ko object-orientatiom meh likhenge mtlb apn ess structure and eske related-functions ko ek class meh likhenge mtlb bind krenge and then uss class-ka-constructor-fn call krke sare kaam krva lenge mtlb apn structure ko memory meh declare bhi krva lenge and then voh uske related-fn bhi run krva lenge..
    // as esseh ek object-banta hai where object mtlb group of variables , functions , structures etc..etc.. thus esliy ess programming and coding style ko object-oreinted-programming bolteh hai, bcoz esseh phir memroy meh object banteh hai mtlb allocate hoteh hai.
    // toh yeh sab kaam apn class11- meh krenge...

    return 0;
}