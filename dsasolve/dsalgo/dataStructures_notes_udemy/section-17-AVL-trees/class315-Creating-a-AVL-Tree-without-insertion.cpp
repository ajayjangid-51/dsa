//🔥💲🍕 AS Now YAHA pe apn mtlb bina "Insertion"-fn k "AVL"-tree Create krna dekhenge... as mtlb apnko simply kuch keys di gayi hogi and apnko unn keys se ek particular "AVL"-Tree jo create hota hai voh creat krna hai. 🍕💲🔥
// Thus toh allover simple ki keys ko one-by-one leke "AVL"-tree create krtehh rhena hai , and agr bich meh kahi "imbalancing" create hoti hai toh vaha "Rotations" krke "imbalancing" ko sahi krna hai.

// So, toh apn yeh kaam ek simple example leke uspe krke dekhenge..
//🖼️🖼️🖼️  see pic-1 :- for example🖼️🖼️🖼️
//📔📔Note-point:- as essi situation meh apn first-element ko hi as a intially "root-node" leke hi chaltehh hai.

//🖼️🖼️🖼️  see pic-1 :- for seeing the procedure we have performed:- 🖼️🖼️🖼️
//👿📔imp-Note-point-1:- as kabhi bhi ek saat multiple nodes "imbalanced" ho jatehh hai then vaha pe apnko "1st-imbalanced-ancestor-node(mtlb sbse upar wale imbalanced-node)" ko dekhna hai and uske respect meh "imbalacing"-type sochna hai.
//🔔🔔 now simply "analysing" above procedure:- 🔔🔔
// 1. as ess example k according apnne 7-elements insert kiyeh and and 4-rotations perform and unmeh se 2-rotations are single-rotations and 2-rotations are double-rotations:-
// 2. and the jo Tree apnne generate kiya hai uski height "2" hai mtlb it is of minimum-height that can be constructed from given "7" nodes.
// 3.Note-point: as agr enhi keys se apn "BST" generate krtehh mtlb "rotation" perform nhi krtehh hai, then uski height "6" hogi which is actually maximum-height which can be generated from given "7"-nodes. So toh agr apn ess "BST"-Tree pe koi bhi operations perfrom krtehh hai then uski worst-case-time-complexity is O(n) hogi. and but agr koi bhi "Operations" uss "AVL"-tree pe krtehh hai the worst-case-time-complexity will      only O(logn) hi hogi. , jo ki bohat aachi baat hai, and yahi actual and one-an-only-important faydaa hai of "AVL"-trees.
//🖼️🖼️🖼️  see pic-2 :- for this notepoint-3 🖼️🖼️🖼️
//📔📔Note-point:- as apn height ko from 1-se count krteh hai toh voh galat nhi hai, mtlb apn kuch bhi follow kr sktehh hai , but jo follow kr rhe hai uski ko hi apnko hamesa follow krna hai , otherwise phir apnko khamakhaa confusion hoga hai.

//🌟🌟🌟  so toh overall apn esseh bol sktehh hai ki "AVL"-Trees are the best-Trees for "Searching" as compared to "Binary-Search-Trees". So toh allover apn esseh bhi bol sktehh hai ki "AVL"-Tree is a perfect "binary-search-tree" , so toh apn kabhi bhi "BST" create kare then vaha apnko "Rotation" krke usko hamesa as a "AVL"-tree hi banake rkhna hai.🌟🌟🌟
