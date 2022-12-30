//🔥💲🍕 As toh NOW aab apn Queue-data-Structure mtlb Queue-Container k bareh meh dekhenge kafi acche dekhenge , as apn janteh hi hai ki yeh Queue-data-structure or mtlb Queue-Container Logical-data-strucuture hai mtlb Logical-Container hai. as physical-container mtlb ki usmeh insertion and deletion operation kaise bhi koi bhi discipline meh kiya ja skta hai, as mtlb yeh simply like as "space" ki tarah hota hai. and Logical-container mtlb enmeh insertion and deletion koi particular-discipline se hi hota hai.
// as toh apn ess Queue-Container k bareh meh all about dekhenge.. mtlb sbse phle toh yeh dekhenge ki container kaisa Container hota hai mtlb ess Container meh insertion and deletion kis decipline meh hoteh hai, as q ki sbse phli important baat toh yehi hai ki container ki kya-kya applications hoti hai. 🍕💲🔥

// as toh overall data-strucutre "Containers" hi hai , but bas farak itna hai ki physical-data-structures meh toh data kisi bhi discipline se insert and delete kiya ja skta hai , but logical-data-strucutures meh data kisi particular logic se hi insert and delete hota hai. jaise stack-logical-ds meh data insert and deletion "LiFo"-logic se hota hai , and Queue-logical-ds meh data insert and delete "Fifo"-logic se hota hai , and jaise Tree-logical-ds meh data left-child or right-child logic k basis pe hota hai ki yeh koi particular data eska as a left-child hai ya right-child hai. toh mtlb yeh sab all simple hai about data-structures mtlb data-Containers( mtlb Container for storing data.)

// as data-strucutures meh apn yehi phle data-containers k bareh meh phtehh hai ki yeh data-containers kaise banayeh jateh hai  and mtlb apn phir  banane k algorithms dekhteh hai and unpeh phir diff operations krne k algorithms bhi dekhtehh hai.

// Now aab apn "queue" k bareh meg dekhenge..
// Queue is a container jismeh insertion and deletion  "FiFo"-discipline se hota hai... , "Fifo" principle se hona mtlb ki as like as jaise apn ek hollow-pipe meh ball dalteh hai and then mtlb "phle daali gayi ball phle niklegii". Toh mtlb yeh ess tarah se  insertion hona and deletion hona ko hi apn "fifo"-discipline se hona boltehh hai..

// Thus toh mtlb apnko kabbhi bhi koi bhi kaisa bhi esa "fifo"-discipline meh hone wale kaam ko bhi diya gaya ho ya ho and apnko uspeh kaam krna hai then via in coding toh apn uss kaam ko krne k liyeh simply "queue"-container ka use krene mtlb actually meh "queue"-memory-structure ka use krenge.. as q ki apn ess container meh insertion and deletion or mtlb in and out wala kaam sirf only "fifo"-discipline se hi hota hai. Toh apn simply usko use kr hai..

// Now apn dekhenhe ki real-problmes ko apn coding meh kaise implement krke solve krteh hai...Let suppose ki jaise ek voting-machine hai and uske saamne ek queue-of-people hai. Thua toh mtlb unn people ko as a element maanlenge and unko as a queue meh store krdenge and phir accordingly kya kaam krna hai voh simply apn kr lenge as main kaam toh data ko store krna and data ko insert krna and delete krne wala kaam hota hai...

// "enqueue" mtlb queue meh daalna..
// "dequeue" mtlb queue se nikalna..
// As queue meh from the rear-side se element-insert kiyeh jateh at the innermost-availble-space or mtlb last-elemnt k agle wale index pe.

// And from the other-side mtlb we simply call it a front-side se deletion kiya jata hai..
// As deletion k baad apn ya toh top or mtlb front-element-pointing ko agle element pe move krdenge as phir mtlb queue meh front-element voh hoga but yeh sahi nhi hai.. as phir toh mtlb apna queue khali bhi rhega but apn usmeh elements enquue krhi nhi payenge.. toh toh first-element-pointer ko toh vahi rhene deteh hai after deletion and elements ko by-one left-shift krtehh hai.

// 🔗 see pic1:- 🔗
// Queue-ADT as mtlb puri-fully-fleaged queue-class banane meh apnko yeh yeh cheeze chahiyeh hogi..
// As "queue", container hi toh hai mtlb memory-strucutue hi toh hai for data ko store krne k liyehh.. toh phle apnko space chahiyeh hogi phir kuch pointings on the sub-space of space for doing-operations on it.

// as apn "queue" ko array-space and linked-list -space se implement kr sktehh hai , thus toh apn yahi dekhenge.
// We can implement queue using array-space in two-ways:-
// 1. Taking only 1-pointing i.e. only rear-pointer
// 2.takin 2-pointings i.e rear and front

// For inserting and deleting in anything we have to always must keep in that for insertion there should be aviable free-space means that should not be empty. And for deletion we should keep in mind that there be any element present means it should not be empty.

// First-drawback is that ki deleted-element ki space use nhi kr pa rhe...
// Third-drawback is that empty and full condition dono saat meh bhi ho ja rhi hai..