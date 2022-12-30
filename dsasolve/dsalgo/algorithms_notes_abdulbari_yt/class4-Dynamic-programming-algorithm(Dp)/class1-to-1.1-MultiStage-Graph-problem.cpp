//🔥💲🍕 Now aab YAHA pe apn "MultiStage"-graph-Problem k bareh meh dekhenge.. 🍕💲🔥
// as toh phle toh yeh "problem" k bareh meh dekhenge ki yeh problem kya hai, and then phir esko apn "dp" se kaise krenge voh dekhenge , and yeh bhi dekhenge ki esko apn forward-method se kaise solve kr sktehh hai.

// AS toh "Multistage"-graph is directed and weighted-graph, jismeh "vertices" stages pe present hotehh hai, mtlb jaise stage-2 pe x-vertices , and then stage-3 pe y-vertices etc..etc and starting(mtlb first-vertex or source-vertex )-stage and ending(last-vertex)-stage sirf only one-vertex hota hai. and ess graph meh ek stage k Vetices ki edges just-next stage k vetices se connected mtlb directed hoti hai. as yaha "just-next-stage" ka mtlb "just-next-stage" mtlb esseh nhi ki stage-1 k vertices se edges stage-3, or stage-4 so..on k vertices se connected hai, mtlb voh sirf only just uske next-stage wale vetices se towards hi connected and directed honge.

// 🥈🥈  as yeh "MultiStage"-graph usually "resource-allocation(mtlb jaise kaha koi industry hai, and usmeh multiple-resources hai and voh resources aapas meh connected hai ,toh mtlb uss system ko represent krne k liyeh)" ko represent krne k liyeh mtlb "resource-allocation" k data ko store krne k liyeh use hota hai.:-
// Thus toh yeh "Multistage-graph-Problem" yeh hai ki apnko "source-vertex" se "ending-vertex" ka shortest-path or mtlb minimum-costed path chahiyehh. , So thus toh yeh problem toh "minimization"-problem hai mtlb "optimization-problem" , thus esko "dp" se solve kr sktehh hai, so toh now aab apn yeh dekhenge ki apn esko "dp" se solve krenge.. // 🥇🥇🥇 as agr apn esko "dp" se solve krtehh hai then apn 2-cheezo k answer de sktehh hai: 1st-one is ki "total-no.-of-paths" from source-to-end (as q ki "dp" meh apn sare possible-cases dekhtehh hai as mtlb "dp" meh apne pass sare possible-cases ka answer hota hai, whereas in "Dc" meh apn sbhi ko possible sub-problem's-result ko run toh krtehh hai but apn usko apn acces nhi kr sktehh hai , mtlb voh just result found hoke vanish ho jata hai and result parent-call k pass chala jata hai. and yaha yeh sare-possible cases ka mtlb ki sari sub-problems ki sub-problems .... as toh allover mtlb ki jaise sare possible-cases ko try krna mtlb ye bhi hota hai ki sari-sub-problems( sub-problem ki sub-problems and so..on) ko try krna and then yeh dekhna ki kya apn enn sub-problems ko sum-up krke apna result find kr sktehh hai, and agr kr stkehh hai then do-like this. and sare possible-cases ko try krna mtlb yeh bhi hota hai ki phle sare possible-combinations ko find krlena and then ussmeh se best-one select krlena as bhi apni "dp"-approach hi hoti hai.) and 2nd-one is ki "shortest-path-among-these".:-

// 🥇🥇🥇 Yaha "dp" meh "stages" ka mtlb hai sub-problems jaise let our required-solution's-stage is "x" , then stage "x-1" is a sub-problem of actual-required-thing , then stage "x-2" is a sub-problem of last-sub-problem and soo..onnn:- , Now aab yeh problem pe depend krta hai ki apn solution create krna kaha se chalu kre from from the stage-"x" se chalu kre ya from the innermost-stage mtlb "0th"-stage se chalu kre..
// 🥇🥇🥇 some-possible-solutions ka mtlb sare-stages ka answers whereeas sare-stages ka mtlb sari sub-problems ka answer.:-

// now toh sbse phle apn yeh check krenge ki kya apn ess problem pe "dp" laga sktehh hai, thus as toh apn jantehh hai ki "dp" follow "principle-of-optimality(take sequence-of-decisions)" , mtlb apni problem pe "principe-of-optimality" lg rha hai then tab toh apn esko "dp" se kr sktehh hai.
// Thus toh yaha "PO( Principle-of-Optimality )" follow ho rhi hai, mtlb apn har stage pe koi ek decision le rhe hai mtlb koi ek vertex select kr rhe hai, and so.on by doing this apn at stage-X "ending" pe puch ja rhe hai. So , toh mtlb apn esko "dp"-approach se kr sktehh hai , as toh "dp"-approach se kr sktehh hai then apn simply aab "dp"-procedure lagayenge , as mtlb sbse phle apn "table" create krenge and then uss table ko fill krenge.. , thus toh now "table" ko apn last se fill krna chalu krenge.. as mtlb apn "stage-x" se chalu krenge... as q ki yaha yeh stage-x hi sbse "sub-problem" hai, jiska answer apn bhi jantehh hai ki it is "zero(0)" mtlb.

// 🥇🥇🥇  as yeh "Principle-of-optimality" is more likely or just same as "Dc"-concept . as jaise "PO" toh yeh bolta hai ki agr aap problem ko stages meh solve kr paa rhe ho then voh sbse thik hai, and then simply last- fundamental-stage se result-calculate krna start krdo(as q ki agr tum A-to-B ja sktehh ho then B-to-A toh easily vapis aa sktehh ho, q ki "B"-is the fundamental-stage jiska answer apnko pata hi hota hai, and then B-k-just-phle stage ka answer apn B-stage se pata laga skteh hai and so.onn aseeh krtehh hai apnko "A" pe puch aana hai with the sum-up-result ) and thus toh same yehi kaam apn "Dc"-meh bhi krtehh hai but bas baat yeh hai ki "dc" meh apn combitorics-problems nhi krtehh but baat toh more like same hi hai.:-

//🖼️🖼️🖼️  see pic-1 :- to visulize this Multistage-graph-Problem. 🖼️🖼️🖼️, as yaha ess pic meh "cost(4,9)" ka mtlb hai cost of "4th-stage's-9th-vertex" as eska mtlb ki ess vertex se "sink-vertex" pe jane ki kya hogi?, so toh it will be equal to the weight-of-its-edge-which-is-directed-toward-sink-vertex. and C(4,9) ka mtlb ki weight-of-edge(which is from vertex-4 to vertex-9)📔Note-point:- table meh "d"-row is for that vertex jo apnko minimum-result deta hai. and table meh "cost"-row is for writing the respective-vertex's cost.

// 🥇🥇🥇 🎵🎵🎵  see audio-1(for understanding that what actually we want to do in "dp"-approach mtlb according to dp-approach apnko actually , simply and directly kya krna hota hai.) :- 🎵🎵🎵 🥇🥇🥇

//▶, Okay toh now apn ne simplly phle table create krli hai, and now aab apn ess table ko fill krna chalu krenge.. as toh jaise apn ne upar-abhi bola tha ki "dp" meh apn table ko as per the condition from "starting" se ya from "ending" se fill kr sktehh hai. Thus toh yaha pe apn apni "Table" from the end se fill krna chalu krenge, bcoz yaha "ending" is smallest sub-problem( sub-problem is that ki agr apn "vertex-12" pe hoteh hai then "vertex-12" pe jane ka shortest-path kya hota so that is obvious "zero" , thus toh isiliy apn ne "table" ko ending se fill krna start kiya , as mtlb apn from the smallest-sub-problem or ntlb from that "stage" whose result can be found directly se "table" ko fill krna start krtehh hai, as like jaise in "fibonacci", apni intial-stage hi fundamental, or mtlb smallest-sub-problem thi , thus toh vaha apn ne "table" ko starting se fill krna start kiya tha..)
// So toh Now //🖼️🖼️🖼️  see pic-2,3,4,5(in our own writing) for "understanding" the procedure of filling our "table". :- 🖼️🖼️🖼️

//👿📔imp-Note-point:-as ess problem meh apn ne "table" ko from the backward se fill krna start kiya , but phir bhi apn esko "forward-method" se krna hi bolenge q ki aage jab apn "stages-meh-decisions" lena start krenge toh voh apn "vetex-1" se lena start krenge as toh isiliy apn esko "forward-method" bolenge.. so mtlb based on "decision-taking-direction" method is named ki it is "forward-method" or "backward-method".

//🔔🔔 Okay toh apn ne procedure toh dekh liya, as now aab apn apna "formula"( not always "recursive-formula" mtlb just formula of how we are doing our procedure mtlb how we are filling our table) banayenge dekhenge.. 🖼️🖼️🖼️  see pic-6, for seeing the formula:- 🖼️🖼️🖼️, as mtlb apn yehi "formula" k basis pe apni "table" ko fill kr rhe the..

// 🥇🥇🥇🥇🥇🥇 Okay, toh now aab apn apni "dp"-approach ki last-approach ko simply apply krdenge, that is ki after getting all the data simply take-the-decision-in-every-stage and move on our actual-solution. Now but ess baat ko krne k liyeh apne pass "data" bhi toh hona chahiyehh, thus toh ess cheez k liyeh "dp"-statergy apnko ek tarika deti hai, jisseh apn phle yeh "data" collect kr letehh hai, mtlb yeh "table" bana letehh hai, and yeh tarika for collecting the data yeh hai ki "simply-try-to-solve-the-problem-in-stages" or "try-to-get-the-problem-result-from-its-sub-problem-and-then-its-sub-problem and soo..on as like this" and start from the most simplest or fundamental-stage or mtlb fundamental-sub-problem( fundamental-sub-problem ka mtlb problem ki sub-problem and then uss sub-problem ki sub-problem etc.. and so..on upto last simplest-sub-problem). 🥇🥇🥇🥇🥇🥇
// So toh now apn "decisions" on the basis of "d-row's-data" k according lenge.. now yaha pe apna har stage meh decision yeh hoga ki apnko "present"-stage se konsi "stage" pe jana hai.
//🔔🔔 (thus toh mtlb "stage's-decision mtlb stages meh jo apnko decision lena hota hai voh decision as per the problem hota hai.") 🔔🔔
//🖼️🖼️🖼️  see pic-9 :- for seeing that how we are taking "decisions" in each-stage. 🖼️🖼️🖼️, So toh mtlb aseh ess tarah apnko at-the-end meh "stage-decisions" lene hotehh hai.

// "Overlaping-sub-problems" maane sub-problem ka answer can be found its sub-problem.

//🔥💲🍕 Okay , toh now aab apn ess "Multistage-graph" k solution-algorithm ko implement krenge mtlb code krenge.. 🍕💲🔥
// as jaise toh apnne ess "Multistage-problem" ko solve krna toh dekh liya hai, ki apn "dp"-approach se esko solve kr sktehh hai.
#include <bits/stdc++.h>
using namespace std;
#define trav(a) for (auto x : a)

// int *SolveMultiStage()
void SolveMultiStage()
{
    // as ess problem ko solve krne k liyeh apnko phle kuch containers(mtlb data-structures) chahiyehh honge to store the the problem's-data and our result-data, so toh yeh apn ne jab eska algorithm design kiya thaa, vaha pe apn ne dekha tha ki apn "graph" pe kaam kr rhe thee, thus toh mtlb programmatically "graph" pe kaam krne k liyeh phle apnko ess "graph" ko store krna hoga, thus toh "graph" ko store krna mtlb memory-meh-represent krna apnko aata hai , as mtlb apn adjency-matrix ka use krke "graph" ko represent krtehh hai memory, thus toh mtlb aab apn "programatically" ess apne "graph" ko access toh kr sktehh hai. and apn ne ek baat orr dekhi thi ki apn "table" ka use kr rhe thee mtlb apna calculated-result store krne k liyeh apn "table" ka use kr rhe thee, thus toh now yaha pe programming se result-calculate krke apn usko "table" meh store krenge, thus toh apn phle "memory" meh table bhi crete krenge.. as toh apn "table" ko as a "matrix" bhi create kr sktehh hai or as different multiple "arrays" bhi create kr sktehh hai, thus toh apn simply diff array hi create krenge..

    //📔📔Note-point:-  as "ds" ka main concept yeh hai ki programmtically apnko agr kis cheez pe kaam krna hai then uss cheez ko phle apnko "memory" meh store krna hoga mtlb "memory" meh represent krna hoga, thus toh isiliy apn yeh differetn respective "ds(data structures)" ka use krtehh hai for storing respective different types of "data".

    //🖼️🖼️🖼️  see pic-11 :- for seeing the diff containers( mtlb "data-k-structures" or mtlb simply directly "data-structures") that we are using in our algorithm , and same as it is in Program , q ki algorithm hai toh apn program toh simply easily likhi sktehh hai. 🖼️🖼️🖼️
    //🖼️🖼️🖼️  see pic-12 :- for seeing the filling of "adjency-matrix" 🖼️🖼️🖼️, as ess matrix meh koi bhi element( jaise for-eg: M(i,j)) is representing the "weight-of-the-edge-which-is-directed-from-vertex(i) to vertex(j)".

    // code-statment for createing the "adjency-matrix" and "intialize" to it. as yeh "matrix" graph meh edges ki cost bata rhe hai.
    int v = 8; // here "v" is for "vertices".
    int Graph[v + 1][v + 1] = {
        //   0  1  2  3  4  5  6  7  8
        {0, 0, 0, 0, 0, 0, 0, 0, 0}, // 0
        {0, 0, 2, 1, 3, 0, 0, 0, 0}, // 1
        {0, 0, 0, 0, 0, 2, 3, 0, 0}, // 2
        {0, 0, 0, 0, 0, 6, 7, 0, 0}, // 3
        {0, 0, 0, 0, 0, 6, 8, 9, 0}, // 4
        {0, 0, 0, 0, 0, 0, 0, 0, 6}, // 5
        {0, 0, 0, 0, 0, 0, 0, 0, 4}, // 6
        {0, 0, 0, 0, 0, 0, 0, 0, 5}, // 7
        {0, 0, 0, 0, 0, 0, 0, 0, 0}, // 8
    };
    //👿📔imp-Note-point:- as yaha apn size as a "9" le rhe hai, as takki apnko no.-of-vertices k equal "array-index" mil jayeh thus takki apn easily aaram se relate kr payehh..

    // code-statement for creating the "table arrays:-"
    int cost[9];
    int d[9];
    // given that our Multi-stage-has-graph has 4-stages:
    int stages = 4;
    int ourshortestPath[stages + 1]; // as yeh "stages+1" isiliy hai takki apn stages k equal index use kr sakee..

    //
    int n = 8;

    cost[n] = 0;
    d[n] = 8;

    //🖼️🖼️🖼️  see pic-13, 14 :- for seeing the working of this loop, 🖼️🖼️🖼️

    for (int i = n - 1; i >= 1; i--)
    {
        int min = 32767;
        for (int j = i + 1; j <= n; j++) // as jaise i = 4 hai, then apn 5,6,7,8... vertices ko hi toh consider krenge.. na.
        {
            if (Graph[i][j] != 0 && Graph[i][j] + cost[j] < min)
            {
                min = Graph[i][j] + cost[j];
                d[i] = j;
            }
        }
        cost[i] = min;
    }
    //🔔🔔 Okay toh we have filled our table-acccordingly... 🔔🔔

    //🔔🔔 Okay, toh now after Creating our result-data, mtlb after creating all possible "cases"-result, now apn "PO(principle-of-optimality)" follow krenge, to get our answer. 🔔🔔

    ourshortestPath[1] = 1;
    ourshortestPath[stages] = n;
    int vertex = 1;
    for (int i = 2; i < stages; i++)
    {
        // ourshortestPath[i] = d[vertex];
        // vertex = d[vertex];
        ourshortestPath[i] = d[ourshortestPath[i - 1]];
    }
    trav(ourshortestPath)
    {
        cout << x << " ";
    }

    // vector<int> result;
    // for (int i = 1; ourshortestPath[i] != 0; i++)
    // {
    //     result.push_back(ourshortestPath[i]);
    // }
    // return result;
    // return *ourshortestPath;
}
//🔔🔔 the time-complexity of this of function is O(n). 🔔🔔
int main()
{
    // int *ans = SolveMultiStage();
    SolveMultiStage();

    return 0;
}