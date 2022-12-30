//🔥💲 As NOW YAHA pe apn "Sorting-Techniques" dekhenge... mtlb apn diff-diff tarah ki , diff-diff types ki Sorting-techniques or ya mtlb Sorting-approaches dekhenge... jinseh apn "sorting" kr sktehh hai. and apn Sorting ko analyise krna bhi dekhenge, mtlb apn voh criteria(mtlb koi standard baat jisseh apn kisi cheez ko judge krteh hai ya decide krteh hai ki konsi cheez kab sahi hai , acchi hai kisi other cheez se) dekhenge ... 💲🔥

//💲 AS toh phle apn simply upar-upar se diff-diff "Sorting-Techniques" dekhenge ki haan esi-esi "sortings" hoti hai. and phir baad meh aage apn enn sbhi "sortings" ko acche se dekhenge ki enmeh meh kya approaches follow hoti hai, mtlb enn "Sortings" meh kya hota and kaise hoti hai yeh mtlb kaise kis tarah voh particular "Sorting" hoti hai.💲

/*
    1.Bubble-Sorting (or mtlb Bubble-sort-technique)
    2.Inserting-Sorting ( or mtlb Inserting-sort-technique)
    3.Selection-Sorting
    4.Heap-sorting
    5.Merge-sorting
    6.Quick-sorting
    7.Tree-sorting
    8.Shell-sorting
    9.Count-sorting
    10.Bucket-or-Bin-sorting
    11.Radix-sorting

// thus toh mtlb all-over apne pass "11" diff-diff "Sorting-Techniques" hai, thus toh "Sortings"-topic meh apn ennhi 11-types ki "Sortings" hi dekhenge... mtlb apn enn "Sorting-techniques" ka main idea dekhenge and then apn enn idea-alogrithm ko analyise bhi karenge for time-and-space-complexity-purpose and then afterall apn  enko implement bhi karenge mtlb enko "code" bhi karenge..
// as yeh 3-kaam hi apn har tarike k ki "working" k liyeh krteh hai, mtlb apn phle "working" krne ka idea dekhenge , then uss idea-algo ko analyise krenge and then phir uss idea-algo ko code krenge. and possible or mtlb iccha ho toh apn uss coded-program ka posteriori-analysis bhi kr lenge...
*/

//💲 AS now aab apn "Sorting-Techniques" ko analyise krne k kuch "criteria"(mtlb kuch pricipal-baateh) dekhenge, mtlb jinke basis pe apn as per need, as per situation best "Sorting-Technique" choose kr payeh, or mtlb unmeh se best "Sorting-Technique" for that particular work k liyeh decide kr payehh.  💲
// As toh "Sorting-Techniques" ko analyise krne k liyeh yeh "Criteria" hai ki mtlb yeh kuch baateh hai ki jinke basis apn "sorting-technique" ko analyise or mtlb compare kr sktehh hai with any other "sorting-technique".
// thus yeh hai voh baatehh ki sorting-technique meh kitne:
//  1.Number-of-comparisons in "sorting-technique hai"
//  2.number-of-swaps in "sorting-technique hai"
//  3.adaptiveness (as adaptiveness define hoti hai for the "sorting-techique-algorithm" k liyeh hi, as toh adaptiveness ka mtlb yeh hai ki sorting-algorithm already-sorted-elements pe jada time na lagayeh mtlb already-sorted-elements pe voh algorithm kaam-se-kaam time spend karee(whereas kaam-se-kaam time spend krne ka mtlb hai ki ), thus toh agr essi kuch baat hoti hai for the algorith then that algorithm is called as "adaptive-algorithm" , thus toh "adaptive-algorithm" accha algorithm hota hai. thus toh agr koi "sorting-algorithms" meh koi algorithm "adaptive" hai and koi dusra nhi hai then toh apn vohi algorithm choose krenge jo ki "adaptive" hai. )
//  4.stable-ness
//  5.extra-memory(inplace-ness of aglorithm) (mtlb kuch "sorting-algorithms" esseh bhi hoteh hai jo ki "extra-memory" consume krtehh hai, thus toh apnko ess baat ka bhi dhyn rkna hai while choosing the better sorting-algorithm )

//💲 AS now apnne jo upar 11 sorting-techniques dekhi thi unko apn catergories krenge, thus toh apn easily choosing-time pe particular catergory ki sorting-technique ko hi dekhe or mtlb usi k bareh meh hi sochee. 💲
// comparison-based-sortings (1 to 8) (enmeh comparison k basis pe sorting hoti hai)
// index-based-sortings (9 to 11) (enmeh index k basis pe sorting hoti hai)
// O(n^2) time-sortings (1 to 3)
// O(nlogn) time-sorting-techiques are from ( 4 to 7)
// O(n^1.5) time-sorting-techniques is (8)
// O(n) time-sorting-techniques but they consume lot of space are from (9 to 11)

// and jaise baakki baateh jaise ki konse algorithm ka kya idea hai, kya tarika hai , voh algorithm stable hai ya nhi , voh adaptive hai ya nhi , voh inplace hai ya nhi,  no.-of-comparisons jadaa hai or mtlb kitne hai ,no.-of-swaps kitne hai. etcc...etcc. bateh apn aage jab particularly sorting-techniques dekhenge tab acche one-by-one sabhi cheeze dekhenge... as now aab aage apn "Bubble-sorting-algorithm" se start krenge... dekha and sikhna...