//🔥💲🍕 as NOw apn "Binary-Search-Tree" meh "Deletion" krna dekhenge.. 🍕💲🔥
//🖼️🖼️🖼️  see pic-1 , 2 and 3  :- for understanding the procedure-algorithm of "Deletiong" the element from "Binary-Search-Tree". 🖼️🖼️🖼️
// so toh jisbhi element ko apnko delete krna hai, uski jagah apn uss element k inorder-predecessor or ya inorder-successor se replace kr denge.

// procedure of deleting-node from BST:-
// 1. first search for the "key" ,if it is not present then do nothing else continue with step2.
// 2. if found-key_node is leaf-node then simply delete it and mark the tail-pointer(q)->left of ->right as NULL.
// 3. and if found-key_node is not leaf-node, then replace that "node" by its inorder-predeccsor_node or inorder-successor_node(we always choose to delete "inorder_successor_node"). and with replacing, we have to delete that "inorder_successor_node" and mark its parent's-child as NULL.
// nOw baat yeh aati hai ki apn "inorder_predeccsor" or ya "inorder_successor" kaise find kre, so toh for "inorder_predeccsor" goto to left-child of "key_node" and then always goo-on right-child of current-node and that last right-child is will be "inorder_predeccsor".
// and for "inorder_successor" goto right-child of "key_node" and always goto left-child and the last left-child is will be the "inorder_successor_node" of that "key_node".
// so toh mtlb for finding "inorder_predeccsor" or "inorder_successor" we don't have to perform inorder-traversal.
// note-point:- if one any-one of the "predeccsor" or "successor" is present then delete that present node.

// if "predeccssor" or "successor" is not "leaf-node" then vaha apnko multiple modifications krne ho sktehh hai.. see pic2.

// time of deletion is logn(for searching)*logn(logn modification).
// Implementation:-
