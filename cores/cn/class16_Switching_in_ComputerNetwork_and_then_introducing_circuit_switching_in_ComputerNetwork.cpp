// sbse phle toh Networking , Networking mtlb ek fully-fleadged network ko banana.
// Networking meh switching mtlb a process of forwarding the incoming packets to the next-nearer port/node?hop/router to the towards desination,
// Toh mtlb circuit-switching ek Switching krne ka type hai, whereas esmeh apn ek dedicated-circuit bana k krtehh hai, whereas packet-switching meh yeh switching ka kaam apn packets meh divide krke krtehh hai..

// Class16, kisi network(mtlb computers-k-network) meh circuit-switching kya hoti hai:-
// ek ComoputerNetwork meh circuit-switching sbse phle actually telephone-network k liyeh design ki thi for making communication,and yeh tabki design ki hui hai jab OSI-model or TCP-model for making ComputerNetwork nhi thee.

// Circuit-switching was initially used for connecting telephones physically in the telephonic-network or telephone-network
// Computer-network se phle telephone-network huaa krta tha for sharing voice information,where ess network meh nodes as computer nhi hotehh thee
// Yeh circuit-switching ka kaam physical-layer meh hi hota hai,whereas physical-layer is just for providing medium to travel the information from one-node to other-node and baki layers jaise datalinklayer,network-layer etc..etcc voh information jo physical-layer meh ja rhi hai,usko control krne k liyeh hoti hai,whereas control krna mtlb travelling-medium meh jo information hai usko exact destination pe puchna ,uss information ko during traversal-journey secure rkhna, uss converted-information ko vapis uski actual-form meh convert krna etcc..etcc

// Information pe headers lagana mtlb uss information ki sari information(mtlb it is like metadata or metainfo information ki information)lagana jaise sender’s or source’s mac-address,ip-address, destination mac,ip addrsses etcc..etc needed information

// Toh mtlb metadata of information is needed bcoz travelling-rastehh meh  bohat sare routers,nodes,network-devices hotehh hai joki coming data ko check kr sktehh hai ki yeh data kha se aaya hai,eski kha bhjna hai,forward krna hai etc.etcc so mtlb data k saat metadata esliy kafi important hai..

// Thus toh allover mtlb ki circuit-switching is a  communication-model or mtlb it is switching-model for telephone-network not for computer-network bcoz of its cons/kamiyaa. And this communication doest include much more layers/parts/sections/branch for making and handling the communication between two nodes of the network. Jaise it mainly includes physical-layer-branch which is responsible for setting up medium for propagating the information and then it contains circuit-switching-telephone-exchangers
