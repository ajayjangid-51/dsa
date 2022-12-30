//🔥💲🍕 Okay toh now aab apn "2-3-4"-Trees dekhenge... 🍕💲🔥

// 2-3-4 trees voh trees hoteh hai jinke node meh 3-datakeyvalues and 4-links hotehh hai, As enko 2-3-4 isliy boltehh hai q ki yaha mtlb har node k 2 ya 3 ya 4 childrens ho sktehh hai.. whereas 1-key hogi toh 2-childs honge , 2-key-honge then 3-childs honge and so on as like this...

// and yeh 2-3-4-trees B-trees hotehh hai.. mtlb apn esseh bhi bol sktehh hai ki these are the multiway-B-treess whose degree is 4..

// 2-3 trees and 2-3-4 trees  grow in upward-direction (means towards root) asbcoz in that the level-of-leaf-node should managed to be in same-level..

// Insertion-in-2-3-4 tress:- //🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// Splitting-a-node mtlb ek node k 2-nodes banana.
// As agr 2-split krne se bhi elements insert nhi ho rhe(mtlb node ka full hona mtlb node-ka-empty-na-hona) then upar-wale-level k node ko split krna (and esi vajah se boltehh bai ki 2-3 or 2-3-4 trees grow in upward-direction.)
// As apnko requested-element ko hamesa phle bottom-rightmost-node meh hi insert krna hai, as agr space empty nhi ho then phir apnko splitting krni hai as per ki one -more node abhi aa skta hai kya? As agr aa skta hai then create that node or otherwise go to upperlevel and split-the-nodes there..
// Okay toh allover mtlb apnko "Search-trees" meh aache se "insertion" and "deletion" krna aana chahiyeh and "searching" toh apn simply as like as "linkedlist" ki tarah kr skteh hai mtlb just simply checking that whether to move on left-side or right-side..