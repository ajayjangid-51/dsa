//🔥💲🍕 Now apn "Hash-function" ideas dekhenge...  🍕💲🔥
// As apn apn yaha different "hashing-functions" dekhenge.. mtlb kuch acche suggested-Hashing-functions dekhenge..

// as toh "Hashing-functions" 3-tarah k hoteh hai:
// 1. mod or modulus-Hash-Function
// 2. Midsquare-Hash-Function
// 3. Folding

// as apnko essa Hash-Function choose krna jisseh elements uniformly store ho in chaining (mtlb har hast-table index se morely equally same size ki linked-list hi connected ho) . and for Closing-chaining meh clustering kaam-se-kaam ho.
// as toh Hash-funnction apnko (mtlb apn programmers ko ) phle data ko dekh k hash-function decide krna hai.
// and closed-hashing meh hash-table ki size kaam-se-kaam no.of-elements se double hi honi chahiyehh. toh mtlb ess baat k according bhi apnko "hash-function" choose krna hai.

//🔔🔔 1.modulus-hash-function 🔔🔔
// as yeh ek better idea hai ki apnko hash-table ki size as a "Prime-number" leni chahiyehh q ki mtlb apna formula kuch esseh hoga.. H(x) = x%R (where R-should-be-primenumber) . as toh as Prime-nubmer leteh hai toh prime-number k 2-hi-factors hoteh hai, thus toh mtlb esseh clustering kaam hogi..
// toh mtlb "modulus-hash-function" meh apnko "R" as prime-number hi lena chahiyehh.

//🔔🔔 2.midSquare-hash-function: 🔔🔔
// as yeh function yeh bolta hai ki take the element , then take a square-of-it and then the middle-digit-from-it . and uss middle-digit-index pe apnko element ko store kr dena hai..
// as like :- element is 11 , then square-of-it is (11)^2 = 121 then mtlb "2" is middle-digit so we will store this element-"11" at index-2-of-Hash-table. and Searching-the-element we will refer to this "hash-function only" mtlb jaise we want to search element-11 , so then first-make-square of it which is 121 and middle-digit is "2" , so toh mtlb we will check the element at index-2 , as if it present then search-successful and if it is not present then search-unsuccessful.

// as agr even-no-digits ho then apn middlemost-2-digits le sktehh hai and agr voh uske equal uski size nhi hai, then  phir saat meh hi mod-hash-function bhi apply kr sktehh hai.
/*

*/
//🔔🔔 Folding:- 🔔🔔
// make the number by taking the digits from the number via pair-wise and then addinng them all to get a single-number and storing the element at the number , as if number-is-greater then hash-table-size then we can repeat this procedure on that number.. and so on .. or otherwise we can mod-function on that number choice is ourss...

//🌟🌟🌟  as toh overall importanly apn yeh bol sktehh hai ki apn apna khud ka "Hash-function" design kr sktehh hai, mtlb bana sktehh hai mtlb apn apna koi bhi logic laga sktehh hai getting-the-index bas apnko itna dhyn rkhna hai ki apna function hamesa same-value-hi dena chahiyehh... mtlb jaise "3" k liyeh voh "10" return kr raha hai then mtlb voh hamesa "3" k liyeh "10" hi return krna chahiyeh mtlb esseh nhi ki voh kabhi 10 kr raha and kafi 15 kr raha hai ..etc.etc.. essa nhi hona chahiyehh and jo base conditions hai voh toh follow krni hi chahiyehh ki storing properly ho and clustering na ho. :- 🌟🌟🌟
//🌟🌟🌟  as toh overall importanly apna yehi khana hai ki apn apan hash-function bana sktehh hai apne kaam k according... apne logic k according... 🌟🌟🌟

// thus toh noww aab apnko apne kuch diff-diff hash-functions banane and unko implmement bhi krne and check krna hai ki apna kaam ho rha hai ... ya nhi.. mtlb kaam toh hona hi chahiyehh...

//🔔🔔 Okay toh lets make our own hash-function and implement it. 🔔🔔
