//🔥💲 AS now YAHA pe apn Binary-Tree ki "Traversing" krna dekhenge mtlb apn voh tarika ya tarike dekhenge ki apn kaise "binary-tree" k har element(mtlb node) pe visit kr sktehh hai( as like jaise apn "LinkedList" meh krtehh thee ), mtlb apn phir har element ko access kr sktehh hai. as toh in simple ki apn "Binary-tree" k har element(mtlb node) pe visit krna or mtlb visit krke uss element ko access krna dekhenge ki mtlb apn esseh kaise kr sktehh hai.  💲🔥

//💲 AS toh Binary-tree ki "Traversing" apn mainly 3-easy-methods se kr sktehh hai:- thus toh apn voh methods(mtlb voh tariko) ko dekhenge and sikh jayenge ki haan accha apn asseh Binary-tree ki "Traversing" kr sktehh hai...💲

// // as NOw apn yeh baat janenge ki "Tree Travering" apn ess-ess way meh kr sktehh hai:-
// 1: pre-order-tree-traversal( mtlb sbse phle root-node ko visit then phir unke left-tree and then right-Tree ko visit krna)
// 2: in-order-tree-traversal (mtlb phle left-tree ko visit krlena and phir unke parent mko visit krna and then phir right-tree ko visit krna.)
// 3: post-order-tree-traversing (as esmeh mtlb phle left-tree ko visit krna and then right-tree ko visit and then atlast enke parent-node ko visit krna..)
// 4: level-order-tree-traversal (mtlb level-wise traversing krna mtlb level-wise nodes ko visit krna)
//🌟🌟🌟  thus toh allover mtlb apn "Tree" ki "Traversing" "pre-order"-manner meh kr skteh hai, "Post-order"-manner meh kr sktehh hai or "post-order" or "level-order" manner meh kr sktehh hai. as mtlb jis tarah se apnko elements chahiyehh ho, Needed ho, usske according apn enn 4-ways of Traversing meh se koi bhi ek se kr sktehh hai. :- 🌟🌟🌟

//🔔🔔 thus toh now yeh sab Traversing apn simply examples leke dekhenge and samajenge:  🔔🔔
// now jaise Suppose ki apne 3-trees hai:
/*          tree1              |                 tree2               |            tree3
              A                |                   A                 |             A
             / \               |                  /                  |               \
            B   C              |                 B                   |                B
as toh agr apn enn simple trees ki voh diff-diff ways meh Traversing kare then voh Traversing esi hogi:-
// pre-order = A,B,C                        A,B                                 A,B
// in-order = B,A,C                         B,A                                 A,B
// post-order = B,C,A                       B,A                                 B,A
// level-order = A,B,C                      A,B                                 A,B

🔔 As toh upar enn trees ki diff-diff-traversing se apnne yeh dekha ki haan accha ess tarah enn diff-diff tariko se traversing ki ja skti hai.
*/

//🔔🔔 AS now Aab apn kuch thode bade trees ka example leke unki Traversing dekhenge... 🔔🔔
/*
                                                A
                                               / \
                                              B   C
                                            / \  / \
                                           D   E F  G

// thus toh now aab apn ess tree ki traversing krenge...
// 🔥1.pre-order =  A,(left-tree) , (right-tree)
//             =  A,(B,D,E),(C,F,G)
//             =  A,B,D,D,C,F,G
// 🔥2.in-order  = (),A ,()
               = (D,B,E),A,(F,C,G)
               =  D,B,E,A,F,C,G
// 🔥3.post-order= (),(),A
//             =(D,E,B),(F,G,C),A
//             =D,E,B,F,G,C,A

📓note-point: as apn 3-noded-tree ki traversing toh easily, simply and directly "Traverse" koi se bhi "Way" meh kr sktehh hai. but agr koi bada tree aa jata hai then phir apnko simply uss bigger-tree ko simply 3-3-noded-trees meh break krna hai. and then phir toh baad meh apn Traversing kr sktehh hai. and apnko parts esseh krne ki jab bhi traversing krne lage and apnko koi single-node dikhta hai then apnko koi parts banane ki jarurat nhi hai , but agr apnko multiple-nodes dikhteh traversing krteh time then apnko simply brackets() lagage ke aage badh jana hai and traversing continue rkhni hai, and after-all phir apnko vapis unn empty-brackets pe aana and unn parts sub-parts ki tarversing krke unn brackets ko fill krna hai by doing traversing of that sub-part-of-tree.

// as toh bigger ki traversing krne k liyeh phle apnko simply unn biggger trees ko simple 3-noded-trees meh parts kr lenge hai then simply apnko apni traversing kr lene hai.

// 🔥4.level-order= 📔as-level-order apnko kuch nhi sochna mtlb koi tree k sub-parts nhi krne,as just simply level-wise from left-to-right traversing kr leni hai.
//              = A,B,C,D,E,F,G



*/

//🔔🔔 and now aab aage apn yeh dekhenge ki enn diff-diff traversals-ways ka apne-aap meh kya faydee hai, mtlb konsa traversal kab, konsi condition meh accha saabit hoga. 🔔🔔

// 🔥🔥 and but esseh phle apn yeh dekhenge ki apn directly kisi tree ka koi bhi particular-traversal kaise bata sktehh hai mtlb apn kuch "Shortcut-Physical-Methods" dekhenge (jaise apn ne "stack" meh physically mathematical-expression ki infix , postfix-form nikalana dekha tha, as same vasehi apn yaha aab "Tree"-Traversing physically krna dekhenge. ) as phir mtlb apn bohat fastly mtlb bohat easily and bina kuch jada soche( mtlb apnko phir voh bigger-tree ko sub-tree-of-3-nodes meh break krna etc.etc wali cheez nhi krni hogi) "Tree-Traversal" result find krlenge.. 🔥🔥
//📔📔Note-point:- as yeh aage jo apn simple-and-fastly Traversal find krna dekhenge voh apn mtlb physically krna dekhenge mtlb programmingly-impelement krna nhi dekhenge , thus toh mtlb apnko "Tree"  mtlb khud se bhi mtlb physically "Tree-Traversing" krni aani chahiyehh, thus toh mtlb jab aage apn yeh "Traversing" ko programmatically implement krenge then apnko pata rhega ki ess Travesing-mehthod ka yeh result hoga or mtlb hona chahiyehh then toh mtlb phir easily usseh implement kr payenge..