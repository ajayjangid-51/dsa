// mtlb now we will talk and see about the working(kaam) and reponsibilties of datalink-layer in sending and delivering the person1 to person2 aur mtlb in sending the message from sender(source) to reciever(destination).

// Datalink-layer for computer-network or mtlb for making a good computer-network so that message/files/data/information can be transferred easily,correctly,exactly,securely over the physical-medium for traversal-of-message which is setup by physical-layer. Toh mtlb now is a turn of datalink-layer mtlb physical-layer ne toh apna kaam krdiya hai,mtlb ek medium bana diya hai jisseh/jispeh message travel toh kr skta hai,mtlb here message is like a person or boy and physical-medium is like bus, where boy will go from one place to other by travelling the bus. Now aab work/role of datalinklayer kya hai for making this boy to reach his distination from his home(mtlb source-place)
// Mtlb datalinklayer persons ko aapas meh aane jane k liyeh, kya-kya cheeze sambhaltii ya mtlb krti hai..
// Mtlb datalink-branch ka kya kaam hai for making the persons traverable to each other

// Imp-notepoint:- ek single sub-network meh keval sirf only physical and datalinklayer se bhi communicate kiya ja skta hai, mtlb whereas physical-layer will construct physical-medium and datalinklayer will check mac-or-mtlb-physical-address of that single-network-devices and as per that communication can be made, but when the network is big mtlb it is network of networks then vha phir apnko unn 7layers ki jarurat pdti hai for making the communication

// Responsibilities or mtlb kaam of datalinklayer is/are:-
// 1.router-to-router incoming-delivery checking and then forwarding, mtlb datalink-layer k according apnko road pe har routers pe checking krni hai ki ess person ko kha jana hai and uske according phir agle chorayeh(mtlb router) pe forward krna hai.
// Tip:- network-layer ka kaam jab hota hai jab person apne destination wale network meh puch jata hai, then mtlb tab voh person uss network meh sbhi persons ko broadcast ho jata hai,then uss time pe network-branch uss person k destination ip-address ko milati hai and uss particular ip-address pe pass uss person ko forward kr deti hai

// 2.flow-control ,mtlb jaise "router-chorayeh" pe bohat sari bheed ho gyi ,mtlb choraya bhar gaya then phir mtlb uss person ko chorayeh-router-checking pe check and forward nhi kiya ja sakega,toh mtlb person k flow ko control krne ka kaam bhi datalink-branch meh hi aata hai.
// We will see 3-algorithms for controlling the flow of messages or mtlb persons on the network or mtlb on the roads
// Tip:- transport-layer ka bhi ek kaam flow-control krne ka hai,but voh person k destination-k-network(ya acche se boleh toh device k local-network meh data ko sambhalne ka kaam "network"-layer ka hota hai.) meh flow-control krne ka hai ki jaise person1 ko network-x2 k person2 k pass jana hai, then yaha flow-control is related to that person2 ki khi person2 k pass jda bheed toh nhi hai(aur mtlb person2 ki net-speed dhimi toh nhi hai. mtlb person2 k physical-media meh kitna data flow ho skta hai per-second usko apn khtehh hai net-speed), mtlb bheed hone ki vajah se voh person2 person1 se mil hi na payyehh, toh mtlb esa nhi ho uske liyeh transport-layer ka kaam hai.

// 3.error-control check over all chorayas-routers. And there are some algorithms for error-controlling at routers
// Tip:- transport-layer meh bhi error-control ka kaam hota,but yeh jab person1 person2-k-network meh aajayega tab hoga.
// 4.access-control mtlb road-access-controlling , mtlb ki jaise ek hi road pe 2 ya 2 se jda persons eksaat hi jana chahtehh hai toh usko bhi control krne ka kaam datalink-branch ka hai Mtlb ki taaki persons ki collision or mtlb persons ka accident na ho.
// And toh mtlb yeh control krne k bhi apne pass kuch algorithms hai voh apn dekhenge

// 5. datalink layer ka kaam physical-address or mtlb mac-address pe nazar banayehh rkhne ka bhi kaam hota hai
// 6.datalink layer packets ko fixed-sized-frames meh divide krti hai, And then road pe send krti hai and person k header-and-tailer bhi add krne ka kaam bhi datalink-branch ka hi hai