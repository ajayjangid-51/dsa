// "tier" mtlb "layer"
// apn yaha database-communication architecture dekhenge.. mtlb database se communicate krne ka architecture dekhenge..
// so toh mtlb 2tier-architectured database-communication meh 2layers hoti hai , and 3tier-architectured-databaseCommunication meh 3layers hoti hai.

// 2tier-architectured(or generally called client-server_Architecture.) meh 2layers hoti hai, mtlb 1st-layer is client-layer(mtlb it is like anpi mobile-app ya website ya bank's-employ mtlb jaha se clients ki requests send ki jati hai aur ya mtlb jaha se clients requests send krta hai and jo bhi sara logic hai mtlb request ko dbms-commands meh convert/compile krna etcc..etc.. mtlb request's-program-processing either ess client-layer pe hi ho jata hai, ya otherwise 2nd-layer pe hota hai.) and 2nd-layer is database-layer(or mtlb database-server mtlb jaha database pda hai and jaha clients-requests handle hoti and return meh client-respond kiya jata hai.)
// 2tier-architecture meh apn database-server se data access krne k liyeh jo program likhtehh hai or ya mtlb jo program hota hai voh ya toh client-machine pe hi compile hoga ya phir database-server pe jake compile hoga, so toh mtlb enn dono option meh dikkat hai, ki agr program client-machine pe convert hoga toh mtlb clinet-machine dhiri hojayegi or agr program database-server pe bheja jata hai toh mtlb vaha internet-data ka kafi consumption hoga. so toh enn problems/glitches(गड़बड़ ya mtlb खामियो) ko remove knre k liyeh 3tier-architecture hota hai, jismeh middle-layer(mtlb business-layer) yeh client's-request's-program-processing ka kaam krti hai.
// for.eg: jaise apn jab railway-station jake khidki pe ticket-book krtehh hai , then voh ticker-giver apni sari information ko process krke phir database meh search/manipulate krke apnko apni ticket deke repond kr deta hai, toh mtlb jo processing wala kaam hai voh client-layer pe hi ho rha hai thus toh mtlb yeh database-communication 2tier-communication hai. and one more other example ki jaise apn bank meh ek prchi bhrke apne paise nikalvatehh hai , voh toh hai 2tier-database-communication and agr apn Atm se paise nikalvatehh hai, toh mtlb voh hai 3tier-architecture-database-communication where that Atm is a middle-layer of communication-with-databse.
// so mtlb yeh 2tier-architecture is good with limited no.of-users and its maintanence is low but it is not scalable, not security(q ki clients are directly accessing database) and not flexible(mtlb users ko bohat paresani hoti hai jaise line meh khada rhena, kafi time wait krna, time-contrainst ki subhe 8am to 5pm tk hi. etc..etc..)

// whereas 3tier-architecture meh jo request's-processing hai voh middle-tier(layer) meh hoti hai, and where 1st-layer mtlb client-layer meh toh sirf request send hoti hai and 3rd-layer mtlb database-server layer meh simply bas voh request handle/respond hoti hai.
// toh mtlb yeh 3tier-architecture bohat sahi hai, robust hai,scalable hai and fexible hai
// generally "websites" meh 3tier-architecture hi follow hota hai.
// 3tier-architecture meh middle-layer ko generally simply "business-layer ya application-server" bhi boltehh hai.
// bascially mtlb ki 3tier-architecture meh jo middle-layer hoti hai voh as a interface ki tarah kaam krti hai between user and database.
// mtlb 3tier-architecture meh database-server ko load nhi de rhe, mtlb requests-load toh apn "middle-layer" ko detehh hai , whereas 2tier-architecture meh database-operations k saat-saat requests-processing-load bhi database-server ko hi detehh hai.
// thus toh overall mtlb ki 3tier-architecture meh apn ne database-server pe load ekdam kam kr diya hai, mtlb database-server pe ekdam binary-machine-level-code of user's-request jarha hai.

// visit this for more on database-communcating-architectures:- https://www.geeksforgeeks.org/difference-between-two-tier-and-three-tier-database-architecture/

// tip:-
// cloud-computing mtlb bich meh kahi computing horhi hai, jaise 3tier-architecture meh business-layer meh user's-requests ki computing hoti hai.