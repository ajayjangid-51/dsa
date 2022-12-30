//🔥💲🍕 AS now aab apn "Rotation" k liyhe kuch General-pictorial-Formulaes dekhenge.. 🍕💲🔥

// as mtlb ki jab apne pass koi bigger Tree ho and usko apnko Balance krna ho then apn kaise krenge.. as toh eske liyeh kuch Formulas hai..

// as apn node pe uske "Balance-factor" ki value dekh k bhi bata sktehh hai ki esmeh konsi imbalancing hai.

//🔔🔔 LL-Rotation Formula:- 🔔🔔
// formula1:- 🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// as mtlb tree meh kitne bhi nodes ho, apnko bas focus unn 3-nodes pe krna hai, mtlb one of them is ki jo imbalanced ho and two voh jinki vajah se voh node-imbalanced hai, and enn two-nodes ka apnko easily pata chl jayega by seeing the "bf"-of that imbalanced node, as mtlb ki agr "bf" is 2 then mtlb lh-rh == 2 , which means ki left-tree-ki-height "2" hai , thus mtlb ki "node" left-tree meh insert huaa hai, thus toh mtlb yeh itna toh confirm ho gaya ki yeh "LL" ya "LR"-imbalancing meh se hi koi ek-hoga and now aage apn exact confirm kr sktehh hai ki actual konsi "imbalancing" hai , by just simply seeing the "bf" of that left-node as mtlb agr "bf" of that node is "1" mtlb "left"-meh-insertion huaa(mtlb it is "LL"-imbalancing) and agr "bf" is "-1" then mtlb "right"-meh insert huaa hai( mtlb it is "LR"-imbalancing). and like this agr "imbalanced-node" ka "bf" "-2" hota toh apn phir "RR" or "RL"-imbalancing ki sochtehh.
//📔📔Note-point:- one-note-point orr ki after taking the 3-nodes and unn taken 3-nodes meh voh newly inserted nhi aata hai then phir voh "imbalancing" uss 3-nodes meh se jo last-node hai uske basis pe khlayegi.. mtlb agr voh last-node left-side pe present then that "imbalancing" will be "LL" balancing and agr voh last-node right-side pe present hai then that "imbalancing" will be called as "LR"  or "RR" imbalancing, where first-letter of imbalacing-type depends on the 2nd-node of takened-3-nodes.

// formula2:- 🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// as jaise 3-node meh mid-node(mtlb jiska "bf" 1 or -1) hai , as mtlb agr uska left or right child hai then after rotation voh right or left child banjayega of actual "imbalanced-node".
//🖼️🖼️🖼️  see pic-2 :- for one-more example for formual-1 and formula-2 🖼️🖼️🖼️

//🔔🔔 LR-Rotation Formula:- 🔔🔔
// as yeh LR-Rotation-formula(mtlb very-imporant-baat) bhi apn example se dekhenge..
// as esmeh yeh formula hai ki 3rd-node k no childs hai, unmeh se left-child toh as 2nd-node-will-be-its-right-child and right-child-will-be-as-left-child-of-"actual-imbalanced-node".

//🔔🔔  as toh same "LL" and "LR"-formulaes "RR" and "RL"-formulaes honge... 🔔🔔
// as toh now aab apn apne khud yeh "RR" and "RL"-formulae implement krenge...