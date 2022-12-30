//🔥💲🍕 as NOW YAHA pe apn "LinkedList" create krenge by Naive-method which is based on the simple physical-idea about Linked-list. 🍕💲🔥
// as toh apn Linked-list memory-structure banayenge...

#include <iostream>
using namespace std;

// first node::

// designing node
struct LinkedlistNOde
{
    int data;
    LinkedlistNOde *p; // as mtlb ess p meh ess Node-ka address store hoga na..  toh mtlb esliy apnne ess pointer ka eska type specify kiya hai hai as q ki phir usi hisab se memory meh type-of-container ka allocation hoga na ya mtlb vesa particular type-of-container banega.
};

// making nodes
// struct LinkedlistNOde n1 , n2 , n3 ,n4 , n5;

// then now linking::
// as toh ab apn simply Nodes ki linking krke apni Linked-list bana lenge...
// n1.data = 5;  // as toh mtlb ki apn globally structures ko intialize nhi kr sktehhh... and imp-notepoint ki apnko kabhi globally mtlb global-scope meh declaration nhi krna chahiyehh as esseh apn apne program ki space-complxity kharab hoti hai , mtlb bina-mtlb k increase hoti hai.. and yeh sahi nhi hai.. as q ki space-complexity jitni kaam rahe utni hi acchi baat hai q ki memory kafi valuable and limited resource hai as thus toh apnko bina faltu meh esko(memory) ko waste nhi krna chahiyeh..
int main()
{
    // making nodes
    struct LinkedlistNOde n1, n2, n3, n4, n5;

    // then now linking::
    // as toh ab apn simply Nodes ki linking krke apni Linked-list bana lenge...
    // as toh but linking se phle apn Nodes ko data se intialize kr deteh hai and then after linking krenge...
    n1.data = 5, n2.data = 10, n3.data = 15, n4.data = 20, n4.data = 25;

    // and now aab linking kr deteh hai....
    n1.p = &n2;
    n2.p = &n3;
    n3.p = &n4;
    n4.p = &n5;

    // As toh yeh apni Linked-List ban gayi haiiii.. yoo-superrrrbb
    // as yeh "code" dekh k toh apnko visulize nhi ho raha hai ki yeh koi List jaisi hai, but agr apn esseh acche se visulize krenge in terms of memory-allotment then apnko visulize hoga ki haan yeh toh list jiasa hai, thus toh esiliy eska naam linked-list hai.. and same like this Baki Memory-structure(or mtlb Data-structures) sabhi same esseh simply hi ban jateh and visulize bhi ho jateh hai...

    // and agr apn n5 meh n1 ka address store kr deteh hai mtlb n5 ko n1 se link kr deteh hai then yeh apni Circular-linked-list ban jayegi.

    // As toh Now aab apn Easily , acche se ess Linked-List k liyeh more and more achhe achhe functions bana skteh hai, and mtlb ki apn ess Linked-LIst ko allover unn Functions se hi control krengee... , thus toh mtlb apnko ess LInked-List k structure ko toh chednaa hi nhi hai, haat hi nhi lagana hai, bas mtlb phle ess k liyeh Functions banane hai and then sara allover kaam enn Functions se krna hai , and aage apn "ADT" banayenge mtlb Class banayenge jismeh strcuture toh privated rhega and Structure-k-liyeh-functions publiced rhenge thus toh phri apn esseh hi memory-structure ko toh ched hi nhi payenge only on sirf Fucntions ka use kr payengee and unn functions se ess memory-Strucuture ko access, modify , editing etcc.. krenge.. ya kr payenge as per the avialbility of the dedicated-Functions, thus toh apnko more and more sabhi type k mtlb sbhi-kaam k liyeh functions bananeh hai takki apn acche se apne Linked-list (mtlb memory-structure) ko access kr payeh.. whereas yaha access krne ka mtlb jo kaam krna chahteh hai voh sab kr payeh... jaise node-linking, node-intialization sab kuch apn Function se hi krenge and asehi hi krne hoteh hai. q ki sab log asehi hi krteh hai and yahi kafi sahi practice hai bcoz apna kaam phir directly and easily ho jaya krta hai phir.. esliy.

    // AS toh overall ess point k regarding or according aab se apn memory-structure and its dedicated functions ko as "ADT" banayenge mtlb as a "class" banayenge... // as like this::::
}

class LinkedLIst
{
private: // as claass meh essehi har cheeze by-default private hi hoti hai, thus toh apnko yeh "private" likhne ki jarurat nhi hai..
    struct LinkedlistNOde
    {
        int data;
        LinkedlistNOde *p;
    };

public:
    // jaise add new element k liyeh apn ess function meh phle new-node define krenge and then uss new-node meh function-passed value assign krenge... etc..etc.. and many more functions k liyeh bhi apn asehi pura sahi hai implement krenge...
};

//🌟🌟🌟  as toh overall importanly apn  :- 🌟🌟🌟
// as toh for creating Linked-list apn do tarah se linked-list banayenge: mtlb ek toh apne tarike and other jo ki formal-way hai, but apnko aage aabse follow yeh "formal" tarika hi follow krna hai.

// Node n1 , n2, n3 , n4; (yeh esseh apn "stack" meh linked-list ko allocate nhi krenge.. q ki phir uska koi mtlb nhi hai na, as q ki phir apn Node-deletion nhi kr payenge.. na isiliyyy...)
Node *headp;
headp = new Node;

// as mtlb koi bhi pointer jab kisi container ko point krta hai then apn uss container ko uss-pointer se access kr sktehh by just simply using "arrow-operator" , as isiliy apn uss container ko uske pointer-k-naam se bol sktehh , as toh aabse apnko aage confuse nhi hona hai ki apn uss container eske pointer k naam se q bol rahe hai ya mtlb kisi apn esa bhi lg skta hai ki ess container ko kisi orr naam se apn q and kaise access kr skteh hai, but in actual voh naam kisi pointer ka hai jo ki ess container pe point kr raha hai, as toh aab se yeh wali baat apnko aage dhyn meh rkhni hai. as same like apn "heap" meh allocated array ko bhi uske pointer-k-naam se hi toh bulateh hai , janteh hai. toh same as like yaha and baki sab jagah yahi baat hoti hai.

// as toh now aab apn first-created node k pointer se second-node create kr denge as like this:-
headp->next = new Node; //( as toh aapnne second-node bhi create kr liya hai. and now apn third-node bhi create kr leteh hai.. as simply second-node k pointer se , as actually mtlb ki second-node pointer meh third-node ka address assign krdenge mtlb krva deteh hai or mtlb pointer se point krva deteh hai..)

// as now apn yaha ek baat note kare toh mtlb second-node ka naam "headp->next" hai. (as in actual toh apnko pata hai ki yeh pointer hai but heap-memory meh allocate containers ka naam nhi hota as unke pointers hoteh hai , thus toh uss pointer-k-naam se hi apn enn heap-containers ko janteh hai or mtlb essi naam se bolteh hai.) , thus toh actually meh baat yeh hai ki apnko third-node create krne k liyeh itna bada naam likhna hoga , and then 4th-node create krne k liyeh esseh bhi bada naam likhna and soo...onnn. thus toh mtlb esseh krna mtlb esseh linked-list banana toh sahi nhi hai,

headp->next->next = new Node;
headp->next->next->next = new Node; // and so..on......

// NOw toh esseh toh krna sahi nhi hai, thus toh "concept of creating-Linked-list" ko follow krke Linked-list create krenge...  on the line-no: 20.

// thus toh now aab apn simpy create-fn ka use krke simply Linked-list create kr lenge.. as simply like this:-
