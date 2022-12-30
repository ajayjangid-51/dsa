// p9:
// 🎆
// link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?h_r=next-challenge&h_v=zen 🎆

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(string p1str)
{
    stringstream obj1(p1str);
    char coma;
    int a, b, c;
    obj1 >> a >> coma >> b >> coma >> c;
    vector<int> vc;
    // vc.push_back(a, b, c);
    vc.push_back(a);
    vc.push_back(b);
    vc.push_back(c);
    return vc;
}
int main()
{
    string stringi;
    // getline(cin, stringi);
    cin >> stringi;
    vector<int> integers = parseInts(stringi);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}