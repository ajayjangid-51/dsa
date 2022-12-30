// AS NOW YAHA pe apn Linked-List ADT dekhenge and mtlb banayenge..
// Thus toh like jaise apn ADT k liyeh krteh aa rahe hai ki sbse phle apn data-structure(mtlb memory-structure) ko banayenge mtlb implement krenge mtlb usko banane ka code likhenge and then phir kuch important properties define krenge related to that memory-structure , as bcoz yeh properties enn memory-strucutures pe operation krne k liyeh kaam aati hai mtlb aayengi..

// As toh but sbse phle apn yeh dekhenge ki why-we-need linked-list type of data-structure(or memory-strucuture)..
// as sidhe and simply bolteh toh mtlb array- meh kuch problem thi ki apn apn arrays ko ek baar allocate krne k baad uski size ko increase and decrease nhi kr sktehh thee mtlb array ki size dynamic nhi hai mtlb usko apn choti-badi nhi kr sktehh hai. and esseh se hi ek badi-problem ho skti hai ki apn user and program ko friendly nhi kr pateh mtlb user suppose user 100-element insert krna chahta hai but array-avialbe is of size "50", as mtlb orr bhi kafi problems create hoti hai bcoz of the "fixed"-size of array.  thus toh isiliy linked-list introduce huee , mtlb isiliy hi linked-list ka idea aaya ki apnko ek eski list banani chahiyeh jisko allocate krne k baad bhi apn uski size ko increase and decrease kr sake..

// thus toh LInked-list ka simple physical idea yeh tha , yeh hai ki apn phle toh multiple NOdes bana lenge and then unki linking kr denge mtlb unn nodes ko ed-dusre se link kr denge, thus toh apne pass ek list banjayegi and ess list ko apn linked-list bolteh hai, as now ek baat or ki hai ki yeh linked-list meh Nodes contiguous nhi hotehh.. where array meh toh apn janteh hi hai ki array-sub-cotainer contiguous-location pe hoteh hai toh mtlb unko apn easily pointer-arithematic se access kr skteh hai , where linked-list k nodes(mtlb as sub-container of linked-list) ko pointer-arithematic se access nhi kr sktehh. and yeh contiguous-location na hona is "problem" or "con" of linked-list , bcoz of absence of this(pointer-arithematic) apni linked-list meh traversing slow ho jati hai(q ki vaha eskliy apnko 4-5-statement likhni hoti hai, and whereas-array meh apna kaam 1-2 statement meh hi ho jata hai.) , mtlb voh as fast as array-traversing nhi hoti. thus toh yeh main pros and cons hai of the array and linked-list . but dono hi apni jagah "mast" hai.

// as yeh upar apnne jo dekha voh toh physical-idea tha, now ess idea ko programatically apn vaseh nhi krteh mtlb ek-saat sare nodes nhi banateh mtlb apn simply ek "temp-pointer" rkhteh hai and and phir usseh temp-pointer se "node" create krke last-present-Node se usko  connect kr detehh hai , and thus toh mtlb apn ess tarike se "Linked-List" banaleteh hai( obvisouly in the "memory" only.)

//👿📔 And haan one-important baat ki "Linked-LIst" ki koi representation nhi hai , q ki yehi best hai, or mtlb apn esko represent krteh bhi toh apn "array"  meh hi toh esko represent krenge, and usmeh represent krtehh hai toh phir vohi baat ki apn phir linked-list meh more element add krne k liyeh apn represent-array-form ki size increase nhi kr sktehh, thus toh mtlb "Linked-List" ko apnko hamesa ess "Orginal-Linked-List" meh hi represent krna hai.
// and apn esseh bhi bol sktehh hai ki "array" and "linkedlist" both are the physical-data-structures and "physcial-ds" ko toh apn unko  "as-it-is" hi represent krtehh hai.

// one-IMP-notepoint:- ki apn LInked-list ko hamesa "heap-memory" meh hi allocate krtehh hai, q ki phir nodes ko easily delete kr skteh hai. as otherwise stack apn allocate-nodes ko delete nhi kr sktehh but as linking toh change kr sktehh hai but deletion-bhi important hai na q ki memory-space matter krti hai na. toh apn allover Linked-list ko "heap" meh hi allocate krteh hai, onlly for ki apn nodes ko delete kr payeh..

// as thus toh linked-list meh apnko linked-list ki size decrease krni ho then apn simply phle deleting-node ki dono side se linking hata k uske previos-and-alge-node ki linking kr denge and then usss deleting-node ko delete kr denge..
// as for inserting the element in between the linked-list k liyeh apn simply linking ko change kr denge mtlb inserting-index se phle wale node ki linking inserting-element se kr denge and inserting-element ki linking next-insertin-indes se kr denge.. toh as like this easily apn linked-list meh inbetween elements meh insert kr skteh hai. mtlb  as for inserting the element in between the linked-list k liyeh apn phle toh jaha jis node k baad apnko insert krna hai uss node ki uske agle wale node ki linking ko break krenge and then simply apna ek "Node" create krke usko previous and next NOde se linking krdenge.. toh as like this easily apn linked-list meh inbetween elements meh insert kr skteh hai.

// as toh overall dekhe toh linked-list kafi fexible hai as compare to "array" bcoz mtlb apn easily list ki size choti , badi kr skteh hai , or aseh easily elements ko delete kr sktehh hai, and easily aarram se in-betweemn element insert kr sktehh hai just by simply changing the "linking". as toh "LInked-list" meh apnko bas mainly "linking" krna aana chahiyeh in a efficient manner, as toh phir apna "LinkedList" ko handle krna kaam bohat , easy and aasaan ho jata hai..

// AS now aab apn Linked-list ko detail meh dekhenge , mtlb apn phle Linked-list terminologies dekhenge and linked-list ko banane k liyeh kya-kya chahiyehh or mtlb apn ess tarah linked-list ko banateh hai in a very-Efficient manner jo sablog use krtehh hai.

// Defination of linked-list:
// as linked-list ko apn aseh define kr sktehh hai.. ki Linked-list is a collection of Nodes ,where nodes are linked to each-other by pointer-linking. or mtlb where each node contains a "element-value" and a pointer to next-other node. (where yeh "node" diff-diff ho skta hai , jaise "doubly-linked-list" meh "node" thoda alg hota hai mtlb usmeh "ek-data-value" and "two-pointer-value" hoti hai. and etc.etc.. aseh diff "nodes" hoteh hai in trees and graphs.)

// head-pointer(first-pointer) and head-node(or First-node of the linked-list) dono alag cheez hai , as head-pointer toh voh pointer hai jismeh head-node ka address hota hai and yeh head-pointer toh stack-meh allocate hota hai. and yeh "Head-node" toh linked-list ka first-node hota hai.

// as simple or singly linked-list k "Node" meh 2-cheeze hoti hai: 1st- value( jisko apn simply "data" naam se bolteh hai) and 2nd- pointer(jisko apn simply "next" naam se bolteh hai as yeh pointer ka type Node-type hi hota hai as mtlb  ki yeh pointer "Node-containe"r k address ko hi store krta hai na isiliy... )
// thus toh apn as like this:- mtlb apna singly-linked-list-Node ess tarah ka hota hai.

// struct Node{
//     anydatatype data;
//     Node* next;
// }
// as ess upar wale node ko apn "memory" meh esko physically visulize kare toh yeh kuch esa hota hai:-
//     __ __
//    |__|__|
//

// as this type of "Structure" is called as "Self-referentail-strucuture" as bcoz ess strcuture meh eske-apne-hi-type-ka-pointer-hota hai isiliy.

// as toh now aab apnne Node-strucuture-define kr diya hai , as then now aab apn aseh bohat-sare Node-strucuture apni memory meh allocate kr sktehh hai.. simply as like this::-
// Node n1 , n2 , n3;  ( as toh apnne 3-nodes stack meh create or mtlb allocate kr liyeh hai but apn yeh nodes stack meh nhi "heap"-memory meh allocate krna chahteh hai toh voh apn ess tarah krenge ...)

// NOde* p; ( sbse phle apn mtlb head-pointer banayenge... and then ess head-pointer ko heap meh allocated nodes se link kravange and yeh kaam apn ess krteh hai..)
// p = new Node; ( as toh yeh apnne head-node or first-node "heap"-memory meh create kr liya hai.. and noww aab apn second-node bhi create krenge.. mtlb allocate krenge as like this:-)

// p->next = new Node; (as we have created a second node and so...on as like this apn baki aage 3rd, 4ht etc..nodes create kr sktehh hai..) note-point: as apn esseh ess tarike se Linkedlist create nhi krenge,, voh apn thodi alg-approach se krenge jo apnne upar dekhhi thi ki apn temp-pointer ka use krke "Linked-list" create krenge..
// okay toh yeh ess actual Efficient tarike se "Linkedlist" create krna apn aage dekhenge...

// as jis Node k "next"-member operator meh "zero 0" mtlb "null" assigned ho then voh "Node" is called "tail"-node or "last"-node of Linked-list.

// as now aab apn kuch aur more-important statements dekhenge for Linked-list.
// statement-1:-  Node* p , *q;
// q = p (ka mtlb hai ki p meh jo value hai voh q meh assign hojayeh, mtlb simply mtlb ki "p" jisko point kr raha hai usko hi "q" point kare )
// Tip:- (as ess "Node* p" ka mtlb apnko yehi maan-na hai ki apnne "node" create kr liya hai.)

// statement-2: q = p->next; (mtlb ki p meh jo next-pointer hai voh jisko point kr raha hai , usko hi yeh q point kare.) or as "p->next" ka mtlb "next-node of p" ko point krne wala pointer and
//🖼️🖼️🖼️  see pic-1 :- for visulizing 🖼️🖼️🖼️

// statement-3: p = p->next; (ka simple mtlb yeh hai ki "p" "next-node" pe move hogaya hai mtlb now aab yeh p-pointer next-node pe point kr raha hai.) thus toh mtlb apnne pass pointer-"p" hai and apnko Linked-list meh usko next-node pe move krna then we simply write this (p = p->next)-statement.
//🖼️🖼️🖼️  see pic-2 :- for visulizing 🖼️🖼️🖼️
// as yeh statement-3 apnko more importantly "Traversing" k liyeh chahiyehh.

// as we can make the any-pointer to null-value as like:-
// p = NULL;   or p = 0;
// mtlb aab pointer-"p" kisiko bhi point nhi kr rha hai.

// as now apn voh conditions dekhenge ki apn kaise pointer ko check krenge ki yeh kisiko point kr raha hai ki nhi.
// c1:- if(p == NULL)
// c2:- if(p == 0)
// c3:- if(!P)
// as yeh sari condition "true" hogi for the null-pointer.  mtlb agr "P"-pointer abhi NUll-pointer hoga then yeh conditions "true" hogi.

// and conditions for ki "P"-pointer null nhi hai:-
// c1:- if(p != NULL)
// c2:- if(p != 0)
// c3:- if(p)

// as jaise apne pass koi p-pointer hai and voh p-pointer kisi node pe point kr raha hai then simply kabhi-kabhi uss node ko simply "p-node" bol deteh hai..
// NOw for checking ki p-node k baad koi orr aage node-present hai ya nhi.. toh mtlb uske liyeh yeh hai:-
// if( p->next != NULL)
// if( p->next != 0)
// if( p->next)

// thus toh agr p-node k aage koi node-present hai then mtlb yeh sabhi conditions true hogi and same for vice-versa ki agr yeh conditions true hai then mtlb aage node present hai. and agr yeh conditions "false" then mtlb aage koi orr node nhi hai and yahi hi last-node of the linked-list hai.

// As now aage apn Linked-list traversing krna dekhenge mtlb Linked-list element ko display krna dekhenge and mtlb "traversing" sare kaam krna dekhenge....

// more orr more important baateh jo syad apnnne upar miss krdi ho:-
// a container which contains element-space-container and pointer-space-container is called as "node" or "node"-Container or ya apn simply single-memory-slot or single-simple-container ko bhi node bol diya krteh hai and voh aseh sahi nhi haii mtlb usko apnko node nhi bolna chahiyehh q ki phir be-faltu meh confusion create hota hai.

// As apn linked-list ko sirf heap meh hi allocate krteh hai.. as linked-list ko stack meh allocate krne ka koi mtlb nhi hai ...and yeh cheez upar apn dekh hi chuke hi ki q koi mtlb nhi hai of allocating linked-list in stack.

// As toh Linked-list is a collection of node where each node has a element-container and pointer-container which points to next-node.. and that all nodes are connected one-by-one in sequencial order to each-other.

//👿📔imp-Note-point:-🔥Self-refrential Structure🔥 means ki voh structure jo ki uske k khud-k-type ka pointer contain krta ho...

//🌟🌟🌟  as toh aab overall importanly ess Section meh apn yeh-yeh cheeze dekhenge and enn sabhi kaamo ko krne k liyeh apnko upar jo cheeze apnne dekhi hai voh sab kafi importantly kaam aayegi. :-- 🌟🌟🌟
//  1.Creating-linked-list
//  2.Traversing-linked-list (mtlb displaying-its-elements , summing-of-its-element , couting-of-its-elements or nodes, finding-max-element etc..etc. as mtlb q ki apn "traversing" kr rhe hai mtlb apn har element ko one-by-one line-wise visit kr rhe hai, thus toh jis bhi kaam meh apnko "traversing" krne ki jarurat hai, voh sab kaam apn "traversing" meh kr sktehh hai.)
//  3.Searching-in-linked-list
//  4.inserting-in-linked-list
//  5.deleting-the-element-from-linked-list
//  6.checking-linkedList-is-sorted-or-not
//  7.Removing-duplicates-from-linkedlist
//  8.reversing-linked-list
//  9.concating-two-linked-list
//  10.merging-2-linkedLIst
//  11.checking-cycle(or loop) in linkedLIst
//  12.then overall creating the cpp-Class for linkedlist mtlb comprising these all operation in one.
//  13.cirucular-linked-list
//  14.double-linkedLIst
//  15-circular-doubly-linkedList
