// YAHA pe apn Member-Functions(mtlb functions of Class) ki Nesting k bareh meh dekhenge: mtlb Nesting kya hoti hai and Nesting krne k kya fydee hoteh hai.
// Function-Nesting simply mtlb ki kisi function meh koi orr function ka use krna mtlb kisi koi function ko call krna.
//

/*Nesting of member function ka mtlb kisi member function meh kisi or member-function ko use krna. As essehi krne apn user se bohat kuch kaam ho raha hai voh chupa leteh and user shock ho jata hai ki yrr...yeh kaise ho raha hai, as esa bohat libraries k class-functions meh hota hai.*/
#include <iostream>
using namespace std;

class studentinfo_datatypeor_memorystructure
{
    // private: or essehi by-default class meh class-k-data private hoteh hai.
    int a, b, c = 21;
    int stdu_memfn1(int p1, const float p2 = 10)
    {
        cout << "the value of constant float-variable p2 is " << p2 << endl;
        a = p1 + 21;
        b = 100;
        cout << "the updated value of a is " << a << endl;
        cout << "the initial-value of b is " << b << endl;
        return 1000;
    }

public:
    int d, e = 88;
    int st_memfn2(int p1, int p2);
    // as yaha indent-wala concept Python ne c++ se hi liya hai .
};

int studentinfo_datatypeor_memorystructure::st_memfn2(int p1, int p2)
{
    stdu_memfn1(10);
    // as yeh nesting of function hoti hai mtlb function k andar kisi function ko call krna.
    cout << "good awesome one" << endl;
    return ++c;
}

int main()
{
    studentinfo_datatypeor_memorystructure gd_mestruc;
    gd_mestruc.st_memfn2(10, 3);
    return 0;
}