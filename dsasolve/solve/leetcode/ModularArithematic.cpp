// 1.Modular Arithematic (see pic. 1)
// 2.Modular Exponentiation
// kafi jagah (x^n)%m ki value efficiently calculate krni hoti hai, so toh esko apn programmatically O(logn)-time meh kr sktehh hai. as like this:-
/*              x^n = 1 if(n==0)
                x^n = (x^(n/2))*(x^(n/2)) if(n is even)
                x^n = x^(n-1)*x  if(n is odd)

// so toh yaha "n is even" k case meh apn ek baat dhyn rkhenge ki apn x^(n/2) ek hi baar calculate krenge and then uska square kr denge. so toh yaha se apn time-complexity k bareh meh ek baat bol sktehh hai ki jab bhi "n" even hota hai, tab "n" is halved, so toh mtlb time-complexity will be O(logn).

// now baat krtehh hai esko implement krne ki... (also see pics..)
int xnmodm(int x, int n , int m){
    if(n==0) return 1%m;
    u = xnmodm(x, n/2 , m);
    u = (u*u)%m;
    if(n%2==1) u = (u*x)%m;
    return u;
}
// also see modularexponentiation.cpp for this code..
// (see pics on "ModularExponentiation")
 */

// 3.Fermat-theorm and Euler-theorm:-
// Fermat ne bataya ki:-  x^(m-1)%m = 1 hota hai, when "m" is prime and x and m are coprime. and by this we can also say that:- x^(k)%m = x^(k%(m-1))%m.
// and Euler-thoerm(x^(omega(m)%m = 1)) bhi bas yeh Fermat-thoerm hi hai, bas Euler ne (m-1) ki jagah omega(m) bataya hai, jo ki jab "m" is prime hoga and x and m coprime honge tab omega(m) = m-1 hi hojayega.

// 4.Modular-Inverse:-
//modular-inverses(x^-1) ka use krke apn (a/b)%m calculate kr sktehh hai, joki apn abhi tk  nhi kr pa rhe the...
// see-pic
// halaki "modular-inverse" hamesa exists nhi krta., so toh mtlb jab "x" and "m" Coprime honge tabhi "modular-inverse" exits krta hai, otherwise nhi krta.
// so toh agr "modular-inverse" exits krta hai, then usko apn ess formulae se calculate kr sktehh hai:-   (x^-1) = x^(omega(m)-1), (where omega(m) ka mtlb toh apn janntehh hi hai ki it is euler-function joki 1 to n k bich meh numbers of present coPrime to "n" return krta hai.)
// and agr "m" is prime then:- (x^-1) = (x^(m-2))
/* jaise for-eg:- 
//      (6^-1)%17 = (6^(17-2))%m   (as bcoz "m" is prime), as toh now ess 6^15%m ko toh apn apne "modular-exponentiation" se efficiently solve kr sktehh hai.. and yeh jo apna upar wala formula((x^-1)= (x^(m-2))) yeh apnne "euler-thoerm" se hi derive kiya hai as like this(if needed see on page.no-213(cphandbook)):-

  */

//  5.Comuter-Arithematic:-
// apne computer-ram meh "int"-type values value%2^32 ki form meh store hoti hai, so toh mtlb agr value out-of-range input de dii jati hai then uska modulo hoke voh value esi range meh jati hai and store hojati hai.
// jaise c++ meh esa hota hai:-
// int x =123456789;
//  x= x*x;
// cout << x << endl; // 2537071545 q ki ((123456789)^2)%2^32 = 2537071545 hi hota hai, isily yeh ho jata hai.
// so toh jo apn abhi tk boltehh the na ki agr "value" upto of range chali jati hai then voh negative se chalu hojati hai.