// YAHA pe apn Control-Structures or program-Execution-Structure(mtlb execution-cursor ka flow ) , If-else-Conditionals and Switch-case k bareh meh dekhenge:

// Control-Structures:
// As Control-structure mtlb ek Structure(mtlb way , ek tarika , ek rasta) jiske program-exection-curssor chalta hai, mtlb jiske according program execute hota hai. and DAta-Structure ek alag cheez hai mtlb Data-Structure Data ko memory meh store krne k liyeh memory-Structure hota hai. and Algorithm mtlb ek acche , best tarika of making program by using best , appropiate DAta-Structure for data-storing. thus toh ek acche program meh ek accha , sahi Control-structure hona chahiyeh and phir accha algorithm hona chahiyeh mtlb acche Data-Structure hone chahiyeh. thus agr yeh sab hai toh apna program apne Idea k according fully-fleaged hai.

// NOw Control-Structures 3-types k hoteh hai:
/*  1.Sequence-Structure ( as Sequence-Sturcture meh program just line-by-line execute hota hai. as program by-default Sequence-structure k according hi execute hota hai.)
    2.Selection Structure (as Selection-Structure voh Structure hai jismeh Conditions hoti hai mltb phir Program Conditions k according execute hota hai, mtlb simply boleh toh ess structure meh program k two or more parts ho jateh hai and phir condition-pass hone k according program-part execute hota hai. as program meh Selection-structure daalne k liyeh apn if-else-conditional-block ka use krteh hai.)
    3.loop-Structure (as Loop-Sturcture meh ek condition hoti hai and uss condition-pass k according Program-ka-execution cyclicly hota hai mtlb program vapis re-run ho jata hai as per the applied-condition-passed. as program meh Loop-structure daalne k liyeh apn Loops-block ka use krteh hai.)
*/

// As Toh koi bhi Program enn 3-Structures k combination se hi banta hai. thus toh apnko enn Control-Structures ki samaj honi chahiyeh takki apn apne Program meh as needed execution-Sturucture use kr payeh , embed kr payeh. ko Code krpayeh.

// 🌟Thus toh now aab apn If-else-Conditionals and Switch-case-Conditionals dekhenge:
// 📓note-point: AS C++ coding meh If-else-conditionals , Switch-Case and Loops ka Concepts as like as C -language ki tarah deto same hi hai, mtlb actual-concept , memory-management-concept and syntax sab deto same hi hai as like C -language. thus toh apn directly-enko samaj and apply kr skteh hai.
// 🌟 If-else-Conditionals-Block:

#include <iostream>
using namespace std;

int main()
{
    int user_age; // ( 🔔notice: as hamesa local-variable use krna recommended hai q ki global-variable allover the runtime pe memory-occupy krke rkhteh hai ya unke liyeh occupied hoti hai. )
    cout << "Age checking program";
    cout << " Enter yout age:" << endl;
    cin >> user_age;

    // IF-Else-Conditionals:
    if (user_age > 18)
    // 🔔Tip: as aab apn enn "if"-conditions meh booleans and checking or logical-opeartors ka acche se use kr skteh hai. mtlb apn mastam-mastam cheeze kr skteh hai. and "if"-conditions meh most use hi enka hi hota hai. mtlb jinki bhi value true or false hoti hai unko hi apn "if"-condition meh use krteh hai.
    {
        cout << "okay your age is greater than 18"
             << "you are allowed" << endl;

        //  and many-more things in this if-Work-Box or toh even apna pura program ess "if" k Work-Box meh ho skta hai.
    }

    else if (user_age > 10)
    {
        cout << "your age is greater than 10";
    }
    else if (user_age < 10)
    {
        cout << "your age is less than 10";
    }
    // 📓note-point: As if-else-ladder meh sari "if-statement's following Conditions" check hoti hai. but agr upar phle koi bhi if-statment's condition true ho gayi toh phir baki niche wale if or else-conditions check nhi hoti hai, as mtlb sequence meh koi bhi firstly condition-true ho gayi then baki remaining niche wali if-conditions(mtlb if ko follow krne wali conditions) check nhi hogi, and as check nhi hogi toh mtlb if-work-box k execute hone k koi chances nhi hai. as yeh concept bhi same as C language se hi hai.
    else
    {
        cout << "your age is not less than 10 and not greater than 18"
             << "so we can't say nothing" << endl;
    }
    // else as apn ek if-else-Block meh multiple else use nhi kr skteh hai bcoz multiple-else use krne ka koi sense nhi hai na. isiliy apnko error hi milti hai.
    // {
    //     cout << "okay better luch next time";
    // }

    // Switch-case-Block:
    switch (user_age)
    // switch (variable or directly-value jispe apnko andar wale "cases" check krne hai)
    {
    case 10:
        // as yeh case-true hoga tabhhi yeh eska Work-Box execute hoga.
        cout << "your age is 10";
        break;
        // as yaha break ka concept bhi same deto as C-programming ki tarah hi hai, mtlb same vohi concept break-keyword ko dekh kr execting-cursor follow krta hai mtlb "break"-keyword ko dekh kr "executing-cursor" switch-case-Block or Loop-Block k bahar end meh jump kr jata hai.

        // continue;
        // and "continue"-keyword ko dekh kr "executing-cursor" direct loop-Block k starting pe jump kr skteh hai. thus toh mtlb loop-vapis se execute ho jata hai mtlb loop-condition vapis se check ho jati hai.
    case 11:
        cout << "your age is 11";
    case 12:
        cout << "your age is 12";
    case 13:
        cout << "your age is 13";
    default:
        cout << "sorry not match anything from our database";
    }

    // Note-point: as Switch-Case-cases meh sare cases check hoteh hai. and firstly koi bhi ek case agr "match(mtlb true)" ho gaya then baki remaining cases without-checking hi execute ho jateh hai.
    // as thus toh Switch-case-Block-approach ka use apn tab krteh hai jab apnko sirf equality k liyeh check krna hota hai. jaise var1 is equal to 2 ,3, 4, 5 etc... as q ki apn Switch-case-block k cases meh koi condition-nhi laga skteh hai, as bas sirf eqaulity hi laga skteh hai mtlb equality k liyeh hi check kr skteh hai.

    return 0;
}