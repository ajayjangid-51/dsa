// YAHA pe apn #include and #define pre-processor k bareh meh dekhenge:
//  1.#include-Pre-processor-statement/command/directive: se apn apne current-program-file meh kisi bhi file ko fetch kr skteh mtlb copy kr skteh hai. mtlb voh file-content pura deto same hi apni file k upar fetch ho jata hai , thus phir simply apn uske variables, function etc...etc sbhi cheezo ko use kr skteh hai.

// #include-preprossor k 2-syntax hoteh hai:
/*  1. #include < file-name > (angle-brackete(<>) apn tab krteh jab apnko standard-folder se koi file include krni hai apne current-working file meh )
/*  2. #include "file-name" (double-quote ka use apn tab krteh jab apnko current folder se hi koi file include krni hai apne current-working file meh )
*/

// 👿 note-point: .h extension-file kuch alag language file nhi hai yeh bas simply esseh hai ki apn bata ske ki yeh ek header-file hai mtlb essemh mostly pre-processor commands use krke sab kuch likha hota hai , and phir ek apne .c-file meh load hone k baad yeh .h-file ka content as like phir .c-file ka content hi ho jata hai. and phir yeh accordingly compile bhi ho jata hai.

//  2.#include-pre-processor-statement/command/directive: se variables and macros define hoteh hai. mtlb apnnne jo variables and macros pre-processor command se define kiyeh unn macros and variables ko yeh search and replace kr deta hai. thus yeh ek kafi acchi baat hai.
// as esseh apne program ki efficiency and performance kafi badhti hai mtlb kafi aachi hoti hai in the way jaise: apn kisi numbers ko use krne k liyeh unheh phle store krteh hai and store krne k liyeh apn containers banateh hai mtlb memory-allocate krteh hai , thus vaha pe apni memory-consume ho rhi hai , mtlb apne program ki performace usseh matter toh kregi bcoz usko ram bhi scan krega , control-cursor vaha move mtlb voh ek chota sa container bhi performance meh matter krega. thus apn pre-processor commands ka use krke essi cheezo ko hata skteh hai, mtlb apne program ki performance kafi enhance and fast kr skteh hai. as like jaise apn #define-pre-processor-command se kuch variables define kr skteh hai where yeh variable- memory meh allocate nhi hoteh but yeh varialbe ki tarah kaam krteh hai mtlb actually yeh #define-preprocessor command apne andar define huyeeh varialble ko search and replace krne ka kaam krta hai. and yahi ek mast cheez hai.

// pre-processor commands pre-processing krti hai. mtlb sbse phle yeh commands hi execute hoti and enn commands ka execute hona hi pre-processing hona khelata hai. ya apn eseh bol skteh hai ki pre-processing ho rhi hai mtlb pre-processor commands execute ho rhe hai.
// and apn #define-command se macros bhi define kr skteh hai and phir pre-processing k time yeh macros bhi search and replace ho jateh hai.

// where Macros mtlb yeh bhi ek function ki tarah hi hoteh hai, but yeh easily execute ho jateh hai ess tarah se.
// as like apnne ess tarah macro-define kiya:
//  #define macro_fn( param1 ) [ param1 * param1  ]
// thus phir aage program apn esseh likhteh hai:
//   int a = macro_fn( 23 ); 
//then phir jab program ko compile kiya jayega tb yeh #define-preprocessor ess macro ko search krke ess tarah resolve kr dega: 
//  int a = 23 * 23 ;
// mtlb apnko koi alag se function call kr jarurat nhi padi mtlb program run-time koi function call nhi hoga mtlb vaha apna control-cursor uss called function pe nhi jayega , and phir uske liyeh stack meh koi function-content load nhi hoga and phir voh control-cursor vapis apne jagah pe aayega thus , toh apn ess tarah pre-processing krva k kafi aache se apne program ko enhance and fast bana skteh hai.


// 