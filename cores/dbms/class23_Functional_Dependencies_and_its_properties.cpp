//"functional-dependency" is simply a way of describing or defining the realtionship between "attributes" of the table. aur simply bolehh toh mtlb table meh attributes ek dusre pe kaise dependent ya mtlb unke bich meh kya-relationship hai voh baat apnko "functional-dependency" batati hai.
// jaise entities k bich meh relatinship hoti thi , same vase hi entities-k-attributes k bich meh bhi relationship hoti hai, jisko apn "functional-dependency" ki form meh ya mtlb "functional-dependency" se represent krtehh hai.
// now yaha attributes k bich meh relationship hone ka mtlb hai ki ek attribute-ki-value dusre-attributes-se(mtlb voh attribute jinse uska rista hai) nikali ja skti hai. and now uss attribute-ki-value apn other attributes se ek function ki help se nikalteh hai, find krtehh hai. thus that is why only apn attributes k relationship ko functionally-dependent-relationship boltehh hai q ki mtlb voh attributes functionally related hai, mtlb ek function hoga jismeh ek attribute as a input jayega and output meh other attribute-ki-value aajayegi. jaise ki for-eg:- "dateofbirth" and "age" are related aur exactly bolehh they have a "functional-dependency" mtlb ki dateofbirth and age k bich meh ek function hai jisseh apn dataofbirth input krke "age"-ki-value nikal sktehh hai. toh mtlb yeh hai "functional-dependency" ka actual concept.

// now aab apn "functional-dependency" ki ek aur baat krenge ki functional-dependencies meh main cheez hoti hai ki and that is based on "function" hai, and it is ki "function" k input meh multiple-attributes(mtlb voh attributes joki aapas meh related hai ) meh se konse attributes aayenge. toh yehi cheez koi bhi, jo bhi functional-dependency hoti hai uski representation meh mention hota hai like and only this form: "(AB->C)" , and eska mtlb hai ki attributes-"A"-and-"B"-together and attribute-"C" have a relationship or mtlb these have a functional-dependency and jo "function" hai uske input meh "A" and "B"-attributes jatehh hai and output meh "C"-attribute ki value aati hai.
// and ess "(AB->C)" ko apn aseh bhi bol sktehh hai ki "C" is determined by both-composite of "A" and "B" , mtlb ki agr "C"-ki-ek-value apnko multile times dikh rhi hai then apn yeh pata kaise lagayenge ki voh "C" ek hi k liyeh hai ya alg-alg hai, so toh as per given "functional-dependency" apn "A"-and-"B" ki help se pata laga sktehh hai ki voh column meh "C" ek hi hai ya alg-alg hai. thus toh mtlb "functional-dependency" ess kaam bhi aati hai.

// Now toh aabse aage agr apnko kabhi bhi kuch attributes dikhe joki aapas meh related hai, mtlb unn attributes meh ek-attribute ki value other attributes se find ki ja skti hai then usko apn phir apn unn attribues ko as a "functional-dependency" meh represent krlenge takki unke bich meh jo relationship hai usko easily and duur se samja ja sake.

// notepoint:-
// 1."Determinant" mtlb joki ki "determine" krta ho ya "determine" krne meh help krta ho.
// 2.(X->Y) ko abse apnko hamesa aseh bolna hai: "Y ki value mereko X se mil rhi hai."
// 3.so toh "functional-dependency" ka main role yeh hai ki agr apnko kisi attribute(probably "dependent-variable")-ki-value meh  meh koi bhi kaise bhi dikkat aa rhi hai jaise:- uski value nhi mil rhi, confusion hona ki yeh same hai ya alg-alg value hai etc..etc.. then vaha apn phle toh yeh check krenge ki ess attribute ki other attributes pe koi functional-dependency hai, and agr hai toh mtlb bohat acchi baat hai and tab toh apn  eske "dependent-attribute" se help le sktehh hai and apni problem ko clear kr sktehh hai, and "functiona-dependecy" agr nhi hai, then tab toh apn kuch bhi nhi kr sktehh. so toh mtlb tabhi database create krtehh hai "functional-dependencies" banana acchi and kafi profitable baat hoti hai.
// 4. "functional-dependencies" are of two types:-
// 1.trivial (mtlb ki it says ki if(X->Y) and it is given ki Y is subset of X, toh mtlb these FDs are always true for every case.)
//  2.non-trivial. (mtlb it is given ki Y is not-subset of X  , and toh mtlb enn FDs meh apnko cases ko check krna hai for the different given cases ki which is valid and which is not valid).

// 5. and now main and mast important baat about "functional-dependency" joki apnko database meh "functional-dependencies" define krtehh time bohat help krengi mtlb apne kaam ko bohat aasaan kr degi, and voh hai functional-dependencyies's-properties:-
// 1. seepic2:-
// 2.reflexive( mtlb khud ko hi determine krna)