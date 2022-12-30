// Bridges-devices ka use apn 2-LANs ko connnect krne k liyeh hota hai,, whereas 2-LANs ko toh apn apne Hub se connect kr sktehh hai, but mtlb Bridges se 2-different-LANs ko connect kr sktehh hai.(where different-LANs ko mtlb ki diff-diff topology wale LANs(jaise token-ring-LAN , token-Bus-LAN, token-star-LAN))
// Bridge se apn mainly 2-LANs ko hi connect kr sktehh hai, as tabhi ess device ka naam "Bridge" diya gaya hai, as like jaise apni common life meh "Bridge(ya pool)" 2-lands ko hi toh connect krta hai.

// Note-point:- Cables meh ya wireless jab bhi data transfer hota hai toh voh in form of chote-chote packects k form meh transfer hota hai, and enn packets meh kuch additional-data bhi hota hai mtlb kuch additional-data bhi send kiya jata hai, jaise:- "source-mac-address" , "destination-mac-address"

// Bridges signal-forwarding toh kr hi sktehh hai, whereas yeh in filtering meh yeh signal-blocking bhi kr sktehh hai.
// Bridges pure hardware nhi hai, enmeh kuch software bhi hotehh hai jisseh phir yeh signal-filtering bhi kr sktehh hai. and filtering kuch ess tarah hoti hai ki filtering meh source-destination-mac-address check hota hai and destination-mac-address k basis pe signal-forwarding ya signal-blocking hoti hai.

//now Bridge forwarding and filtering ko kaise check krtehh hai? toh answer is ki Bridge apni Bridge-table ko dekh k forwarding and filtering krta hai.

// Bridges meh bhi individually apni ek table manage hoti hai, whereas ess table meh both dono diff-LANs k devices k "mac-address and its Bridge's-port.no" ki information hoti hai.

// Bridges 2-types k hotehh hai:-
// 1.Static-Bridge (ess Bridge meh Network-Admin khud enki Bridge-Table ko likhta hai. and enn Static-Bridge meh kuch problems hai jaise:- agr device ka mac-address change hogaya toh mtlb Network-Admin ko vapas se turant Bridge-Table ko update krna hoga , network meh devices ka port.no change hojana etc..etc.. toh mtlb enn sabhi se network-Admin ko vapas sare update jldi se krne honge, otherwise network meh communication nhi hopayega.)
// (whereas mac-address change hona mtlb yeh nhi ki ek particular-device ka mac-address change hona, eska mtlb hai ki uss device ko kabhi apn apne mobile-data se internet deteh hai , ya kabhi apne wifi se toh mtlb ess way meh device ka mac-address change hona)
// 2.Dynamic/Transparent-Bridge
// yeh Bridge learn krta hai from the sending and replying, and phir uske basis pe yeh Bridge-table meh filling krta hai, and initially jab Bridge-table meh koi information nhi hai about source-and-destination then yeh Bridge incoming-data ko simply forward kr deta hai to the other-LAN and then phir destination se reply aane pr samajta hai ki ohh acha destination ka yeh port.no tha and then eske basis pe voh Bridge-Table fill krta hai.
// Dynamic-Bridge intially thoda jada time-consume krta hai than Static-Bridge but after sometime yeh Static-Bridge kafi accha and reliablly work krta hai.

// Bridges ka use physical-layer meh hota hai and Data-link-Layer meh bhi hota hai.

// Bridge meh collision nhi hota ya mtlb kafi kam hota hai q ki Bridge meh "store-and-forward"-statergy(mtlb Buffermemory wala concept) use hota hai.

// Bridges "Data-Unit-protocol" ko use krtehh hai for removing "signal-loops" ki signal-ek-loop meh phas gaya ya mtlb signal ek signal-loop meh ban gaya. and "Data-Unit-protocol" yeh hai ki signal-loop ko hatane k liyeh simply make a spanning-tree of the ComputerNetwork and then phir signal ki forwarding/filtering/transporting ki jayehh.

// tip:-
// 1.routers routing-table manage krethh hai.
// 2.Network-adminstrator (or mtlb ComputerNetwork ka admin mtlb voh joki ComputerNetwork pe najar rkh rha hai, Network ka maintenance etc..etc Network ka sab kuch dekh rha hai.)
// 3.Computer-Network meh sabhi devices ka apna khud ka ek unique mac-address hota hai.
// 4.signal-filtering ka basic mtlb hai signal ko rokna.
// 5.acknowledgement mtlb reply from destination ki muje sended data-packet milgaya.
// 6.routers meh toh "TTL"-field hoti hai for removing loops.
// 7.connecting-Port ko apn interface bhi bol sktehh hai aur ya mtlb bolteh hi hai.
