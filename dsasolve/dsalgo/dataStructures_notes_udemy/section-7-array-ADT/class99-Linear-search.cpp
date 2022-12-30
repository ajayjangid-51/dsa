// 🔥💲 As now YAHA pe apn "Linear-Searching" j bareh meh dekhenge... 💲🔥
// // As now aab apn Searching-Operation krna dekhenge.. mtlb apn array meh inputed value ko array meh search krenge and return krenge wheather it is present or not , and if present then where it is present.
#include <iostream>
using namespace std;

struct Array
{
    int *p;
    // now properties:-
    int size;
    int length;
};
void Swap(int &p1, int &p2);
// 5th-Searching-operation:-
int LinearSearch(Array p1, int p2_key)
{
    // AS "Searching" k liyeh 2-tarike hoteh hai:
    //  1. Linear-Searching and
    //  2. Binary-Searching.
    //as now phle apn Linear-Searching dekhenge ki mtlb Linear-searching kya hoti hai and mtlb kaise hoti hai , kaise ki jati hai and then phir Binary-Searching dekhenge:

    //💲🍕 Linear-Search:- 🍕💲
    // as Linear-Searching meh apn linewise one-by-one har element ko inputed-element check krteh hai mtlb dono ko for "equality" compare krtehh hai and agr voh dono equal honge toh mtlb inputed-element hai and agr dono equal nhi hoteh toh mtlb inputed-element nhi hai.
    // And aab apn ess "Linear-Search"-kaam ki time-complexity find kare toh time-complexity mtlb main-kaam kitne baar ho raha hai mtlb time-complexity is simply the "frequency-of-main-kaam" , thus toh yaha "Linear-Searching" meh main kaam yeh hai ki apn phle ek-element ko leteh hai and usko given list k har element se compare krke dekhteh hai, thus toh mtlb apne "linear-search" meh main-kaam toh element-ko-compare krna hai and yeh main-kaam apn n-times kregne (where n is size of the list), thus toh ess "linear-Search"-kaam ki time-complexity for-worst-case hogi O(n). and best-case mtlb first-element hi inputed-element k equal mil jayehh thus toh for best-case time-complexity will be O(1).

    //📔📔Note-point:-  as key mtlb "value" nakki index

    // as for terminology or core-speaking apn baat note- krenge ki , apni searching-process meh list meh agr element milta hai toh then we call it a "successful-search" and if element is not found then usko apn "unsuccessful" search bolteh hai.
    for (int i = 0; i < p1.length; i++)
    {
        if (p1.p[i] == p2_key)
        {
            cout << "the index-of searched-value is " << i << endl;

            // applying improvement-in-Linear-search-concept
            //💲🍕 Method1:- (which is called "Transposition") 🍕💲

            if (i > 0)
                Swap(p1.p[i], p1.p[i - 1]);

            //💲🍕 Method2:- (which is called "Move to front/Head") 🍕💲
            if (i > 0)
                Swap(p1.p[0], p1.p[i]);

            // as but ess method2-approach meh jo latest-serch uske liyeh yeh sahi hai, and phle wale searchs hai (chahe just second-last-element bhi q na ho) unke liyeh yeh sahi nhi hai, q ki yeh element array meh kahi bhi throw ho skteh mtlb at the middle , or even at the end-also. , as toh Transposition-method enmeh sahi hai, as vaha pe farak-farak dheere-dheere pdta hai pr voh safe hai for all the searching even just last or second-last or another.
            // as toh apn as per the condition Linear-Search-improvement k liyeh appropiate method use krlenge...
            return i;
        }
    }
    return -1;

    //💲🍕 Average-case time 🍕💲
    // Average-case time mtlb sum-of-time-for-all-cases divided(/) by no.-of-cases. se apnko average time mil jata hai.

    //💲🍕 Time-Complexity Analysis:- 🍕💲

    //1. best-case:- O(1) or mtlb directly omega(1) , as mtlb apnko phir "best-case" likhna nhi pdta , mention nhi krna pdta.
    //2. worst-case:- O(n) or directly bigO(n)

    //3. average-case:- O(n) mtlb directly theata(n)
    /* = best-case-time + second-case-time + third-case-time +.......+ worst-case-time/ total-no-case-avialable
    // = 1+2+3+....+n/n = n+1/2
    // = so it is the O(n) mtlb actually it-is-represented as theata(n) */

    //💲🍕 Improvement-in-LInear-Search:- 🍕💲

    // As now aab apn Linear-Search meh Improvement dekhenge.. ki kya linear serach meh kuch improvement ho skta hai? and agr ho skta hai toh voh kya hai.. jisko apn improve krenge..
    // as apne pass ek idea hai ki apn har succussful-search-case meh searched-element ko by 1 left-shift krde.. AS agr by any-chance ki usseh vapis search kare toh 1-unit-time kaam lagega for that searching and essa most of the time hota hi hai ki apn jis cheeze search kr rhe usko kabhi vapis se search krenge.. and agr nhi bhi krteh hai toh koi baat nhi as ek extra-statement ko run krne k liyeh koi itna issue nhi hoga and as actual boleh toh apn future k liyeh safe ho rahe hai, ki aage future apnko esseh toh kaam time hi lagega.
    // thus toh aabse apn yeh improvement-In-Linear-Search wala concept hamesa follow krenge as like this:- (on-line number 100)
}

int main()
{
    struct Array arr1;
    arr1.p = new int[5];
    arr1.p[0] = 1;
    arr1.p[1] = 3;
    arr1.p[2] = 5;
    arr1.p[3] = 6;
    arr1.p[4] = 8;
    arr1.length = 5;
    int m2;
    cout << endl
         << "input the value that you wanted to search in array" << endl;
    cin >> m2;
    cout << LinearSearch(arr1, m2) << endl;

    return 0;
}

void Swap(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}