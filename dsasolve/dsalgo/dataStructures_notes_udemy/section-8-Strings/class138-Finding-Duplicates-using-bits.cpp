//🔥💲🍕 Method-3: Finding-Duplicates using "bits" 🍕💲🔥
// As toh ess method ko samaj ne se phle apn phle "byte" ka concept dekhenge.. ki kaise jo apna data hai voh bytes meh bits( mtlb 0s and 1s )-form meh store hota hai.  and then apn "bitwise-operators" and bitwise-operations se hone wale Operations dekhenge... ki "bitwise"-operators kya and kis manner meh operations krteh hai on the "bits-of-Byte" and then phir apn "bit-merging" and "bit-masking" dekhenge.. and then phir atlast meh overall voh approach dekhenge , voh tarika dekhenge for finding-the-Duplicates-in-the-String-using-bits.

#include <bits/stdc++.h>
using namespace std;

//💲🍕 1.Byte and bits and data-Stroing-creteria-in form of bits(mtlb in form of 0s and 1s) 🍕💲
// One-notepoint:- ki byte meh bits right-to-left store hoti hai mtlb assign hoti hai.
// Mtlb byte which is like array of 8-bits but actually meh voh koi array nhi hai.
// As yeh assignation default hai and apnko yeh assignation nhi krna hota hai , yeh compiler apne aap krta hai . And apnko toh bas pata hona chahiyeh ki haan esseh from right-to-left bits assign hoti hai, thus toh takki apn aage binary-operations kare jaise left-shift-binary-operation or and-binary-operation etc..etcc. toh apnko pata chal jayehh ki haan yeh byte meh yeh ess tarah bits set ya assign ho gayi.. and phir aage  apn ess result ko kahi use kr sakenge mtlb apne kaam meh esko kaam meh le sakenge jaise apn finding-duplicates-using-bits situation meh krtehh hai..
// Binary-operations or mtlb bitwise-operations

// Sbse-right-most-wali byte or and bit ko simply "least-significant-byte"  or "least-significant-bit" khtehh hai.

// for-eg:- jaise ki "int"-container  hai toh 4-bytes( mtlb voh contiguous-bytes) hai and unn 4-bytes meh individually 8-8 bits hai, as yeh bits bhi contiguous-hi-hogi.
// now abb ess "int"-container meh jab koi bhi value assign hogi toh voh right-side se assign hogi, mtlb "assigning-value" ka jo voh binary-code hai voh right-most-side-bits se hi bharna chalu hoga. and apnko uss binary-code mtlb bits ko read toh from left-to-right hi krna hai.
// and bits kuch ess tarah se assign hoti hai, or mtlb manipulate hoti for forming-the-binary-code-of "assigning-value".
// 00000
// 32 16 8 4 2 1
// jaise we want to store 20 , so the binary-code of 20 will be:- as we can calculate it by formula , or we can directly form-that-binary-code here only, in this way ki first select the index of smaller-nearest-number then mark 1 ther then subtract that number-from-actual-number and again simply this process only. and when pre-actual-number - index-number = 0 stop there and apne pass apna binary-code hai.

//💲🍕 2.Bitwise-Operators 🍕💲
// as "bitwise-operators" bytes meh jo bits hotehh hai na, unko manipulate kr sktehh hai, thus toh mtlb jab bhi apnko byte-meh-bits(mtlb 0s and 1s) ko manipulate krna ho then apn simply enn "bitwise"-operators ka use kr sktehh hai.
//🔔🔔 Thus toh now apn phle diff types of "bit-operators" dekhtehh hai. 🔔🔔
// 1.left-shift-operator("<<") , as yeh operator byte meh present sabhi bit(mtlb "0"-bits and "1"-bits) ko unki jagah se by the mentioned-right-operand-value se left-direction meh shift kr deta hai and phir shifting krne pr jo khali jagah bachti hai unn jagah pe zeros aa jatehh hai.

// 2.right-shift-operator(">>") , yeh operator bhi same "left-shift-operator" wala hi kaam krta hai, as bas farak itna hi hai ki yeh byte or contiguous-bytes meh present bits ko right-direction meh shift krta hai.
//📔📔Note-point:- as "operator-expression"-of-(double-operands-operator) ki return hoti hai. mtlb voh operator jo bhi kaam krteh hai uska result uss operator-expression ki return-value hoti hai , mtlb voh operator-expression simplly uss return-value se replace ho jati hai, as same deto as like as function, ki function-call ,function-ki-return-value se replace ho jati hai, thus toh vaha yeh mandatory nhi hai ki apn uss return-value ko store kare hi, mtlb apn store kr bhi sktehh hai or nhi bhi kr sktehh hai, mtlb apni marji apnko koi error nhi milegi.
// 3.bitwise-"and"-operator( "&"), as yeh operator datas k bits pe "and"-operation krta hai and uss operation k result ko return kr deta hai, as but yeh uss operation ko by-addressly-nhi krta .(by addressly toh single-operand-operators krtehh hai.)
// 4.bitwise-"or"-operator ("|") , yeh operator data k bits pe "or"-operation krta hai mtlb bits ka operation krta hai as like this:   0101
//                              or 1010
//                          ans=   1101

//💲🍕 3. Bit-merging and Bit-Masking 🍕💲
// 👍Mergin:- "Setting" the bit is known as merging. (it is done as follow a = a|b )
// as yeh setting the bit mtlb ki byte meh present bits ko set krna, jaise mtlb kisi byte meh yeh bits hai:- 0010110 , thus toh apnko yaha 3rd-place mtlb 2nd-index(where in bits index-is-taken from right) pe 1 ki jagah 0 set krna hai. thus toh yeh kaam apn "merging"(bit-merging) se kr sktehh hai. as mtlb apn simply ek sametype of data lenge jiske bytes meh 3rd-bit pe sirf "1" ho and baki sab "0" ho (notice-point ki apn yeh wala kaam mtlb ki sirf 3rd-bit pe 1 hona chahiyeh as like that apn kr sktehh hai.) lena hai, and then phir uss dono data ka "bitwise-Oring" kr deni hai mtlb unka "bitwise-or" -operation kr dena hai , and simply uss result ko actual-variable meh store kr lena hai.

// as like this eg:-
//   set1 = 001100101    // setting the bit-value-at- 3rd-index by programmatically not by our-eye.
// now taking set2 with 3rd-index with bit-value '1' and other all are '0'
//   set2 =  00001000
// now performing "bit-&"-operation:-
// or("|")= 001101101
// okay value is setting so store this result in actual-variable in which we want to make change in it.

// 👍Masking:- "checking" the bit that it is on or off is called as masking. (it is done as follow:- a&b == true then it means the bit is 1 or else it 0) , mtlb ki jaise apne pass set-of-bits hai and apnko yeh check krna hai 3rd-index pe bit ki value kya hai, mtlb voh '0' hai ya '1' hai. as yeh kaam apn esseh tarah krenge ki apn sbse phle ek set-of-bits lenge jismeh 3rd-index pe value '1'-bit ho and baki sab bit '0' ho. and phir apnko simply unn set-of-bits ka "&"-operation kr dena hai. and simply uss operation ka result dekhna hai ki voh agr greater-than-1 hai then mtlb ki voh 3rd-index-bit-ki-value 1 hai , or phir otherwise voh bit ki-value "0" hai.
// as like this eg:-
//   set1 = 001101101    // finding the bit-value-at- 3rd-index by programmatically not by our-eye.
// now taking set2 with 3rd-index with bit-value '1' and other all are '0'
//   set2 = 00001000
// now performing "bit-&"-operation:-
//      & = 00000000
// the result-binary-code's data-value is = "zero" that means ki the bit-value at 3rd-index is '0'. as otherwise for any other-value it will '1'.

//💲🍕 4.Tarika of Method for finding-the-Duplicates using "bits" 🍕💲
//📔📔Note-point for this Method is that:- ki ess method3- finding-duplicates-in-strings-using-bits-method meh apn sirf duplicate-characters find kr payenge as unki frequency nhi jaan payenge. Mtlb sirf yeh jaan payenge ki konse-konse characters repeat ho rhe mtlb kin-kin k duplicates  hai..

// As sbse phle toh apnko simply ek array-of-bits lena hai of size 26(q ki pure 26-alfabets hotehh hai na). As array-of-bits apn kaise le sktehh hai, as 1-byte hota hai voh bhi actully meh array-of-8-bits hota hai and jaise apna "int" hota hai voh array-of-4-bytes hota hai mtlb voh actually array-of-4*8 mtlb array-of-32-bits hota hai, and same like others jaise float is array-of-6-bytes and..etc..etc same like this. Thus toh mtlb agr apnko array-bits-lena hai mtlb kitne-size-ka-array-of-bits lena uske accordiny apko voh accordingly voh type-of-data-container choose kr lena hai, as voh container actully meh array-of-bits hi hoteh hai.

// As toh apnko 26-bits chahiyeh mtlb array-of-26-bits-chahiyehh, toh mtlb apn "int-container" lenge as q ki voh array-of-32-bits hai isiliy. And taking the array-of-bits now apnko simply given-string ko scan krna hai, as per the character-of-string apnko bit-array meh uss index-pe 1- mark krna hai mtlb vaha 1-set krna(as toh eske liyeh "merging" lagegi.) But phle apnko uss index k liyeh check krna hai ki ya phle se "1" hai kya as agr "1" toh mtlb apn dusri-baar uss index ko change krna chaa rhe hai mtlb voh element-repeat huaa hai mtlb uss element ka duplicate present thus phir toh apn simply message krdenge ki this element's-duplicate-is-present (note:- as "1" checking k liyeh "maskin" lagegi). And as otherwise voh "zero" hai after-checking then apn simply usko "1" krdenge.. and apni process continue krenege upto reaching at last-elemnt of string.

// 🔗 see pic1 🔗

void Duplicates(char str[])
{
    int H = 0, x;
    for (int i = 0; str[i] != '\0'; i++)
    {
        x = 1;
        x = x << (str[i] - 97);
        if (x & H)
        {
            cout << str[i] << " 's duplicate is present or its duplicates are present" << endl;
        }
        else
        {

            H = x | H;
        }
    }
}
int xx(int a)
{
    return 21;
}
int main()
{
    char str[] = "hello brother";
    Duplicates(str);
    // int a = 10, b = 100;
    // // a + b;
    // xx(10);

    return 0;
}