//🔥💲🍕 As NOw apn yeh dekhenge ki "BackTracking" kya hoti hai, as apn yeh toh jantehh hai ki yeh kya hoti hai, as mtlb yeh "algorithm-design-technique or statergy" hai mtlb "problem-solving"-techique hai mtlb esseh apn problem ko "acche se" , "error-lessly" , "efficiently" solve kr sktehh hai , toh mtlb esko use kr sktehh hai,apply kr stkehh hai for solving such kind of problem( 🍤 as voh problems jiske multiple-solutions ho and apnko voh sare solution chahiyeh hotehh hai, as sare solution isiliy chahiyehh q ki unn solutions meh koi solution as a "optimal-solution" nhi hota mtlb sare same hi effort k hotehh hai, as agr vahah unn solutions meh se ko "optimal-solution" hota hai, then vhaa uss "optimal-solution" ko find krne k liyeh toh apn "DP"-apprach hi apply krtehh hai, but agr koi "Optimization-problem na ho whereas "optimization-problem" mtlb voh problem jiske multiple-solutions ho and unn solutions meh se only koi ek solution "optimal-solution"  hota hai🍤 ), or mtlb "multi-solutioned-problem" mtlb voh problem jiske multiple-solutions hotehh hai but unn solutions meh koi "optimal-solution" jaisi koi cheez nhi hoti mtlb voh "optimization-problem" nhi hoti, thus toh phir esko solve krne k liyeh apn "Backtracking"-approach apply ktehh hai.  🍕💲🔥

//🍕 back-tracking is used when there are multiple-solutions and we want that all multiple-solutions. Then at that we apply back-tracking. Mtlb jaise p&c Problems hoti hai....

// Now back-tracking meh bhi brute-force hi use hoti hai.. but bs baat yeh hai ki apn har-path ko pura nhi krtehh, mtlb ek ya multiple conditions rkhtehh hai and jiske basis pe apn uss path ko break kr letehh hai ussi point pe, and uss point se just piche jake(mtlb backtrack hoke) dusre solution-path pe chale jatehh hai.. toh mtlb esiko hi apn back-tracking krna khtehh hai.. now ess statergy ko apn easily follow kr payehh toh eskeliy apn "tree-ds" ka use krtehh hai and phir solution-space ko fill kr detehh hai..That "tree-ds" is called "solution-tree" or "state-space-tree"
// Explanating back-tracking and seeing that how it follows brute-force:- we will see this by this 👇🏼👇🏼example
//🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// Thua toh back-tracking meh in one-cycle apn 2-times back-track krtehh hai, 1st- when solution gets and 2nd- when bounding-fn value is true..
//🖼️🖼️🖼️  see pic-2 :- 🖼️🖼️🖼️

//👿📔imp-Note-point:-Back-tracking ko apn recursion meh hi implement krtehh hai..
//As toh bas recursive hai then apnk, simply sub-problems meh krke hi sochna hoga as like as dp but bas apn minimum, maximum nhi krenge and memoization or tabulation nhi krenge.. or mtlb yaha recursion ekdam "dp" ki tarah pure recursion nhi hai, as mtlb jo possible option hotehh hai for the solutions,unko apn as simplly "loop" se bhi handle kr sktehh hai.

// As toh back-tracking meh apnko bound-fn apply krke phirrrr case lena hota hai... And implementation meg bhi baat vohi hai ki apn solutions create krenge by taking possible-case as per bound-fn.. one-by-one.. mtlb apnko phle "isSafe"-fn se confirm krna hota hai ki kya hai "option" yaha k liyeh safe hai, and agr voh safe hota hai tabhi usko apn include krenge.. otherwise apn next-"option" pe move hoke uss "option" k liyeh "isSafe-fn" se puchenge...
// BackTracking  meh "isSafe-fn" wali ek phle important baat hai and 2nd-important baat yeh hai ki apna jo "Util"-function hota hai, usseh apnko "backtracking" krni hoti hai, mtlb apnko 2(two)-conditions pe backtracking krni hoti hai , (where "backtracking" ka simply mtlb ki current-function-call( mtlb current-recursive-call) ko end krna hai and uske parent-function-call meh jana... is only and exactly called as "Backtracking".). as toh mtlb apnko 2(two)-conditions pe "backtracking" krke uss jis-parent-function pe apn ja rhe hai uske "recursive-fn-call" pe jana or ya uss parent-recursive-fn-call ko bhi end-krna(agr jo reucrsive-fn-call end huyi hai voh last-possible-option k liyeh thi..). Now toh voh 2(two)-conditions yeh hai ki agr possible-option khatam ho jayehh tab,and 2nd is ki apnko available-solutions meh se sahi solution miljayehh. (as sahi solution-milne ki conformation yeh hogi ki ya toh apn last-possible case pe hai and apnko jo chahiyehh voh apna match ho rha hai, then apn uss recursive-call ko end kr denge and uske parent-reucursive-call pe move hojayenge... "and ek-baat ki yeh curent-recursive-call se just-parent-recursive-call pe move hone"( mtlb "backtrack" hona) se phle apna jo solution mila hai usko apne overall solution meh store krle na.)
// Concluded from bracket-forming example-problem's-implementationa and "N-queen-problem" and "Solve-sudoku"-problem.

// As toh back-tracking meh apnko importantly bound-fn(is-Safe) banana hota hai,build krna hota hai, and then more importantly phir recursion ko esseh implement krna hota hai ki usseh apni "backtracking" hoveh by considering only "isSafe-possible-options".

// Bound-functions ka kaam kabhi kabhi toh simply just conditions se hi ho jata hai and kabhi-kabhi apnko alg se bounding-fn banae hotehh hai and phir Recursion-fn se creation k time phle unn bound-fn ko call krna hota hai, and uss bound-fn k according mtlb uski suggestion or restriction k according apnko apne recursion-fn recursive-call krni hai...
// As apn recursion se implement isiliy krtehh hai q ki apn jo solution find krtehh hai,voh tree generate krke hi toh find krtehh hai, thus toh eska mtlb uss solution ko apn exactly same vase recursion se kr sktehh hai,thus toh mtlb isiliy apn hamesa recursion-implementation krtehh hai...

// Recursion se apnko tree create krna hai,then recursion-fn meh apn two-recursive-calls krenge.. but phle first-recursive-call end hone ki base-condition apnko  sbse upar rkhni hai..

// And thenr second-recursive-call k baad meh apn third-branch k liyeh apn 3rd recursive-call kr skteh hai, and phir no-last-branch k liyeh simply jo main call k liyehh, return value kr sktehh hai.. as yaha main-call mtlb just-parent-call...

/* /🌟🌟🌟  
//👿📔imp-Note-point:- As "branch-and-bound" meh bhi "brute-force" use hoti hai..
// Some-of back-tracking problems mtlb these problem can be solved by "back-tracking"
// 1.n-queens problems
// 2.sum-of subsets
// 3.graph-coloring-problem

// Branch and bound is also little mtlb some-what as same as back-tracking. Mtlb BB meh bhi apn state-space-tree use krtehh hai, but bas voh tree-making apn "BFS" manner meh krtehh hai..

 //🖼️🖼️🖼️  see pic-3 :- 🖼️🖼️🖼️
 //🖼️🖼️🖼️  see pic-4 :- 🖼️🖼️🖼️
 🌟🌟🌟*/
