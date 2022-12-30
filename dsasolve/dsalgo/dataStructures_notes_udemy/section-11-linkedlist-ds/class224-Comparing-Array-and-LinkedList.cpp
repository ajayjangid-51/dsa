//🔥💲🍕 as Now YAHA pe apn "Array" and "LinkedList" ko compare krenge on the Creteria that  🍕💲🔥

// As apn jantehh hi hai ki this "Array" and "LinkedList" both are only-and-only the physical-Data-Structures. as baki sab Data-Structures ko apn enhi-physical-dataStructures ka use krke implement krtehh hai (mtlb enhi ka use krke apn unn data-Structures(mtlb containers) ko memory meh banatehh , create krtehh hai.) as mtlb yeh data-Structures actually meh containers hi toh hotehh hai, whereas yeh "Array" and "linkedlist" containers ki koi property nhi hoti ki esnmeh data sirf essi manner meh store hota hai , or ya jaise sirf essa data hi store hota hai etc.etc.. and jo enke alava baki Data-Structures( whereas they are called "logical-dataStructures" as q ki vaha bs ek chotasa logic hota hai on that "physical-dataStructure" pe ) hoteh hai voh propertized-Containers hotehh hai mtlb unki kuch na kuch property hoti hai and voh property related to data-storing , data-accessing , data-deletion etcc.etcc pe depended hoti hai, thus toh mtlb agr apnko unn baki Data-structures ko implement krna hai then apn enhi containers ka use krenge for stroing-the-data but apn kuch special functions , conditions define krdenge thus toh mtlb phir voh vesa container ek naya alg Container(mtlb data-structure) ban jayega. . thus toh mtlb more importantly apnko yeh dono physical-Data-Structures ek dam acche se aane chahiyehh, mtlb enn doo k saat apn ekdam se khel sake...

//🔔🔔 1. In Memory where they are Allocated:- 🔔🔔
// as "array" is allocated in "stack-memory" as-well-as "heap-memory". whereas "Linkedlist" is always created in "heap-memory" q ki linkedList ko "stack" meh create krne ka koi mtlb nhi hai , as q ki apn phir deletion-operation efficeint nhi kr patehh.

//🔔🔔 2.Size 🔔🔔
// as "Array" ek baar create ho jata hai toh voh ek fixed-size ka hi create hota hai, mtlb apn "Created-array" ki size "increase" or "decrease" nhi kr sktehh.
// Whereas created "Linkedlist" ki size apn "increase" and "decrease" kr sktehh hai.

// Advantages and Disadvnatages of having fixed-size( and mtlb of having "Contiguous-memory")
// Advantages:-
// 1.Taversing is of constant-time (mtlb we can directly write the address of that particular-sub-container as bcoz apne pass har sub-containers k addresses hotehh mtlb actully apn har sub-containers k addresses ko predict kr kstehh hai as bcoz apnko pata hai ki they are allocated-in-Contagious-manner )
// 2.size-occupied is equal to no.-of-data-values.

// Disadvantages:-
// 1.space-untilization is not efficient , mtlb ya toh kuch space empty rhjayega or ya kuch space kaam padjayega. it is Efficient only and only if "actual-size-needed" is known (and in real-world-problem this things is not possible that we can predict "actual-size-needed")

// Advantages and DisAvantages of having Variable-size
// Advantages:-
// 1.Space-untilization is Efficient.

// DisAdvantages:-
// 1.Traversing is of O(n)-time (mtlb apne pass koi particular-address nhi hota thus toh mtlb apnko from "first-node" se traversing krni hoti hai.)
// 2.size-occupied is twice(for singly-LL) or thrice(for doubly-LL) of  no.-of-data-values

//🔔🔔 3.Insertion-time:- 🔔🔔
//🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// both time-complexity is same , but it matters when we decide only one-direction for insertion.
// and in "array" there is movement of data but in "LinkedList" there is no-movement of data , thus toh mtlb in terms of space while Insertion "LinkedList"-Insertion is efficient.

//🔔🔔 4.Deletion-time:- 🔔🔔
// for Deletion also both are equally efficient , until-unless data is not issue as bcoz in "Array" data is shifted whereas in "Linkedist" data is not shifted , so in terms of data "Linkedlist" is more efficient.

//🔔🔔 5.Searching 🔔🔔
// as on "Array" we can perform "linear"-Search( which is O(n)) as-well-as "Binary"-Search( which is O(logn))  , where as on "linkedlist" we can perform "linear-search" (which is O(n)) and if we perform "binary-search" then it is   O(nlogn)(as we cannot directly access the "middle-element" ) which is even less efficient than "Linear"-search. thus toh allover for "Searching" "Array" is good and efficient.

//🔔🔔 6.Sorting:- 🔔🔔
// most of the Sorting are designed for "Array" mtlb they are more efficient to "arrays" , but there are some "Sorting-Techniques" which are acutllay more efficient to "Linkedlist" than "arrays" and they are "merge-Sort" and "Insertion-Sort". (as apn aage "Sorting-Technique"-Section meh dekehnge ki yeh "merge-Sort" and "Insertion-Sort" kaise LinkedList k liyeh jada efficient hai mtlb voh kya ek-doo baateh hai jiski vajah se yeh "linkedlist" k liyeh jdaa eFficient hai.).

//🌟🌟🌟  as toh overall "Array" and "Linked-List" dono apni-apni jagah sahi hai, mtlb its all depend on the Requirement and Conditions , so on the basis of Requirements and conditions we have to use very suitable "data-structure" mtlb "Array" or "LinkedList":- 🌟🌟🌟
