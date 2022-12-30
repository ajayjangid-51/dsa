// NOW YAHA pe apn String-functions k bareh meh dekhenge:
// note-point: sare k sare String-functions string.h -file hai. mtlb yeh String.h -file meh String dedicated functions hi likhe huyeh hai.

// 🔥 Library: simply boleh Library is a collection of many different-different functions jaise: apni C-programming k liyeh Stdio.h library hai , String.h library and many more etc.etc..

// Some-String-Functions: mtlb voh Functions jinseh apn Strings pe kuch kaam kr skteh hai.
/*  1.strcat( string1 , string2 )  (yeh function inputed Strings ko concatenate krta hai mtlb dono strings ko jod deta hai as mtlb String1 meh string2 judd jati hai. mtlb aabb string1 ki value update jayegi and usmeh yeh string2 add huee hogi.)
    2.strlen( string or string-name) (yeh function String ki lenght calculate krta hai and phir calculated-lenght ko return krta hai.)
    3.strrev( string or string-name) (yeh function String ko reverse mltb ulti kr deta hai.)
    4.strcpy( string1 , string2) ( yeh function inputed 2nd-string ko 1st-string meh copy kr deta hai mtlb 1st-string-content ko 2nd-string-content se replace kr dega.)
    5.strcmp( s1 , s2 ) (yeh function 2 strings s1 and s2  ko compare krta hai mtlb jb enn Strings meh phle character-unmatch hoga then voh uski "ASCII"-value ka difference denge and agr dono strings fuly match ho gayi then it will return 0 )
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char string1[] = "aju jangid";
    char string2[] = "harry bhai";

    // char concinated_string[] = strcat(string1 , string2);
    // as yeh apn ese store nhi kr skteh hai bcoz yeh strcat()-fn jo apnko return value dega voh actually pure string hogi mtlb voh double-quotes("") meh nhi hogi thus toh phir ese kisi char-array meh store krna toh galat hai na.
    // printf(concinated_string);
    // but yeh kaam ese jarur kr skteh hai: see line:

    puts(strcat(string1, string2));
    // this means ki String1 meh String2 catinated ho gayi hai and now aab string1 ki value string1+string2 hai.

    // puts(strlen(string1));
    // int a = strlen(string1);
    printf("the length of string1 is %d \n", strlen(string1));

    printf("the reverse string1 is :\n");
    puts(strrev(string1));

    strcpy(string1, string2);
    printf("now in string1 the string2 is copied mtlb string1 k content ko string2 k content ko replace kr diya gaya hai by strcpy()-fn is :\n");
    puts(string1);

    char str3[32];
    // str3 = strcat(string1 , string2);
    strcpy(str3 ,strcat(string1 , string2));
    puts(str3);

    printf("%d" , strcmp(string1 ,string2));


    char name1[40];
    char name2[40];

    printf("please enter your name");
    gets(name1);
    printf("please enter your friend name");
    gets(name2);
    strcat(name1 , " is the friend of ");
    puts(  strcat(name1, name2));



    return 0;
}

// question1:

