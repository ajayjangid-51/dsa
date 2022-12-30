//🔥💲🍕 NOw aab apn "Sparse-Matrix" k bareh meh dekhenge:-  🍕💲🔥
// as phle toh apn yeh baat note krenge.. ki "Sparse-Matrix" jaruri nhi hai ki it will is "Square-matrix" mtlb yeh Square-matrix ho skti hai or non-Square-matrix bhi ho skti hai..

// as toh "Sparse-matrix" voh Matrix hoti hai jismeh mostly elements "Zeros" hi hoteh hai, and mtlb koi specific-rule nhi as like others Matrices( jo apnne abhi tk dekhi hai jinmeh koi ek specific-rule tha jiske according matrix meh "zeroes" aa rhe the.. but yaha ess Matrix meh koi specific-rule nhi hai, thus toh mtlb apn agr ess "Sparse-Matrix" ko vase unn Matrices k tarah hi "Represent" kare then mtlb tab toh apn koi "Specific-rule"  for relating the positions bhi nhi bana payenge.. ).

// jaise ex.-of-sparse-matrix:-
/*
=>  1  2  3  4  5  6  7  8  9
||
1   0  0  0  0  0  0  0  3  0 
2   0  0  8  0  0  10 0  0  0
3   0  0  0  0  0  0  0  0  0 
4   4  0  0  0  0  0  0  0  0 
5   0  0  0  0  0  0  0  0  0
6   0  0  2  0  0  0  0  0  0
7   0  0  6  0  0  0  0  0  0
8   0  9  0  0  5  0  0  0  0 

// as toh apn upar example se conclude kre toh mtlb 8*9-elements mtlb 72-elements meh se only 8-elements non-zero hai and mostly mtlb 64-elements zeros-hai , thus toh mtlb apn ess esi matrix ko sparse-matrix boltehh hai.

// as mostly jo yeh statistical-data and survery-data hoteh hai enko matrices meh hi store kiya jata hai and enn data ki values mostly "zeroes" hi hoti hai, thus toh mtlb voh matrices mostly "sparse-matrices" hi hoti hai.
*/
// Thus toh mtlb abb apnko kuch koi alag hi "Representation-Idea" dhund na hoga...

//📔📔Note-point1:- Where yeh "data-representation"-word w.r.t  memory k terms meh diya gaya hai mtlb data ko memory-meh-reprrsent mtlb memory-meh-store krna.

//🔔🔔 NOw toh allover directly boleh toh "sparse-matrix" ko Represent krne k "2"-Methods hai:- 🔔🔔

// 🔥Method-1:- 3column-representation (or Cordinate-List ) 🔥 (for this refer to 🔗 pic1 🔗)
/*
// as ess Representation-ka-idea yeh hai ki koi bhi "non-zero"-element ki position in-its-Matrix ko relate krne k liyeh apnko uss "non-zero"-element ka row-no , column-no chahiyeh and although voh-element-bhi-chahiyeh.

// as ess "Representation" k liyeh apn simply yeh Steps follow krenge::-
// step1: as apn simply phle 3-columns ki matrix lenge.. and and phir 1st-column meh element ka row-number , and 2nd-column meh element ka column-number and 3rd-row meh element ki value store krlenge..
//🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// NOte-point:- as ess 3-column-matrix meh apn 0th-row ko blank-rhenge and atlast usmeh apn sparse-matrix-info store krenge mtlb its no.-of-rows and no.-of-columns and no.-of-non-zero-elemetns

//🌟🌟🌟  as toh overall importanly apn yeh note krenge ki apn mostly ess representation-form ko hi use krtehh hai for the "Spare-Matrix" and apn yeh bhi notice kr sktehh hai ki yaha koi Formula nhi hai for relating the positions , as bcoz koi formula-ban-hi-nhi-skta-na q ki koi specific-rule nhi hai for the sparse-matrix. 🌟🌟🌟

// and aage apn "Sparse-Matrix"-Addition and Substraction essi Method se krenge mtlb essi Method se krna dekhenge...
*/

// 🔥Method-2:- Compressed-sparsed-row (or Array-Representation-Form ) 🔥
// as ess Method k according apn simply 3-arrays leteh hai , where 1st-array is will contain only non-zero-elements-in-same-order-which-the-apper-in-matrix . and 2nd-array is for "rows" mtlb ess-array ki indexes row-no. ko represent krenge. and then mtlb uss row-no. k according uss row meh present  no.-of-elements ko fill-krna hai in commulative-order, where phir apn jaise for.eg:- index-5 - index4 krenge toh apnko index-5 mtlb row-5 meh no.-of-non-zero mil jayega.
// and 3rd-array is for column-no. mtlb array-1 meh jo elements hai unke corresponding unki jo column-no. voh apn mark krenge ess 3rd-array meh.

//🔔🔔 as now ess "Representation" ko apn thoda space-k-liyeh analize krenge jo ki very-important hai as q ki eske liyeh hi toh apn kr rhe hai itna sab kuch. 🔔🔔
// as yaha total-no.-of-elements = m*n
// and size of our 3-arrays = (no.-of-non-zero-elements + (m+1) + (n) )
// as toh apn apne above example k liyeh yeh wali baat dekhe toh vaha approximately 70%-space reduction huaa hai.
//🖼️🖼️🖼️  see pic-2 :- 🖼️🖼️🖼️
//

// okay now aage apn some kuch simple examples lenge of sparse-matrices and phir unka addition and substruaction krna dekhenge from by using there "Representation-form".
