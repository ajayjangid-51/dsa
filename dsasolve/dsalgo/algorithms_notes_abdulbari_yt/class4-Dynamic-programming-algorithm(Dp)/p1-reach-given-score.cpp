// 📦📦 Problem-link:- https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&page=1&query=category[]Dynamic%20Programmingpage1category[]Dynamic%20Programming# 📦📦
#include <bits/stdc++.h>
using namespace std;

// 🥈🥈 as phle we will do via "recursion":-
int Rcount(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
        return 1;
    return Rcount(n - 3) + Rcount(n - 5) + Rcount(n - 10);
}
//👿📔imp-Note-point:- as ess algorithm meh apn "no.-of-permutations" nikal rhe hai, but apnko toh "no.-of-combinations" chahiyehh.
//📔📔Note-point:- as agr apn ess upar wale "recursion"-fn ka "tracing-tree" banayeh , then vaha jaha last meh "0" aajayega , usko apn phir ek solution( as here solution yani "combination" ) consider krlenge..
//👿📔imp-Note-point:-mtlb allover apn ne yaha pe voh statergy lagayi hai, jismeh apn sare premuated-Combination find krtehh hai , by just simply constructing a "Tree". as yaha apn ne "backtrack" bhi syh kiya hai mtlb apn thoda confirm krna hoga eske bareh meh, and as agr apn ne backtrack kiya hai then this "statergy" is called as "backtracking"-statergy.
//🖼️🖼️🖼️  see pic-p1-pic1 :- 🖼️🖼️🖼️

// 🥇🥇🥇 now doing via "dp"-statergy:-
long long int count(long long int n)
{
    long long int table[n + 1], i;
    memset(table, 0, sizeof(table));
    table[0] = 1; // If 0 sum is required number of ways is 1.

    for (i = 3; i <= n; i++)
        table[i] += table[i - 3];
    for (i = 5; i <= n; i++)
        table[i] += table[i - 5];
    for (i = 10; i <= n; i++)
        table[i] += table[i - 10];

    return table[n];
}

int main()
{
    cout << "the answer is == " << Rcount(11) << endl;
    cout << "the answer is == " << count(11) << endl;

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨
// 💡💡Tip- AS tip of this problem yehi hai ki apnko sbse phle sbse importantly phle "Recursive-formula" banana hai, then useeh phir simply table(mtlb array ) banake loop meh usko implementation krdena hai. 💡💡
// 💡💡Tip-2: and yeh "recursive-formula" toh apn phle simply "Dc"-approach-idea lagake dekhtehh hai ki kya apna "Dc"-idea apply ho raha hai, and agr ho rha hai then simply apnko apna "recursive-formula" bana lena hai. 💡💡
//👿📔imp-Note-point:- Combination meh "sequence" ka farak nhi pdta , mtlb combination meh "sequence" matter nhi krti. but "Permutation" meh "sequence" bhi matter krti hai, mtlb ki toh jaise apnko koi Combination puch rha hai then vaha apnko Combinations hi return krne hai mtlb vaha phir apnko Permutations return nhi kr dene hai.
//👿📔imp-Note-point-2:- as agr apn acche se notice kre toh, mtlb yeh Combitorics-problem , and combitorics meh apnko Combinations find out krne hotehh hai, thus toh combinations toh simply "tree"-construt krke bhi find our kr stktehh hai, and yeh plus-point hai ki "back-tracking" and "branch-and-bound" meh apn yeh "tree" construct krke hi voh combinations findout krtehh hai, as but for simple unn approach meh apn ess "tree" ko "state-space-tree" boltehh hai.
//🌟🌟🌟 🥇🥇🥇 as kabhi bhi apnko "Combitorics"-problem dikhe toh then alyws apnkko "Dc"-concept lagana hai and usseh phir voh "recursive-formula" find krna hai mtlb "recursive-formula" banana hai , then phir apn usko only "recursively" bhi implement kr stkehh hai , by "Dp" bhi implement kr sktehh hai and by "back-tracking" bhi implement kr sktehh hai. but for efficiency purpose mtlb for O(n)-time and O(n)-space follow "Dp"-approach. 🥇🥇🥇   :- 🌟🌟🌟
// 💡💡Tip-3, as agr koi Combitorics or mtlb "Optimization-problem" ho and apn confuse hai ki esko apn konsi statergy se kre , then simply apnko vaha uss problem meh requested "time" and "space" ko dekh lena hai, as mtlb agr time and space both are of O(n) then simpy move ahead with "DP" , or otherwise usseh apn "Dc" or "recursion" se bhi kr sktehh hai.💡💡
// :-
// ✳️✳️✳️✳️✳️✳️