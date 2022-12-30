// 1.Lagrange's-thoerm (Lagrange ne bataya ki apn kisi bhi +ive integer ko as a "sum of 4-squares") meh represent kr sktehh hai, as like this jaise:-
//          n = a^2+b^2+c^2+d^2
// jaise 123= 8^2 + 5^2 + 5^2 + 3^2

// 2.Zeckendorf-thoerm (gikindorf-thoerm)
// gikin ne bataya ki har +ive positive integer ko apn as a sum-of-fibonacci-number likhtehh hai and voh sum-representation unique hoga. (bas voh fibonacci-numbers same nhi hone chahiyehh and unn meh koi consecutive-fibonacci numbers nhi hone chahiyehh)
// jaise 74 =55 + 13 + 1 + 5.
// and etc..etc sabhi +ive integers.

// 3.Pythagorean-triples:-
// pythagorean-triples mtlb voh 3-numbers(a,b,c) , joki pythagoras-theorm(a^2+b^2 = c^2) ko satisfy krteh hai. jaise (3,4,5) ek pythagorean-triple hai q ki 3^2+4^2  = 5^2 (mtlb a^2+b^2 = c^2) ho raha hai.
// jaise agr (a,b,c) is pythagorean-triple hai then yeh sabhi triples(ka,kb,kc) bhi pythagorean-triples hi honge, where here k(k>1)

// koi bhi pythagorean-triple is called "primitive-triple" agr (a,b,c) teeno coprime ho, mtlb gcd(a,b,c) =1 ho.
// and "primitive-triple" se apn sare jitne bhi "pythagorean-triples" hai voh sab construct kr sktehh hai, by just simply multipling by "k".

// Now baat krtehh hai ki apn "primitive-triples" kaise create kr sktehh hai,,
// so toh "Euclid's-formula" ka use krke apn sare "primitive-triples" generate kr sktehh hai, and that formula is:-
//   all-primitive-triples = (n^2-m^2, 2nm, n^2+m^2)
// where, "m" is greater than 0 and less than n ,
//   and, "m" and "n" are co-prime
//   and, atleat "m" or "n" should be even.
// jaise for.eg:-  m=1 and n=2 se apna jo "primitive-triple" banega voh sbse se smallest "primitive-triple" hoga and that is (3,4,5).

// 4.Wilson-theorm:-
// wilson ne yeh bataya ki number "n" is prime if agr ((n-1)!%n) = n-1.
//so toh mtlb apn wilson-statement ka use kr sktehh hai for saying that koi number "n" is prime or not,
// but baat yeh hai in general and baar-baar and bade-numbers k liyeh apn esko use nhi kr sktehh, q ki (n-1)! calculate krna kafi time-consuming hojayega.