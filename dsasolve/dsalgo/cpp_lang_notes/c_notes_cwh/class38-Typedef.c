// now YAHA pe apn Typedef k bareh meh dekhenge:
// simply boleh
// Typedef simply ek function-and-keyword hai jisse apn C-programming k reserve keywords( jaise return , include , datatype-containers like: int , float  , structures , Unions etc) ko "alias" mtlb alternative-name de skteh hai. jaise: apn int-keyword ko integer-keyword bhi bana skteh hai , and many more jis keyword ko apn ko koi Alias dena chahteh hai, then voh apn ess "Tyepdef" se de skteh hai.
// and typedef ka main and most Structure-name-keyword ko alias-naame dene k liyeh hota hai bcoz mostly structure-name-keyword thoda bada hota hai. like : struct "strucute_for_employ" etc..etc.. 

// 🎆 now apn yeh dekhenge ki kis tarah apn Typedef-keyword se reserve-keywords ko Alias de skteh hai mtlb apn Typdef-use krne ka syntax dekhenge:
//      typedef actual-keyword-name alias-name;    // thus now aab apn ess actual-keyword ki jagah yeh provided alias-name bhi use krteh hai then vaha yeh alias-name vahi kaam karega jo esska actual-keyword krta hai.

#include<stdio.h>
#include<string.h>
int main()
{
    typedef int intiger;
    int a = 50;
    
    intiger b = 32;
     printf("%d", b);

    // typedef a aee;  note-point: as apn kisi Identifier(mtlb name) ko typedef se koi alias-name nhi de skteh hai.

    struct employ_info{
        char name_employ[20];
        int id_employ;
        long phone_number_employ;
    };

    typedef struct employ_info std;

    std s1, s2 ,s3;

    s1.id_employ = 32;
    s1.phone_number_employ = 78779658;
    strcpy(s1.name_employ , "aju and harry bhai");

    s2.id_employ = 32;
    strcpy(s2.name_employ, "harry bro");

    printf( " the s2.id is %d \n", s2.id_employ);
    printf( " the s1.phone_number is %d  \n", s1.phone_number_employ);
    printf( " the s2.name  is %s \n", s2.name_employ);

    // and apn structure ko typedef ese bhi kr skteh hai. mtlb structure banateh-time hi apn usko alias-name de skteh hai ess tarah:

    typedef struct employ_info_structure{
        char name_employ[20];
        int id_employ;
        long phone_number_employ;
    } st;
    
    st st1, st2;
    st1.id_employ = 898;
    st2.phone_number_employ = 88779747;

    printf( " the st2.id is %d \n", st2.id_employ);
    printf( " the st1.phone_number is %d  \n", st2.phone_number_employ);
    


   
    return 0;
}



// Typedef keyword se apn kisi container-k-type-name ko ek orr naam bhi de skteh hai mtlb. Jaise: int ko apn it naam typedef se dekar phir apn int ki jagah it bhi use kr skteh. Thus toh simply mtlb hai ki apn keyword-name ko change kr skteh hai typedef se.


