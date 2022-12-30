//🔥💲🍕  🍕💲🔥
// Algorithm design technique mtlb algorithm( mtlb procedure) ko design krne ki technique mtlb solution k procedure ko design krne ki technique..
// Thus toh Dp(dynamic-programming) is Algorithm-design-technique mtlb ek approch hai , ek statergy-procedure hai to get the optimal-option mtlb optimization-problem ko solve krne ki statergy hai..
// As and Dp se apn optimal solution and no.-of-possible-solution bhi find kr skteh hai..
//Thus toh aage kabhi apnko optimization-problem k solution mtlb solution-algorithm ko design krtehh time Dp-idea ko dhyn meh rkhtehh huee design krna hai mtlb banana hai..
//

//💲🍕 As toh now apn simply phle toh Dp k basic-elements dekhenge mtlb Dp-technique meh apnko kya-kya cheeze chahiyeh voh dekhenge via by taking the example of "coin-Change-Problem" 🍕💲
// As ess "coin-change-problem" meh apnko simply kuch coins de rhkhe hotehh hai, and apnko ek particular requested "sum-of-money" create krna hota hai by using minimum-of-coins-as-much-as-possible..
// As toh ess problem ko apn simply "greedy-approch or greedy-technique" se solve kr sktehh hai , as q ki yeh optimization-problem hai , but apn dekhenge ki har baar greedy-technique (mtlb jismeh hamesa apn sbse chota or ya sbse-bada hi choose krne ki shlaa deteh hai or mtlb khud choose krteh hai.) Se sahi answer nhi aayega mtlb apni greedy-approach fail ho rhi hai, thua toh ess problem ko apn Dp-approch se solve kr skteh hai, thus toh mtlb optimization-problem k liyeh phle apn greedy-approach lgatehh hai simply and agr if greedy fails then apn phir Dp lgatehh hai mtlb then apn phir greedy-approach se krtehh hai..

// 🍕🍕and Now 6.2 meh apn problem ko check krna dekhenge ki esmeh apnko Dp hi lagani hogi ya mtlb apn esmeh Dp laga skteh hai , as mtlb esmeh greedy fail hojayegi. By taking the 3-problems as a example

// 📔📔Dp is almost like a brute-force but it is also efficient , wheras brute-force is not efficient means it becomes very slow for large inputs.

// As Dp meh apnko problem ko Recursively-Formulate krna hota hai(as mtlb Recursion meh hota kya hai ki bada input chota-chota-chota.. hota rheta hai) Mtlb in the Recursion meh bade input ka answer from from chote-chote inputs wali problem-case mtlb sub-problem k solution se find kr sktehh hai , jaise ki apne 1,3,4 k coins hai and apnko sum-6 chahiyeh, thus toh mtlb apn yeh toh samajtehh hai ki sum-3 k liyeh apnko minimum 1-coin lagagega and jaise sum-4 k liyeh bhi 1-coin lagega and sum-1 k liyeh bhi 1-coin lagega . Thus toh sum-6 k liyeh apn sum-3 and sum-3 meh break kr sktehh hai, thus toh apbko corrct-answer 2-mil jayega , whereas sum-7 k liyeh sum-4 and sum-3 meh break kr sktehh hai and etc..etc . Thus toh mtlb apbi yeh mental-approach sahi hai and mtlb yeh kaam bhi kr rhi hai sahi se. And apni yeh approach greedy se alg hai.. thus toh now allover baat yeh hai ki apn ess apni new-approach ko implement kaise kre.. thus toh apn aab esko implement krna dekhenge..

// As ess approch ko apn Dp-approch khtehh hai, or ya mtlb jab apn ess approach ko implement krenge and vaha pe apn memoization ya table-valuation use krtehh hai then mtlb phir yeh approch Dp-approach khlayegi...

// As toh Dp-approach meh apnko solution k luyehy hamesa recursively -tarike se hi sochna hai. And phir implement iterative-version meh krenge..