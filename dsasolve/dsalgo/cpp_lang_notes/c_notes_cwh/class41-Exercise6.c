//Exercise6: Making Html-Parser;
// parser simply uss software ya Program ko khteh hai jo ki ek langugage-code-Syntax ko hata deta hai mtlb sirf uske content ko retrieve kr leta hai . ya dusri-language code meh convert krdeta hai with usske content ko same rkteh huyeh mtlb sirf-syntax ko change kr deta hai. jaise: html-Parser , html to xml Parser and many others. as jaise Google-browser bhi ek html-parser hi hai, jo html-code ko as a input leta hai and in the return uska as accordinlgy content show krta hai , mtlb yeh voh sare html-tags , symbol , syntax etc  ko remove krke sirf uske andar ka content deta hai. jaise: <h1> this is heading </h1> , thus toh mtlb agr yeh parser ko as a input meh di jati hai then yeh parser in the return sirf eska content dega mtlb yeh parser sirf "this is heading" return krega.

// Exercise6:
// que: so exercise meh apnko simply ek simple Parser banana hai jo ki input meh ek html-code(heading-element) leta hai and phir return meh uss h1-tag-html-code k content ko return krta hai.
// answer or solution:
// take html-code as a input, and give the content of that html-code.

#include <stdio.h>
#include <string.h>
int m, n;
void html_parser(char p1_htmlcode[50])
{
    // Actual-Code:
    printf("Processing... please wait \n ");

    // printf(" %d ");

    for (int i = 0; i <= 5; i++)
    {
        if (p1_htmlcode[i] == '>')
        {

            n = i;
            break;
        }
    }
    for (int i = n; i <= 50; i++)
    {
        if (p1_htmlcode[i] == '<' || p1_htmlcode[i] == '/')
        {
            m = i;
            break;
        }
    }
    for (int i = n + 1; i <= m - 1; i++)
    {
        printf("%c", p1_htmlcode[i]);
    }

    // Baby-Code: first-time-code.
    // // printf("%c", p1_htmlcode[6]);
    // int i;
    // int j;

    // for (i = 0 ; i <50; i++) {
    //     // printf("%c ", p1_htmlcode[i]);

    //     char null_character = p1_htmlcode[i];
    //     // note: as yaha yeh i ek local-variable hai as yeh ek Block-meh define huaa hai mtlb yaha toh loop-block meh define huaa hai, thus toh yeh sirf ess loop-block tk hi valid hai, mtlb eska use apn ess loop-block k bahar even ess function meh nhi kr skteh hai , and as agr krteh then IDE anpko phle error show krdegi. as bcoz jab programm chalega then ek baar loop end hone k baad toh yeh i-container toh vanish hojayega. thus eska use phir aage kaise ho skta hai.

    //     if (null_character  == '/') {
    //         j = i;
    //         goto fori;

    //     }
    //     printf(" at %d the null_character is %c \n ", i, null_character);

    // // break;
    // }
    // fori:

    // for (int m = 5; m <= 50; m++)
    // {
    //     printf("%c", p1_htmlcode[m]);
    //     char bb = p1_htmlcode[m];
    //     if ( bb == '/')
    //     {

    //         goto fori;
    //     }
    // }

    // i = 5;   // eska use apn nhi kr skteh hai bcoz yeh upar loop-block meh define huaa hai toh mtlb apn sirf uss loop-block meh hi eska use kr skteh hai.

    // fori:
    //  break;
    // printf("okay done.");
    // char arriim[];
    // strcpy(p1_htmlcode[50],);
    //  = ;
    // printf("%d", sizeof(arriim)); // p1_htmlcode[] =

    // printf("\n okay done this is your content"); // p1_htmlcode[] =
}

int main()
{
    int i = 0;
    while (i < 100)
    {

        char ht_code[50];
        printf("\n ");
        printf("Input some html-code \n ");
        gets(ht_code);

        // int a = sizeof(html_code);
        // printf("%d", a);

        html_parser(ht_code);
        // printf(" the html-code \n ");
    }

    return 0;
}

// note-point: Signed-container mtlb voh container jaha stroing-value ka sign matter krta hai ,mtlb ess container meh koi bhi -ive , 0 and +ive value store kari ja skti hai. and Unsigned-container mtlb jaha sign ka koi role nhi hai mtlb ess container meh sirf 0 and +ive values hi store ki ja skti hai , thus toh apn phle specify krteh hai ki yeh Container: unsigned hai ya signed hai. and unsigned-container k liyeh apnko jaruri nhi hai ki apn useh phle specify kre.
