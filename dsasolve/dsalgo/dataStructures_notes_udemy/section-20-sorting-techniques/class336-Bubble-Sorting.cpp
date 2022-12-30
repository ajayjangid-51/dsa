//🔥💲 AS toh now aab apn "Bubble-Sorting"-technique k bareh meh dekhenge... and phir aage apn ess techinque-algorithm ko analyize bhi krenge for time and space-complexity related. 💲🔥

// As yeh "bubble-sorting" apn ek example se samajenge...
// so intially apne pass ek-array hai of size "5" as like this A={8,5,7,3,2} and apn ess array ko vertical-form meh likh lenge, now aab apn simply array-starting mtlb 1st-element se uske agle wale element se unka ek pair assume krenge, as mtlb simply ki apn 1st-element and uske just aage wale element ko compare krenge, and compare krne pr element-1 uske alge element(mtlb element-2 mtlb i+1-element whereas here i = 1) se se bada hota hai toh, apn elements ko swap kr denge ek-dusre se(as it-is like that ki jo jada-bhari hota hai voh niche hi aata hai.), and agr element-1 element-2 se chota hai then toh apn swaping nhi krenge. thus now aab apn yahi kaam vapis krenge ,but aab ess-baar apn element-2 and uske-agle-wale element ko compare krenge and bas phir as according swaping krdenge, and phir agr element-3 and uske-alge-element ko compare krenge and so on apn yeh krteh hai rhenge as upto (n-1)-element tk. as toh aab ek baat dekhe ki apnne ek-baar k liyeh sare-elements ko compare kr liya hai, thus esi ek-baar esseh-ess-tarah-k-comparison-of-all-elements ko simply "pass" bola jata hai, and thus yeh "pass" agr ek baar huaa hai toh apn-sablog esko "1st-pass" bolteh hai , and 2-times huaa hai toh esko "2nd-pass" bolteh hai ,,, and so..on mtlb agr n-times huaa hai toh usko "nth-pass" bolenge.
//🔔🔔 as now apn ek baat notice krenge ki apn ne jo upar meh process ki mtlb voh apne "bubble-sorting" ka "1st-pass" kiya toh mtlb "1st-pass" se array-meh one(1)-element(mtlb largest-element) apni correct-sorted-position pe aa chuka hai. thus toh apn ess baat ko generalize kr sktehh hai ki agr apn "nth-pass" kr le then mtlb apne array meh n-elements apni correct-sorted-position pe aa jayenge.. thus toh mtlb agr apne array-meh "n-elements" hai then toh uss array ko "bubblely" sort krne k liyeh apnko simply "nth-pass" karane honge.. thus toh bas yahi "idea" hai of "bubble-sorting" ka. 🔔🔔

//💲 As toh now aab apn Analize krenge... thus toh analysis k liyeh apn simply phle-se-phle "Pass" ko analysize krenge and then phir simply allover-analize krlenge..
// now thus apn bubble-"pass" ko dekhe mtlb "pass" ki working ko dekhe then mtlb ess "pass" meh (n-1)-comparisons ho rahe hai(mtlb basically main importantly ki yeh 1st-pass wala loop n-1-times chal raha hai.) and kuch camparisons pe swaping-bhi-ho rahi hai, as toh yeh compulsory nhi hai ki har comparison pe swaping hohi , but for the worst-case har camparison pe swaping hogi hi, toh mtlb ess "pass" meh for worst-case meh (n-1)-comparions( as for worst-case or best-case or average-case (n-1)-comparison toh honge hi) and (n-1)-swaping hoti hai.
// and thus now apnne "pass" ko analyise kr liya , aab overall baat kare toh mtlb yeh "pass" n-times execute hota hai toh mtlb totally n(n-1)-comparisons and honge and for worst-case n(n-1)-swapings hogi, as swaping kaam bhi ho skti hai for average-case or best-case meh toh swaping-hogi hi nhi. thus toh allover- yeh Analysis tha for the time-complexity-purpose, now aab apne actual-relation hai for the time-complexity , thus toh apn simpy Order-of-time-compexity toh find-out kr hi sktehh hai. (....yeh sahi nhi hai....)  💲

//🔔🔔 As toh ess "idea" ko toh apn easily implement kr sktehh hai... 🔔🔔
// as toh ess idea ko implement krne k liyeh apn phle simply "pass" ko implement krenge and phir baad meh apn jantehh hi hai ki agr apne pass n-sized-array hai then uss pass ko apn simply n-times chalva denge, by just simply putting the pass into the ntime-loop.

#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void BubbleSortNonadaptive(int arr[], int n)
{

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i <= (n - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                Swap(arr[i], arr[i + 1]);
            }
        }
    }
}
void Printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSortAdaptive(int arr[], int n)
{

    for (int j = 0; j < (n - 1); j++)
    {
        for (int i = 0; i <= (n - 1 - j); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                Swap(arr[i], arr[i + 1]);
            }
        }
    }
}
int main()
{
    int Arr[5] = {
        4,
        6,
        1,
        3,
        9,
    };
    Printarr(Arr, 5);
    // BubbleSortNonadaptive(Arr , 5);
    //👿📔VERY-imp-Note-point:-ki as apne algorithm adaptivenes nhi hai , q ki apn already-sorted elements pe bhi kaam krva raheh hai. thus toh mtlb apnko apne ess algorithm ko "adaptive" banana hai.
    BubbleSortAdaptive(Arr, 5);
    Printarr(Arr, 5);

    return 0;
}

// toh as from the above-example apn yeh gernerlize kr skteh hai or mtlb ki apn yeh analize kr sktehh hai ki---
//
// No.-of-passes = (n-1)-passes
// No.-of-comparison = 1+2+3+...(n-1) = n(n-1)/2 = which is O(n^2)
// No.-of-swaps-for-worst-case = 1+2+3+...(n-1) = n(n-2)/2 = which is O(n^2)
// it is adaptive(if flag is introduced) or otherwise bubble-sort esseh toh non-adaptive hi hota hai.
// it is stable (q ki esmeh same-identical-elements ka order-change nhi hota, mtlb jaise agr black-8 red-8 k upar hai then during-sorting and after-sorting black-8 red-8 k upar hi rheta hai , so that is why bubble-algorithm is "stable")

// as sorting ki time-complexity uske all total jo no.-of-comparison(mtlb n^2) hai uske equal hi hoti hai. as voh apn esseh hi samajeteh hai ki apn comparisons toh loop k andar hoteh hai as main toh loop hi hoteh hai but , esseh dono same hi hai. ki loop kitne baar chal raha hai or  ya mtlb comparison kitne baar ho raha hai , toh mtlb jitne baar loop chalta hai utne baar hi comparions hoteh hai. as apn jantehh hai ki time-complexity toh complex-statement kitne baar run ho rahi hai uske basis pe decide hoti hai , complex-statement utni baar run hoti hai jitne baar loop run hota hai , q ki complex-statement loop meh hi rkhi hati hai.

// as apn kuch "bubble-sort" k bareh meh kuch interesting thing dekhenge...
// 1.eska bubble-sort esliy hai q ki esseh sorting se bubble-effect dikhta hai , where bubble-effect mtlb jab apn water meh stone throw krteh hai then vaha voh stone toh niche aata hai and bubble-upar aatehh hai. toh mtlb apni processing meh esseh ess tarah ho raha hai(heavy cheez niche jati hai and light-cheez upar jati hai.) , thus isiliy apn esko bubble-sorting khtehh hai.
// 2.jaise ki apnko pata hai ki "1st-pass" meh apnko one-maximum-element mil jata hai , mtlb apnko yeh pata hota hai ki voh element at last-index pe hai , thus toh mtlb "2nd-pass" pe apnko 2-maximum-mil jateh hai .. and for kth-pass apnko k-maximum-elements miljateh hai, toh mtlb apn ess algorithm ka use kr sktehh hai jab bhi apnko jaise array meh 3-largest-chahiyeh ho, or kuch esseh hi milta-julta then vaha pe apn ess alogithm ka use kr sktehh by executing the pass for "k-times".

// bubble-sort-minimum-time  = O(n) , whereas yeh tab hota hai jab array-already-sorted ho , as but ess minimum-complexity ko activate krne k liyeh apnkmo apne bubble-sort code meh flag-introduce krna hota hai , as eskek basis pe hi apn pata lagateh hai ki swaping huee ha ya nhi huee hai. as like this:

/*
void BubbleSortAdaptive(int arr[] , int n){

for(int j = 0;j<(n-1) ;j++){
    int flag =0;
for(int i =0;i<= (n-1-j);i++){
        if(arr[i]> arr[i+1]){
        Swap(arr[i] , arr[i+1]);
        flag=1;
    }
    }
    if(flag == 0){
        break; // as eska mtlb ki swaping ek-baar bhi nhi huee hai , thus toh eska mtlb ki array-already sorted hai.
    }
} 
    
}
🌟 as yeh introducing-of-flag is also known as "improvement-in-Bubble-sort" , as q ki esseh "Bubble-sort-technique" "adaptive" ban jati hai.
*/

// best-implementation(bubble-sort) including all optimizations:-
/* void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void BubbleSort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = 0;
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = 1;
            }
        }
        if (!flag)
            break;
    }
}
 */

// REcursive-BubbleSort:-
/* void RbubbleSort(vector<int> v, int size)
{
    if (size == 1)
        return;
    for (int i = 0; i < size - 1; i++)
    {
        if (v[i] > v[i + 1])
            swap(v[i], v[i + 1]);
    }
    RbubbleSort(v, size - 1);
} */