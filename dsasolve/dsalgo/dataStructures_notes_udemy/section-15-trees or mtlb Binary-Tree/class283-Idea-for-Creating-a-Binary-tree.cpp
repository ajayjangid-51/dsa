//🔥💲 AS toh YAHA pe apn "Binary-tree" create krenge mtlb memory meh "Binary-tree" create krenge mtlb memroy meh "Binary-tree"-structure create krenge mtlb allocate krenge essa structure which is like as "tree mtlb binary-tree" 💲🔥
//🔔🔔 AS toh apn "Binary-tree" ko linked-representation se banayenge, as yeh representation se exactly apna memory-structure mtlb apne memory-meh-strucuture same as it is "Tree" ki tarah hi banta hai. and jaise agr apn "array"-representation se tree-memory-structure ko memroy-meh implement krteh hai then voh tree ki tarah kaam toh krjayega but memory-meh voh tree-structure "tree" jaise nhi banta hai. toh allover yeh baat hai ki apnko farak nhi pdta ki apna structure memory meh kaise baan raha hai or mtlb memory-meh kaise dikh raha hai, as bas apnko toh bas apna kaam chahiyeh mtlb memory meh apn uss strucuture ko kaise bhi , kisi bhi dusre koi structure implement kare.. usseh farak nhi pdta bas apna kaam hojana chahiyehh. thus isiliy toh apn "graphs" ko by-linking-represent nhi krteh hai q ki phir voh bohat costly ho jata hai, and mtlb voh phir koi sahi and affordable tarika nhi hai, thus isiliy apn "graphs" ko 2D-array(mtlb matrix) meh represent krteh hai , ya phir 2D-linked-list- se represent krteh hai or and other jasie list-se-represent krteh hai, toh mtlb tarike toh bohat sareh hai other than that voh memory-strucuture jaisa hai apn usseh vase hi memory-meh-allocate kare mtlb yeh wali baat jaruri nhi hai, mtlb agr voh affordable nhi hai toh apn dusra other tarika dekhenge for representing or implementing or allocating that koi bhi particular type of logical-memory-structure,    🔔🔔

//💲 Thus toh now aabhi toh apn "Binary-tree" ko linkedly hi represent krenge q ki yeh representation for the binary-tree affordable hai in terms of allocating and also in terms of Traversing-operations or any other-kind-of operation k liyeh bhi yeh representation sahi and affordable saabit hoti hai , thus isiliy apn "binary-tree" k liyeh mostly yahi representation follow krteh hai, mtlb eshi representaion k according apn "binary-tree" ko memory meh allocate krteh hai. 💲
//📔📔Note-point:- thus toh apn ek baat note krenge ki apnko logical-memory-strucutures k liyeh unki sari sabhi type ki "representation" aani chahiyehh mtlb pata honi chahiyehh as aage toh phir apni choice hai ki apn konsi representation k according particular-memory-strcuture ko memory meh implement krteh, or mtlb memory meh allocate krteh hai.

// Thus toh now aabhi for "Binary-tree" k liyeh apnko 2-representaion malum hai, thus toh abhi toh apn "linked-representation" ko use krenge mtlb "linked-representation" k according "binary-tree-memory-strucuture" ko memroy meh implement krenge, mtlb memroy meh allocate krenge.
// thus toh "linkedly" binary-tree ko memory meh allocate krne k liyeh phle apnko "Nodes" chahiyehh honge.. and then phir simply unn "nodes" ki as given tree-defination k according left-child-node and right-child-node se linking kr denge from their repective "parent"-node.

// as toh tree ko create krne ka idea yeh hai ki apnko simply user se input lene hai ki apnko kaisa binary-tree construct krna hai , jaise agr tree node k koi left ya right child ya nhi hai jaise agr left-child hai toh user left-child ki value input krdega and apn left-child create kr denge and uss left-child-node ko uske parent-k-left-pointer se link kr denge. and agr left-child nhi hai toh user -1 or anyother koi input krdega jisseh apn confirm kr lenge ki hai koi left-child nhi hai and phir aage right-child k liyeh puchenge.. ki right-child- hai ya nhi hai, and as like this apn ess process ko loop meh daal denge , thus toh mtlb apna tree easily construct hojayega.