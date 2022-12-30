
// "Pipelining":-
// *Pipelining ka concept yeh hai ki packets ko one-by-one transfer kro and tab kro jab ek packet distination-k-next-nearer-node pe puchjayehh,nakki tab kro jab first-packet apne exact-destination pe puchjayeh and phir apn second-packet ko bhj rhe hai. toh mtlb "pipelining" is just pipelines ko bichana.

// Datagram meh koi reservation nhi hota,mtlb inbetween path meh network k kisi bhi device ko apn reserve nhi krtehh hai,mtlb sab cheeze ondemand pe hi alot ki jati hai to the packets to get flow over the network towards its destination,
//  And wheras virtual-circuit phle packet k duvra reservation krliya jata hai, toh mtlb ess switching ka bhi apna fayeda and other switching ka bhi apna fayedaa hai..
// Packets ka out-of-order hona mtlb packets ka destination pe actual-order se distorted-order meh puchna ,bcoz of they are coming from multiple different paths..

// Overhead mtlb header and header is like envelope(or also like metadata) mtlb jaise apn letter bhjtehh hai,toh mtlb uss letter ko apn envelope meh daal kr bhjtehh hai,takki sirf uss envelope(mtlb opening it up and reading the actual message) ko dekh krhi pta lagaya ja sake ki esko kha forward krna hai,bhjna hai..

// VirtualCircuit-switching meh apn Global-header apn first-packet pe  lagatehh hai,and phir baki pe toh apn local-header lagatehh hai