// Link: https://www.hackerrank.com/challenges/30-data-types/problem
#include <iostream>
#include <iomanip>
#include <string>
// #include <limits>
using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int in;
    double db;
    string str;
    cin >> in >> db;
    //cin >> in >> db >> st; // as full-string ko input se read(mtlb lene) k liyeh apnko getline()-fn ka use krna hota hai.
    // getline(cin, str);
    cin.ignore(); // as apnko yeh cin and getline() k bich meh yeh cin.ignore()-fn use krna hi hota hai. as otherwise phir apna yeh getline()-fn kaam nhi krta hai,
                  // visit this stack0verflow-Link : https://stackoverflow.com/questions/6649852/getline-not-working-properly-what-could-be-the-reasons
    // or visit: https://www.geeksforgeeks.org/getline-string-c/

    //   end-of-line-character and newline-character ek hi hai.
    getline(cin, str);
    cout << endl
         << i + in << endl;
    // cout << fixed;  // as precision set krne k liyeh apnko yeh esseh krna hota hai.
    // visit stackoverflow for this : https://stackoverflow.com/questions/5907031/printing-the-correct-number-of-decimal-points-with-cout
    cout << fixed << setprecision(1);
    cout << d + db << endl;
    cout << s + str << endl;

    return 0;
}