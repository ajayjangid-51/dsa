//🔥💲🍕 "Heapify"  🍕💲🔥
// "Heapify" mtlb faster method of creating "Heap".
// As toh Heapify is a procedure for creating a Heap not by inserting-in-heap as it is creating-a-Heap, as insertion and creation meh frak yeh hai ki inserting is about inserting a one "element" in heap at a time and creation is about creating allover heap at a time.
//
//🔔🔔 In insertion we move a element from leaf to towards root and in deletion we move a element from root to towards leaf. 🔔🔔 So toh mtlb dirn-of-adjustment is opposite to each-other in both the operation
// 🖼️🖼️🖼️  see pic-1 :- for seeing the direction-of-adjustment in "insertion" and "deletion"-process 🖼️🖼️🖼️

//🖼️🖼️🖼️  see pic-2 :- for understanding the process of "Heapify", that ki "Heapify" kaise hota hai..
// 🖼️🖼️🖼️
// heapify meh apnko from right-to-left(mtlb in heap-array) chlna hai and then usmeh root-to-leaf(mtlb deletion-wali adjustment approach follow krni hai.) and vohi deletion-adjustment-idea hi follow krna hai ki swap the current-element with its greater-child if that greater-child is greater than it itself. until current-element become greater than its childrens and after this move to next-element in the given "array".
//📔📔Note-point:- as Heapify meh apn leaf-node(mtlb half-of-the-nodes) ko toh process hi nhi krtehh mtlb voh toh skip ho jatehh hai..
// As Heapify meh apn "deletion"-wali adjustment-dirn follow krtehh hai..
// The Heapify time is O(n)
// whereas creating a "Heap" by insertion, se toh apnko n*(logn) time lagta hai. esliy toh apn accordingly dekh lenge ki apnko kya krna hai...

//
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define deb(x) cout << #x << " = " << x << endl

void Heapify(vi &arr)
{
    int j = arr.size() - 1;
    // this implementation is per seeing childrens and another shorter implementation can be in this way ki apn node k parent ko dekh rahe hai..
    for (int i = j; i > 0; i--)
    {
        int ii = i;
        while (1)
        {

            int lchild = ii * 2, rchild = lchild + 1;
            // deb(lchild);
            // deb(rchild);
            if (rchild < arr.size() or lchild < arr.size())
            {
                int child = (arr[rchild] > arr[lchild]) ? rchild : lchild;
                if (arr[child] > arr[ii])
                {
                    swap(arr[child], arr[ii]);
                    ii = child;
                }
            }
            else
            {
                break;
            }
        }
    }
}
int main()
{
    vi arr = {INT_MAX, 5, 10, 30, 20, 35, 40, 15};
    Heapify(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}