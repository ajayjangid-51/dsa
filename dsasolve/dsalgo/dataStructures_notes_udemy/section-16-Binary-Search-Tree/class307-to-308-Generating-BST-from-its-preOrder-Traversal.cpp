//🔥💲🍕  🍕💲🔥
// as toh apb BST ko just pre-order se bhi generate kr sktehh hai wheras apn preoder+inorder se toh kr hi sktehh hai..
// sirf pre-order se "bst" generate krne ka idea yeh hai ki jab apn pre-order ko sort krenge then actually mtlb yeh sorted-order "bst" ka "inorder" hi toh hoga., just mast baat toh yeh hai ki apn "BST" ko toh sirf only pre-Order se hi generate kr sktehh hai mtlb apnko "inorder" ki jarurat nhi hogi.

// here we need stack.
// and then apn preorder ko trav krenge , and by letting first-element as a root-node.
// then mark node-p = root;
// and second-element pe aayenge and dekhenge ki it is smaller and greater k hisab se apn root-node k left ya right meh insert krdenge, and saat hi meh uss "node-p" ko "stack" meh insert krdena hai. and mark node-p = left-child or right-child(mtlb current-node)

// 🎶 ⭐⭐ basically yeh yaha "sorted-array" nhi hai , as yeh "inorder" hai of BST ka , but yeh baat kafi acchi
// hai ki jab apn "inorder" se "BST" banantehh hai tab toh apna jo "BST" banta hai voh Balanced-BST banta hai. ⭐⭐.
