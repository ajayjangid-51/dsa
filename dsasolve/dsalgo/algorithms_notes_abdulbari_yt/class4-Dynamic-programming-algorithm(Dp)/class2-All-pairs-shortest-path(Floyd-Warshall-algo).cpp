//🔥💲🍕 Okay toh NOW YAHA pe apn "All-Pairs-Shortest-Path"-Problem dekhenge... and then esko jo solving "algorithm" hai which is known as "Floyd-Warshall-algorithm". 🍕💲🔥

// okay toh phle apn "problem" ko dekhenge , and then phir esko solve krne k liyeh apni  "dp"-approach ka concept lagake dekhenge and agr concept lg rha hai , then phir simply formula banalenge , and then phir esko implement code bhi krdenge..

// "all-pairs-shortest-path"-problem ka mtlb hai ki "graph" k sbhi vertices se all-other-vertices k bich ki shortest-distance findout krna.. as toh mtlb yeh problem ko mostly same as "Single-source-shortest-Path-problem" hai, but ess problem meh apnko sbhi "Vertices" ko ek-ek baar as a "Source"-vertex lena hai, and then and phir other "vertices" ki shortest-path find krna hai from that current "Source-vertex". Thus toh mtlb ess problem ko apn as a "Multi-Source-Shortest-Paths-Problem" bhi bol sktehh hai, but esko apn more generally "all-pairs-Shortest-Path"-problem boltehh hai, as q ki apn aseh bhi bol sktehh hai as q ki ess problem ko aseh visulize krtehh hai ki apn phle ek "Vertex" lenge and then phir uss vertex se other vertices k liyeh shortest-paths find krenge thus toh mtlb yaha apn "Pairs" banake k visulize krtehh hai isiliy phir apn esko "All-Pairs-Shortest-Path"-Problem boltehh hai.
//🔔🔔 As toh yeh Problem same as-it-is "Single-Source-Shortest-Path-Problem" ki jaise hi hai, but bas farak itna hai ki apnko one-by-one har vertices ko as a "Source-Vertex" consider krna hai and then vohi apna greedy-algo( mtlb "Dijkstra-algo") follow krna hai.   🔔🔔
// 🥈🥈 Now as toh agr apn "Dijkstra-algo" follow kre, then ess "algo" ki time-complexity dekhe toh apn conclude kr sktehh hai ki for 1-cycle of "dijkstra-algo" the time will be O(n^2), thus toh then for "n"-vertices k liyeh the time will be O(n^3). 🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️ Thus toh mtlb yeh time toh kafi jada hai, as yeh problem toh "optimization"-problem hai, and "optimization-problem" ko toh apn "Dp" se bhi kr sktehh hai, thus toh apn ess problem ko ek-baar "Dp" se solve krenge,, then see that which method's time is better. so per the "time" phir ess esi problem ko apn hamesa uss "method" se hi krenge...:-

//💲🍕 Okay, toh apn ess Problem ko apni "Dp"-approach se solve krenge.. 🍕💲
// AS toh "Dp"-approach se solve krne k liyeh apnko phle "Dp"-concept or mtlb "Dc"-concept (👿📔imp-Note-point:- as "Dp"-concept and "Dc"-concept same hi hai, bas "dp"-concept meh ek baat additional hai ki "try-to-get-all-possible-solution( via taking appropiate-decision)" and other is ki start to get the problem's-answer from its fundamental "stage", and "Dc"-concept bhi yehi bolta hai ki try to get problem's-answer from its sub-problems.). and yeh sure hai ki "Optimization-problem" hai or mtlb "Combitorics"-problem hai then apna "Dp"-concept toh lg hi rha hoga, toh bas apnko thoda dhyn se dekhna hai ki voh kaha and kaise lg rha hai. Now after getting that ki "Dp"-concept kaise lg rha hai,  then construct the "formula" about it, then start to fill the table according to the "formula". and if are asked about the "optimal-solution" then atlast simply follow "PO(principle-of-optimality)" means start to the optimal-solution we will get by "decisions-in-each-stage".

// 🥇🥇🥇 as ess problem ko vase "multistage" ki tarah bhi solve kr sktehh hai but, ess problem k "Graph" meh stages nhi hai balki "cycles(loops)" thus toh , agr loop hai, then phir apn yeh "Multistage" wala "sub-problem's-solution"-wala-concept yaha nhi laga sktehh hai, thus toh mtlb esmeh toh apnko phir har "possible"-stage ko consider krna hoga.:-

// Okay toh yaha apnko koi "Dp"-concept nhi lagana mtlb voh "sub-problem" ko consider nhi krna hai, as apnko sare possible cases try krne hai(mtlb baat yeh hai ki agr apn 1 to 2 direct-path ja sktehh hai, or any other indirect-path se bhi ja sktehh hai), Thus toh now sare possible-solutions ko find krne ka apne pass yeh tarika hai ki apn sbse phle toh simply "edge-Cost-Graph-adjency-matrix( which will be called as A0-matrix)" banyenge.. and then uss A0-matrix se apn baki other matrices banayenge yeh sochtehh huyehh ki the "edge" betweent the vertices is in way ki it is via "vertex-1". and as like this apn baki matrix bhi asehi banayenge by considering "A1" as a "A0" and then for "A2"-matrix considering "A1" as parent-matrix and like for others, and soo..on...upto "AN"-matrix.

// In-Matrix:-
// "0"(zero) is denoting that there is no any self-loop
// "(infinity)" is denoting that ther is not edge.
//🔔🔔 and to calcuate the weight-of-edge for jaise W(i,j) mtlb weight-of-edge-from-vertex-"i"-to-vertex-"j" via "vertex-1" is minimum-of( W(i,j) , (W(i,1)+W(1,j))). so toh mtlb apni "Matrix-table" ko fill krne ka tarika yehi hai.🔔🔔, thus toh esseh apn "matrices" ko fill krtehh rhenge... then atlast apne pass jo "AN"-Matrix hogi, voh hi all-Pairs's-Shortest-paths ko represent kr rhi hogi. but one-very important baat ki jo apni "AN"-matrix hogi usmeh jo paths honge voh actually via "vertex1","vertex-2" ,"vertex-3" se honge..
//🖼️🖼️🖼️  see pic-2,3,4 :-for seeing this procedure. 🖼️🖼️🖼️,
//🔔🔔 W(i,j) via "i" and "W(i,j)" via "j" is same as only W(i,j)-only from its "parent-Matrix". as agr apn formulae se bhi dekh then it is W(i,j) via "i" == W(i,i)+ W(i,j) = 0+W(i,j) and same thing for via "j"-also. 🔔🔔, Thus toh overall apn esseh bol sktehh hai ki agr apn via "vertex-x" se consideration kr rhe hai, then make the "xth-row" and "xth"-column same as it is. and "diagonal" is also same as it is "parent-matrix".
//📔📔Note-point:- as ess "dp"-problem meh "table" is like "Matrix" here.

//🖼️🖼️🖼️  see pic-6 :- for seeing the our shortest-path-Matrix, as yeh Matrix sirf only  "shortest-possible-between-the-vertices-ki-path"-ki-cost dekha rhi hai, mtlb voh "path" nhi dikha rhi, but esseh apn path bhi dekh sktehh hai, as considereing that the any path is via "vertex1", then "vertex-2" and "vertex-3" .. soo..on via "vertex-(n-1)".  🖼️🖼️🖼️
//🖼️🖼️🖼️  see pic-7 :- for seeing the "formula" we were using for filling the "Matrix-table".(as formula construct krne k liyeh apnko phle mentally procedure sochna hai, and uss procedure k according table ko fill krni hai, then phir simply voh "Formula" construct krlena hai.) 🖼️🖼️🖼️

//🌟🌟🌟  as agr solution meh choti-si cheez pe kisi approach ki statement se match khati then apn uss algorithm k liyeh boltehh hai ki yeh algorithm is design by that "algo-design-approach"., jaise yaha ess problem k algo ko apn ne "dp"-algorithm bola hai.🌟🌟🌟

//💲🍕 Okay, toh now aab apn ess Problem k solution-algorithm ko code krenge.. 🍕💲
// 💡💡Tip- as toh "dp"-algorithm ko implement krne ka most important and useful tarika yehi hai ki apnko simply loop meh voh "formula" likhna jo apn ne "dp"-aglo meh table-ko fill krne k liyeh construct krtehh hai. 💡💡, 🖼️🖼️🖼️  see pic-8 :-for seeing the implementation:- 🖼️🖼️🖼️.

#include <bits/stdc++.h>
using namespace std;

void AllPairShortestPath()
{
    int n = 4;
    int Graph[n + 1][n + 1];

    for (int k = 1; k <= n; k++)
    {

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                Graph[i][j] = min(Graph[i][j], (Graph[i][k] + Graph[k][j]));
            }
        }
    }
}
//👿📔imp-Note-point:- as ess "dp"-algorithm ki time-complexity is O(n^3) hi hai, toh bas baat yeh hai ki apn "Dp"-approach se ess Problem ko esseh solve krtehh hai. Thus toh aage apni marji hai ki apn esko "greedy(dijkrstra)" se kre ya "dp-(Floyd-warshall)" se kre..
int main()
{

    return 0;
}
