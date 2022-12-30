// T(n) = n-1CL*T(L)*T(R)
// whereas yaha apnne n-1-L elements se R-elements choose nhi kiyehh... q ki voh toh already choosed
// hogayehh na q ki mtlb apne "L"-elements choose krliyehh hai and then baki bache elements toh apne
// aap meh hi choosen hogayehh na.. isiliy..
// so toh mtlb ess Formula ki important baat yehi hai and yeh apnko acche se dhyn meh rkhni hai.
int Solution::solve(int A)
{
    vector<int> store(101, -1);
    // whereas yaha store[n] batayega no.of-Max-Heaps from n-nodes. // as sahi bolehh toh apn
    // ess kaam ko recursively krenge.. and uss recursion meh overlapping hogi esiliy apn
    // store-concept(or mtlb memoization-idea) use krengee. thus toh mtlb overall bolehh toh
    // apn yaha "dynamic-programmingg"(konsi programming :- dynamic-programming q ki aseh way
    // meh programming krne ko dynamic-programming khtehh hai ). krenge. mtlb apne jo physical-Solution
    // and algorithm banana hai from stracth voh apn "dp"-algorithm-making-design or statergy
    // se banana hai.
    //  "dp" ka first point yeh hai ki problem meh optima-substructure property honi chahiyehh,mtlb
    // bigger-problem ka solution uski just smaller-problem pe dependent hota hai and uss bigger-problem
    // ka answer bhi apn uski just smaller sub-problems hai usseh calculate ho sktaa hai , then apn
    // sure hai ki apn yaha "dp"-approach laga sktehh hai, mtlb as per what "dp"-says voh straight-forward
    // kr sktehh hai, and phir ess 1st-baat k baad "dp" yehi khtii hai ki problem ko recursively solve kro but
    // implementation iterativelly kro q ki memoization easy rheta hai,(as but frak itna hoga ki recursively jo apnne sochha tha usemh toh apn bigger-se-smmaller problem) ,and apn recursively bhi kr sktehh hai apn hamesa recursively hi kremge
    // and ek baat boleh toh dp ki recursive-implementation just like "dfs"-traversal ki tarah hi hogi bas vaha apnko store-array ko maintian krna hai as jaise apn dfs meh kisi vector ko maintian krtehh hai.. thus toh agr apnko "dp" ko acche se and easy implemnt krna hai then apn phle voh recursion-tree bana lenge and and then simply apnko "dfs"-traversal krna hai uss tree meh and jaise tree meh apn "dfs" se root-node ki value uske left-chid or for dp apn left-option bhi bol sktehh hai) and right-child or 2-possible-dependent sub-problem se root-ka-answer calculate krtehh hai same usi way meh hi..."dp" hai.
    // pe aa rhe thee, whereas iterativelly meh yeh hoga ki apnko smaller-problem se bigger-problem ki taraf jaana hoga with saat meh storing each stage-result(whereas stage meh each sub-problem result))
    // and "iterativelly-dp" meh stages aseh hoti hai mtlb sub-problems aseh hoti hai ki sbse phle fundamental-sub-problem(or mtlb base-problem or mtlb shortly base-case), then usseh badi sub-problem then usseh badi sub-problem and so..on upto reaching to given-size of the problem(which is given in question.))
    // and so toh "dp" ki 2nd-baat is for making physical-solution or mtlb physical-algorithm(jisko apn apne haat se physically kr sktehh hai), and voh 2nd-baat yeh hai ki
    // think the problem-physical-solution recursively mtlb make the recursive-formula for the problem mtlb uss recursive-formula k basis pe answer calculate kr sake or ya phir  solve the problem by breaking it into smaller-pieces or mtlb smaller-sized-sub-problems, mtlb simply make the physical-solution as per "divide-and-conquer"-statergy.

    fn() return store[A];
}
