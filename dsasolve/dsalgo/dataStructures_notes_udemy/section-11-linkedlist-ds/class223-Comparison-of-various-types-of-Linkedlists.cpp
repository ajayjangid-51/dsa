//🔥💲🍕 AS Now ABHI tk apnne jitni bhi "LinkedLists" dekhi hai jaise:- "Singly-Linear-LinkedList" , "Singly-Circular-LinkedList" , "Doubly-Linear-LinkedList" and "Doubly-circular-linkedList" ko Comparse krenge , whereas Comparision in terms of jaise LinkedLists meh quantity or measure of  "Space-taken" by LinkedList , "Insertion-time" , "Deletino-time" , "Traversing-time" kya and kitni-kitni hai. 🍕💲🔥
//🖼️🖼️🖼️  see pic-1 :- for visulizing diff types of "LinkedLists" 🖼️🖼️🖼️

// 1.Space:-
// as Singly "LinearLinkedList" and Singly "Circular-LInkedList" meh "n"-datavalues k liyeh "n" extra-pointers required hoteh hai , and Whereas
// For Doubly Linear and Circular-LinkedList meh "n"-data-values k liyeh "2n" extra-pointers chahiyehh hotehh hai.

// 2.Traversing:-
// (1):- singly-linear-linkedklist meh apn only forward direction meh hi traversing kr sktehh hai , mtlb apnko forward-direction meh move krna hota hai for traversing the linkedlist,
// (2):- singly-circular-linkedlist meh apn circularly traverse(mtlb move) kr sktehh hai
// (3):- doubly-linkedlist meh apn koi bhi direction meh traversing(mtlb ghum) sktehh hai.
// (4):- circular-doubly-linkedlist meh apn bidirectiona and ciruclary move kr sktehh hai.

// 3.Insertion:-
// only sirf "singly-cirucular-linkedlist" meh time is O(n) and baki sabhi linkedlists meh insertion-Time is O(1) mtlb constant, time.

// as inserting-before-first(or head)-node.
// as 1st meh 1-link is modified , in 2nd-linkedlist 2-links are modified , in 3rd meh 3-links are modified and in 4th-linkedlist meh 4-linkds are modified.

// insertiong at any-other position:
// as best-case(mtlb inserting after first-node) time is minimum and it is O(1) and worst-case(mtlb inserting at after last-node) time is maximum and it is O(n).

// 4.Deletion:-
// deleting-first-node:-
// 2nd-ll(mtlb singly-cirucluar-linked) takes O(n) time and other all linkedlist take O(1) time only.
// Deleting-any-other-Node.
// in all linkedlists time is O(n) , whereas minimum(deleting 2nd-node) is O(1) and maximum(deleting-last-node) is O(n).

//🌟🌟🌟  Thus toh overall sbse best LinkedList is "Circular-Doubly-LinkedList" mtlb agr apnko Linkedlist se related koi bhi kaisa bhi ho apn ess "Linkedlist" ka use krke voh saab kaam kr sktehh hai, as jo ki apn esseh toh singly-linear-ll , singly-cirucular-ll etcc.etcc se nhi hai , as ess "doubly-circular-linkedlist" meh sbhi sab features hai. 🌟🌟🌟
// Now but bas baat itnihi hai ki yeh "Circular-doubly-linkedlist" space thoda jdaa consume krti hai , but whereas aajkal space is not an issue. as q ki main important is "time" and "functionality"-provided-in-the-program. thus toh mtlb aabse aage se apn yeh "Doubly-circular-linkedlist" hi use krenge.. (as java meh toh yeh "CDLL" default se yehi given hoti hai , as like jaise cpp-STL meh bhi yehi "LL" given hoti hai.).
