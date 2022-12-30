// YAHA pe apn Function and Function-Prototype k bareh meh dekhenge:
// 🌟 Function 🌟
// As Function simply ek Block-of-Code(chota , medium or bada kitna bhi ho skta hai) hota hai jisseh kabhi bhi , kahi bhi(mtlb in the file or out-of-its-defined-file) execute kiya ja skta hai, just by simply calling that Block-of-code(means Function), where execute karnae ka mtlb uss function meh jis kaam ka code likha huaa hai voh code execute hona mtlb voh kaam hona.

// As now Aab Function 2-types k hoteh hai:
// 1.input-taking Function
// 2.not-input-taking Function

// thus Now Function(mtlb ek "block-of-code(mtlb ek kaam)" jisseh kabhi bhi kahi bhi execute kiya ja skta hai with or without passing the arguments as per the function) ko C++ language-coding meh ess tarah  likhteh hai , banteh hai , define hai.

/* funtion's-returns-type-of-data function-name( parameter1-datatype param1-name , param2-datatype param2-name){ 
    work-box;
    return return-value-data;
}
*/
// 👿 📓:note-point: as C and Java language ki tarah apn C++ -language meh bhi kisi function k andar function-define nhi kr skteh hai. 😈 📓

// 🌟 Function-Prototyping: 🌟
// Function-prototype mtlb function-declared-statement , mtlb function-prototying mtlb function-declaration.
// as Thus Function-prototyping krne se apn function ko phir baad meh kahi bhi intialize kr skteh hai. as agr apn function-prototyping kare bina defined-function ko out-of-scope use krteh hai then vaha pe phir apnko error milta skta hai. thus agr apn function ki prototyping kr de main()-fn k phle then phir apn apne function ko kahi bhi initialize kr skteh hai and kahi usseh phir use kr skteh hai. as but intialization k time apnko function ko as pura define hi krna padega.
// thus toh Function-prototyping simply function-declaration hi hota hai. as like this:
// int fn2(int a, char b);  or prototyping-meh apnko simply paramters-ka sirf datatype likhna hota hai.
// int fn2(int, char);

// 📓 AS function-prototype mtlb declaration of function hi hota hai and , as function-declaration mtlb function-prototype se apnko functino k bareh kuch bateh pata chal jati hai ki jaise function ki return-value kya hai , function-ka-naam-kya hai , function k paramters kitne and kaise hai mtlb koi kuch default-parameters hai or koi kuch const-paramters hai.

// 🌟 Formal-Paramters(or local values) and Actual-Paramters 🌟
// Foraml-parameters voh data-values hoti hai jo ki
// as Actual-parameters voh hoti hai jo function meh as a argument input ki jati hai. and yeh Actual-paramters-data function meh as a parameter pass hoke formal-paramter meh convert ho jateh hai , thus phir enn function meh formal-paramters ko change krne se voh function k bahar wali values(mtlb  actual-paramter w.r.t function) change nhi hoti hai. thus har data function ki respect meh Actual-paramter hota hai and ek baar voh data-value function meh pass hone k baad as a formal-paramter ban jata hai mtlb uss data ki copy-ban jati and voh copy phir uss function meh as a paramter pass hoti hai and uss uss Actual-paramter ki copy ko formal-parameter bola jata hai.
// AS Simply mtlb ki function meh passed-arguments ki copy jati hai mtlb actual-arguments nhi jateh hai , isiliy hi function meh parameters-pe-changement se koi function actual-paramters se koi changement nhi hota.

// 📓📓 👿 thus now agr apnko Actual-paramters ko bhi change or update krna hai then uskeliy apnko call-by-refernce-concept ka use krna hota hai. as yeh Concept apn class16 meh dekhenge.  📓📓 👿
#include <iostream>
#include <cstdio>
using namespace std;

int fn2(int a, char b);
void print(char str[]);

int fn1(int p1, float p2)
{
    int c = p1 + p2;
    return c;
}

int main()
{
    printf("helllo bros");
    // int num1, num2;
    float num1, num2;
    float &nu1 = num1, &nu2 = num2;

    cout << "Enter the value of num1" << endl;
    cin >> num1;
    cout << "Enter the value of num2" << endl;
    cin >> num2;

    cout << "so the sum of num1 and num2 is " << fn1(num1, num2) << endl;
    // 📓note-point: As Functions meh phle inputed-argument ko uske paramter k specified datatype meh phle convert krta hai and then phir uss arguments ko aage access krta hai, and as agr inputed-argument agr somewhat bcoz of any our-mistake paramter-datatype meh convert nhi hota hai then toh phir apnko error mil skti hai.
    // 📓note-point2: As apn janteh hi hai ki programming meh function-call ki jagah uski return-value hi hoti hai , as yeh baat apnko dhyn meh rkhni hoti hai as yeh kafi kaam ki baat hai.
    // cout << "so the sum of num1 and num2 is " << fn1(num1, num2) << endl;
    char fee[] = "hello brother";
    // 👿👿 as char-array mtlb String meh "array" ka case alag hota hai,mtlb thoda alag tarah ka behaivor hota hai.toh baat apnko dhyn meh rkhni hai, bcoz esseh apnko kabhi confuse ho skteh hai.
    int inarr[] = {1, 42, 3, 2, 82};

    print("ehhlo");
    cout << endl
         << fee << endl;
    cout << inarr << endl;

    //  as apn array-name meh koi pointer-meh assign krteh hai then vaha phir yeh as pointer ki tarah hi behave krta hai.

    char *arri = fee;
    cout << "the arri value is " << arri << endl;
    cout << *(arri) << endl;

    // print(fee);

    return 0;
}
void print(char stri[])
{
    cout << stri;
}

int fn2(int a, char b)
{
    int c = a + 10;
    return 32;
}

// void print(char[20] string)
// {
//     cout << string;
// }

// top-down-structured-programming means simply making Sequence-structured-program is simply known as top-down-structured-programming.
// and Object-Oriented-programming
