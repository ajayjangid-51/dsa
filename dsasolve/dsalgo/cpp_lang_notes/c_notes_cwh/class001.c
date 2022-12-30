// note-point: Stack meh sbse phle main()-fn aata hai phir usmeh jo child-functions hai voh sb serial-wise call hoteh hai and phir Stack meh main-fn k ek-k-upar-ek serial-wise load hoteh hai.
// note: as sbse phle sbse bahar wala mtlb parent function call hota hai and then phir uske child-function call hoteh hai and then phir unke child-function call hoteh hai and soo..onnn . and phir in the return sbse-last child pura run hota hai and apni return-value apne parent-function ko deta , and thus phir voh parent-fun apne parent-fun ko apni return value deta ...and soo...onnn.
// 👿Program-working and memory-allocation:
// note-point: jab koi function call hota hai toh voh ek baar call hoke pause ho jata hai and wait krta hai jab tak eske child-function ki return na aajayeh tab tk.. and soo...on sbhi parent-and-child function ese hi krteh hai. and phir agr usmeh child-function hai toh voh child fun run hota hai and usmeh koi child-fn hota hai toh phir voh run hota ...and sooo...onn and phir last-function jab end mtlb value return krta hai , then uska parent-fn vapis se resume ho jata hai, and phir jab yeh function end ho jata hai mtlb yeh function apne parent-fn ko value return kr deta , then eskaa parent-vapis resume ho jata hai , and so this ....sooo...on upto jab main()-fn end na hojayeh. as jaise hi main()-fn end hoga, Program bhi vaha end hojayega.. thus yeh sari process hoti serial-wise mtlb control-cursor k according and memory-allocation k according kisi Program ko execute hota hai tab.
#include<stdio.h>
int func1(){

    return 34;
}
int main()
{
    printf("the return value of func1()-fn is  %d ",func1() );
    // thus yaha pe printf()-fn meh child-fn hai then mtlb yeh printf()-fn pause hoga and eske child-fn ko execute krayega mtlb child-fn func1()- execute hoga mtlb eske liyeh Stack-memory meh ek orr memory-allocate hoga and usmeh yeh child-fn func1()-load hoga mtlb int m, float n allocate honge and ek baar yeh func1()-fn end hone k baad voh newly allocated-memory vapis se disallocate hojayegi. 
    // 🎆 note-point: and yeh kahani same-way meh sabhi Functions pe lagu hoti hai. mtlb apnko visualize krna hai ki Stack meh yeh functions k liyeh ek k upar ek memory-part allocate and disallocate hoteh rhteh hai as accordingly function k execute hone and end hone pe.
    // note-point: Function alag se load hoteh hai, mtlb har function alag se load hoga mtlb Stack meh alag se memory-part meh load hoga.
    // then function end hone k baad ya apna kaam krdenge ya phir kaam krne k saat apne parent-fn ko apni return-value bhi return kr denge. mtlb parent do cheezo k liyeh wait krta mtlb 2 cheezo k liyeh pause hota hai first-one is ki:child-fn bas apna kaam krde ya phir mtlb second-one is ki: child-fn apna kaam krke koi value return krde.
    // thus now apnko yeh sab pata hai toh apn apni Algorithm ese ek dam acche se enko dhyan meh rkteh huyee likh skteh mtlb bana skteh hai.
    return 0;
}

// now toh actually hota kyah hai ki: jab apn run-button pe click krenge then, yeh apna program ram meh load hojayega. mtlb as accordingly ess program k parts apne respecitive memory-layout meh load hojayenge. and then phir sbse phle as accodingly Stack-part meh main()-fn execute hoga mtlb  as like thus yaha pe as we know ki c-program meh sbse phle main()-fn call hota hai, thus toh sbse phle main()-fn run hoga then eske child-fn serial-wise run honge mtlb yaha sbse phle printf()-fn run hoga , now yaha pe aab ess printf()-fn k child-fn run honge. mtlb aab func1()-fn hoga thus mtlb aab Stack meh ess func1() k liyeh memory-allocate hogi mtlb ess func1()-fn k container ess allocated-memory meh allocate honge and ess function ka sara kaam krne k baad yeh value return krdega ya nhi krega , as mtlb yeh function end hone k baad yeh uss Stack memory-part meh se apne aap disallocate hojayega. and then phir vapis se eska parent-fn resumen hojayega mtlb prinf()-fn resumen hojayega, and phir yeh printf()-fn apna kaam krke mtlb end hoke Stack-memory se apne aap hi disallocate hojayega. and then agr koi orr child-fn nhi hai then apna main()-fn value return krke end hojayega mtlb apna program end hojayega.
// 🎆 note-point: and yeh kahani same-way meh sabhi Functions pe lagu hoti hai. mtlb apnko visualize krna hai ki Stack meh yeh functions k liyeh ek k upar ek memory-part allocate and disallocate hoteh rhteh hai as accordingly function k execute hone and end hone pe.





// scope simply programm-execution-time ka ek chota time-period hota hai jismeh declared variable-container ko vapis se use kiya ja ske. thus mtlb yeh Scope declared variable-container k liyeh define hota hai. aab now alag-alag variable-containers ka alag-alag scope hota hai. jaise:
//  1.automatic-variable-container mtlb kisi Block meh declare huee variable: ka scope utna hi hota hai jitna uss Block ko end hone meh time- lagta hai. thus agr uss time-domain k bahar apn uss variable-container use krteh hai toh uska koi mtlb nhi as bcoz voh toh variable-container toh apne time-period k according toh vanish mtlb disallocate ho chuka hoga na.
// tip:  thus isiliy IDE apnko error show krti hai jb apn kisi Block meh declared variable ko Block k bahar use krteh hai bcoz jab program run hoga toh actually voh variable vaha hoga hi nhi , thus mtlb program yeh sochega ki esneh toh yeh variable ka use kr rkha hai pr esa koi variable toh hai hi nhi. thus toh voh error show kr dega ki appne koi error ki hai. thus toh IDE apnko phel hi bata deta hai and agr nhi batata toh error runtime compiler apnko batata.

// 2.External-variable ; mtlb global varible and yaha pe enheh External w.r.t Block bola gaya hai bcoz yeh Block k bahar define-declare hoteh hai.
//  3.Static-variable : static and global ek dam same hi hai but bas Static-variable apn kisi bhi Block-meh define-declare kr skteh hai. and Static-variable ki initial-default-value(mtlb agr explicitly mtlb alag se initialize nhi kiya gata ho uss value ko initial-default-value khteh hai. ) 0 hoti hai. and baki sab same mtlb scope and lifspan. and apn Static-variables ko vapis phir se uske declared Block k bahar initialize nhi kr skteh. mtlb apnko agr phir se initialize krna hai then apnko uske Block meh jake hi krna hoga.
// 4.Registered-variable: automatic and registered variable bhi same hi hai bas farak itna hai ki Registered-variable-container cpu-memory meh allocate hoteh hai.

// toh as mtlb yeh Variable-container apne Scope k according memory meh allocated rhteh hai.

// and these all 4 are also known "Storage Classes"
// Memory-management-Tip: apnko mostly Local variables ka hi use krna chahiyeh ,and kaam se kaam Global and Static-variable ka use krna chahiyeh.

// note-point: agr local-variable and global variable dono ka name same hota hai then vaha block meh accessing krne k time local-variable hi priority lega.

// note-point: jaise apn kisi function meh agrument-input pass krteh hai then voh agrument-input 2-type ka hota hai: 1. formal-argument , 2. informal-agrument 
// 1. as mtlb jb apn simply esseh hi koi variable as a agrument-input pass kr dete hai toh voh phir uss function k liyeh local-variable ki tarah kaam krta hai mtbl usmeh koi chagement kiya jayega then voh sirf uss function meh reflect hoga mtlb uss function-block k bahar reflect nhi hoga.
// 2. as agr agrument-input meh variable ka address pass kr diya jata hai then phir voh informal-agrument hota hai bcoz phir voh variable uss function k liyeh as like local-variable ki tarah kaam nhi karega as uss variable meh kiyeh gayeh changement sari sabhi inside and outside of function-block reflect honge .
// Formal-Arguments voh hoteh hai jo ki uss function k liyeh as locak variable ki tarah kaam krteh hai, mtlb usmeh jo bhi chanagement phir kiya jayega voh sirf us function meh reflect hoga mtlb uss function k bahar reflect nhi hoga. 
// inFormal-Argument mtlb jb apn kisi function meh kisi variable ka address-pass krvateh hai then as a local variale ki tarah kaam nhi krta bcoz changment function k bahar bhi reflect krta hai.




// as bcoz static-variable phle se hi allocate hoke initialize ho jateh hai thus isiley apn phir koi usmeh function ka nhi kr skteh, bcoz yeh phle se initialized hai and voh phir vapis se initialized nhi hota programm run hone k time.