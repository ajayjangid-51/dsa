//🔥💲🍕 "Deleting-from-heap" and "Heap-Sort" 🍕💲🔥

//👿📔imp-Note-point:- apn ek kafi accha and kafi important point note krenge ki "Heaps" meh "Deletion" meh apn only "root-node" ko hi delete kr sktehh hai, mtlb kisi aur other "node" ko delete nhi kr sktehh as agr krtehh hai toh apn uss "Heap" ko as a "Heap" maintain nhi kr payenge. thus toh mtlb "Heap-deletion" meh root-node hi delete hota hai.
// Now toh ess baat pe apn ek baat notice kr sktehh hai ki apn "Heap" ko as priority-Queue ki tarah use kr sktehh hai, as "Priority-Queue" ka concept toh yehi hai na ki apn ess "Queue" meh enquening(mtlb insertion) toh kaise bhi kr sktehh hai , but "dequening(mtlb deletion or removal)" meh "Priority" wala concept follow hota hai ki from the "Queue" the "Max-prioritised-element" or ya "Minimum-prirotised-element" will be deleted. thus toh isiliy yeh apn "Heap" ko as a "Priority-Queue" use kr sktehh hai(and yeh kafi efficient bhi hoga.). as jaise jab bhi "Heap" meh deletion krenge then vaha "highest-priroity" or "lowest-priority" wala element hi delete hoga(mtlb "heap" se root-node mtlb maximum/minimum element hi delete hota hai), and yehi same cheez "Priority-Queue" meh hoti hai. thus toh isiliy apn "Heap" ko as a "Priority-Queue" use krethh hai.
// toh mtlb "heap" se hamesa "root-node" hi delete kiya jata hai, mtlb aur koi element apn "heap" se delete nhi krtehh aur mtlb nhi kr sktehh.

//
// So the procedure for this "Deletion-from-Heap" is that hai ki , sbse phle take the root-node in any variable "x" and put the last-element of heap-array at its place(mtlb at first-element) and make the index-pointer "i" pointing on that first-element-index , now aab aage apnko repeatedly yeh kaam krna hai ki jis node pe "i" hai, uske childs ko ek-dusre se compare krna and whichever is greater-of-them usko phir usske parent( mtlb current-node) se compare krna hai and if that is greater than its parent then swap them and move the "i" to the the index-of-that-"child" and repeat-the-procedure until and if it is "smaller" than its parent then break the procedure,
//👿📔imp-Note-point:- as yaha "Deletion" meh apnko swaping hi krni hai, mtlb as like "Insertion" ki tarah nhi hai ki apn swaping bhi kr sktehh hai or ya without-swap se krke last-meh-"inserted-value"-ko-assign-krna mtlb dono krna bhi kr sktehh hai.
// delete-procedure ko simply boleh toh swap current-element with its greater children if that greater child if it is greater that it.

// "Heap-Sort" jaise mtlb ki apnko deleting-one-element from "Heap" meh time lgta hai O(logn), toh mtlb n-elements ko delete krne meh apnko time lagega n*logn. and deletion me apnko maximum-element hi milta hai, thus toh mtlb ess cheez ko as a sorting meh use kr sktehh hai, whose time-complexity will be n*logn. and yeh Sorting apn mtlb sirf "heap"-data ko sort krne k liyeh hi kr sktehh hai, mtlb "heap"-array pe hi kr sktehh hai.
#include <bits/stdc++.h>
using namespace std;

int DeletefromHeap(int heap[], int &size)
{
    // as apn jantehh hi hai ki apn "Heap" meh "root"-node ko hi delete kr sktehh hai..
    /*
    int i = 1;
    int j = size - 1;
    int element = heap[1];
    heap[i] = heap[j];
    while (2i + 1 < size)
    {
        if (heap[2i] > heap[2i + 1])
        {

            if (heap[2i] <= heap[i])
            {
                break;
            }

            int temp = heap[2i];
            heap[2i] = heap[i];
            heap[i] = temp;

            i = 2i;
        }
        else
        {
            if (heap[2i + 1] <= heap[i])
            {
                break;
            }
            int temp = heap[2i + 1];
            heap[2i + 1] = heap[i];
            heap[i] = temp;
            i = 2i + 1;
        }
    }
    size--;
    return element;
    */

    // /**/ or :
    int element = heap[1];
    heap[1] = heap[size - 1];
    int i = 1, j = 2 * i;
    while (j < size)
    {
        if (heap[j + 1] > heap[j]) // right > left
        {

            // if (heap[i] > heap[j + 1])
            // {
            //     break;
            // }
            // else
            // {
            //     heap[i] = heap[j + 1];
            //     i = j + 1;
            // }
            // no-need of doing this all just write-this-statement..

            j = j + 1; // move j = right; else it is already on left.
        }
        if (heap[i] < heap[j])
        {
            heap[i] = heap[j];
            i = j;
            j = 2 * i;
        }
        else
        {
            break;
        }
    }

    //👿📔imp-Note-point:- As Now yaha pe apn ek baat note krenge.. ki yaha ess "deletion" meh apne "heap"-array ki size decrease ho rhi hai, but apna jo "heap-array" hai voh static-array thus toh mtlb jo actual-size-of-array voh toh constant hi hai, thus toh mtlb apne array meh har "deletion"-process meh last-index vacant rheta hai , thus toh iske liyeh apn kya krenge ki apn ess vacant-index pe voh apna deleted-element store krdenge. as like this:-
    heap[size - 1] = element;

    // Now toh baat yeh hai ki agr apn esseh "deletion" baar-baar krtehh jayehh toh apnko "heap"-array as sorted-array ki tarah dikhaii dene lagega. mtlb atlast jab when "heap" will be empty apnko apna "heap"-array as sorted-array mil jayega. thus mtlb apne "heap" meh deletion kr kr k "heap" ko empty kr diya toh apna yeh "array" "Sort" ho gaya , jo ki bohat mastam baat hai and ess phenomenon ko ya mtlb ess technique ko apn "Heap"-Sort technique boltehh hai.
    // thus toh allover:-
    //💲🍕 Heap-Sort: 🍕💲
    // Heap-Sort is a "Sorting-Techique" jisko apn "Heap" ki help krteh hai, as mtlb and the time-complexity of "Heap-Sort"-procedure is 2nlogn mtlb it is O(nlogn) , which is good.
    // So the allover procedure for performing "Heap-Sort":-
    /*
    1.Create a heap of given array.
    2.then delete all the elements of the "heap".
    // thus toh for understanding "Heap-Sort" , apnko "Heap" ko create krna and "Heap" meh se delete krna acchse se aana chahiyehh.

    */
}

int main()
{

    return 0;
}