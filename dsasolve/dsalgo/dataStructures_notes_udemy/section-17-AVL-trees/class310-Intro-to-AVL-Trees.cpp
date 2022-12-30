//🔥💲🍕 AS toh now aab apn "AVL"-Trees(or height-balanced-Binary-Search-Tree or mtlb Balanced_Binary-search-tree) k bareh meh dekehnge... 🍕💲🔥
//🔔🔔 one-notice-point ki yeh jo "AVL" name hai na , yeh kuch "programmers(Adelson-Velskii and Landis)" k naam pe diya gaya hai.... 🔔🔔
// Avl is balanced-BST( mtlb heigt-balanced-BST) and agr apnko koi unbalanced-Bst dikhta hai then apn uska rotation krke uss unbalanced ko balanced kr skteh hai..

// As yaha "Balanced" and "Unbalanced" ka mtlb ki "height-ki-terms" meh balanced and "unbalanced" and "heigt-ki-terms" meh "Balanced" and "unbalanced" ka mtlb ki "tree" k sare "leaf-nodes" same level meh hone chahiyehh or ya mtlb sare "leaf-nodes" maximumly ek-level k difference meh ho sktehh hai.

// As toh "height-of-Tree" is balanced by using "Balance-factor" (which is equal to height-of-left-sub-tree - height-of-right-sub-tree ) . as and yeh "bf( balance-factor) " apn AVL-tree k har node k liyeh calculate krtehh hai. and for any Tree to be "heigt-Balanced" the balance-factor of every-node should be {-1 or 0 or 1}. as and agr kisi bhi node ka "balance-factor" eske alava hai then it is sure that ki voh "Tree" "heightly-Balanced" nhi hai.( as yeh apn esseh visulize bhi ho raha hai ki agr kisi "node" ka "bf" is greater then 1 or lesser then -1 ,then mtlb ki uss "node" ka koi ek child-nhi hai and jo child hai uske multi childs hai , toh mtlb vaha "1-space" khali hai , toh mtlb vaha voh space bhar jayehh toh mtlb apne "tree-ki-height" kaam ho skti hai. as thus toh agr apne tree ki height minimum hogi(which can be log(n) ) then mtlb sare "operations" jo ki "height-of-tree" pe depend krtehh hai voh sab kafi "Efficient(mtlb lograthimic-time ka algorithm kafi efficient-mana jata hai)" banenge.. )

//🖼️🖼️🖼️  see pic-1 :- for examples of "calculating-balance-factors"  🖼️🖼️🖼️
// as for counting the height of "Tree" apn edges count krtehh hai or ya apn no.-of-nodes bhi count kr sktehh hai( BUT agr apn nodes count kr rhe then mtlb apnko ek-single line meh nodes count krne hai.)
//📔📔Note-point:- leaft-nodes ka "bf" hamesa "0" hi hota hai.
//📔📔Note-point:- apn ek baat note krenge ki "AVL"-Tree( mtlb "BBST") meh apnko "Bf" kabhi bhi greater than "1" nhi milega.(as yeh q ki AVL-tree khud balanced-BST hai toh mtlb eske sare nodes balanced hi honge na.).

// Thus toh agr "Tree" meh kisi bhi "Node" ka "Bf" is greater than 1 or lesser than -1 , then mtlb ki uss Tree ka voh "node" imbalanced hai , and "Tree" meh agr koi bhi ek "node" imbalance hai then mtlb voh allover Tree is Imblanced. so toh kisi bhi "Tree" ko balance krne k liyeh apnko uss Tree k sabhi "node" ko balance krna hoga, mtlb agr koi ek "node" bhi agr imbalance hai then voh Tree bhi phir mtlb "inbalanced" hoga. toh mtlb apnko ess baat ka acche se dhyn rkhna hai...

// Okay toh now aab baat yeh hai ki agr koi Tree meh koi "node" imbalanced hai , then usko apn "Balance" kaise kare..
// so toh apn "Balancing" rotations krke kr sktehh hai, in this way ki.. ( continue in class311).
