// Closure-method for finding the "Closure" of Functional-dependancy:-
// Closure-method is for finding the all "candidate-keys" in the table. but yaha apnko voh simple tables nhi di hogi, mtlb apnko ek relation(R(a,b,c,d) mtlb it is relation or table which has 4-attributes that are: a, b , c , d) given hota hai and uske attributes ki aapas meh "functional-dependencies(fn{a->b , b->c , c->d})" given hoti hai.
// aur now apn "candidate-key" ko sahi se, exactly define kare toh "candidate-key" ka mtlb ki voh ki joki table k sare-attributes ko find/determine kr skti hai aur ya mtlb uniquely identify kr skti hai, by using some functions or by using not any function.
// and candidate-key ka use 2nd-Normalform, 3rd-Normalform , BCNF-Normalform meh bhi use hota hai. so toh mtlb candidate-key ko find krna is very important for us and isiliy apn "Closure-method" dekh rhe hai taki apn table ki sare "candidate-keys" ko find kr sake and phir usko baad meh 2ndNormal-form , 3rd-Normalform, BCNF meh use/apply kr sake.

// functional-dependency ka mtlb ki ek "attribute" ka kisi dusre "attribute" pe kisi function se dependent hona, mtlb koi ek function hoga jismeh "attribute1" as a input jata hai and "attribute2"-ki-value as a output aa jati hai.
// toh mtlb basically "functional-dependency" 2-attributes k bich meh hoti hai.
// and jaise FD(A->B) ka mtlb hai ki "A" and "B" have a functional-dependency , and A->B ka mtlb hai ki "B" is functionally-dependent on "A" or ya apn aseh bhi bol sktehh hai ki "A" can determine the "B" , mtlb "A" is determining the value of "B".

// now Closure-of-attribute-"a" is denoted by "a+"
// meaning of closure is ki "what what "a" can determine"
// so toh Closure-method yeh bolta hai ki you can find the "Candidate-key" by simply seeing and understanding the given functional-dependencies.
// so as per the given functional-dependencies we can say ki "a+" is equal to "b" , mtlb ki "a"-attribute can determine "b"-attribute.

// notepoint:-
// transitive-property in functional-dependency is ki:- if(a->b) and if(b->c) then it is sure that a->c through "b" , mtlb "a" can determine "c" through by using "b".

// so toh mtlb a+(mtlb closure of a) = b,c,d,a(itself ko toh determine toh kr hi skta hai). so toh (a+ = b,c,d,a) ka mtlb hai ki "a" table k enn-enn attributes ko determine kr skta hai.
// so toh yaha "a" is candidate-key or mtlb one of the key of set-of-candidate-Key.
// "candidate-key" is always a minimal-key mtlb "candidate-key" cannot be composite of two or more "attributes".
// prime-attributes are the attributes joki "candidate-key-set" meh hotehh hai.
// so toh mtlb Closure-method is used to find candidate-key-set , prime-attributes and non-primeAttributes.