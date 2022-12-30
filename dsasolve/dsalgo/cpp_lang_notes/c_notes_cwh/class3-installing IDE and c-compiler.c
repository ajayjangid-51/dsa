//  YAHA pe apn modern C-Compiler k bareh meh and uske related Tools k bareh meh dekhenge:

//  IDE: (integrated development environment)
//  COMPILER: mtlb voh software apne code ko samaj kr machine-ko-samjata hai mtlb machine ki functioning ko set krteh hai ya krvateh hai. or we can say that it converts the code into cpu-instructions phir jinse 0 and 1 current transister k through flow hota and current flow hone k basis alg alg cheezo ko identify kiya jata hai, and simply boley toh compiler .exe file banata hai apne code ki and uss .exe file yahi sare 0-1 current combination and puri cpu ki process store hoti hai mtlb cpu ko kya-kya krna hai simply voh store hota hai.

//  download vs code and mingw from microsoft-site(simply type c compiler in vs code)
//  now for setting-up the mingw, follow these steps:
/*  1.c>>program(*86)>>mingw-w64>>enter-into-the-folder(i686-8.1.0-posix-d)>>mingw32>>bin
    2. now copy this full path of bin-folder
    3. go-to-computer-properties>>advanced-system-setting>>environment-variables>>select-path>>edit>>new>>paste that-path.>>then ok to all windows.

    note: this is all bcoz ki jaise apnko terminal meh kisi bhi .exe file ko directly excess ya run krna hai then vaha pe we simply do this, thus apn phir uss .exe file ka simply terminal meh naam likh k usko directly run kr skteh hai.

    4. thus now we can run that particular(jiska path apn ne add kiya hai) .exe file in terminal simply by writing its name, and agr apn yeh kaam nhi krteh then phir apnko terminal enn .exe file ko run krne k liyeh har bar terminal meh enka full path dena pdta.
*/

//  now phir baad meh apn ek extension(intellisense for c/c++) install krenge: jo ki apnko code likhte-time apne code k liyeh suggstion provide kregi, and yahi ek sbse accha +plus point hai IDE ka,

#include <stdio.h>
//  c-language meh kisi bi cheez ko import #include-keyword se kiya jata hai, mtlb ess tarah se kisi cheez ko import kiya jata hai,

int main(int argc, char const *argv[])
{
    printf("hello ji");
    return 0;
}
// main(3,b);
//  yaha upar yeh "main" ek function hai jisko apn ne phle specify kiya hai ki eski return value ek integer hogi. and ess function ki input-parameters are koi agrc jo ek integer hai , char const argv[] jo ki koi character hai.
//  NOTE: as like as JAVA, C meh bhi apnko cheezo ko phle specify krna pdta hai. bs javascript meh apnko cheezo ko specify nhi krna hota hai mtlb voh simple and easy hai.
