/* 🌟 🔥 Linked-list🔥 🌟 */
// YAHA pe apn Linked-List -memory-structure mtlb Data-structure k bareh meh dekhenge:
// AS Linked-List-memory-structure non-contiguous memory-structure hai mtlb ess memory-structure meh jo memory-parts hoteh hai contiguous-manner meh nhi hoteh hai. as toh ess memory-structure meh memory-parts ek dusre se linked-hoteh hai, as mtlb har memory-part meh 2-sub-memory-parts hoteh hai jismeh ek sub-memory-part meh toh data-store hota hai and 2nd-sub-memory-part meh kisi orr memory-part ka address-store hota hai.
// as enn "memory-part" ko simply "node" bhi bol diya jata hai.
// linear-data-structure or linear-memory-structure mtlb esseh memory-structure meh branching nhi hoti. as branching se mtlb ki

// As apn data-structure mtlb memory-structure bhi class- se hi banteh hai.

// implement stack using array ka mtlb hai array se stack- ko banana.
// as data-structure meh apnko theory padhni hoti and then phir apnko khude se hi voh data-structure mtlb memory-structures banane hoteh hai. and apn banateh hai as q ki banane meh hi maja hai.
// as toh apn sare data-structures mtlb memory-structures samajenge and then phir unko apn hi banayenge.

//📓1-note-point:  As Linked-list ka sbse bada drawback yahi hai ki apn Linked-list meh nodes-data ko randomly access nhi kr skteh hai like jaise apn array k liyeh kr skteh like arr[i] etc..etc..  . As q ki linked-list meh esa krna kafi expensive pdta hai mtlb kafi time lgta hai. Esiliy phir linked-list meh yeh functionality rkhi hi nhi.. as arrays meh simply arr[2] likhne se arr+2 pe value traverse ho jati hai. But linked-list meh apn esseh linl[2] krteh hai then starting-node se uske next-node ka addreas leke phir uske next-wale node ka address leke uske data ko traverse ho payega. As q ki linked-list meh nodes contiguous nhi hoteh naa isiliy apnko itna krna hota hai and array meh nodes-contiguous hoteh hai toh apn directly uss node ko approach kr leteh hai... -📓
