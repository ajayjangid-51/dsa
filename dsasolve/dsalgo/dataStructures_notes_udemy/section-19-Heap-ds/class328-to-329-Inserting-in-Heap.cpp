//🔥💲🍕 As now YAHA pe apn "Heap" meh Insertion krna dekhenge... 🍕💲🔥
// take a pic of class327
// as yaha "heap" meh apn array-index-from "1" se letehh hai, q ki apn jantehh hai ki it is "Complete-Tree" and complete-tree ko apn array meh represent ktehh hai then voh according to that(complete-tree) formulaes k according fill krtehh hai isiliy.

// in array (parent-node-element of any element is given by that floorvalueof-(element/2)th-node-element
//🖼️🖼️🖼️  see pic-1 , 2 , 3,4 :- for understanding "insertion-procedure(algo)-in-Heap" 🖼️🖼️🖼️
// ⏰ As toh sbse phle apnko "inserting-element" ko "representation-form-Array" meh at-the-first-empty-index pe insert krna hai(mtlb array k sbse last meh insert(or mtlb append) krna hai.) , and the  phir ess "inserted-element" k respective parent se esko compare krna hai, as and if this "inserting-element" is lesser than its parent then apn kuch nhi krenge.. else  if it is greater then apnko eske parent ko ess present "i"th index pe store kr dena hai(mtlb ki simply swap krdena hai dono elements ko). and then agr phir apnko uss "i/2"th index k parent ko apne "inserting-element" se compare krna hai and so.. on yeh kaam repeat krtehh rhena hai jab "inserting-element" becomes smaller or we reach the "root-node(mtlb at index-1)".

// so the implementation of "insertion"-in-Heap is as follows like this::-

//📔📔Note-point:- as here in function-Parameters this "heap"-array is a "array" where mtlb "Heap"-Tree is "Represented" or mtlb where "Heap"-Tree is a "Stored".
// and this "n" is a index where
void InsertinHeap(int heap[], int n)
{
    int i = n;
    int element = heap[n];
    /*
    // while (i > 1)
    // {
    //     if (element > heap[i / 2])
    //     {
    //         heap[i] = heap[i / 2];
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     i = i / 2;
    // }
    */
    // as or we can simply do like this shortly also:-
    while (i > 1 && element > heap[i / 2])
    {
        heap[i] = heap[i / 2];
        i = i / 2;
    }

    heap[i] = element;
}
//📔📔Note-point:- as yeh procedure tha for "Max"-Heap and same similarly yeh kaam apn "Min"-Heap k liyeh bhi kr sktehh hai.

//📔📔Note-point:- Analysis of this "procedure" , as yeh procedure ki time-complexity depend krti hai "heap-tree" is height pe as mtlb ki apn har-baar phle toh "inserting-element" ko apn as  a leaf-node pe insert krtehh hai and then phir uss element ko simply upar-ki-tarah in single-lane meh shift krtehh rahe hai. thus toh time-complexity of this function is O(h)  , where "h" is height-of-tree and it is O(logn) for heap.
// and as yeh baat apn "function-code" se bhi dekh sktehh hai ki "i" ki value hamesa "half" ho rhi hai thus toh that function's time-complexity is O(logn) only.

//🌟🌟🌟  Thus toh overall apn esseh bol sktehh hai ki mtlb "Heap" ko implement krna easy hai, as bcoz yeh "Complete-tree" that's-why apn esko "Array" meh represent kr sktehh hai. and array meh represent krke apne sare kaam bhi aasaan easy ho jatehh hai. :- 🌟🌟🌟