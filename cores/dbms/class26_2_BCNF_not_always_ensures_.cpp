// Class26- contining:- BCNF always not ensures "dependency-preserving Decomposition".
// Dbms meh "Decomposition" mtlb tables ka decomposition mtlb tables ko divide krna,break krna into sub-tables.. to achieve the desired Normalform.
// And yeh Decomposition hota kab hai,toh mtlb apn decomposition "Normalization" k time krtehh hai,mtlb one NormalForm to other NormalForm meh convert krne k liyeh apn table ka "Decomposition" krtehh hai.

// So toh decomposition krteh time kuch batao ka dhyn rkhna hota hai and that are ki:- decomposition k time koi data lose nhi hona chahiyehh and second is ki table k sabhi attributes ki jo aapas meh Functional-Dependencies hai voh preserve rheni chahiyeh mtlb voh FDs distort/voilate nhi honi chahiyehh..

// Now baat yeh hai ki sabhi Normalization-Form meh lossless-decomposition toh follow hota hi hai, and "dependency-preserving-decomoposition" bhi follow hota hai, but BCNF k case meh hamesa/always follow nhi hota hai, jaise see this encounter-example:-
// Normalization krtehh time jis FD meh particular Normalform ki conditions match nhi ho rhi hoti hai, uss FD wale attributes ko apn alg kr detehhh hai..

// general-notepoint:
// encounter-example mtlb voh example jo kisi cheez ko encounter/ya mtlb detect ya find kr leta hai..