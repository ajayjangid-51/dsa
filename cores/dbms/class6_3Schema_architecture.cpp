// yaha apn database ka Schema-architecture dekhenge , aur ya apn aseh bhi bol sktehh hai ki ess database k 3Schema-architecture meh 3-levels-of-abstraction hotehh hai. where abstraction ka mtlb only-thinking se related naki working-se-related.
// toh overall abstraction ka mtlb hota hai "a state of preoccupation(mtlb care , परवा krna)", thus toh yaha mtlb ki yeh jo 3-level/layers hai yeh परवा krne ki layers hai, whereas परवा apn user ki kr rhe hai ki user ko database ka data samaj meh koi dikkat nhi ho, then 2nd-layer meh apn "dbms" ki परवा kr rhe hotehh hai ki "dbms"-programming acche se sahi se hojayehh, and then 3rd-layer is for physical-representation of data. as yaha परवा krne ka mtlb hai ki apn user ko database meh data ka actuall-representation dikhake usko confuse or mtlb usko overthinking nhi krvana chahtehh hai isliy apn yeh abstraction-layers bana rhe hai.

// kisi bhi database ka Schema or mtlb uske logical-representation(ya mtlb visual/visulizing-representation) ki terms meh bohat sare different-different representation possible ho sktehh hai. jaise ek hai 3layerSchema-database-Architecture. mtlb ki esmeh 1st-layer meh client apne phone/pc meh jis way meh database k data ko dekhta hai voh representation(mtlb voh Schema), then 2nd-level pe logical-Schema (mtlb jaha "dbms"-software kaam krta hai) and then 3rd-level pe data ka actual-Schema mtlb data ka actual-representation joki phir directly "database" meh store kiya jata hai.

// notepoint:-
// toh first-level ko apn simply view-level bhi boltehh hai, and then 2nd-level ko apn simply conceptual or mtlb logical-level boltehh hai and 3rd-level ko apn Physical-level boltehh hai.
// 2.kisi bhi cheez k 2-representations ho sktehh hai:- 1.logical-representation mtlb uss cheez ka simple-understable-representation. toh mtlb apne-according apne kisi cheez ko relatebly kaise bhi represent kr sktehh hai and usi representation ko apn logical-representation boltehh hai. and 2.physical-representation mtlb uss cheez ka actual-representation.
// 3.yaha 1st-level pe jo Schema hai mtlb "external-schema" , this is as like as jaise apn development k time apne code meh database pe data send krne se phle ek Schema banatehh hai, toh voh Schema hi acutally external-Schema hai.

// tip:-
// 1.kisi cheez ka theorytical-explanation mtlb voh jo cheez hai and uska jo actual-physical-making the usko apn kisi na kisi tarike se theory meh convert krna. so toh overall theory mtlb kisi cheez ko samjane-ka-tarika and yeh samjane-ka-tarika uss cheez k actual-physical-banavat se same bhi hosktaa hai, ya mtlb different bhi hosktaa hai as for making the understanding easy of the individuals-peoples.
// 2.toh mtlb 1st-layer ka kaam frontend-developers kaam krtehh hai, 2nd-level ka database-designers(mtlb jo database ka blue-print banake deteeh hai) krtehh hai and 3rd-layer pe database-operating-system kaam krta hai.
// 3.centrilized-database mtlb mtlb data ek hi jagah,ek hi database meh pda hai, and distributed-database mtlb data diff-diff alg-alg jagahvo pe mtlb alg-alg databaseso meh pda hai , and then voh sbhi databases ka data softwares k duvra integreate kiya jata hai, and mtlb phir usko logicaly-centrilized kiya jata hai.
// 4.data-independance ka mtlb ki user se data-ki-actual-storing unknown hai.