#include<stdio.h>

// YAHA pe apn Strings k bareh meh dekhenge:
/*// simply boleh toh String ek Sentance ya ek Paragraph hi hota hai, thus toh mtlb sentance ya paragraph ko Programming meh fancy tarike se String bola jata hai.

// Now as simply apn phle boleh toh that "C-programming meh string datatype nhi hota". mltb apn directly string-datatype-keyword laga k usmeh koi String store nhi kr skteh hai.
// as thus toh eska mtlb apn kisi ka naam, koi sentences ya phir koi paragraphs store nhi kr skteh and yeh sab toh kafi important hai , needy hai toh phir thus C-Programming meh Strings ko define(mtlb declare and initialize) ess tarah kiya jata hai. 
// C-Programming meh String ko define "char Array" bana kr ke and usmeh \0(Null-Character) ka use krke define kiya jata hai. and yaha pe Null-character compiler ko yeh bata hai ki yeh ya executing-cursor jb null-character ko dekhega then yeh pata chal jayega ki yeh ek String hai and yeh String yaha pe khatam ho rhi hai, thus isiliy apn Null-character ka use krteh hai takki apn bata sake compiler ko ki yeh ek String hai and String itne tk hi hai. thus toh agr apn Null-character ka use nhi krteh then then compiler ko yeh pata nhi chalega ki yeh koi String hai, and phir voh simply essko as a char-Array-element ki tarah hi treat krega mtlb voh phir String nhi hogi. thus isiliy Null-character lagana important hai yeh batane ne liyeh ki yeh String hai, thus apn simply Null-character ka use krke String bana lete hai.

// Now as like jaise: apnko "harry" String store krni hai then apn simply ek char-Array banayenge and usmeh Null-character ka use krke needed String bana lenge. as like this: 
//              char str_array[6] = {'h','a','r','r','y','\0'}      where yaha pe \0 is a null-Character.
// or           char str_array[] = {'h','a','r','r','y','\0'}
//  or          char str_array[21] = {'h','a','r','r','y','\0'}    as bcoz apn ne yaha pe Null-character ka use kr liya hai then mtlb yeh clear hai ki yeh koi String hi hai and yeh String ess NUll-character tk hi hai, thus toh yaha koi farak nhi pdta ki Null-character aage kya hai, thus esiliy apn phir Array-size bhi matter nhi krti.

//            char str_array[5] = {'h','a','r','r','y','\0'}  as yaha pe yeh galat-hai bcoz apnko Array-ki-size as according to String-size se set krni hoti hai mtlb apnko kaam se kaam Array-size String-size+1 toh krni hi hoti hai as bcoz last meh apnko Null-Character bhi daalna hota hai toh apn phir janteh hi hai.    

// #Tip-point:
C-programming meh:---
//                      {'h','a','r','r','y','\0'}   = is same as = "harry"    and vice-versa hota hai.
// as bcoz jb bhi apn ese "harry" likhteh hai then apne aap yeh esmeh {'h','a','r','r','y','\0'} convert ho jata hai ya apn ese bol skteh hai compiler essko "harry" ko ese {'h','a','r','r','y','\0'} read krta hai.thus toh apn aab se ese hi likhenge takki apni program-building fast ho and easy understable ho. Thus toh phir hamesa apn ese hi likhenge hai.. jaise:
//                char str_array[] = "harry";



// #Taking String as a user-input:
// stdio.h meh gets()-fn se apn user se String as a input lete hai. as like this:
// gets( char-array-name );

// #Printing String:
// now agr apnko String ko Print krna hai, then yeh apn 2-ways se kr skteh hai:
//      1.printf("%s", char-array-name-mtlb-string-name);
// aliter(mtlb ek dusra tarika)     2.puts( string-name-mtlb-char-array-name );

illustration:
Stdio.h meh gets()-fn hota hai jo ki user input leta hai in form of string..mtlb user se string-input leta hai and phir yeh uss inputed-string ko uske ek ek characters ko respective array meh atlast null-character l saat store kr deta hai...
*/
void stringprintingfn( char p1[]){
     int i = 0;
     while(p1[i]!='\0'){
            printf("%c",p1[i]);
            i++;
     };
};
int main()
{
    char stringi[] = { 'a','j','a','j',' ','j','a','n','g','d','d','\0',};

    // aliter-method:
    char string2[] = "aju jangid";
    stringprintingfn(stringi);

    char user__name[34];
    printf(" \n enter your name here plz\n");
    gets(user__name);
    printf("\nyour name is %s \n ",user__name );
    stringprintingfn(user__name);
    puts(user__name);
    
    // 🔥note-point: apn Scanf()-fn se bhi String as a input le skteh hai but vaha pe apn white-spaces bhi le skteh . isiliy puri actual string lene k liyeh apn simply gets()-fn ka use krteh hai ya apne khud banayeh huyeh function ko use krteh hai.
    // note-point: apn kisi function k andar koi function nhi likh skteh , but apn function k andar function ko call jarur kr skteh hai.
    return 0;
}

// Thus toh apn ese bol skteh hai c-programming meh phle string datatype pe ese kuch focus nhi kiya gaya hoga and phir char-array and usmeh null-character ki madad ess baat ko full-fill kr diya hai..


/* Defination in C::
1.String: it is array of characters terminated by Null-character.
*/

