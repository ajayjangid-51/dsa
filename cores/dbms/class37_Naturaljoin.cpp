// natural-join is very important in all types of joins:-
//  jaise ki apn jantehh hi hai ki "Join" is always hamesa is equal to hota hai "cross-Product"+   "someCondition-in-CrossProduct".

// sql meh questions 2-types k hotehh hai. mtlb ek question meh toh apnko jo result chahiyehh voh diya gaya hoga and uske liyeh apnko sql-querry likhni hoti hai , and second other one meh apnko sql-querry de rhkhi hogi and apnko uska result(answer) likhna hai.
// now jab bhi apne ko koi bhi querry ya phir querry-result ho then sbse phle toh apnko yeh dekhna hai ki voh querry ka answer(ya result) kisi ek table(ya subtable) pe depend kr rha hai ya multiple tables(ya sub-tables) pe depend kr rha hai. toh agr single-table pe dependent hai then tab toh apnko "joins"-ka-concept use nhi krna ya mtlb apply nhi krna, but agr otherwise voh multiple-tables pe dependent hai then mtlb tab toh apnko "joins" ka use krna hi hoga for answering that querry.

// so follow this things while answering any sql-querry.
// step1. sbse phle toh table ya tables name find out kro jisseh ya jinseh apnko answer milega.
//      1.jaise if there is only table , then sql-querry will be written this:-
// "select" attribute_name_which_is_mainly_needed_mtlb_joapnko_output_meh_dikhanahai "from" attribute's_table_name "where" attribute_name_by_which_condition_is_given.
// jaise for.eg: select employ_name from employ_table where address = "delhi".
//      2.jaise ki we have querry ki there is deparment(any "X") and you have to print the name of all employes of that any deparment-"X".
// step2.

// Natural-join mtlb apn simply aseh bol sktehh hai ki Natural-Join meh Cross-product k saat yeh condition hoti hai ki apnko sirf Cross_product_joined_Table meh jo common-attribute ki same value hai sirf vohi rows leni hai.
// so toh Natural-Join k liyeh apn aseh bhi bol sktehh hai ki jab bhi apnko sirf-voh rows chahiyehh jismeh common-attribute ki value same hi ho cross-product meh then vaha apn "natural-join" ka use krtehh hai q ki "natural-join" yehi common-attribute ki same-value wali rows ko filter krne ka hi kaam krta hai.

// thus toh mtlb given-querry k according apnko sochna hai ki apnko konsa join-type ka use krna hai for joining-the-table and getting the answer from that joined-Table. jaise ki upr apne pass querry thi ki apnko unn sare employes kaa name chahiyehh joki kisi-na-kisi department meh kaam krtehh ho, then toh eska mtlb yeh hoga ki bas employ-table ka jobhi employ department-table meh hai apnko bas voh print krna hai. and department-table meh employ ka name apnko employ-id-attribute se pata lg rha hai q ki employ-id dono table meh common-attribute hai. toh mtlb apn simply employ-table meh jake department-wali employ-id wale employ tables ko simply lelenge. but yaha thodi baat aati hai "joined-Table" ki q ki apn aseh directly ek table se dusri table meh nhi ja sktehh.thus toh isiliy apn phle tables ko cross-productly join krtehh hai and then accordingly condition lagake needed-rows ko filter krletehh hai.