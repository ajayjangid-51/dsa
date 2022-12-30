//🔥💲🍕 Okay toh now aab apn "Imbalanced"-Node ko Balance via "Rotations" krna dekhenge during "insertion" only, mtlb apn new-element ko Insert krteh-time hi "Rotation" krenge mtlb Roatation krke "insertion" krenge takki apna "Tree" "Balanced" hi bana rhe.  🍕💲🔥
// Thus toh apn yaha ek baat notice krenge.. ki esseh nhi hai ki apne pass koi "Unbalanced-BST" de rkha ho apn usko Rotations krke "Balance" kr sktehh hai. as mtlb apnko phle "Starting" se Tree ko balance krke rkhna hota hai. mtlb apn kahi bich se imbalanced-Tree ko balance nhi kr sktehh hai. Thus toh isiliy "AVL"-tree mtlb Balanced-BST ko apn "Insertion" function se hi create krtehh hai, as q ki "insertion"-process apn phle "Rotations" krke krtehh hai , thus toh isiliy apna Tree as a "AVL"-tree bana rheta hai.

// Thus toh overall apn YAHA , "AVL"-Tree k liyeh "Insertion"-fn hi dekhenge.. whereas esmeh apn "Rotations-for-balancing" krna bhi dekh lenge...

// Rotations-at-the-time-of-Insertion:- ( mtlb apn insert krke phir rotations krke tree ko balance krdenge..)
// as toh Tree ko balance krne k liyeh 4-types k rotations hotehh hai:-

// LL-imbalance (mtlb left-of-left ki vajah se voh Node-imbalanced hai or mtlb imbalanced huaa hai.)
// RR-imbalance (mtlb imbalancing is due to insertion of right-of-right-node)
// LR-imbalanced( mtlb imbalancingis due to insertion at left-of-right)
// RL-imbalanced( mtlb imbalancingis due to insertion at right-of-left)

// 1. LL-rotation:- ( as toh jab LL-imbalancing hoti hai , tab LL-rotation kiya jata hai,,)
// and now yeh rotation ess tarah kiya jata hai ki , as sbse phle toh apnko imbalanced-node and inserted-node k bich meh jo linking hai usko as a "ek-single-continous-thread" consider krna hai, and then uss "thread" ko apnko uss "imbalanced-node" ko as a "hinge" mantehh huyeeh uss "thread" ko uske top ko pakad k usko "clockwise" dirn meh khichna hai(notice-point: "ghumana nhi hai" mtlb simply khichna hai. ) by one-node( whereas yaha one-node mtlb uss imbalanced-node k niche-wala node uss "hinge" pe aajayehh tab tk khichna hai. 🖼️🖼️🖼️  see pic-1 :- (for LL-Rotation) 🖼️🖼️🖼️ ).
// as toh mtlb esseh rotation krne se voh imbalanced-node( and the node-at-that-position will be balanced-only) "balance" hojayega.
//📔📔Note-point-1:- apn "LL-Rotation" ko "Right-dirn-Rotation" or "Clockwise-Rotations" bhi bol skehh hai. as but yeh jo "LL-rotation" apn ne naam diya hai , yeh apn ne "Imbalacing-type" k basis pe naam diya hai naki apn jo kaam kr rhe hai uske basis pe naam diya hai , as mtlb apn ess rotation meh "clockwise-rotation" kr rhe thee jo mtlb apne kaam k according bhi apn ess Rotation ko naam de sktehh hai, but esa apn nhi krtehh. but allover apn ess "LL-rotations"-naming-Concept hi follow krenge.. q ki apnko "type-of-imbalancing" dekhtehh huyehh hi dhyn meh aajega ki apnko konsa "rotation" krna hai.
//📔📔Note-point-2:- apn ek baat orr note krenge ki "Rotation" is only done on 3-nodes only. mtlb 3-3 k pairs meh hi apn rotations kretehh hai. thus toh mtlb apn yeh simple example acchce se dekhenge , and then phir bigger ko apn aaram se "balance" krlenge.. and sahi boleh toh "element-insertion" k basis pe apne pass hamesa 3-nodes hi honge for rotation.

// 2. RR-rotation:- ( as RR-rotation bhi ek-dam same as LL-rotation ki tarah hai , but bas apnko yeh dhyn rkhna hai ki apnko RR-rotation RR-imbalancing k liyeh krna hai , and RR-rotation meh apnko "anti-clockwise"-dirn meh "thread" ko khich na hai. )
//🖼️🖼️🖼️  see pic-2 :- for RR-rotation:- 🖼️🖼️🖼️

// 3. LR-rotation:- ( as yeh rotation apnko "LR"-imbalancing pe krna hai. and esmeh apnko phle uss left-child ko "hinge" mantehh huyehh RR-rotation krna hai and then phir uss actual-imbalanced-node ko "hinge" mantehh huyehh "LL-rotation" krna hai. )
//🔔🔔  as apn yaha shortcutly esseh bhi bol sktehh hai ki yaha type of imbalancing("LR") meh phle "L" hai toh mtlb apnko "RR"-rotation krna hai and then "R" toh mtlb apnko phir "LL" rotation krna hai.  🔔🔔
//🖼️🖼️🖼️  see pic-3 :- for LR-rotation:- 🖼️🖼️🖼️
// as apn enn "LR" and "RL" rotations ko "double-rotation" bhi boltehh hai, q ki enmeh apnko 2-baar rotation krna hota hai.
//🔔🔔 as or ya apn enn "LR" rotation ko shortcutly bhi kr sktehh hai, like mtlb in "LR"-rotation meh apnko "imbalanced-node" ko toh right-child-position pe move krna hai and uss inserted-node ko "imbalanced-node"-ki-position meh move kr dena hai. 🔔🔔

// 4. RL-rotation:- ( as yeh rotation apnko "RL"-imbalancing pe krna hai. and esmeh apnko phle uss right-child ko "hinge" mantehh huyehh LL-rotation krna hai and then phir uss actual-imbalanced-node ko "hinge" mantehh huyehh "RR-rotation" krna hai. )
//🖼️🖼️🖼️  see pic-4 :- for RL-rotation:- 🖼️🖼️🖼️
//🔔🔔 as or ya apn enn RL" rotation ko shortcutly bhi kr sktehh hai, like mtlb in "RL"-rotation meh apnko "imbalanced-node" ko toh left-child-position pe move krna hai and uss inserted-node ko "imbalanced-node"-ki-position meh move kr dena hai. 🔔🔔

//👿📔imp-Note-point:- as sbhi rotations ka jo result hota hai voh same hi hota hai , mtlb har rotations pe apnko result meh same-hi-Tree milega and voh "balanced"  hi hoga.

//👿📔imp-Note-point:- one-main-important-observation-about-these-4-rotations:- ki apn for a given "n"-nodes apn "catalon-number" of AVL-tress generate kr sktehh hai , but bas unn "trees" ka apnko phle "rotations" krna hoga, as then only they will be the "AVL"-Tree.
