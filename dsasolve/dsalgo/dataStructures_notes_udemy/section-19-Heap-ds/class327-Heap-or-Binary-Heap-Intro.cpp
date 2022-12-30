// As YAHA pe apn "Heap" k bareh meh dekhenge..
// (notice:- as jab apn esseh bolteh hai na ki apn eske bareh meh dekhenge toh mtlb ki apn eske bareh meh sab kuch dekhenge mtlb jo main 4-questions(kya , kaise , kab and kyu mtlb kya hai yeh, kaise hota hai yeh , kab hota hai yeh and kyu hota hai. or mtlb ess tarah ek-dusre se relatedly baatehh ) hoteh hai na voh toh dekhenge hi or saat meh kuch orr additional acchi,sandhar bateh bhi dekhenge. toh apnko yeh wali baat hamesa dhyn meh rkhni hai.)

// as "Complete-Tree" voh "Tree" hota hai jisko agr apn level-wise-order se elements ko kisi array meh store kre then vaha uss array meh in-between meh koi empty space nhi rhena chahiyehh or ya apn sidhe-simply boleh toh mtlb tree meh nodes level-wise-left-to-right dirn meh nodes continously fill hone chahiyehh, thus toh agr "tree" meh nodes continously filled hai, then that "Tree" is "Complete-Tree" or otherwise it is not "Complete-Tree" //🔔🔔 as yaha "Complete-Tree" meh sbhi nodes except leaf-nodes ka fully filled hona jaruri nhi as jaise "Full-Tree" meh hota hai. 🔔🔔 // and note-point ki "Complete-Tree" are also known as "almost-Complete-Tree".

//💲🍕 1.What is "Heap" 🍕💲
// 🍧 Heap or ( or mtlb Binary-Heap) 🍧 as dono ek hi cheez hai..
// as toh "Heap" is a "Complete-Tree" only where jismeh parent-node always hamesa apne all childrens(mtlb its decentents) se bada or equal(for max-Heap) hi or yah chota or equal(for min-Heap) hi hota hai. as or apn esseh bhi bol skteh hai ki mid-node apne left-sub-tree or right-sub-tree se greater-or-equal or lesser-and-equal hota hai. and yaha apn mostly "Binary-Heap" hi dekhenge mtlb jismeh har Node k atmost-2-childrens hi honge.
//📔📔Note-point-2:- here in "heap" duplicates are allowed
//📔📔Note-point-3:- as jaise apn jantehh hi hai ki "heap" is complete-Binary-Tree thus toh mtlb "Heap-Tree" ki height hamesa log(n) hi hogi. (mtlb apn jantehh hi hai ki "complete-Trees" ki height unnessarily increase nhi hoti q ki vaha "elements" ka insertion level-wise order meh hota hai. , whereas yaha "unnessary" ka mtlb ki Tree meh nodes ki space khali hotehh huyeeh bhi next-levels meh nodes ko fill krna..)
//👿📔imp-Note-point:- apn ek kafi important baat note krenge ki "Heaps" ko apn "arrays" meh "represent" krenge... as mtlb "Heaps" ko arrays meh hi implement kiya jata hai. and mtlb ki apn "Heap" ko only ek single "Array" ki help se "reprsent" kr sktehh hai.

//📔📔Note-point-4:- "heap" is not used for "Searching" yeh apnko dhyn rkhna hai , as esseh toh yeh obvious hi hai, but kabhi-kabhi jldi bazi meh confustion ho sktaa hai.
//📔📔Note-point-5:- use of "heap" apn aage dekhenge ki "Heap" ka use kya hai or mtlb use kaha hai.
//📔📔Note-point:- as apn note-point krenge ki "Heap"-Tree "balanced-Tree" nhi hai, thus toh mtlb "heap" meh apnko "balancing" vagera k bareh meh kuch nhi sochna hai..

//🖼️🖼️🖼️  see pic-1 :- for seeing the "Heap"-Tree 🖼️🖼️🖼️
//🔶🔶 and jaise ki apn ne upar bola ki apn "Heap"-Tree ko mostly "Array" meh hi represent krtehh hai, thus toh "array"-representation k liyeh apnko yeh kuch baatehh dhyn rkhni hai ,jaise "Array" meh agr kisi index "i" pe koi node hai toh mtlb uss "node" ka left-child will be present on the index "2i" and its right-child will be present at index "2i+1". and jaise kisi index "i" pe koi node present hai then uska parent-node will be present on the index "i/2"(floor-value). as abhi yeh jo baateh apn ne boli hai, voh actualy "Complete-Tree" ki baateh hai , as whereas yaha yeh "heap"-Tree bhi complete binary-Tree hi hai.(and whereas for smooth-following of the above rules apn hamesa "tree-array" ko as a 1-indexing-array letehh hai. ) 🔶🔶

//💲🍕 2."inserting"-in-Heap ( as mtlb "heap" meh "insertion" krna dekhenge) 🍕💲
//💲🍕 3."Deleting-from-Heap" (as then apn "Heap" meh se node "delete" krna dekhenge..) 🍕💲
//💲🍕 4. as then apn "HeapSort" k bareh meh dekhenge ki mtlb yeh "heapSort" kya hota hai..🍕💲
//💲🍕 5."Heapify" 🍕💲
//💲🍕 6. using "Heap" as "Priority-Queue" 🍕💲
//
//  Heap ek "Binary-Tree" hi hota hai,  yaha "Heading" meh "binary" se yeh pata chal rha hai ki
// so as toh heading k according apn sbse phle yeh dekhenge ki Heap kya hota hai, phir yeh dekhenge ki heap kaise banta hai , then phir yeh dekhenge ki heap kyu hai and then phir yeh dekhenge ki heap kab use hota hai. or relatedly orr bhi baateh bhi dekhenge jo apnko pata chalegi toh.

// Note-point:As toh aage apn simply aab Tree-related Ds hi dekhenge... Jaise:- heap bhi tree hi hai , trie , and many tree hi hai..
