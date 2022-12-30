
// Okay toh yaha pe apn Primes(mtlb Prime-numbers) and Factors(or mtlb divisors) k bareh meh dekhenge...

// 1.koi bhi number "a" is called factor(or divisor) of number "b" agr "a" "b" ko divide krta ho toh, whereas divide krne ka mtlb ki agr apn "b" ko "a" se divide(mtlb b/a) kre then remainder "zero(0)" bachna chahiyehh.

// 2. dusri baat ki jaise agr "a" is a factor of "b" then ess baat ko apn mathematically aseh likhtehh hai:- (a|b).
// and agr if "a" is not a factor of "b" then ess baat ko apn mathematically(mtlb symbolically or shortly ) aseh likhetehh hai:- (a /|b)

// 3.jaise factor of "12" is  1, 2, 3, 4 , 6 , 12.
// So toh mtlb yeh 1,2,3,4,6,12 are the factors of "12".
// (i). so toh apn yaha pe ek baat bol sktehh hai ki "12" k 6-factors hai.

// 4.so toh koi bhi number "n" (where "n" is greater than 1 (n>1) ) jiske only and exactly 2-factors hi hoo then that number "n" is called "Prime-number". (note-point:- 2-factors meh first-factor toh is "1" and second-factor is the "n"(mtlb the number-itself) )
// jaise for-eg:- 7,19,41 are Prime-numbers(or simply "Primes").

// 5.paachvi baat ki for har sabhi numbers "n"(n>1) k liyeh uska apna unique "Prime-factorization" hota hai. where "Prime-factorization" mtlb number "n" ko apn prime-factors meh represent kr sktehh hai or mtlb likh sktehh hai. and haan "Prime-factors" ka mtlb voh factors joki Prime-number ho.
// jaise as like:-
//           Prime-factorization of "n" will be equal to == (P1^a1)*(P2^a2)*(P3*a3)...(Pk^ak)
// where yaha P1,P2,P3 ... Pk are the prime-numbers(or simply Primes) and a1,a2,a3..ak are the simple +ive numbers.
/* jaise for-eg:- Prime-factorization of:-
        2 = (2^1)
        3 = (3^1)
        4 = (2^2)
        5 = (5^1)
        6 = (2^1)(3^1)
        .
        .
        .
        .
        83 = (83^1)                 { where here 83 is prime-number and 1 is simple +ive number}
        84 = (2^2)(3^1)(7^1)     {where here 2,3,7 are primes and 2,1,1 are simple +ive numbers}
        .
        .
        .
        +ive infinity....
*/

// 6. 👿 Kuch simple Important Hardcoded Formulae on the "factors" of koi sa bhi number "n"(n>1), jaise:-
// 🗒️Note-point:- yeh sabhi formulae number "n" k "Prime-factorization" k basis pe hai, thus toh mtlb ki jab kabhi bhi apn yeh formulo ka use kre then enka use krne se phle apne number "n" ka Prime-factorization hona chahiyehh, as tabhi apn enn formulas meh value putup kr payenge..
/*          🤜1.(Number of factors of number "n")  => {tow(n) = "product_of_(ai+1)" } , where yaha "ai" is that +ive number in prime-factorization.

            🤜2.(Sum of factors of number "n") =>
                                 { sigma(n) = "product_of_[(pi^(ai+1))-1 / (pi-1)] "}

            🤜3.(Product of factors of number "n") => { meu(n) = n^(tow(n)/2)}  (as q ki apn    product "n" k "tow(n)/2" pairs bana sktehh hai with, so toh apna answer yehi hoga =     n*n*n*n... upto "tow(n)/2" times jisko apn simply aseh(n^tow(n/2)) bhi likh sktehh hai )
            // jaise "84" k liyeh there will be (tow(84)/2)-pairs(mtlb (6/2)=3pairs) => 1*84, 2*42 , 3*28.

            // Jaise for-Example:- we have "24", so here we will calculate:-
            // 1.number of factors of "24"
            // 2.sum of factors of "24"
            // 3.product of factors of "24" 
            // So toh enn sab k liyeh sbse phle apne pass "24" ka "Prime-factorization" hona chahiyehh and simply formulas:-
            //      ✊factors of "24" = 1,2,3,4,6,8,12,24
            //      ✊Prime-factorization of "24" = (2^3)(3^1)
            // 1. tow(24) = (4)*(2) = 8
            // 2. sigma(24) = ((2^(4))-1)/(2-1) * ((3^(2))-1)/(3-1)
                            = 16-1/1 * 9-1/2
                            = 15*4
                            = 60
                            = 60 = 1+2+3+4+6+8+12+24
            // 3.meu(24) = 24^(8/2) = 24^4 = 331776 = 1*2*3*4*6*8*12*24 = 331776
 */
// 7. koi bhi number "n" is called "Perfect-number" , if agr n == {sigma(n)-n} , mtlb ki "n" agr apne factors(leaving the "n"-itself-factor) k sum k equal hota hai tab then that number is called "Perfect-number".
// jaise:- "28" is perfect-number q ki 28 = 1+2+4+7+14 = 28  (not including factor "28" itself)

// 8.(Number of Primes):-
// apn yeh toh clearly and easily bol sktehh hai ki maths meh infinite "Prime-numbers" ho sktehh hai. and ess baat ko apn proof bhi sktehh hai in this ki jaise suppose maan lo ki "prime-numbers" finite hotehh hai then tab toh apn Prime-numbers ka ek set bana sktehh hai, jaise P = {p1,p2,p3..}. now so apn ek baat jantehh hai ki apn kisi bhi Prime-numbers k set se new Prime-number form kr sktehh hai by this "p1*p2*p3..*pk+1", and yeh new-Primenumber set meh present sbhi Prime-number se bada hoga, so toh yaha contradiction(mtlb dono baateh ek dusre k against meh hai..) hogaya and thus toh mtlb "Prime-numbers" infinite hi hotehh hai..

// 9.(Density of Primes):-
// density of Primes ka mtlb ki x to x+y numbers k bich meh kitne Prime-numbers aatehh hai ya hotehh hai..
// let pie(n) denote the number of Prime-numbers between 1 to n.
// so toh jaise pie(10) = 4 , as q ki 1 to 10 k bich meh 4-prime numbers aatehh hai:(2 ,3 , 5, 7)
// so toh pie(n) ki value apn approximately ess formulae se calculate kr sktehh hai:-
//                  pie(n) = n/ln(n)
// so toh ess formulae se apn yeh bol sktehh hai ki Prime-numbers ka aana ya present hona kafi frequent hai.

/* 10.(kuch famouse conjectures(अनुमानs) hai about the "Prime numbers" joki aseh toh sahi hai, but enka koi proof nhi hai.. )
  1(Goldbach's अनुमान). sabhi even-interger(n>2) ko apn a+b meh likh sktehh hai, where "a" and "b" are "Prime numbers".
//jaise:- "8" = a+b = 3+5 , "14" = 11+3 etc..etc sbhi even-intergers(greater than 2).

  2.(Twin prime-conjecture):- {p,p+2} k infinite pairs possible hai, where yaha "p" and "p+2" dono prime-number hi hai. 
//jaise:- {3,5} , {7,9} , {11,13} , {19+2} etc..etc.. upto infine, thus toh mtlb koi bhi apne pass Prime-number hai usmeh "+2" krdo toh apne uske next wala Prime-number mil jayega.

  3(Legendre's अनुमान).:- n^2 and (n+1)^2 k bich meh hamesa kaam-se-kaam ek prime-number toh hoga hi hoga. and here "n" is +ive number.

 */

// 😀Now Algorithms(joki mast and main hoteh hai)😀
// 11. agr koi number "n" Prime-number nhi hai,then uss number ko apn a*b meh likh sktehh hai, where  a<= "root(n)" or b<= "root(n)" , mtlb ki "a" ya "b" dono meh se koi ek toh root(n) se chota ya equal hoga. so toh yaha se apn ek baat bol sktehh hai ki, jaise apnne bola ki n=a*b , then eska mtlb ki "a" and "b" are factors of "n" and phir saat meh apn yeh bhi bol rhe hai ki a<=root(n) or b<=root(n) , so toh mtlb sure hai ki ess number "n" ka ek factor toh sure hoga between 2 and root(n) and so toh ess baat ka bhi yehi mtlb hai ki given number "n" is not prime bcoz it has a factor between 2 and root(n), as q ki Prime-number ka factor toh only 1 and "n" itself hi hota hai.
// Okay So toh esi baat se apn Programmatically pata laga sktehh hai ki number "n" is Prime or not and number "n" ka "Prime-factorization" bhi nikal sktehh hai in Orderof(root(n))-time.
// so toh apn simply aab enn dono kaamo k individual algorithm or mtlb function dekhenge..

/* 🤜1.Prime-function (this function checks whether the given number is prime or not)
// okay toh ess function(programmtically we say function) or mtlb algorithm(physically we say algorithm) ka idea yeh hai ki apn jantehh hai ki agr number "n"  prime nhi hai then 2 to root(n) k bich meh uska koi ek factor toh hoga hi hoga, so toh apn simply number "n" ko 2 se leke root(n) tk divide krtehh rhenge and agr bich kahi remainder zero aa jata hai then sure hojayega ki number "n" is not "Prime" and bich meh kahi remainder zero nhi hota then mtlb voh number "Prime-number"  hai.
// Implemented like this:-
bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
see:- isPrime.cpp (for code)
 */
/* 🤜2.primefactorization-function (this function gives the primefactorization-list of the number) 
// okay toh ess algorithm ka idea yeh hai ki Prime-factorization k liyeh mtlb number "n" k prime-factors k liyeh apn simply number "n" ka phle prime-factor find krenge and uss prime-factor ko "Prime-factorization-list" meh add kr denge. then simply "n" ko uss prime-factor se divide bhi krdenge.. and soo on apn esa krtehh rhenge jab apnne sare prime-factors ko access krliya ho(mtlb apne 2 to root(n) k bich k sare prime-factors ko consider krliya ho..) 
vector<int> primefactorization(int n)
{
    vector<int> v;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        v.push_back(n);
    return v;
}
see:- primefactorization.cpp (for code)
*/

// ("Preprocessing-algorithm" maane apn jaantehh hi hai ki yeh algorithm ek Container create krtehh hai jismeh information store hoti hai, and thus toh baad meh apn ekdam fastly uss information ko retrieve kr sktehh hai. jaise aur range-querries meh bhi kuch preprocessing-algorithms hai unka use krke apn bohat sari range-querries ka answer fastly answer kr detehh hai. So toh mtlb preprocessing-algorithms acche hotehh for time-purpose but yeh space kafi khatehh hai.)
// 12.Sieve of Eratosthenes:-
// "Sieve of Eratosthenes(erato)" ek preprocessing-algorithm hai jismeh meh ek array-container banta hai and usmeh yeh store hota hai ki koi number(2 to n) is a Prime-number or not.
// okay now baat krtehh hai ess "algorithm" ko implement krne ki...
// yeh algorithm jo "array" banata hai uss array ko "sieve"-array bolteh hai. and sieve[k] == 0 ka mtlb ki number "k" is Prime-number and sieve[k] is not "zero" ka mtlb ki number "k" is not Prime-number and jo sieve[k] ki value hai voh ess "k" ka koi sa ek "prime-factor" hai.
// okay toh ess algorithm meh apn 2 to n iterate krenge and har baar jab koi new prime-number(x) milega tab apn simply 2*x , 3*x , 4*x .. upto n  index pe "1"-mark krdenge mtlb yeh index-numbers Prime-number nhi hai. jaise for eg:- we have number "n" = "20".
//so toh mtlb sieveofErato ka use apn multiple primeNumber-querries k liyeh krtehh hai and jab apnko kisi range meh exact number of "Prime numbers" batane ho tab.
/*
int SieveofErato(int n)
{
    vector<bool> sieve(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
            continue;
        else
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                sieve[j] = 1;
            }
        }
    }


    // couting number of primes between 2 to n:-
    int count = 0;
    for(auto x:sieve){
        if(x ==0) count++;
    }
    return count;
}
// the time-complexity of this sieve-algorithm is Order(nlog(logn)) , means it is very near to Order(n).
  */

// 13.Euclid's Algorithm:-
// see euclids_algorithm.cpp (for code).
// Euclid-algorithm kafi best and fast algorithm hai for finding the "gcd" of any two numbers and saat hi saat meh apn esko "lcm" find krne k liyeh bhi use kr sktehh hai, as q ki apn "gcd" and "lcm" wala formula jaantehh hai.
// yeh Algorithm is based on the formula that ki gcd(a,b) = {a if b==0 } or {gcd(b,a%b) if b !=0}
// like this:-
/* 
int gcd(int a,int b){
    if(b==0) return a;
    if(a==0 )reurn b;
    return gcd(b,a%b);
}
 */

// 14.Euler's totient Function:-
// koi bhi two numbers a and b "Coprime" khlatehh hai if agr unka gcd equalto == 1 hota hai toh (mtlb a and b are Coprime to each other if gcd(a,b)==1).
// so toh Euler-function(omega(n)) jo hai voh 1 to n k bich meh kitne Coprime( coprime to "n") numbers hai voh return krta hai.
// jaise for.eg:- omega(12) =4. (see in whiteboard-pic , how this is?)
// omega(n) ki value apn euler-function or mtlb euler-formula se calculate kr sktehh hai, but eske liyeh apnko bas phle "n" ka "Prime-factorization" chahiyehh...
//  formula is this:-  omega(n) = product_of_(Pi^(ai-1))*(Pi-1)  {from i = 1 to k}.
// Imp-Note🗒️:- omega(n) =(n-1) hota hai , agr if "n" is prime-number.
