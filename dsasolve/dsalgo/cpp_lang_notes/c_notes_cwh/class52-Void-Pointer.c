// YAHA pe apn Void-Pointer k bareh meh dekhenge: (mastering in Pointer )

// void-pointer mtlb yeh kisi Void-container ka address store krega ya kr rha hoga.
// thus void-pointer voh pointer hai jiska koi datatype nhi hota mtlb yeh nhi pata ki yeh konse-type-k-container ka address store kr rha hai. as jaise ki int pointer mtlb yeh hai ki yeh kisi int-container ka address store kr rha hai mltb kisi int-container ko point kr rha hai. 
// but as apn jab chahe tab ess pointer ko kisi bhi data-type meh typecast kr skteh hai.
// thus toh apn ase bol skteh hai ki Void-pointer ka use tb hota hai jb apnko pata nhi hai ki yeh ya ess container meh konsa data store hoga ya hone wala hai, and yeh wali cheez tab hoti jab apn dynamically-memory allocate krteh hai tb jo memory-container allocate hota hai toh voh void-container allocate hota hai. then phir eseh condition meh Void-pointer ka use krteh voh functions ess void-Container ko point kra deteh hai. thus toh Void-pointer ka datatype toh apn baad meh kisi bhi datatype meh typecast kr skteh hai.

// thus esse general purpose pointer bhi kaha jata hai , mtlb jaise agr apnko kahi kabhi kuch nhi pata ho ki apn ess pointer meh konse datatype-container ka use krenge vaha uss condition meh jldi se Void-Pointer bana lete hai bcoz apn baad meh esko typecast kr skteh hai.

// typecasting ka mtlb kisi bhi container-type ko dusre type meh convert krna.
// as Container bhi apne andar aane wale data k according different types k hoteh hai: jaise int-container , float-container , long-container etc..etc..
// and apn typecating Derefercing k time hi krteh hai.



// Use of Void-pointer:
//  1. malloc and calloc function se apn memory request krteh hai heap se and jab apn heap-memory-request krteh enn functions se thus enn functions ki return value ek void-pointer hi hoti hai. thus essliy apn phir ess void-pointer ko required data-type-container meh typecast krteh hai.and orr acche se boleh toh Dynamic-memory allocation meh dynamic-memory-Functions jaise malloc() and calloc() return meh pointer dete hai mtlb enhone jo Container allocate kiya hai uss container ka address yeh function return krteh hai as in form of pointer(voh toh apnko pata hi hai ki address toh pointer meh hi store hoteh hai). thus toh jo container enhone allocate kiya hai uss container-ka-datatype specific nhi hai, mtlb thus toh jo pointer enhone return kiya hai voh Void-pointer hi hota hai as bcoz enn functions ko nhi pata hai na ki jo container apn allocate kr rhe hai usmeh konsa data store hoga, thus toh yeh mtlb yeh void-container allocate kr dete hai and in the return apnnko yeh uss Void-container k liyeh ek pointer deta hai ,and as ki voh Pointer Void-pointer hi hoga, thus toh apn fir ess return Void-pointer meh typecating krke as according to us ess Pointer-k-pointing-container meh koi bhi data assign kr skteh hai. as bcoz eska toh phir kahi bhi kabhi bhi typecasting ho skti hai.
// thus Void-pointer voh pointer hota hai jo kisi Void-Container ka address store krta hai ya Void-container ko point krta hai.

// as Void-container voh container hota hai jismeh apn koi sa bhi data daal skteh hai ek baar typecating krne k baad, but ess container k liyeh apn ek pointer bana teh hai and as voh pointer toh Void-pointer hi hota hai, thus toh apn phir void-pointer se ess container meh koi data assign kr skteh hai.

// allocate krna mtlb kisi badi jagah meh koi choti jagah locate krna, Reserve krna ya point krnas.
 

// note-points: 
// 1. apn bina Void-pointer ko bina typecating kiye bina esko dereference nhi kr skteh hai, mtlb ess void pointer meh address ko kabhi bhi assign kr skteh hai , but jb apnko derefercing krni ho then vaha tab apnko typecasting krni hoti hai.    
// 2. Void-pointers pe pointer-Arithematic nhi laga skteh. mtlb C-programming meh yeh allow nhi hai or supported nhi hai. bcoz yeh pata hi nhi hai na ki konsa datatype-container thus toh phir uske according orr container allocate honge. mtlb yeh ho skta hai but yeh recommended nhi hai.


// NOTE: apn Void-Pointers ka use krke powerfull C-programs likh  skteh hai mtlb bana skteh hai.

#include<stdio.h>
int main()
{
    int x =12;
    char c = 'i';

    
    void* pointer1;
    pointer1 = &x;
    // printf("the value of x is %d getting by derefercing the pointer",*pointer1);  
    // as bcoz apn Void-pointers ko directly derefrencing nhi kr skteh, thus toh apnko phle typecasting krni hoti hai.  thus aab se apn directly and jldi se hamesa Void-pointer hi banayenge jab kabhi bhi apnko addresess store krne ho tb.
    printf("the value of x is %d getting by derefercing the pointer\n",* ((int*)pointer1));
    pointer1 = &c;
    printf("the value of c is %c getting by derefercing the pointer\n",* ((char*)pointer1));
    return 0;
}


//  1.Dyanamic-memory Functions:
//         1. malloc()    and 2. calloc()   as yeh Dynamic-memory-function program-run-time pe memory allocate krteh hai,