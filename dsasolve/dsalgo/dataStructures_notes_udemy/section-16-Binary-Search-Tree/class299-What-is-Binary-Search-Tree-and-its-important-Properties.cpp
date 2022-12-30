//🔥💲🍕 Now YAHA pe aab apn "Binary-Search-Tree"(BST) k bareh meh dekhenge... 🍕💲🔥
// as toh "Binary-Search-Tree" ko dekhne se phle apn "Search-Tree" ko dekehnge ki yeh "Search-Tree" kya hota hai,
// AS toh "Search-Trees" voh Trees hotehh hai jismeh every-node se left-sub-tree ki-sari-values uske-parent se choti hoti hai and right-sub-Tree-ki-sari-values uske parent se badi hoti hai..
// As enn search-trees ko "search-tree" isliy boltehh hai q ki enmeh apn searching very-easily and fastly kr skteh hai. As like jaise apnko niche example meh 40 search krna hai. Then apn sbse phle root-meh search krenege if root==key then okay or otherwise check whether it is the "key" is greater or smaller than "present-node" as if is smaller then we will move the p-pointer on left-side (mtlb on left-sub-tree by leaving right-sub-tree-completely) and if key is greater then we will move on right-side and so..onn we will continue until the key is found or tree-ends(mtlb we are on leaf-node mtlb now aage there is no left or right-child mtlb now there is no one more node.)

// Thus toh now aab apn "Binary-Search-Tree" ko ekdam shortly and easily esseh bol sktehh hai ki:-
// Binary-Search-Tree = (Binary-Tree + Search-Tree)
// as mtlb "Binary-Search-Tree" Search-Tree hi hota hai but bas baat yeh hai ki ess "Search-Tree" ki node_capacity-2 hoti hai. thus toh allover apn esseh easily and correctly yeh bol sktehh hai ki:-
// BST is a "Search-Tree" with degree "2".
//🖼️🖼️🖼️  see pic-1 :- for seeing the example of "BST" 🖼️🖼️🖼️
//📔📔Note-point:- apn "BST" ko bhi "linked-representation" meh hi represent(mtlb in memory meh represent) krtehh hai, and agr apn chahhehh toh sabhi trees ki tarah "array" se bhi represent kr sktehh hai.

//  Thus toh searching purpose wale data( whereas data is in form of "heirachial-structure" ) ko hamesa Bst-data-structure or Bst-memory-structure meh hi store kiya jata ,takki apni searching aasaan mtlb fast ho jayehh....
//now apn Bst ki kuch Important-properties dekhenge::-
//🖼️🖼️🖼️  see pic-2 :- for seeing "Important-Properties" of "Binary-search-Tree" 🖼️🖼️🖼️

/*


Imp-P1:- no-duplication ( as mtlb ki ess Tree( BST-tree) meh duplicates elements nhi hone chahiyehh, as thoda sahi se boleh toh yeh "duplicates-na-hona"-wali property actually "Search-Tree" ki hai, but where BST bhi search-Tree hi hai, toh mtlb yeh property ess "Tree" k liyeh bhi applicable hogi.)
Imp-P2:-Inorder-Traversal-of-BST always gives elements-of-tree in Sorted-Order.
Imp-P3:- From "n"-nodes we can generate differenet "Catalon-number"-BSTs. ( wheras apn jantehh hi hai ki "catalon-number" is no-of-trees created for unlablled-nodes. ) thus toh for creating "BSTs" apnko unn "catalon"-number-of-trees meh labelling "BST"-k Inorder-Traversal k according hi labeeling krni hai(mtlb tree ka overall inOrder-traversal sorted hi hona chahiyehh.) as tabhi voh "Binary-Search-Tree" honge as otherwise phir voh "BST" nhi honge.. as q ki apn jantehh hi hai ki sabhi "BSTs" ka inorder Traversal sorted-Order meh hi hota hai , let jaise apnko 3-nodes de rhkhe hai, toh mtlb apn agr apn unn 3-nodes se jo different BSTs generate kre and then unn sabhi BSTs ka inorder same hi hoga, toh mtlb bas apnko different BSTs generate krne k baad unki labelling dhyn se krni hai, taki phir tree ka "inOrder"  dekhe toh voh sorted-order meh hi ho, and agr inorder-sorted order meh hai then mtlb sure hai ki voh "tree" Binary-search-Tree hi hai.
// So toh apn ek baat bol sktehh hai ki apn koi bhi particular Traversal-order(pre, in , post) k liyeh "catalon"-number-of-trees create kr sktehh hai, mtlb ek trees generate krke unki labelling accordingly kr denge.


*/

//

//🤟🏼👍🏻:-As Now aab apn ne yeh toh dekh liya hai ki "binary-search-trees" kya hoteh hai and binary-search-trees meh searching kaise hoti hai mtlb kaise ki jati hai,and now aage apn yeh bhi dekhenge ki "BST" meh insertion kaise krtehh hai, deletion kaise krna hai, and only-preorder-se-BST generate krna dekhnege and atlast "BsT" ko as "search-tree" use krne k drawbacks dekhenge..

// 1.what is binary-search-tree
// 2.creating binary-search-tree
// 3.searching in binary-search-tree
// 4.insertion in binary-search-tree
// 5.deletion in binary-search-tree
