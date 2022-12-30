// Exercise-7:
// Create a Structure and then take the input from the user as their name , license-id-no , work-experience , route-name and store it them in the Structure jo apn ne banaya hai.
// as apna program n no.of-drivers se input lena chahiyeh. asking them ki driver-1 app apni details fill karo , etc..etc..
// atlast meh sbhi drivers ki details show bhi krvani hai in fashing.
#include <stdio.h>
#include <string.h>
struct Mybus_driversinfos
{
    char name[30];
    int lic_no;
    int experience;
    char route[30];
} d1[20];
// } d1[20], d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
// struct Mybus_driversinfos strt_array[] = {d1 , d2 , d3 , d4 , d5 , d6 , d7 , d8 , d9 , d10 , d11};
void runi()
{

    for (int i = 0; i < 20; i++)
    {

        printf("Driver-%d plz enter your Details \n ", i);
    // printf("Driver-%d plz enter your Details \n " ,i );
    printf("Your name: \t");
    gets(d1[i].name);

    
    printf("Your route name: \t");
    gets(d1[i].route);

    printf("Your license no:");
    scanf("%d", &d1[i].lic_no);
    // printf("hi hello");

    printf("Your Years of Experience:");
    scanf("%d", &d1[i].experience);

    // printf("\n ");aju

    // gets(d1.name);
    }
};

int main()
{
    printf("Welcome to Mybus\n");
    // struct Mybus_driversinfos array[3] = { struct Mybus_driversinfos d1, struct Mybus_driversinfos d2 , struct Mybus_driversinfos d3 };
    // for(int i = 0 ; i <= 20 ; i++){}
    runi();

    // printf("\n");
    // printf("\n");

    for (int i = 0; i < 20; i++)
    {

        printf("Okay thank for Submitting Your Details \n ");
        printf(" driver-name: %s \n ", d1[i].name);
        printf(" driver-license_no: %d \n ", d1[i].lic_no);
        printf(" driver-Years of Experience: %d \n ", d1[i].experience);
        printf(" driver-route_name: %s \n ", d1[i].route);
    }

    return 0;
}