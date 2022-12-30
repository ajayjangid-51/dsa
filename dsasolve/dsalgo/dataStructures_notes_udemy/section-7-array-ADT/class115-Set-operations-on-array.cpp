//🔥💲🍕 NOW apn Set-Operations dekhenge.. where Set-Operations mtlb "Set" pe kiyeh jane wale operations:-
// 1.finding-the-Union-of-sets.
// 2.finding-Intersection-of-sets.
// 3.finding-difference-of-sets.
// 4.Set-membership.  🍕💲🔥

// and yeh sab Set-Operations apn tab perfrom kr sktehh hai jab apnko "Set" as "array" diya ho, mtlb "Set" array meh stored hai.

// thus toh now aab apn enn Operations ko ek-ek krke implement krenge:-
// As implementation krne se phle apn ek baat note krenge.. ki yeh jo apne "Set-Operations" depend krteh hai ki array-meh-setElements sorted hai ya nhi hai.
#include <iostream>
#include <vector>
#define pb push_back
// #define fo (start, end, update) for (int i = start; i < end; i += update)
using namespace std;
typedef vector<int> vi;

//💲🍕 1.Union-Operation: 🍕💲
// as toh union-operation k liyeh apn simply phle ek array create krenge of the size of sum-of-size-of-2-sets(as yaha apn 2-way-Unioning se kr rhe hai.) and phle toh simply uss new-array meh first-set-array as it is assign krdenge(as q ki apnko given hai voh array ek "set" hi hai, toh mtlb usmeh toh duplicate elements nhi honge na isiliy apn directly as first-set-array ko new-array meh as it is copy kr sktehh hai). and then phir apn 2nd-set-array elements ko new-array meh assign krenge , but assign krne se phle apn phle new-array-ko check krenge uss assingning-element k liyeh ki kahi yeh element ess new-array meh present toh nhi hai, as agr hoga hoga toh "set"-rule k according apn voh element assign nhi krenge and aage wale element pe move hojayenge.. and usko insert krne k liyeh bhi apn vohi same procedure follow krenge.

// thus toh esseh ess kaam ko krne pr apnko Order-of-"m" time toh first-set-array ko assing krne meh lg jayega. and then phir Order-of-m*n time second-set-array k har- element ko check-check krke insert krne pr lg jayega.. thus toh overall boleh toh apnko ess kaam ko krne meh order-of-n^2 mtlb O(n^2) time lg jayega.
// thus toh apn apn directly esseh bhi bol deteh hai ki ess procedure ki or mtlb ess algorithm ki time-complexity O(n^2) hai.
// Implemting-this-approach(this algorithm , this procedure):-

bool Search(vi &arr, int value)
{
    // fo(0, arr.size(), 1)
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == value)
            return 1;
    }
    return 0;
}
vi Union(int arr[], int brr[], int sizea, int sizeb)
{
    vi rtn;
    for (int i = 0; i < sizea; i++)
    {
        rtn.pb(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        if (!Search(rtn, brr[i]))
        {
            rtn.pb(brr[i]);
        }
    }
    return rtn;
}

//🔔🔔 As Now aab ek cheez aati hai ki set-array agr sorted ho toh usmeh koi gunjaess ho skti hai kya.. ki kya pata sorted-set-array ko union-krne meh kaam time-lgta ho.  soo.. okay toh apn aab yeh wali cheez hi dekhenge... 🔔🔔
// as sorted-set-array ka union apn simply "merging"-technique se kr sktehh hai, as bas apnko itna dhyn krna hai ki jab bhi i and j ki value same hojayeh then apnko dono i and j ko increment krna hai, naki sirf ek ko as same deto in merging:-
// thus toh merging-technique meh toh apnko O(n+m)-time hi lagega.. thus toh mtlb yeh jada sahi hai ki apn phle given set-arrays ko sort krlo and then unko "merging"-technique se Union find krlo.  👍 okay toh aabse apn "Union-operation" hamesa essehi krenge.. 👍

vi SortedUnion(int arr[], int brr[], int sizea, int sizeb)
{
    vi varr;
    int i = 0, j = 0;
    // while (i < sizea || j < sizeb)
    while (i < sizea && j < sizeb)
    {
        if (arr[i] == brr[j])
        {
            varr.pb(arr[i]);
            i++;
            j++;
        }
        else if (arr[i] < brr[j])
        {
            varr.pb(arr[i]);
            i++;
        }
        else if (arr[i] > brr[j])
        {
            varr.pb(brr[j]);
            j++;
        }
    }
    // if (i < sizea)
    // {
    for (; i < sizea; i++)
    {
        varr.pb(arr[i]);
    }
    // }
    for (; j < sizeb; j++)
    {
        varr.pb(brr[j]);
    }

    return varr;
}

//💲🍕 2.Intersection-Operation:- (as mtlb apnko given set-arrays meh common-elements ko lena hai) 🍕💲
// as "Intersection-Operation" apn esseh krenge ki apn simply phle toh ek new-array bana lenge, then apn 1st-set-array k elements ko ek-ek krke k uthayenge.. and unko check krenge with the elements of 2nd-set-array , and agr ko element match hota hai(mtlb voh elements other element meh bhi hai mtlb voh element dono set-arrays meh common hai.) then tab apn usko new-array meh push kr denge , as otherwise nhi krenge.. and esseh sbhi elements k liyeh yahi kaam krenge...

// as toh ess kaam ko krne meh apnko n*m time lagega , thus toh mtlb ess algorithm ki time-complexity O(n^2) hai.
bool Searchi(int set[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (set[i] == value)
            return 1;
    }
    return 0;
}
vi Intersection(int setA[], int setB[], int sizea, int sizeb)
{
    vi arr;
    for (int i = 0; i < sizea; i++)
    {
        if (Searchi(setB, sizeb, setA[i]))
            arr.pb(setA[i]);
    }
    return arr;
}

//🔔🔔 As now vapis se vohi cheez aati hai set-arrays agr sorted ho toh..?? 🔔🔔
// as yeh kaam bhi apn "merging" se hi krenge.. and bas apnko yeh dhyn krna hai ki jab i and j k elements equal toh toh uss uss elements ko apnko new-array meh push krna hai, and and then i , j and k tenoo ko increament(++) krna hai.
// yeh process merging toh nhi khlayegi bas jo algorithm hai voh "merging" jaisa algorithm hi hai.
// as toh esseeh ess kaam ko krne meh apnko O(n+m)-time hi lagega , thus toh mtlb ess algorithm ki time-complexity is O(n+m) mtlb O(n) hi hai. toh mtlb yehi kafi acchi baat hai. thus toh aabse apne production-level-program meh apn essi approach ka use krenge..

vi SortedIntersection(int setA[], int setB[], int sizea, int sizeb)
{
    vi arr;
    int i = 0, j = 0;
    while (i < sizea && j < sizeb)
    {
        if (setA[i] < setB[j])
        {
            i++;
        }
        else if (setA[i] == setB[j])
        {
            arr.pb(setA[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    //📔📔Note-point:- as we will not take remaining-elements..

    return arr;
}

//💲🍕 3.Difference-Operation: 🍕💲
//

vi Differece(int setA[], int setB[], int sizea, int sizeb)
{
    vi arr;
    for (int i = 0; i < sizea; i++)
    {
        if (!Searchi(setB, sizeb, setA[i]))
        {
            arr.pb(setA[i]);
        }
    }
    return arr;
}

vi SortedDiffrence(int setA[], int setB[], int sizea, int sizeb)
{
    int i = 0, j = 0;
    vi arr;
    while (i < sizea)
    {
        if (setA[i] < setB[j])
        {
            arr.pb(setA[i]);
            i++;
        }
        if (setA[i] == setB[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    for (; i < sizea; i++)
    {
        arr.push_back(setA[i]);
    }
    return arr;
}

//💲🍕 4.Set-membership (mtlb givene element ka yeh pata krna ki ess kisi set ka member hai ya nhi and as toh same like searching hi hai, mtlb apn pata kr sktehh hai ki simply by serching that element in the particular-set and if that element is present then we can say "yes" it is member of this-set or otherwise we can "deny" it, thus this element is not member of this Set) 🍕💲
bool SetMembership(int setA[], int size, int element)
{
    // int size = sizeof(setA) / sizeof(setA[0]);
    for (int i = 0; i < size; i++)
    {
        if (setA[i] == element)
            return 1;
    }
    return 0;
}

void PrintArr(int arr[], int size);
void PrintVrr(vi arr);
int main()
{
    int setA[5] = {3, 5, 32, 12, 6};
    int setB[6] = {12, 45, 10, 5, 21, 20};
    PrintArr(setA, 5);
    PrintArr(setB, 6);

    //💲🍕 1.Union-Operation:- 🍕💲
    // vi unionSet = Union(setA, setB, 5, 6); // ✔️
    // 🔥Method2:(by Mergin-method)-
    // int sortsetA[5] = {3, 5, 6, 12, 32};
    // int sortsetB[6] = {5, 10, 12, 20, 21, 45};
    // vi unionSet = SortedUnion(sortsetA, sortsetB, 5, 6);  // ✔️
    // PrintVrr(unionSet);

    //💲🍕 2.Intersection-operation:- 🍕💲
    // vi intersectionset = Intersection(setA, setB, 5, 6); // ✔️
    // PrintVrr(intersectionset);
    // 🔥Method2:-
    // int sortsetA[5] = {3, 5, 6, 12, 32};
    // int sortsetB[6] = {5, 10, 12, 20, 21, 45};
    // vi Sintersectionset = SortedIntersection(sortsetA, sortsetB, 5, 6); // ✔️
    // PrintVrr(Sintersectionset);

    //💲🍕 3.Difference-Operation:- 🍕💲
    vi DiffrenceAB = Differece(setA, setB, 5, 6);
    PrintVrr(DiffrenceAB);
    // vi DiffrenceBA = Differece(setB, setA, 5, 6); ❌ re-make the function... as per the size of set.
    // PrintVrr(DiffrenceBA);

    // 🔥Method2:-
    int sortsetA[5] = {3, 5, 6, 12, 32};
    int sortsetB[6] = {5, 10, 12, 20, 21, 45};
    vi DiffrencebySortMerging = SortedDiffrence(sortsetA, sortsetB, 5, 6); // ✔️
    PrintVrr(DiffrencebySortMerging);

    // now cross-check with the sir.. mtlb actuall.. mtlb defualt implementation...

    //💲🍕 4.Set-Membership-Operation:- 🍕💲
    // cout << "10 is member of setA? , the answer is " << SetMembership(setA, 5, 10) << endl;
    // cout << "5 is member of setA? , the answer is " << SetMembership(setA, 5, 5) << endl;

    return 0;
}

void PrintVrr(vi arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
void PrintArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// aab bas dsalgo ko mast krna.

// 🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕
// As Progamming meh kisi bhi kaam ko krne ki 2-approach hoti hai.
// 1.physical-approach
// 2.programatical-approach
// (as physical-approadch apnko programmatical-appraoch k liyeh chahiyeh hoti hai.)
// (as programmatical-approach annko code-likhne k liyeh chahiyeh hoti hai)
// as physical-approach and programmatical-approach dono same se hoti hai , as mtlb agr apn physical-approach aati hai. toh mtlb apn programmatical-apporach bhi findout kr sktehh hai, as programmatical-approach find out krne k liyeh apnko apni physical-apporach ko ek linewise , stepwise , pointwise and rule-wise dekhna hoga and voh voh particular main-rule find-out krna. naki apnko usko random-wise dekhna , as agr apn apni physical-apporach ko random-wise dekh rahe hai then mtlb apn usko code nhi kr sktehh hai, as code krne k liyeh ek particular tarika, particular formula hona chahiyehh. thus toh mtlb apnko apni physical-apporach meh vohi particular rule, particualar tarika dekhna hai. ya phir apnko kuch different tarike k containers(data-structures) ka use krke mtlb kuch cheeze accordingly store krke voh koi particular rule find-out krlena hai ya bana lena hai.
// as toh apnko voh particualr points and voh partiucular-rule mil gaya apni physical-approach meh se then mtlb aab apn usko easily code kr sktehh hai. and agr voh nhi mil raha hai then use  diff-diff containers(data-strucutures) and find-out accordingly and tab hi nhi mil raha hai then phir toh apnko kuch alg hi sochna hoga. and alg-sochna wale concepts apnko phle hi sikha diyehh jatehh hai ya yeh phle se avialable hotehh hai toh apnko unmeh bhi dekhna hai.
// as agr apnne pass programmatical-apporach hoti hai , toh mtlb apn uss kaam ko code kr sktehh hai ek-dam easily and exactly , as simply mtlb ki agr apne pass programmatical-apporach hai toh mtlb apne pass "code" hai.
// 🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕🍕
