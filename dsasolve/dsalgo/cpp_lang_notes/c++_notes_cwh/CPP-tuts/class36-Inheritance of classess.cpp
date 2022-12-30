// YAHA pe apn OOPs k Class-Inheritance(imp and challenging topic in cpp)-feature and Types-of-inheritance k bareh meh dekhenge:
// (DRY-principal mtlb DoNot Repeat Yourself mtlb do not repeat writing of code) as apnko yeh pricipal dhyn meh rkhteh hai hi Program-Coding krni hoti hai hamesa, and yeh Pricipal ko follow krne k liyeh apn OOPs krke and uske feature jaise inheritance etc.. ko use krke ess DRY-Pricipal ka acche se dhyn rkh skteh hai.
//
// OOPS ka ek important and very mast feature hai ki "Code-resuesibility" and yeh cheez "Inheritance"-concept se fullfill hoti hai..
// Inheritance ka simply mtlb hai ki kisi class meh koi other dusri class ko use krna.
// AS inheritance mtlb simply ek class meh koi dusri class ko as a inherit meh provide krna. mtlb in the sense ki ek class meh dusri-inherited-class as it is fetch ho jati hai.

// overview of inheritance:-
// AS inheritance se code-reusibility badhti hai.
// AS inheritance mtlb apn ek class meh koi orr class use kr skteh hai and kuch extra-features/components bhi define kr skteh hai.
// thus mtlb code-resuibility se apna time and money dono save hoteh hai.
// and one-note-point: agr reused-code phle se hi tested and debuggec hai , then uss code ko use krne se apna developing-time(some changement , updation and many more etc..etc..) , debugging-time save , kam hoteh hai as q ki some of the code toh already phle se tested and debugged tha, thus toh apnko uss code ko toh vapis se dekhna hi nhi hai.

// What is inheritance and CPP meh apn Inheritance kaise use krteh hai..
// jis class ko apn ne as a inherit provide kiya hai voh class ko simply parent-class , super-class or BAse-class bolteh hai . and jis class meh inherit provide kiya gaya usseh class ko simpy derived-class , or daughter-class bolteh hai.

// NOte-point ki ek derived-class ki multiple Base-class ho skti hai. and ek BAse-class ki multiple derived-class banaee ja skti hai.

// Different-types of Inheritance::
//  1.Single-inheritance-derived-class (A --> B mtlb A se B ban gaya mtlb yaha A is Base-class and B is derived-class ) or ( A <-- B mtlb B is derived from A.) (voh inheritance jaha kisi class ki ek hi derived-class ho , and saat meh uss derived-class ki bhi ek hi Base class ho mtlb only voh jisseh voh derived hai.)
//  1.Multiple-inheritance: (mtlb jaha multiple-Base-class hoti hai and unki ek single-derived-class hoti hai.)
//  2.Hierarchical-inheritance: (mtlb jaha ek class(Base-class) ki multiple derived-class hoti hai.)
//  3.Multilevel-inheritance: (A --> B --> C --> ..so onn) (mtlb jaha derived-class ki hi derived-class hoti hai.)
//  4.Hybrid-inheritance:(mtlb jaha ek base-class hoti and uski multiple-derived class hoti hai and unn multiple-derived-class ki ek single-derived class hoti hai. mtlb in the sense yaha 2-inheritance hoti hai ,first: hierarchical-inheritance and then second: multiple-inheritance. and enn dono steps ki vajah se yeh multilevel bhi ban jati hai.)

// Now aab apn enn sabhi inheritances ko code krenge for the real-world problems's programs. mtlb apn inheritance krna dekhenge.

// as now inheritance apn "extends"-keyword se krteh hai.
// as commanly apn esseh bhi bol skteh hai ki derived-class BAse-class ko extend kr rhi hai.

// (typo mtlb typing-mistake)