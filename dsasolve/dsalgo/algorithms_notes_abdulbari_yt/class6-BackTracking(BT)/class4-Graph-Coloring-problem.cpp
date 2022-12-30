//🔥💲🍕  🍕💲🔥
// mcoloring-problem is also known as cromatic-number-problem
// Back-tracking se ek barr simply solution banane ,find krne k liyehh sbse phle apnko bina koi constraints lagayeh tree generate krna hai and then baad meh phir apn uss tree meh constraints ko apply krke nodes ko kill kr sktehh, mtlb apn vaha phir easiliy bound-fn( which is simply called as "isSafe-function" ) banana easy ho jata hai...
//🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// But back-tracking yeh khtehh hai ki aap constriant-conditions laga-laga k tree ko generate krna hai, and jab bound-fn satisfy na hoo,then apn backtrack hoke next possible-solution pe move hojana hai..
// As toh esseh krne hai time-complexity kafi decrease ho jati hai, jo ki kafi acchi baat hai..

//🖼️🖼️🖼️  see pic-2 :- 🖼️🖼️🖼️
//🖼️🖼️🖼️  see pic-3 :-( Okay toh noww aab apn esko back-tracking se krenge.. mtlb ess brute-force pe back-tracking-idea lagayenge..) 🖼️🖼️🖼️, As toh back-tracking se krne k liyeh phle apn apne pass bounding-fn rkhenge and after taaking each case apn apne bounding-fn se check krvayenge.
//📔📔Note-point:- But apn back-tracking-algo ki time-complexity bhi vohi (mtlb same brute-force-wali) consider krtehh hai, mtlb vaha apn usseh as a atmost utni time-complexity ho skti hai..

// /Now apn yeh dekgenge ki yeh "graph-coloring-problem" kaha use hoti hai..
// as "graph-coloring-problem" ka use phle purane jamane meh hota hai, as mtlb yeh "paper-printing" k liyeh hota hai, as actually kya hota thaa ki voh jo machine hoti hai, usmeh alg-alg color se print krne k liyeh apn alg-alg baaar paper ko insert krna hota thaa..

//👿📔imp-Note-point:-Back-tracking ko apn recursion meh hi implement krtehh hai..