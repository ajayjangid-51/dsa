//🔥💲🍕 Okay toh NOw aab apn "LCS"-Problem ("Longest-Commmon-Subsequence" Problem) k bareh meh dekhenge.. mtlb apn ess "Problem" ko dekhenge ki yeh problem kya hai, and  and then eska Solution find krna bhi dekhenge. AS toh phle apn LCS-problem ko dekhenge , then "LCS" ko recursion se solve krenge and then recursion meh memoization ka use krke solve krenge and then finally apn ess problem ko "dp" se bhi solve krenge... 🍕💲🔥

// 🥇🥇🥇 As toh ess "LCS-problem" ko samaj ne se phle apn "sub-sequence" ka mtlb samajenge, As toh "sub-sequence" define hoti hai string k liyeh. jaise for-eg. ki we have a  string = abcdefg.
// as toh ess string k yeh-yeh kuch sub-sequences define hogi..:-
// abcdef , acdef , adef , aef , af, f, bcdef, bdef , bef , bf , cdef , cef .... etc..etc and like this also "acf" , "ace" , etc but not "bae" or "gfe" etc.etc.. are not "sub-sequence" of the given string. so toh "subsequence" mtlb forward-direction meh jo continous or non-continius combination banta hai , useeh apn string ka "sub-sequence" boltehh hai.

//👿📔imp-Note-point:- apnko "sub-Sequence" and "sub-String" meh confuse nhi hona hai, as dono cheeze ek-dusre se ekdam alg hai. mtlb "sub-String" ko continue-hoti in forward-direction-only and "sub-sequence" dis-continuos hoti in forward-direction-only.

//🔔🔔 Now Toh "LCS"-problem yeh hai ki jaise koi bhi string ho uske "sub-sequnces" toh paka hi honge. then yaha ess problem meh apnko two-different strings de rkhi hoti hai, thus toh mtlb enn dono Strings k apne-apne "sub-sequnces" honge.So toh apnko enn dono strings k "sub-sequnces" meh se voh common "sub-sequence" find krna hai jo ki "longest" ho. 🔔🔔
// Now toh ess "Problem" ka solution find krne ka "brute-force"-algo toh yeh hai jo ki ekdam simple naive tarika yeh hai ki apn phle individual-strings k sare possible-sub-sequences bana le and then commong-subsequeces meh se longest wala choose krle. but yeh kafi "slow" hoga, and but esko apn follow nhi krenge..
// Okay toh Now phle apn ek faster "mental-physical-tarika" dekhenge to find the "LCS" of the given two-Strings.
//🖼️🖼️🖼️  see pic-1,2 :- 🖼️🖼️🖼️, as mtlb apnko simply characters ko forward-direction meh match krne hai, mtlb jaise in pic-1and2 apn both strings meh index-0 se start krenge for matching, thus toh as agr "character"-match hota hai without-intersecting any "matching-edge", then tab toh uss matched-character ko apn as a "common-subSequence" meh consider krlenge.. (one-note-point:- as mtlb apn esseh "intersection"(🖼️🖼️🖼️  see pic-3 :- 🖼️🖼️🖼️) k basis pe bhi "common-subSequce" find kr skteh hai ya apn simply esseh bhi kr sktehh hai ki apn hamesa forward-direction meh mtlb string-1 meh last-matched-character ki right-side meh hi "character" ko search krenge, and as agr character milta hai, then okay other-wise we will search next-character of string2 in string1 in forward-direction.)  and ek baat aur ki matched characters are need not be in contious-sequence , mtlb agr voh non-continius bhi hotehh hai tabhi apn usko as a sub-sequence meh consider krenge... //🖼️🖼️🖼️  see pic-4 :- for seeing the "LCS" of this little-example. 🖼️🖼️🖼️

#include <bits/stdc++.h>
using namespace std;

//💲🍕 1.Rucursive-approach's-implementation:- 🍕💲
//👿📔imp-Note-point:- apne pass 2-choices hai ki apn "LCS"-string return kr skteh hai or ya "LCS"-ki-length return kr sktehh hai.. thus toh apn apne recursive-algo meh apn simply length-of-LCS return krenge...

string s1, s2;
int RLCS(int i, int j)
{
    if (s1[i] == '\0' or s2[j] == '\0')
    {
        return 0;
    }
    if (s1[i] == s2[j])
    {
        return RLCS(i + 1, j + 1) + 1;
        //👿📔👿📔imp-Note-point:- as "Dc"-concept k according apnko yeh "+1" recursive-call k baad meh likhna chahiyehh. as agr apn "1+" recursive-call k phle bhi likhtehh hai , then answer meh koi farak nhi hoga, but bas baat yeh hai ki apna "Dc"-concept hamesa applicalbe rhe, mtlb "1+" phle krne se apnko le nhi lg na chahiyehh ki yaha apna "Dc"-concept nhi lg rha hai, thus isily apn yeh wali baat kafi acchce se dhyn rkni hai. 👿📔👿📔
    }
    else
        return max(RLCS(i + 1, j), RLCS(i, j + 1)); // this is like dfs-only, ki phle apn (i+1,j)(mtlb left-branch ki tarah) meh jayenge.... and then phir (i,j+1)(right-child ki tarah)-meh jayenge.
};
//🖼️🖼️🖼️  see pic-6 ,7 :- for seeing the "tracing"-tree of this recursion and understanding that same-call is made for multiple, time , thus toh mtlb esiliy apn yaha "dp"-approach lagaenge, as mtlb ki apn simply "memoization" or ya "tabulation" ka use krenge... 🖼️🖼️🖼️
//📔📔Note-point:- as ess algo meh apnko answer toh from the sub-problem se mil rha hai, but apn ne start kiya hai from the first(mtlb main-problem), thus toh isiliy ess approach ko apn top-down approach bolethh hai, as approach name matter krta hai on the basis se apn answer ko find krna start kaha se kiya hai.
//👿📔imp-Note-point:-"Overlapping"-hona mtlb ek hi recursion meh hi ek hi function ko multiple-times call krna..
// Okay toh now apn ess problem pe "memoization" krenge.. mtlb yeh dekhenge ki "memoziation" se ess recursion-fn kitna efficient ho jata hai.

//💲🍕 Now applying "Dp"-approach:- 🍕💲
// as mtlb apn "dp"-approach k according jaise apnko apni "table" ko fill krna easy ho, vaseh apnko apni table fill krni chahiyehh, thus toh jaise ki apn ess problem ki apni "dc"-concept k according hi krenge.. thus toh eske according toh apnko sbse phle "last-character" and "last-null-character-of-string-1" ka result hi hoga.. thus toh table filling apn vaseh hi krenge.. (as apn aseh yeh bhi jantehh hai ki "dp" approach is a bottom-up approach follow toh mtlb "dp" meh apni "table" from top-down manner meh fill hogi.)

//💲🍕 Some More baateh about this "idea" ki yeh "idea" kaise mila apnko, about founding the "LCS(longest-common-subsequence)".  🍕💲
// 🍕🍕as toh ess LCS-problem meh apni subproblem ending meh hi hai, but ess problem meh apnko fundamental-sub-problem k saat ess fundamental-sub-problem kii fundamental-sub-problem ko bhi consider krna hai. as yaha sbse fundametal-sub-problem toh yehi hai ki "string1-and-string2 ki length 1(one) hi ho".
//🖼️🖼️🖼️  see pic-8,9 :- 🖼️🖼️🖼️
// So toh "dp" meh apnko "dc"concept hi lagana hai, as jaise hi apn uss problem ko "recursion" se krle, then phir baad meh agr uss "recursion" meh "Overlapping-problem" hai ,then apn apni table banake uss "recursive-formulae" k according phle apni table fill kr lenge.. and then phir apnko jo result chahiyehh mtlb "Optimal-result" chahiyehh ya "combitorics-combination"(as bas combination k liyeh apnko additionally "dp" ka jo "PO"-priciple hai(which is ki that take-sequence-of-decision or mtlb take decisions-in-each-stage and ek aur baat ki agr apn "combination" k liyeh problem ko solve kr rhe hai then apnko "table" bhi accordingly hi banani hai.)  follow krna hota hai.) chahiyehh voh apn simply de sktehh hai.
// As voh "table" fill krne ka tarika surely "dc"-concept pe hi kaam kr rha hoga..

//👿📔imp-Note-point:- as apnko mostly "DP"-table ko fill krne ka tarika "directly" nhi milega, as uske liyeh apnko phle voh "recursive-formula" hi find krna ho.thus toh phle apnko hamesa voh "recursive-formula" hi sochna hai, mtlb phle bas "sub-problem" se kaise answer build kiya jayehh bas yehi sochna hai. as agr apn phir bhi try krtehh hai about filling the table then bas table ko apnko ess way meh fill krni hai apn sbse phle sbse fundamental-subproblem ka answer apn usmeh fill kre, and then uss fundamental-sub-problem ki parent-problem ka answer fill ho.. and soo.onnn. bas agr apn yeh baat dhyn meh rkhtehh hai then apn phir easily table ko fill kr skteh hai and table meh filled results k according phir apna voh formula bhi design kr sktehh hai... Then formulae design hogaya then tab toh simply usko "implement" kr sktehh hai, but more generaly apnko phle "formula" design krna chahiyehh.

// creating just parent-problem of fundamental sub-problem.

//🌟🌟🌟  "DP"-implementation:- :- 🌟🌟🌟
//🖼️🖼️🖼️  see pic-10 :- 🖼️🖼️🖼️, as yaha yeh "Matrix"-table meh har particular-box secondary-fundamental-sub-problem ko show kr raha hai, mtlb jaise matrix[a,b] represent kr rhi hai (a,b)-sub-problem and yeh (a,b)-sub-problem is hai ki when string1(lower-string) == abcd and string2(upper-string)==bd. and others jaise matrix[c,b] is sub-problem which is string1 == cd and string2 = bd. and atlast    Matrix[d,d] is representing to the sub-problem which is string1 =d and string =d.

// 🥈🥈 suppose jaise we have sub-problem which is (string1 = d and string2 = bd )or (string1=cd and string2 =e) or kuch bhi etc.. ho , then mtlb agr koi bhi ek string meh ek hi element hai, then other string uss element ko search krna hai and agr voh element uss other-string meh then uss sub-problem ka result hoga is equal to ==1 and agr voh element nhi hai then uss sub-problem ka result(answer) hoga equal to 0(zero).:-

// 🥇🥇🥇 fundamental-sub-problem yani voh problem jiska result(answer) apn directly, bina soche samje bata sktehh hai. thus toh "dc"-concept wali problem meh apnko phle voh "fundamental"-sub-problem hi find krni hai, and then via using recusion uss fundamental-sub-problem tk jane ka "recursive-formula" bana hai, thus toh ess baat se mtlb ki apn ess baat ko dhyn meh rkhtehh huyeh easily voh "recusive-formula" bana sktehh hai for going to that sub-problem. 🥇🥇🥇.

int LCSviaDP(int x, int y, string s1, string s2)
{

    // your code here
    string s;
    int matrix[x + 1][y + 1] = {};
    for (int i = 1; i < x + 1; i++)
    {
        for (int j = 1; j < y + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                matrix[i][j] = 1 + matrix[i - 1][j - 1];
                s.push_back(s1[i]);
            }
            else
            {
                matrix[i][j] = max(matrix[i - 1][j], matrix[i][j - 1]);
            }
        }
    }

    cout << "The LCS is " << s << " jo ki sahi nhi hai, yehh" << endl;
    return matrix[x][y];
}

// yaha DP-table meh matrix(i,j) mtlb i-tak string1 and j-tak string2 hai.
int main()
{
    s1 = "abdace", s2 = "babce";
    cout << RLCS(0, 0) << endl;
    // cout << ILCS(s1, s2) << endl;

    cout << LCSviaDP(6, 5, s1, s2) << endl;

    return 0;
}

/*
// int x, y;
cin >> x >> y;
int mar[x][y] = {};
//📔📔Note-point:-  as agr apn 2d-array ko zero se intialize krna chahtehh hai then voh apn esseh kr sktehh hai.
for (int i = 0; i < x; i++)
{
    for (int j = 0; j < y; j++)
    {
        cout << mar[i][j] << " ";
    }
    cout << "bye bye"
         << " " << endl;
}

*/