// dbms meh "integrity" ka mtlb ki dbms-tables meh jo elements common hai unki value sabhi jagah same honi chahiyehh, mtlb jaise suppose ki ek institute-ka-database  meh jismeh diff-diff tables hai jaise sports-table for sports-related data , placement-table, branch-realated-data-Table, and then let suppoose ki enn sabhi tables meh ek student-id-attribute common hai, so toh mtlb uss student-id meh har element ki sabhi values hr table meh same honi chahiyehh, mtlb esa nhi ki sports-table meh student-id-attribute-Column k element-x ki branch-attribute ki value toh "electrical" bta rha hai, and placment-table uski branch-attribute ki value "cse" bta rha hai, thus toh mtlb esi cheez ko "integrity" na hona khtehh hai.

// sql meh "on delete cascade"-command ka mtlb hai ki jis table meh apn delete kr rhe hai, toh agr ess table ko koi as a refrence ki tarah use kr rha hai, then mtlb unn tables meh se bhi uss element ko delete krdo.
// and notepoint: kisi bhi table ko as a "refrence" ki tarah apn "foreign-key" se kr sktehh hai.
// and as a "refrence" ki tarah use krne ka mtlb hai ki agr uss table meh insertion, deletion, updation hota hai then toh voh phle insertion, deletion, updation parent_table(or mtlb refrenced-table) meh phle dekhke k phir uske according hoga ki yeh kaam krna hai ya nhi krna hai.

// thus toh allover by watching the insertion, deletion, updation operation-problems in both parent(refrenced) and child(refrencing) tables. the concept of "foreign-key" is needed takki we can overcome to all these operation-Problems.
// so toh mtlb all these insertion, deletion, updation operations will be controlled and done as per the help of foreign-key. and isiliy boltehh hai ki foreign-key maintains the refrencial-integrity on insertion, deletion , and updation-operations.

// questions:-
// batal bhai yeh foreign-key ka concept samjna mtlb yeh hoti q hai, mtlb akhir esko introduce q kiya gaya.