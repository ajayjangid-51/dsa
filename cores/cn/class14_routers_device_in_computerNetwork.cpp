// router-device physical-layer , datalink-layer and Network-layer thenoo meh hi use hota hai.
// routers ka use multiple-different ComputerNetworks(mainly 2-WANs) ko connect krne k liyeh krethh hai.
// routers mac-address aur Ip-address dono check kr sktehh hai, and phir uske according signal forwarding/filtering krtehh hai as per the help of its own routing-table.

// routers signal-forwarding krtehh hai, kr sktehh  hai.
// routers signal-filtering kr sktehh hai, but router-filtering meh mainly ip-address se filtering hoti hai.
// routers "flooding" kr sktehh hai, mtlb jab router filtering nhi kr pata hai mtlb decide nhi kr pata hai ki forward krna hai ya block krna hai then voh signal ko broadcast kr deta hai mtlb sabhi direction meh signal ko forward kr deta hai.

// routers ka collision-domain bohat chota hai , mtlb routers meh bhi collision nhi hoteh hai q ki esmeh bhi "store-and-forward"-method use hoti hai.

// tip:-
// 1. internet mtlb simply it is collection/connection of different multiple ComputerNetworks mtlb it is a collection/connection of multiple WANs. and jaha WANs ki connection ki baat aati hai vaha Ip-addresses ka use hota hai for making signal transportation/communication between the WANs.
// 2. bridges and switches ka mainly use LANs(LocalAreaNetworks) meh hota hai.
// 3. routers ka use WANs meh hota hai.
// 4. Network-Layer meh mainly mostly router use hota hai.
// 5. apn aseh bhi bol sktehh hai ki WAN is collection/connection of multiple LANs.
// 6. LANs meh mac-address ka use hota hai for signal forwarding/filtering
// 7. WANs meh ip-address ka use hota hai for signal forwarding/filtering
// 8. ISP mtlb internet-service-provider.
// 9. default-gateway(basically yeh router hi hota hai) ka mtlb jiski madad se apn internet se connect hotehh hai, mtlb voh device(mtlb router) joki WANs ko connect krta hai.
// 10.ARP-request (Address-resolution-protocol) jismeh sender router ko request bhejta hai ki aap muje ess ip-address wale device ka mac-address bhi bataoo. and router ARP-request ko apne pass puchne k baad filter kr deta hai mtlb rok deta hai, toh mtlb esseh bhi apn yeh bol sktehh hai ki routers filtering kr sktehh hai.
// 11. routers meh jo routing-tables hoti hai unmeh bhi different-different protocols use hoteh hai for make sahi routing jaise: RIP-routing , distance-vector-routing-protocol ( and enn routing-protocols k bareh meh apn Network-layer meh baat krenge.)
// 12. routers are multiport-device and har port ka ek ip-address hota hai joki uss port se jo connected Network hai usmeh se kisi ek device ka ip-address hi voh hota hai.