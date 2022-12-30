//🔥💲 AS now aab apn "Insertion-sorting-technique" dekhenge... 💲🔥
// "insertion-sorting" samajne se phle apn "Insertion" ka mtlb dekhenge ki yaha "insertion" se kya mtlb hai. as esseh toh apn janteh hi hai ki "insertion" ka mtlb "insert"-krna. aab now yaha "insertion-sorting" meh "insertion" ka mtlb hai ki already-sorted-array meh element ko vaha "insert" krna jaha uski correct-sorted-position hai vaha usko insert krna. thus toh allover "Insertion-sorting-technique" ki main baat yahi hai ki apn Insertion-sorting-techique meh elements ko unke correct-sorted-position pe insert krteh hai, thus toh apn ek baat note krenge ki "insertion-sorting-technique" meh ek-element ko uski correct-sorted-position pe insert krna is known as "1-pass", thus toh agr array meh "n-elements" hai then uss array ko sort krne k liyeh apnko "n-passes" krne honge.

// as now apn "Insertion" ka mtlb ek example se samajenge. toh thus apn simply phle apn ek already-sorted-array lenge as like this: A = {2,6,10,15,20,25,30} , and apne pass ek other element hai (as like e = 12), and now aab apnko ess element "12" ko ess array-A meh eski correct-sorted-position pe esko insert krna hai, thus toh yahi process is "Insertion-process" hota hai, mtlb inserting the element in a sorted-list at its correct-sorted-position is simpy known as "insertion". thus toh "insertion-sorting-technique" meh yeh "Insertion"-process hi follow hoti hai.

// Now apn dekhenge ki kaise apn yeh wala kaam krenge..
//Thus toh eske liyeh apn phle find-out krenge element ki correct sorted-position in sorted-array . And then phir uss sorted-position ko vacant krenge.. and vacant toh apn simply sorted-postion se aage wali positions ko by-one right-shift krdenge.. thus toh voh position vacant hojayegi and phir apn simply uss vacant position meh apne-element ko insert krdenge.. as yeh thi physical -approach.. and now apn ess kaam ki computational-approach mtlb programming-approach dekhenge and Programming-approach se krne k liyeh apn koi position find-out nhi krenge as apn simply from the last element, elements ko by-one-right-shift krdenge... On the condition ki inserting-element uss last-array-element se chota hai. And jaha jis index pe inserting-element array-element se bada huaa toh bas uss index pe apn "inserting-element" ko insert krdenge, mtlb simply boleh toh apn uss "inserting-element" ka "insertion" krdenge.

//As now aab apn linked-list k liyeh insertion dekhenge..
// As jaise ki apn janteh hi hai ki linked-list meh shifting of elements toh krenge.. nhi..(q ki koi mtlb nhi hai na ess baat ka, as q ki apn simply from list-starting se "inserting-element" ki correct position find krlenge and vaha simply ek new-node banake linking krdenge simply..) thus toh linked-list k liyeh toh apn search hi krnege for the sorted-position. And yeh searching kuch ess tarah krenge.. ki apn phle 2-pointers p and q(as a tail-pointer of "p") lenge and unko intially apn point krayenge to the first-node of the linkedlist and then phir now aab apn p->data compare krenge with the inserting-element and agr inserting-element greater hota then tab toh   phle q=p krenge and p ko next-node se point krdenge and then again compare krenge ki yeh p->data chota hai ya bada hai, and agr p->data bada hai then tab toh apn rukjayenge and phir ek node create krenge and uss q-next = node and node->next = p krdenge toh as like this apn linked-list meh  "insertion" krtehh hai.

//Thus toh allover apn note krenge..ki array meh insertion krne k liyeh apnko sorting-position find-out nhi krni hoti, as apnko simply from the back elements ko by-one shifting krni hoti hai..

// And linked - list meh apnko shifting nhi krni hoti hai, as esmeh apnko position find - out krni hoti hai.and then phir apn simply node - create krke uss position se/pe linking kr deteh hai...

// Now aab apn enki(mtlb *Insertion-process* ki ) time-complexity dekhenge..
// Dono(mtlb for array and linked-list)-meh "insertion-process" ki time-complexity O(1)-O(n) hi hoti hai..
// and overall insertion-sort ki time-complexity O(n^2) hoti hai.

// 💲 and now aab apn "insertion-sorting" dekhenge as apnko "insertion" ka mtlb toh pata chla gaya hai.💲

// 🍕🍕 AS toh phle apn apne wali approach implement krenge.. and then agr voh sahi hoti toh toh kafi sahi hai and nhi hoti toh bhi koi nhi.. dono hi cases meh apn actual-concept dekhenge and usko compare krenge apne wale se.
/*
// void Shift(int arr[], int n, int count)
// {
//     int i = (n - 1);
//     while (count > 0)
//     {
//         arr[i] = arr[i - 1];
//         i--;
//     }
// }
// void InsertionSort(int arr[], int n)
// {
//     int duplicatearr[n];
//     duplicatearr[0] = arr[0];
//     int back = 0;

//     for (int i = 1; i < n; i++)
//     {

//         int insertingelement = arr[i];
//         for (int j = 0; (back - j) > 0; j++)
//         {
//             if (insertingelement > arr[(back - j)])
//             {
//                 back++;
//                 arr[back] = insertingelement;
//             }
//             else if (insertingelement < arr[(back - j)])
//             {
//                 arr[(back - j) + 1] = arr[back - j];
//                 // Shift(arr, (back + 2));
//                 // arr[back - j] = insertingelement;
//             }
//         }
//     }
// }
*/

//🔥💲 As now apn actual-approach dekhenge ki by using "Insertion" apn "Insetion-Sorting" kaise krtehh hai 💲🔥
// As "inserting-Sorting" meh apn insertion ess tarah krtehh hai ki apn phle intially simply esseh manteh hai ki apne pass list-hai-of-one-element only and that element is first-element and yeh list toh already sorted hi hai, now then apn kya krtehh hai ki apn given-array ka 2nd-element consider krteh hai mtlb abki baar apn esseh maan rahe hai ki apne pass list-of-two-elements hai and apnko ess list k last-element ko ess list meh "insertion" krna hai, thus insertion k liyeh toh apn vohi simply apni wali approach hi follow krenge ki from last apn elements ko by-one right-shift krteh rhenge.. and corrected-place meh apn "inserting-element" ko insert krdenge. and yeh ek baar yeh apni-new-sub-list consider krna and phir usmeh "insertion-process" krna hi "insertion-sorting" meh "1-pass" khelata hai. and as Sorting meh "pass" hi main kaam hota hai, baki toh bas apnko uss pass ko phir "pass" ko as per need "no-of-times" chalana hai.
// as yeh "inserting-sorting" apn example ko dekh k bhi acche se , easily samajayenge.. and it is in the class-338-photo.
//🔔🔔 as "inserting-sorting" meh apnko bas simply new-sub-list consider krne ka hi dhyn rkhna hai and sub-list ko consider apn ess tarah krenge ki:- 🔔🔔

//💲 NOw apn "inserting-Sorting" ki Analysis krenge mtlb kuch baateh gernelize krenge..💲
/*
    1.No.of-passes = (n-1)
    2.No.of-Comparisons = 1+2+3+4...+(n-1) = n(n-1)/2 = O(n^2)
    3.No.of-swaps = 1+2+3+4...+(n-1) = n(n-1)/2 = O(n^2)
    4. and baki cheeze jaise ki yeh "insertin-sorting-techique" adaptive hai ya nhi , stable hai ya nhi etc.. apn aage-class meh analyise krenge mtlb dekhenge.
 */

//💲 Now kuch Important-baateh 💲
// 🌟1. apn ek-baat notice krenge ki "ek-pass" pe "insertion-technique" meh koi bhi ek element(may be it is smallest or greater or anything koisa bhi) apni correct-sorted-position pe aajayega thus toh mtlb apn sure nhi ho sktehh ki konsa element apni correct-sorted-position pe aaya hoga and or toh or apn yeh bhi sure nhi kr sktehh hai ki koi element apni correct-sorted-position pe aaya bhi hoga ya nhi as mtlb "insertion-sorting" meh koi surity nhi hai toh mtlb "insertion-sorting" k intermediate-results usefull nhi hai for any other work. but whereas jaise "bubble-sort" meh largest-element phle apni correct-sorted-position pe aateh hai and in "Selection-Sort" meh smallest-elements phle apni correct-sorted-position pe aateh hai.
// 🌟2. as apnne phle upar dekha tha ki "insertion" in array krne k liyeh apnko elements ko shift krna hota hai mtlb swap krna hota hai, and but "insertion" for "linked-list" k liyeh apnko yeh kaam nhi krna hota hai, as just apnko loop se compare krke find-out krna hota the position. thus toh apn yeh "conclude" kr sktehh hai ki "insertion-sorting" Linked-list k liyeh jada sahi hai , compatiable-hai as compare toh "array" or apn sahi se boleh toh "Insertion-sort" Linked-list k liyeh hi banaee gayi hai.

// 🔥⭐ As toh now aab apn "Insertion-Sorting" ko implement krenge.... in the "ram-memory" 🔥⭐

#include <iostream>
using namespace std;

// void InsertionSort(int arr[], int n)
// {
//     for (int j = 1; j < n; j++)
//     {
//         int listsize = 2;
//         int vacantindex = 0;
//         for (int i = 0; i < (listsize - 1); i++)
//         {
//             if (arr[(listsize - (i + 1))] < arr[i])
//             {
//                 arr[listsize - 1] = arr[i];
//                 vacantindex = i;
//             }
//         }
//         arr[vacantindex] = arr[listsize - 1];
//         listsize++;
//     }
// }
void InsertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {

        int x = arr[i];
        int j = (i - 1);
        while (j > -1 && x < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
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

int main()
{
    int A[5] = {8, 3, 5, 2, 4};
    Printarr(A, 5);

    InsertionSort(A, 5);
    Printarr(A, 5);

    return 0;
}

// ⭐ AS now yaha pe kuch allover-baateh note krenge about the all sorting-techniques:: ⭐
//👿📔1:-Only 2-sorting-techniques are adaptive and they are bubble-sorting and insertion-sorting
//👿📔2:-in all available sorting-techniques
// Only 3 - sorting - techniques are stable and they are 1.bubble-sorting 2.insertion - sorting and 3.merge-sorting