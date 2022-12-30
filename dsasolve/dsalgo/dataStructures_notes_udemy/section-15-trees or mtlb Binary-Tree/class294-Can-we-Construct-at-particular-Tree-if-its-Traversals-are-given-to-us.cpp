//🔥💲🍕 as toh mtlb apn YAHA pe yeh dekhenge ki agr apnko kisi "Binary-Tree" k Traversals-results de rkhe ho, then kya apn unn "Traversal"-results ko dekh k mtlb unn "Traversal"-results se voh exact-particular(exact q ki apn janntehh hai ki ek particular-traversal k apn "Cn(catalan-number)"-trees generate kr sktehh hai.) "Binary-tree"(jiske "Traversals" yeh hotehh hai) generate kr sktehh hai??🍕💲🔥

// InShort apn esseh bol sktehh hai ki , intially apne pass ek "binary-Tree" hai and apn ne uske Traversals(jiase "preorder-traversal" , "inorder" , postorder and or "level-order" ), Now aab baat yeh hai ki agr apn uss "Tree" ko vanish krde and now apne pass aab bas uss "Tree" k sare-Traversals hai, Thus toh kya apn unn "Traversals" se voh particular apna "Binary-Tree" vapis bana sktehh hai or mtlb generate kr sktehh hai??.

//🔔🔔 Okay, AS toh ess cheez ka answer apn simply kuch examples leke dekhenge.....  🔔🔔
/* given "Binary-Tree":-
                A
                 \
                  B
                 /
                C
*/
//🖼️🖼️🖼️  see pic-1 :- for all about this Example:- 🖼️🖼️🖼️
// Suppose ki apne pass ek "Tree"(mtlb obviously "Binary-Tree" hi q ki apn mostly "Binary-Tree" hi dekhtehh hai.) of 3-nodes( node-A , node-B , node-C ) thaa, jiska apnko "PreOrder"-Traversal(A , B , C ) de rkha hai.
// okay toh aab apn ees given "pre-order"-Traversal se Tree generate krtehh hai, mtlb voh Tree banateh hai jiska "pre-Order"-Traversal yeh (A , B , C) hota hai:-
//👿📔imp-Note-point:- But But ess given "Traversal" se Tree create krne se phle apn ek baat note krenge ki, apn ne "Catalon-number" study kiya tha , and usmeh apn ne yeh dekha thaa ki agr apnko "n"-unlabelled-Nodes de rkhe ho then vaha apn (2n)C(n)/(n+1) -Trees generate kr sktehh hai. (where yaha "C" is p&c-wala "C" hai.)
// Thus toh mtlb yaha "pre-order"-Traversal dene ka mtlb apnko simply "n"-unlabelled-nodes de rkhee hai. thus toh mtlb phir toh ess "preOrder"-traversal k toh apn multiple-Trees generate kr sktehh hai , thus mtlb yeh toh phir sahi nhi hai, as q ki apnko toh voh "exact-apne-wala-particular-Tree" chahiyehh na.
/*
        A                                   A
       /                                   /
      B                              or   B                ...     or so..on upto to "Catalon-Number".
     /                                     \
    C                                       C
 (Tree-1 with preOrder as => A,B,C) 
 
//🖼️🖼️🖼️  see pic-1 :- to see all the Trees which are generated from this "preOrder-Traversal" 🖼️🖼️🖼️

*/

//🔔🔔 As toh like this "preOrder"-Traversal , apnko "InOrder-Traversal" or "PostOrder-Traversal" de rkha ho tab bhi apn voh particular "Tree" generate nhi kr payenge as ense toh Trees-equalto-Catalon-number generate honge.  🔔🔔
//🔔🔔 And as like agr apnko "preOrder-and-PostOrder" mtlb yeh two-Taversals bhi given tabbhi apn voh "Particular-Tree" generate nhi kr payenge, as yaha pe bhi more than one Trees generate honge. 🔔🔔
//👿📔imp-Note-point:- as but agr apnko "preOrder-and-InOrder" or "postOrder-and-InOrder"(mtlb ek inorder-traversal or dusra koi bhi traversal(pre of post) de rkha ho then ) Traversals de rkhee ho then toh mtlb phir apn voh apna "particular"-Tree generate kr sktehh hai:-
// as toh noww aab aage apn yeh dekhenge ki kaise apn voh particular-Tree genereate krenge from the given "preOrder-and-InOrder"-traversals or "postOrder-and-InOrder"-traversals.