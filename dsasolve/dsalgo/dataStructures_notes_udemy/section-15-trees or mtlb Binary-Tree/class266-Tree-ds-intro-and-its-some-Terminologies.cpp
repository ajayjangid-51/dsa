//🔥💲🍕 🍧 Tree 🍧 🍕💲🔥
// as toh phle apn simply "Tree" ka introduction dekhenge... and phir tree-terminologies dekhenge...

// As toh  apn simply asseh bol skteh hai ki tree is collection of Nodes(where "Node" can be of anykind ) in which apn  unmeh se kisi ek ko toh root-node bana deteh hai, and phir baki nodes k disjoints sets bana deteh hai and. Edges-linking(mtlb node-k-upar-se-aane-wali-linking) toh sabhi nodes k bich meh hoti hi hai except root-node ko chod k.
// For understanding of implementation of Tree-Ds (mtlb Tree-Container) , simply apnko "node" ko and "node-linking" ko samjna hai( and as yeh apn Linkedlist meh ek-dam acchce se samaj hi gayehh hai. ). As node mtlb ek-bada-container jismeh ek or multi data and ek ya do or ya multi pointer hoteh hai. as node-linking mtlb ki kisi node k ek-pointer meh kisi orr node ka adrress store krna ,As yahi linking hoti hai.

// As apn root-node ko parent-node bol sktehh hai but apn usko "root" hi bolenge.. as q ki voh parent hone se phle root hai( mtlb visulization meh uss node ko "parent-node" se accha "root-node" bolna sahi lgta hai q ki phir phir uss "node" se hi pura tree ban rha hai, as jaise naturally asehi hi hota hai ki root se pura tree banta hai and aur mtlb phir visulization acche se hota hai.)

//🔥💲🍕 Terminologies;- 🍕💲🔥

// 1.root-node (as "root-node" ko apn aseh define kr sktehh hai ki voh "node" jiska koi parent-nhi hota.)
// 2.parent-node ( as "parent-Node" kisi orr "node" k respect meh define hota hai jaise koi ek "node" kisi dusre "node" ka address-contain kr raha hai aur mtlb usko point kr raha hai then then uss point-hone-wale-node ka yeh "node" parent-khelata hai, and aur diagramtically apn esseh bhi bol sktehh hai ki 2-nodes k bich meh jo link jisko point kr raha hai voh toh "child-node" hota hai upar-wale node and upar-wala-node niche-wale-node ka parent-node hota hai.)
// 3.child-node
// 4.sibling-nodes ( as jin nodes ka parent( parent mtlb it "grand-parent" bhi "great-grant-parent" and soo-onn etc.etc..) same hota hai unko sbhi ko siblings-nodes khtehh hai ek-dusre k aur mtlb voh sabhi ek dusre k mtlb apas meh ek-dusre k sibling-node khtehh hai..)  jaise and "a" and "b" ka parent "c" hai thus toh "a" and "b" ek-dusre k sibling hai, mtlb "a" ka sibling "b" hai , and aur "b" ka sibling "a" hai.

// 5. Decendents-nodes (yeh nodes define hoteh for kisi other node k liyeh, jaise mtlb ek-node k niche 5-nodes aa rahe hai in the way kii uss ek-node se unn sabhi nodes pe ja sktehh hai in the downwards-dirn meh chlne pr, as then yeh nodes uss node k as a "decendent"-node khlateh hai..
//🖼️🖼️🖼️  see pic-1 : for visulizing-Decendents-Nodes 🖼️🖼️🖼️

// 6.ancestor-nodes (or shortly "ancestors" ) ,as yeh "ancenstor-Nodes" bhi kisi ek-particular-node k liyeh define hotehh hai, now thus toh jaise ki apnko "e"-node se "root-node" pe jana hai, thus toh "e"-node se "root"-node tk jane meh bich meh jitne bhi nodes aateh hai including "root-node" , as yeh sab nodes uss "e"-node k "ancestor-Nodes" khelatehh hai.

// 7. Degree-of-node mtlb "node" k total-no. Of direct-children. (Not all children as voh toh phir se decendents khlateh hai).
// as toh apn "Decendents-Nodes" ko esseh bhi bol sktehh hai ki they are equal to = (direct-childs + not-direct children ) , as toh "direct-child"+"non-direct-childs" are combinedly can be called as "Decendents-Nodes" of their main-parent-node.

// 8. Internal-nodes (or "non-leaf-nodes" or "non-terminal-nodes") (as yeh voh Nodes hoteh hai jinki "degree" is non-zero hoti hai mtlb enke "Childrens( as children boleh toh mtlb direct-childrens hi)" hotehh hi hai. as mtlb minimum 1-child toh hoga hi hoga or maximum to kitne bhi ho sktehh hai (but mainly "2"-childrens hi honge as q ki apn mostly and only "binary-trees" hi dekhenge programming meh.)

// 9. External-nodes (or leaf-nodes or terminal-nodes) (Whose degree is "zero" as mtlb enn "nodes" ka koi "child" nhi hota, as mtlb yeh tree k sbhi branches k last meh hi present hoteh hai (as jaise apne actual natural-tree-meh hota hai ))
// 10. Forest:- collection-of-tree is known as forest.

// 11. Level (as start hota from 1-indexing ) and height start hoti hai from 0-indexing. As level meh apn nodes-ko-count krteh hai and height meh apn branch ko count krteh hai.. as height meh root-node at 0-height hota hai..

// 12. Degree-of-tree (mtlb maximumly jis node k sbse jada no.-of-child-hai , vohi phir degree-of-tree hota hai..
//📔📔Note-point:- as esseh apn tree ko dekh k "degree-of-tree" nhi bata sktehh hai , as voh toh apn "tree" k node ko dekh k bata sktehh hai, mtlb ki uss node meh kitne pointer-available hai, mtlb no.-of-pointers-in-node is equal to "degree-of-tree".
//📔📔-Note-point:- (as particular-tree meh sbhi "nodes" same kind k hi hotehh hai, as bas umeh available values ka diff ho skta hai jaise for a koi-particular-binary-tree kisi "node" meh ek-pointer "null" hai and and other pointer "not-null" and kisi node k dono-pointers hi not-null hai, thus toh mtlb avilable-values ka diff ho skta hai and yeh jo naming yeh "avialable-values" k according hota hai jaise abhi ess example k liyeh apn esseh bol sktehh hai ki 1st-node ka ek-hi-child hai and other node k 2-childs hai. so toh mtlb yeh kuch important baat hai about the tree toh mtlb apnko yeh baateh dhyn meh rkhni hai trees meh. )
//📔📔Note-point:- as "tree" meh mostly as like jaise "linkedlist" meh traversing krtehh hai via the help of pointers , as vasehi apn "tree" meh traversing krenge..

//🔥💲🍕 Binary-tree 🍕💲🔥
//🔔🔔 As now ToH aabse aage apn apn Binary-trees hi dekhenge mtlb voh tree hi dekhenge jinke "nodes" k  maximumly "2-childs" hi honge.  🔔🔔

// Binary-tree are the tree whose degree is  "2" mtlb its nodes can have 0 or 1 or 2 children and as not more than 2-children are allowed for a tree to be a binary-tree.
//📔📔Note-point:- as toh jaise ki apnko pata hai ki binary-tree k "node" meh 1-data(or multiple-data) and 2-pointers hoteh hai , thus toh unn pointers ko apn as a left-pointer and right-pointer naam se boltehh hai. and left-pointer jis node ka address-contained karega uss node ko apn left-child boltehh hai and right-pointer wale pointing-node ko apn "right-child" boltehh hai.
//🖼️🖼️🖼️  see pic-2 : for seeing the Binary-tree in the Memory (mtlb Binary-tree which is allocated in Memory) 🖼️🖼️🖼️
//📔📔Note-point-2:- as agr apn "tree" ko sahi se and mtlb acchse se dekhe toh apnko bohat-sari multiple linkedlists-dikhegi , thus toh mtlb jaise apn "Linkedlist" meh Traversing krteh thee same vasehi hi apn "Tree" meh Traversing kr sktehh hai mtlb simply via using Pointers apn Traversing Tree meh bhi krenge..
//📔📔Note-point-3:- as toh for Creating "Tree" apn "Linkedlist" ki tarah hi create krenge , as bas apn itna user-se-puchenge ki in which you have to insert mtlb in "left" or "right" mtlb you have toh insert left-child or right-child and aage toh simply apn new-NOde create krke Memory meh nodes ko Create krtehh hai in a "tree-fashion" and apna "tree" banjayega.

// 🍧 Catalon-number 🍧... For finding the no.-of diff binary-trees can be formed by the given set-of-nodes mtlb by the given no.-of-nodes and voh equal catalon-number is equal to == 2nCn/(n+1)

//📔📔Note-point:- as tree ka use mainly and mostly hierarchical-data k liyeh hota hai, jaise apnko kuch esseh store krna ho ki cs-branch ka data store krna hai... Then apn tree ka use krenge.. as jaise cs-branch meh 4-years hai and phir har year meh itne subjects hai and as like...this.

// "trie" is a "search-tree" which is oftenly also called "digital-tree" or "prefix-tree" ,