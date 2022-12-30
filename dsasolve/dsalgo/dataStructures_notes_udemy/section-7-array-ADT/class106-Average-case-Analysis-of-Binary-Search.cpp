//🔥💲🍕 aS toh now aab apn "Average-case-time-Complexity dekhenge.." 🍕💲🔥

// 🍕 3. and for Average-case-time k liyeh apn ess "class105-pic" tracing se hi calculate krlenge. as apn formula toh jantehh hi hai ki:
//  average-time = (element1-case-time + element2-case-time ... + last-element-case-time) / (total-elements)

//So toh from "class105-pic" se formula-calcuate krke answer aayega voh logn hi aayega thus toh mtlb. phir Average-case-time-of-Binary-Search is also "O(logn)".

//👿📔imp-Note-point-1.:-ek orr Analysis jo ki kafi accha hai ki:
//  E = I+2n (wher "E" is sum-of-path-all-external-nodes and "I" is sum-of-path-of-all-internal-nodes and "n" is number-of-elements. wher yaha path of node ka mtlb hai ki "selected-node" and "root" k bich meh kitne links hai. toh "path" mtlb no.-of-links between root and selected-node).

// jasise for example(this can also be refer from class106-pic2):
//                      O                                        (wher yaha "O" mtlb sucessful-search-node)
//                     / \
//                    O   O
//                   / \  / \
//                 [] [] []  []                                (where yaha "[]" mtlb unsucessful-search-node)

// thus yaha esmeh:
//  I = sumation of (no.-of-internal-nodes-on-same-level)*(their-path) = 2*1 = 2
// E = 4*2 = 8
// and her n = 3
// toh apnko pata hai ki E = I+2n
// and yeh yaha ess example se confirm bhi ho raha hai ki: 8 = 2+ 2*3 = 8

//📔📔Note-point-2:- ek orr Analysis ki:
//  e = i+1 (wher "e" is no.-of-external-nodes and "i" is no.-of-internal-nodes)

//📔📔Note-point-3:- Average-succesful-case-time of n-elements is can be directly given as: = 1 + I/n = O(logn)
//📔📔Note-point-4:- Average-Unsuccesful-case-time of n-elements is = E/(n+1) = O(logn)
//📔📔Note-point-4:- E = (n+1)*logn = (no-of-nodes-on-same-external-level*their-path-is-height-of-tree)
// for these note-points see "class106-pic2"