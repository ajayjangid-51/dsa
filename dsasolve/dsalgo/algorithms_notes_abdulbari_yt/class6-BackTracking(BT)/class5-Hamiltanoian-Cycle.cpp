//🔥💲🍕 🍕🍕Hamiltonian-cycle🍕🍕 🍕💲🔥
// Np-Hard problem means exponential-time-taking problem..

// As yeh Hamiltonian-cycle-problem same as travelling-salesman-problem ki tarah hi hai bas farak itna hai ki vaha apn only shortest-path cycle find krtehh thee and yaha apn voh sare possible cycles find out krenge..
// And for having Hamiltonian-cycle apna graph connected-graph hona chahiyeh...

//🖼️🖼️🖼️  see pic-3 :- 🖼️🖼️🖼️( Two more note-points ki agr graph meh articulation-point ho or ya pendant-vertices ho then uss graph meh koi hamiltonian-cycle possible nhi hai...)
// Note-point:- as toh bound-fn hi constriants check krta hai and but voh back-tracking nhi krta. as backtracking toh "Util"-fn krta hai.

// As Back-tracking implementation meh apne pass ek array toh hona chahiyeh as usmeh apn apne jo solutions honge useh apn usmeh fill krenge..

//🖼️🖼️🖼️  see pic-6 :- 🖼️🖼️🖼️( As toh bound-fn meh voh cheeze check hoti hai joki jaruri hai for particular combination to be the solution..)
// Jaise yaha pe yeh bound-fn 3-cheeze check kr raha hai ki selected-vertex kahi apne result-array meh repeated toh nhi hai, and agr repeated nhi hai then previous-vertex and selected-vertex k bich meh edge hai ya nhi hai and agr hai then thik hai that vertex will be included in the solution and voh agr nhi hai then that vertex will not be included in solution..
// Toh Mtlb allover apnko sbse phle bas physically sochna hai ki apn voh sare solutions kaise find kr sktehh hai, doing the workding one-by-one via considering all possible-cases. simply boleh toh phle apnko brute-force se tree generate krna hai and then phir uspe constriants lagake dekhne and jaise voh constriants work krne chahiyeh vase hi anko bound-fn banana hai...