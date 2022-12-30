// "dfs" se apn simply "Graph meh cycle detect" kr sktehh hai:-
// aage baat krne se phle.. apn ek baat note krenge ki.. jaise suppose apne pass ek directed-Graph hai, now aab apn ess Graph ki edges ko 4-different-categories meh define kr sktehh hai:-
// 1.Tree-edge ( yeh voh edges hoti hai jo ki spanning-tree meh hoti hai... mtlb yeh spannig tree ki edges hoti hai.. and now yeh baki edges spanning-tree k respect meh define hoti hai... mtlb yeh bakki edges spanning-tree-edges k alava edges hoti hai, but yeh define "spanning-tree" k respect meh hi hoti hai.)
// 2.Forward-edge ( yeh voh edge hoti hai jo ki spanning-tree k kisi node se spanning-tree k descendent-node pe ja rhi hoti hai.)
// 3.Back-edge (yeh voh edge hoti hai jo ki spanning-tree k kisi node uske ancestor-node pe ja rhi hoti hai.)
// 4.Cross-edge ( yeh voh edge hoti hai joki nahi toh apne descendent-node and nahi apne ancestor pe ja rhi hoti hai, as yeh toh ek branch k node se other-branch se node pe ja rhi hoti hai..)

// So toh allover khne ka mtlb yeh ki koi bhi Graph ho(chahiyehh Directed ya unDirected), agr Graph meh back-edge hai then sure hai ki Graph meh cycle hai(and acche se boleh toh mtlb Graph meh agr "x"-back-edges hai then mtlb Graph meh "x"-cycles hogi.)

// and ek note-point aur ki agr Graph "Undirected-Graph" hai then Graph meh sirf "tree-edge" and "back-edge" hi hogi.

// Okay toh now aab baat krenge.. "algorithm" k bareh meh...
// So toh basically simply apna algorithm yeh hai ki apn given Graph pe simply "dfs"-traversal krenge and and jo bhi node visit hota ja raha hai usko apn visited mark krlenge.. and "dfs"-traversal k douraan apn agr visited-node pe vapis aajatehh hai then sure mtlb ki this happens is bcoz of the presence of Cycle.
// so toh apna algorithm kuch aseh hoga:-
