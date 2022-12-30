//🔥💲 As now apn "Binary-tree" ki Representation dekhenge.. thus toh takki apn "Binary-tre"e ko memory meh Efficiently allocate kr sakee(minimum possible space meh allocate kr sake and phir mtlb usko acche se use bhi kr sake). as representation mtlb ki most-easy form meh kisi structure ko kisi other way meh ya kisi physical-ds meh convert krke mention krna.💲🔥

// AS binary-tree ko apn 2-tarike se represent kr sktehh hai mtlb 2-tarike se memory-meh allocate kr sktehh hai "binary-tree" ko.

//🔔🔔 array-representation of binary-tree  🔔🔔
// as eske liyeh phle simply create an array-of-size equal to "no.-of-nodes-of-tree" then fill that array by level-wise-of-tree . and after filling apnko unn nodes k bich meh relation bhi pata hona chahiyehh ki konsa node kiska parent hai , ess node ka konsa left-child hai and konsa right-child hai. as toh eske liyeh apn phle ek table-create krteh hai:as of like this:
//      node-name node-index l-child-index r-child-index
// as toh esseh apnko yeh relation milta hai....
//                  i           2i          2i+1
// as toh apnko ess indexing se hi array ko tree-node-value se fill krna hai. or ya apn agr esko follow krke array ki filling nhi krteh hai then toh apn simply tree-level-wise filling bhi follow kr sktehh hai q ki yeh dono ek hi baat hai.

//🔔🔔 // Linked-representation of binary-tree 🔔🔔
// as toh linked-represetation meh apn simply phle node( node-of-type ki uss node meh data , l-child-pointer and r-child-pointer hota hai) create kr lenge and then phir apn simply unn nodes ki accordingly apne-apne l-child and r-child-nodes se linking kr-denge.
// as mostly yeh linked-representation hi mostly use hota hai for "Tree".
// as toh apnko ess representation meh no.-of-nodes-in-tree k equal "nodes" apnko phle lene hoteh hai and then unn nodes ko unke left-child-node and right-child-node se linking krni hoti hai ya phir agr koi children nhi hai kisi node k then usmeh apnko null assign krtehh hai.
// as ess represenatation k liyeh apn ek baat note krenge ki linked-representaion of binary-tree meh no-of-null-poointers are equal to (no.-of-nodes+1)